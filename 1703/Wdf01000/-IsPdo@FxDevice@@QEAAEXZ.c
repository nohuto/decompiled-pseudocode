/*
 * XREFs of ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001EE5C
 * Callers:
 *     ?PowerPolS0WakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0012870 (-PowerPolS0WakeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     imp_WdfInterruptCreate @ 0x1C00188E0 (imp_WdfInterruptCreate.c)
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00207F0 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0026E00 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1C0037260 (imp_WdfDeviceAddQueryInterface.c)
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C0039B20 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     imp_WdfFdoAddStaticChild @ 0x1C003B6B0 (imp_WdfFdoAddStaticChild.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003B850 (-PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C007D780 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009B474 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E470 (-PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STA.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E860 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E950 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009EDA0 (-PowerPolStoppingDisarmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009EFA0 (-PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009F0F0 (-PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCompletedDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009F3F0 (-PowerPolTimerExpiredWakeCompletedDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxDevice::IsPdo(FxDevice *this)
{
  FxPkgPnp *m_PkgPnp; // rdx
  bool result; // al

  m_PkgPnp = this->m_PkgPnp;
  result = 0;
  if ( m_PkgPnp )
    return m_PkgPnp->m_Type == 4354;
  return result;
}
