/*
 * XREFs of ?PowerD0DisarmingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00866B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C00107B8 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0DisarmingWakeAtBusNP(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  FxPkgPnp::PowerCompletePendedWakeIrp(This);
  return 33546LL;
}
