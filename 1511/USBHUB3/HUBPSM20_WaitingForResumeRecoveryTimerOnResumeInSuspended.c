/*
 * XREFs of HUBPSM20_WaitingForResumeRecoveryTimerOnResumeInSuspended @ 0x1C000E6D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StartResumeRecoveryTimer @ 0x1C0026F00 (HUBMISC_StartResumeRecoveryTimer.c)
 */

__int64 __fastcall HUBPSM20_WaitingForResumeRecoveryTimerOnResumeInSuspended(__int64 a1)
{
  HUBMISC_StartResumeRecoveryTimer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
