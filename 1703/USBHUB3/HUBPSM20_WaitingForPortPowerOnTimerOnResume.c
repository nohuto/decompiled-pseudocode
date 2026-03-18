/*
 * XREFs of HUBPSM20_WaitingForPortPowerOnTimerOnResume @ 0x1C000F0F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StartPortPowerOnTimer @ 0x1C0029440 (HUBMISC_StartPortPowerOnTimer.c)
 */

__int64 __fastcall HUBPSM20_WaitingForPortPowerOnTimerOnResume(__int64 a1)
{
  HUBMISC_StartPortPowerOnTimer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
