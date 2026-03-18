/*
 * XREFs of ?PowerPolS0WakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0012870
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@FxPowerDeviceWakeFromS0Triggered@@QEAAXPEAUWDFDEVICE__@@@Z @ 0x1C00128E0 (-Invoke@FxPowerDeviceWakeFromS0Triggered@@QEAAXPEAUWDFDEVICE__@@@Z.c)
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0013430 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001EE5C (-IsPdo@FxDevice@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolS0WakeDisarm(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v4; // rdx

  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  if ( FxDevice::IsPdo(This->m_Device) )
    This->PowerDisableWakeAtBusOverload(This);
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v4 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v4 = 0LL;
  FxPowerDeviceWakeFromS0Triggered::Invoke(
    (FxPowerDeviceWakeFromSxTriggered *)&This->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0,
    v4);
  return 1347LL;
}
