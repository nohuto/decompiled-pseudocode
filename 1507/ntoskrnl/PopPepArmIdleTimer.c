/*
 * XREFs of PopPepArmIdleTimer @ 0x140136200
 * Callers:
 *     PopPepGetComponentPreferedIdleState @ 0x140028698 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutRoutine @ 0x140135FA0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1401398B0 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall PopPepArmIdleTimer(char a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // ebx
  char v4; // al
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( PopPepIdleStateTimeout )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PopPepIdleTimerLock);
    }
    else
    {
      v3 = 0;
      if ( _interlockedbittestandset(&PopPepIdleTimerLock, 0x1Fu) )
        v3 = ExpWaitForSpinLockExclusiveAndAcquire(&PopPepIdleTimerLock);
      while ( (PopPepIdleTimerLock & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (PopPepIdleTimerLock & 0x40000000) == 0 )
          _InterlockedCompareExchange(&PopPepIdleTimerLock, PopPepIdleTimerLock | 0x40000000, PopPepIdleTimerLock);
        if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v3);
      }
    }
    if ( a1 )
    {
      v4 = 0;
      PopPepIdleTimerArmed = 0;
    }
    else
    {
      v4 = PopPepIdleTimerArmed;
    }
    if ( !v4 && PopPepPoweredIdleComponentCount > 0 )
    {
      PopPepIdleTimerArmed = 1;
      KeSetCoalescableTimer(
        &PopPepIdleTimer,
        (LARGE_INTEGER)(-10000LL * PopPepIdleStateTimeout),
        0,
        PopPepIdleStateTimeout,
        &PopPepIdleDpc);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PopPepIdleTimerLock, retaddr);
    else
      PopPepIdleTimerLock = 0;
    __writecr8(CurrentIrql);
  }
}
