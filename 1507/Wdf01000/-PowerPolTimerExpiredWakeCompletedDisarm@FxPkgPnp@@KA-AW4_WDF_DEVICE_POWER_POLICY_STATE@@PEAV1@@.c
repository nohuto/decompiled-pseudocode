/*
 * XREFs of ?PowerPolTimerExpiredWakeCompletedDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A15A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCompletedDisarm(FxPkgPnp *This)
{
  __int64 v2; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v4; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

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
  return 1337LL;
}
