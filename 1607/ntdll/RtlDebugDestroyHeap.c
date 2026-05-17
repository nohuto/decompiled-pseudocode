/*
 * XREFs of RtlDebugDestroyHeap @ 0x1800FA6D4
 * Callers:
 *     RtlDestroyHeap @ 0x180052060 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180019D84 (RtlpCheckHeapSignature.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DFC (RtlpSecMemFreeVirtualMemory.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     RtlpValidateHeap @ 0x180091244 (RtlpValidateHeap.c)
 */

char __fastcall RtlDebugDestroyHeap(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (void *)a1 == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", (const void *)a1);
    return 0;
  }
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlDestroyHeap") || !RtlpValidateHeap(a1, 0) )
    return 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( *(_QWORD *)(a1 + 216) )
  {
    v4 = 0LL;
    RtlpSecMemFreeVirtualMemory(v3, (_QWORD *)(a1 + 216), &v4, 0x8000LL);
  }
  return 1;
}
