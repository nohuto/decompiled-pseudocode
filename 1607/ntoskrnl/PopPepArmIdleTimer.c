/*
 * XREFs of PopPepArmIdleTimer @ 0x140205DF0
 * Callers:
 *     PopPepGetComponentPreferedIdleState @ 0x1400C2C54 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x140206288 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402062B4 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x1400EFC00 (KeSetCoalescableTimer.c)
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
