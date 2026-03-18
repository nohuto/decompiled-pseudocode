/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C0012CF0 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableCancelWake(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCancelWaitWake(This) != 0 ? 1433 : 1336;
}
