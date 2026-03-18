/*
 * XREFs of ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0024CA8
 * Callers:
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00140D0 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0024CFC (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C0098FF0 (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099380 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C0099580 (-PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerPowerFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099BF0 (-PowerPowerFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099E90 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::PowerSetDevicePowerState(FxPkgPnp *this, int State)
{
  POWER_STATE v2; // r8d

  this->m_DevicePowerStateOld = this->m_DevicePowerState;
  this->m_DevicePowerState = State;
  if ( State == 1 )
  {
    this->m_SystemPowerAction = 0;
LABEL_3:
    v2.SystemState = State;
    goto LABEL_4;
  }
  v2.SystemState = PowerSystemSleeping3;
  if ( State <= 4 || State > 6 )
    goto LABEL_3;
LABEL_4:
  PoSetPowerState(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, DevicePowerState, v2);
}
