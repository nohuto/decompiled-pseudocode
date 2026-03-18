/*
 * XREFs of ?PowerPolTimerExpiredWakeSucceeded@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeSucceeded(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = This->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromS0Triggered.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)v3);
  return 1349LL;
}
