/*
 * XREFs of HUBDSM_AckingStopAfterSuspendOnDetach @ 0x1C00161E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_AckStopAfterSuspend @ 0x1C000D2CC (HUBMUX_AckStopAfterSuspend.c)
 */

__int64 __fastcall HUBDSM_AckingStopAfterSuspendOnDetach(__int64 a1)
{
  HUBMUX_AckStopAfterSuspend(*(volatile signed __int32 **)(a1 + 960));
  return 4077LL;
}
