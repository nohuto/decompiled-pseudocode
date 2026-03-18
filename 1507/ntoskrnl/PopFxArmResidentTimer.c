/*
 * XREFs of PopFxArmResidentTimer @ 0x14012A750
 * Callers:
 *     PopFxIdleComponent @ 0x1400274D0 (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x14012A5F8 (PopFxResidentTimeoutRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140131804 (PopFxResidentTimeoutDpcRoutine.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PopFxArmResidentTimer(char a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // ebx
  char v4; // al
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PopFxResidentTimerLock);
  }
  else
  {
    v3 = 0;
    if ( _interlockedbittestandset(&PopFxResidentTimerLock, 0x1Fu) )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire(&PopFxResidentTimerLock);
    while ( (PopFxResidentTimerLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (PopFxResidentTimerLock & 0x40000000) == 0 )
        _InterlockedCompareExchange(
          &PopFxResidentTimerLock,
          PopFxResidentTimerLock | 0x40000000,
          PopFxResidentTimerLock);
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
  }
  if ( a1 )
  {
    v4 = 0;
    PopFxResidentTimerArmed = 0;
  }
  else
  {
    v4 = PopFxResidentTimerArmed;
  }
  if ( !v4 && PopFxResidentComponentCount > 0 )
  {
    PopFxResidentTimerArmed = 1;
    KeSetCoalescableTimer(
      &PopFxResidentTimer,
      (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxActiveIdleTimeout),
      0,
      (unsigned int)PopFxActiveIdleTimeout >> 1,
      &PopFxResidentDpc);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PopFxResidentTimerLock, retaddr);
  else
    PopFxResidentTimerLock = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
