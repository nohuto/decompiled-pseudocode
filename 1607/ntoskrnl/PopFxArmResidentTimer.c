/*
 * XREFs of PopFxArmResidentTimer @ 0x1400C2F94
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x1400A89D0 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400C0F9C (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1400C1B10 (PopFxIdleComponent.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x1400EFC00 (KeSetCoalescableTimer.c)
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
