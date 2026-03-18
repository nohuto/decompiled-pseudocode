/*
 * XREFs of PopPepArmIdleTimer @ 0x1401ECFA8
 * Callers:
 *     PopPepGetComponentPreferedIdleState @ 0x1400DC2A8 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1401ED708 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutRoutine @ 0x1401ED734 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 */

void __fastcall PopPepArmIdleTimer(char a1)
{
  KIRQL v2; // di
  char v3; // cl

  if ( PopPepIdleStateTimeout )
  {
    v2 = ExAcquireSpinLockExclusive(&PopPepIdleTimerLock);
    if ( a1 )
    {
      v3 = 0;
      PopPepIdleTimerArmed = 0;
    }
    else
    {
      v3 = PopPepIdleTimerArmed;
    }
    if ( !v3 && PopPepPoweredIdleComponentCount > 0 )
    {
      PopPepIdleTimerArmed = 1;
      KeSetCoalescableTimer(
        &PopPepIdleTimer,
        (LARGE_INTEGER)(-10000LL * PopPepIdleStateTimeout),
        0,
        PopPepIdleStateTimeout,
        &PopPepIdleDpc);
    }
    ExReleaseSpinLockExclusive(&PopPepIdleTimerLock, v2);
  }
}
