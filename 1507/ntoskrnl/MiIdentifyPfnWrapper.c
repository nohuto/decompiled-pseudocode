/*
 * XREFs of MiIdentifyPfnWrapper @ 0x1400C4980
 * Callers:
 *     MiGetWorkingSetInfoEx @ 0x14014EE78 (MiGetWorkingSetInfoEx.c)
 *     MiLogAllocateWsleEvent @ 0x140213B7C (MiLogAllocateWsleEvent.c)
 *     PfpPfnPrioRequest @ 0x1404BEB40 (PfpPfnPrioRequest.c)
 *     MmIdentifyPhysicalMemory @ 0x1406A2ADC (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x1406A8654 (MmRelocatePfnList.c)
 * Callees:
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // ebp
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  MiIdentifyPfn(a1, a2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
