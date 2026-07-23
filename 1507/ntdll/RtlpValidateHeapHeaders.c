/*
 * XREFs of RtlpValidateHeapHeaders @ 0x1800EE040
 * Callers:
 *     RtlDebugAllocateHeap @ 0x1800EBDCC (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800EC190 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateHeap @ 0x1800EC2EC (RtlDebugCreateHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800EC5E0 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800EC7E4 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800ECDE8 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemory @ 0x180095EE0 (RtlCompareMemory.c)
 *     memmove @ 0x180098200 (memmove.c)
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
