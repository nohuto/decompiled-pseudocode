/*
 * XREFs of RtlDebugDestroyHeap @ 0x1800EF1BC
 * Callers:
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180052EB0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
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
  if ( !RtlpCheckHeapSignature(BaseAddress, "RtlDestroyHeap") || !RtlpValidateHeap(BaseAddress, 0) )
    return 0;
  *((_DWORD *)BaseAddress + 38) = 0;
  if ( BaseAddress[27] )
  {
    v4 = 0LL;
    RtlpSecMemFreeVirtualMemory(v3, BaseAddress + 27, &v4, 0x8000u);
  }
  return 1;
}
