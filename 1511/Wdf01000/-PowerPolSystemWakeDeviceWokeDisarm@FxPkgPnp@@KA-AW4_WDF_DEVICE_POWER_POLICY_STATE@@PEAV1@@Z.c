/*
 * XREFs of ?PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BB70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001AD94 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C008C134 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWokeDisarm(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

  if ( FxDevice::IsPdo(This->m_Device) )
    This->PowerDisableWakeAtBusOverload(This);
  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = This->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromSxTriggered.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)v3);
  FxPkgPnp::PowerPolicyDisarmWakeFromSx(This);
  return 1317LL;
}
