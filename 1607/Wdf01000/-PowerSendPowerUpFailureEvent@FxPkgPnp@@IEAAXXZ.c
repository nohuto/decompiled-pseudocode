/*
 * XREFs of ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C00958BC
 * Callers:
 *     ?PowerInitialPowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00954E0 (-PowerInitialPowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerReportPowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00957E0 (-PowerReportPowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0024050 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0062910 (-PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C0097D74 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerSendPowerUpFailureEvent(FxPkgPnp *this)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // r8

  FxPkgPnp::SetInternalFailure(this);
  FxPkgPnp::PowerSendIdlePowerEvent(this, PowerIdleEventPowerUpFailed);
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpFailed, v2);
  if ( !this->m_ReleaseHardwareAfterDescendantsOnFailure )
    FxPkgPnp::PnpProcessEvent(this, PnpEventPowerUpFailed, v3);
}
