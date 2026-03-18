/*
 * XREFs of ?PowerCompleteWakeRequestFromWithinMachine@FxPkgPnp@@IEAAXJ@Z @ 0x1C008652C
 * Callers:
 *     ?PowerEnablingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00341D0 (-PowerEnablingWakeAtBus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerDxStoppedArmForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086720 (-PowerDxStoppedArmForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerDxStoppedArmForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086760 (-PowerDxStoppedArmForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerEnablingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086830 (-PowerEnablingWakeAtBusNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C00107B8 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C0086F24 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 */

void __fastcall FxPkgPnp::PowerCompleteWakeRequestFromWithinMachine(FxPkgPnp *this, int WaitWakeStatus)
{
  if ( FxPkgPnp::PowerMakeWakeRequestNonCancelable(this, WaitWakeStatus) )
    FxPkgPnp::PowerCompletePendedWakeIrp(this);
}
