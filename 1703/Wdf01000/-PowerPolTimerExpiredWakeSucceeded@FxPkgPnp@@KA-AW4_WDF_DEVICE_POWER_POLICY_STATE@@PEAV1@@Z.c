/*
 * XREFs of ?PowerPolTimerExpiredWakeSucceeded@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009F490
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@FxPowerDeviceWakeFromS0Triggered@@QEAAXPEAUWDFDEVICE__@@@Z @ 0x1C00128E0 (-Invoke@FxPowerDeviceWakeFromS0Triggered@@QEAAXPEAUWDFDEVICE__@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeSucceeded(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v4; // rdx

  m_DeviceBase = This->m_DeviceBase;
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v4 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v4 = 0LL;
  FxPowerDeviceWakeFromS0Triggered::Invoke(
    (FxPowerDeviceWakeFromSxTriggered *)&m_Owner->m_DeviceWakeFromS0Triggered,
    v4);
  return 1349LL;
}
