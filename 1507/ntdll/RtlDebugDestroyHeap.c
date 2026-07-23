/*
 * XREFs of RtlDebugDestroyHeap @ 0x1800EC724
 * Callers:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 */

char __fastcall RtlDebugDestroyHeap(PVOID *BaseAddress)
{
  __int64 v3; // rcx
  ULONG_PTR v4; // [rsp+30h] [rbp+8h] BYREF

  if ( BaseAddress == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", BaseAddress);
    return 0;
  }
  if ( !RtlpCheckHeapSignature(BaseAddress, "RtlDestroyHeap") || !(unsigned __int8)RtlpValidateHeap(BaseAddress) )
    return 0;
  *((_DWORD *)BaseAddress + 38) = 0;
  if ( BaseAddress[27] )
  {
    v4 = 0LL;
    RtlpSecMemFreeVirtualMemory(v3, BaseAddress + 27, &v4, 0x8000u);
  }
  return 1;
}
