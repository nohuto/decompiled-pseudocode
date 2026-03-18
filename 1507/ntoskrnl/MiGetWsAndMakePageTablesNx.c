/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x14016F234
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x1405C008C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  volatile signed __int32 *v0; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v2; // edi
  signed __int32 i; // edx

  v0 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v0);
  }
  else
  {
    v2 = 0;
    if ( _interlockedbittestandset(v0, 0x1Fu) )
      v2 = ExpWaitForSpinLockExclusiveAndAcquire(v0);
    for ( i = *v0; (*v0 & 0xBFFFFFFF) != 0x80000000; i = *v0 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v0, i | 0x40000000, i);
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
    }
  }
  MEMORY[0xFFFFF6FB7DBEDF68] = ~qword_1403D0220 & (MEMORY[0xFFFFF6FB7DBEDF68] | 0x8000000000000000uLL);
  MiUnlockWorkingSetExclusive((__int64)v0, CurrentIrql);
  return KeFlushTb(1, 0);
}
