/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x14010ED40
 * Callers:
 *     <none>
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // di
  unsigned int v3; // esi
  volatile LONG v4; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock);
  }
  else
  {
    v3 = 0;
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock);
    while ( 1 )
    {
      v4 = *SpinLock;
      if ( (*SpinLock & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v4 & 0x40000000) == 0 )
        _InterlockedCompareExchange(SpinLock, v4 | 0x40000000, v4);
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
  }
  return CurrentIrql;
}
