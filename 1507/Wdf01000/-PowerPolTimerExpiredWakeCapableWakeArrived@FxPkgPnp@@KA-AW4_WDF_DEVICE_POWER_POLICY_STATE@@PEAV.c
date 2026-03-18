/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002FCD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z @ 0x1C0018A40 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeArrived(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  int v5; // eax
  __int64 v6; // rcx
  const void *_a1; // rcx
  int _a2; // eax
  FxDeviceBase *v10; // rcx

  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromS0.m_Method;
  if ( m_Method )
    v5 = m_Method((WDFDEVICE__ *)v3);
  else
    v5 = 0;
  if ( v5 >= 0 )
  {
    v6 = *(_QWORD *)&This->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( !v6 || *(_WORD *)(v6 + 8) != 4354 || (_a2 = This->PowerEnableWakeAtBusOverload(This), _a2 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, 0x1000u);
      return 1433LL;
    }
    v10 = This->m_DeviceBase;
    if ( v10->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x20u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
  }
  return 1335LL;
}
