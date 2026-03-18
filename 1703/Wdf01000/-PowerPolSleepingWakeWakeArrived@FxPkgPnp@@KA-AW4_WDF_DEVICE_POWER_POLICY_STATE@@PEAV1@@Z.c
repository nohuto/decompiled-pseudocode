/*
 * XREFs of ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E860
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C00130B0 (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001EE5C (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00236B0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EE@Z @ 0x1C0098550 (-Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeWakeArrived(FxPkgPnp *This)
{
  unsigned int CurrentWakeReason; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  __int64 v4; // r9
  __int64 m_ObjectSize; // r8
  WDFDEVICE__ *v6; // rdx
  int _a2; // eax
  unsigned __int16 v8; // r9
  FxDeviceBase *v9; // rdx
  unsigned __int16 v10; // cx
  const void *_a1; // rdx

  CurrentWakeReason = FxPkgPnp::PowerPolicyGetCurrentWakeReason(This);
  m_DeviceBase = This->m_DeviceBase;
  v4 = CurrentWakeReason >> 1;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !(_WORD)m_ObjectSize )
    v6 = 0LL;
  LOBYTE(m_ObjectSize) = CurrentWakeReason & 1;
  LOBYTE(v4) = (CurrentWakeReason & 2) != 0;
  _a2 = (unsigned int)FxPowerDeviceArmWakeFromSx::Invoke(
                        &This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx,
                        v6,
                        m_ObjectSize,
                        v4);
  if ( _a2 >= 0 )
  {
    if ( !FxDevice::IsPdo(This->m_Device) || (_a2 = This->PowerEnableWakeAtBusOverload(This), _a2 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
      return 1433LL;
    }
    v8 = 24;
  }
  else
  {
    v8 = 23;
  }
  v9 = This->m_DeviceBase;
  v10 = v9->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v10 )
    _a1 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, v8, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
  return 1298LL;
}
