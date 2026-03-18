/*
 * XREFs of MiIdentifyPfnWrapper @ 0x140050BC0
 * Callers:
 *     MiLogAllocateWsleEvent @ 0x1401D284C (MiLogAllocateWsleEvent.c)
 *     MiGetWorkingSetInfoEx @ 0x1401DF5F4 (MiGetWorkingSetInfoEx.c)
 *     PfpPfnPrioRequest @ 0x140415750 (PfpPfnPrioRequest.c)
 *     MmIdentifyPhysicalMemory @ 0x1406237E8 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x14062AA8C (MmRelocatePfnList.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
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
