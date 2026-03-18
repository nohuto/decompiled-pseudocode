/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14017E9A8
 * Callers:
 *     <none>
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  unsigned int v2; // edi
  volatile LONG v3; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock);
  }
  else
  {
    v2 = 0;
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
      v2 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock);
    while ( 1 )
    {
      v3 = *SpinLock;
      if ( (*SpinLock & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v3 & 0x40000000) == 0 )
        _InterlockedCompareExchange(SpinLock, v3 | 0x40000000, v3);
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
    }
  }
}
