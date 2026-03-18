/*
 * XREFs of MiIdentifyPfnWrapper @ 0x14000FBF0
 * Callers:
 *     MiGetWorkingSetInfoEx @ 0x14010F4B0 (MiGetWorkingSetInfoEx.c)
 *     MiLogAllocateWsleEvent @ 0x1401E28A4 (MiLogAllocateWsleEvent.c)
 *     PfpPfnPrioRequest @ 0x14041B450 (PfpPfnPrioRequest.c)
 *     MmIdentifyPhysicalMemory @ 0x140658E18 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x1406646F8 (MmRelocatePfnList.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14000FC90 (MiIdentifyPfn.c)
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0 );
  }
  MiIdentifyPfn(a1, a2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
