/*
 * XREFs of ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C0062884
 * Callers:
 *     ?PowerDxStoppedDecideDxState@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0094E70 (-PowerDxStoppedDecideDxState@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00959C0 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0062910 (-PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerSendPowerUpEvents(FxPkgPnp *this)
{
  FxPkgPnp::PowerSendIdlePowerEvent(this, PowerIdleEventPowerUpComplete);
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUp, 0);
}
