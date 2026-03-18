/*
 * XREFs of ?PowerD0DisarmingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0006648 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0DisarmingWakeAtBus(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  FxPkgPnp::PowerCompletePendedWakeIrp(This);
  return 777LL;
}
