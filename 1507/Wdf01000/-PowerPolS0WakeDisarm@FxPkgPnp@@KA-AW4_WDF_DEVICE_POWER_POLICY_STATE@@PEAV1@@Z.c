/*
 * XREFs of ?PowerPolS0WakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0480
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0006898 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolS0WakeDisarm(FxPkgPnp *This)
{
  __int64 v2; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v4; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  v2 = *(_QWORD *)&This->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( v2 && *(_WORD *)(v2 + 8) == 4354 )
    This->PowerDisableWakeAtBusOverload(This);
  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v4 = 0LL;
  m_Method = This->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)v4);
  return 1347LL;
}
