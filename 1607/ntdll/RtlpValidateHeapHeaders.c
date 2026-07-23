/*
 * XREFs of RtlpValidateHeapHeaders @ 0x18005D2F0
 * Callers:
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800917C4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180091B50 (RtlDebugFreeHeap.c)
 *     RtlDebugCompactHeap @ 0x1800FA14C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateHeap @ 0x1800FA2A0 (RtlDebugCreateHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800FA590 (RtlDebugCreateTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemory @ 0x1800AA6B0 (RtlCompareMemory.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

char __fastcall RtlpValidateHeapHeaders(PVOID *Src, char a2)
{
  PVOID *v3; // rdi
  size_t v4; // r8
  SIZE_T v5; // rsi
  ULONG_PTR v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  ULONG_PTR v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !RtlpValidateHeapHdrsEnable )
    return 1;
  v3 = Src + 27;
  if ( Src[27] )
    goto LABEL_5;
  v10 = *((unsigned __int16 *)Src + 105);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3, 0LL, &v10, 0x1000u, 4u) < 0 )
    return 1;
  a2 = 1;
LABEL_5:
  v4 = *((unsigned __int16 *)Src + 105);
  v10 = v4;
  if ( a2 )
  {
    memmove(*v3, Src, v4);
    v6 = v10;
    v5 = v10;
  }
  else
  {
    v5 = RtlCompareMemory(Src, *v3, v4);
    v6 = v10;
  }
  if ( v6 == v5 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap %p - headers modified (%p is %lx instead of %lx)\n",
    Src,
    (char *)Src + v5,
    *(_DWORD *)((char *)Src + v5),
    *(_DWORD *)((char *)*v3 + v5));
  v7 = 0;
  if ( "Entry" )
  {
    v8 = 0LL;
    while ( v5 < *(unsigned int *)((char *)&RtlpHeapHeaderFieldOffsets + v8)
         || v5 >= *((unsigned int *)&RtlpHeapHeaderFieldOffsets + 4 * v7 + 4) )
    {
      v8 = 16LL * ++v7;
      if ( !*(_QWORD *)((char *)&RtlpHeapHeaderFieldOffsets + v8 + 8) )
        return 0;
    }
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "    This is located in the %s field of the heap header.\n",
      *((const char **)&RtlpHeapHeaderFieldOffsets + 2 * v7 + 1));
  }
  return 0;
}
