/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0038340
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001E8F4 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0024450 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeArrived(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  int v5; // eax
  const void *_a1; // rcx
  int _a2; // eax
  FxDeviceBase *v9; // rcx

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
    if ( !FxDevice::IsPdo(This->m_Device) || (_a2 = This->PowerEnableWakeAtBusOverload(This), _a2 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
      return 1433LL;
    }
    v9 = This->m_DeviceBase;
    if ( v9->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x20u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
  }
  return 1335LL;
}
