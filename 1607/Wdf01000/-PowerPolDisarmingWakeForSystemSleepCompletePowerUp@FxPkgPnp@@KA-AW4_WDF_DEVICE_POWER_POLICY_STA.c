/*
 * XREFs of ?PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@FxPowerDeviceWakeFromS0Triggered@@QEAAXPEAUWDFDEVICE__@@@Z @ 0x1C00127EC (-Invoke@FxPowerDeviceWakeFromS0Triggered@@QEAAXPEAUWDFDEVICE__@@@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001E8F4 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0024450 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolDisarmingWakeForSystemSleepCompletePowerUp(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  WDFDEVICE__ *v3; // rdx

  if ( FxDevice::IsPdo(This->m_Device) )
    This->PowerDisableWakeAtBusOverload(This);
  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v3 = 0LL;
  FxPowerDeviceWakeFromS0Triggered::Invoke(
    (FxPowerDeviceWakeFromSxTriggered *)&This->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0,
    v3);
  FxPkgPnp::PowerProcessEvent(This, 0x800u, 0);
  return 1433LL;
}
