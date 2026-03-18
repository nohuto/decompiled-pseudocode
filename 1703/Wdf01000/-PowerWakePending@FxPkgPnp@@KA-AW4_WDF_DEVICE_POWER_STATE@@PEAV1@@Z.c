/*
 * XREFs of ?PowerWakePending@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0012930
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0013194 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakePending(FxPkgPnp *This)
{
  FxPkgPnp::PowerCompletePendedWakeIrp(This);
  return 867LL;
}
