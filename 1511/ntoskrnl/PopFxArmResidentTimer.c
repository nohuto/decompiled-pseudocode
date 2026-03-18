/*
 * XREFs of PopFxArmResidentTimer @ 0x1400DC9D8
 * Callers:
 *     PopFxResidentTimeoutRoutine @ 0x1400DA934 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1400DC4DC (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1400F3F94 (PopFxResidentTimeoutDpcRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 */

void __fastcall PopFxArmResidentTimer(char a1)
{
  KIRQL v2; // di
  char v3; // cl

  v2 = ExAcquireSpinLockExclusive(&PopFxResidentTimerLock);
  if ( a1 )
  {
    v3 = 0;
    PopFxResidentTimerArmed = 0;
  }
  else
  {
    v3 = PopFxResidentTimerArmed;
  }
  if ( !v3 && PopFxResidentComponentCount > 0 )
  {
    PopFxResidentTimerArmed = 1;
    KeSetCoalescableTimer(
      &PopFxResidentTimer,
      (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxActiveIdleTimeout),
      0,
      (unsigned int)PopFxActiveIdleTimeout >> 1,
      &PopFxResidentDpc);
  }
  ExReleaseSpinLockExclusive(&PopFxResidentTimerLock, v2);
}
