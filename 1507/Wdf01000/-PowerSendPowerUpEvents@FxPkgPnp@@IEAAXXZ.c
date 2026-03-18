/*
 * XREFs of ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C005BC9C
 * Callers:
 *     ?PowerDxStoppedDecideDxState@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BA00 (-PowerDxStoppedDecideDxState@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C510 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C005BD24 (-PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerSendPowerUpEvents(FxPkgPnp *this)
{
  unsigned __int8 v2; // r8

  FxPkgPnp::PowerSendIdlePowerEvent(this, PowerIdleEventPowerUpComplete);
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUp, v2);
}
