/*
 * XREFs of ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C0089634
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z @ 0x1C0015D00 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z.c)
 *     ?PnpEventEnableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002FAA0 (-PnpEventEnableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002FB70 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartReleaseHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085740 (-PnpEventRestartReleaseHardware@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085860 (-PnpEventStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00871B0 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C008722C (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AEB0 (-PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B150 (-PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingPowerDownNotProcessed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B190 (-PowerPolSleepingPowerDownNotProcessed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredNoWakePowerDownNotProcessed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BBF0 (-PowerPolTimerExpiredNoWakePowerDownNotProcessed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDownNotProcessed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BDA0 (-PowerPolTimerExpiredWakeCapablePowerDownNotProcessed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_S.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::SetInternalFailure(FxPkgPnp *this)
{
  this->m_InternalFailure = 1;
  IoInvalidateDeviceState(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
}
