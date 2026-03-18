/*
 * XREFs of ?PowerCompleteWakeRequestFromWithinMachine@FxPkgPnp@@IEAAXJ@Z @ 0x1C009B78C
 * Callers:
 *     ?PowerEnablingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0030910 (-PowerEnablingWakeAtBus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerDxStoppedArmForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B980 (-PowerDxStoppedArmForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerDxStoppedArmForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B9C0 (-PowerDxStoppedArmForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerEnablingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BA90 (-PowerEnablingWakeAtBusNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0006648 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C009C174 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 */

void __fastcall FxPkgPnp::PowerCompleteWakeRequestFromWithinMachine(FxPkgPnp *this, int WaitWakeStatus)
{
  if ( FxPkgPnp::PowerMakeWakeRequestNonCancelable(this, WaitWakeStatus) )
    FxPkgPnp::PowerCompletePendedWakeIrp(this);
}
