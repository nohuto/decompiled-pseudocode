/*
 * XREFs of ?PowerPolTimerExpiredWakeSucceeded@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009AA60
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@FxPowerDeviceWakeFromS0Triggered@@QEAAXPEAUWDFDEVICE__@@@Z @ 0x1C00127EC (-Invoke@FxPowerDeviceWakeFromS0Triggered@@QEAAXPEAUWDFDEVICE__@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeSucceeded(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  WDFDEVICE__ *v2; // rdx

  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v2 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v2 = 0LL;
  FxPowerDeviceWakeFromS0Triggered::Invoke(
    (FxPowerDeviceWakeFromSxTriggered *)&This->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromS0Triggered,
    v2);
  return 1349LL;
}
