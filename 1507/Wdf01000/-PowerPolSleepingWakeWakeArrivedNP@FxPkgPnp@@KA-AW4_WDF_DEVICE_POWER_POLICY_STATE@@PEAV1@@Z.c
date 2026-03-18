/*
 * XREFs of ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A09E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C0006558 (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z @ 0x1C0018A40 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z.c)
 *     ?Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EE@Z @ 0x1C00A0170 (-Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeWakeArrivedNP(FxPkgPnp *This)
{
  unsigned __int8 CurrentWakeReason; // al
  __int64 v3; // r8
  FxDeviceBase *m_DeviceBase; // rdx
  char v5; // r9
  char v6; // al
  unsigned __int8 v7; // r9
  WDFDEVICE__ *v8; // rdx
  int _a2; // eax
  FxDeviceBase *v10; // rcx
  const void *_a1; // rcx
  unsigned __int16 v12; // r9
  __int64 v14; // rcx
  FxDeviceBase *v15; // rcx

  CurrentWakeReason = FxPkgPnp::PowerPolicyGetCurrentWakeReason(This);
  m_DeviceBase = This->m_DeviceBase;
  v5 = CurrentWakeReason >> 1;
  v6 = CurrentWakeReason & 1;
  v7 = v5 & 1;
  if ( m_DeviceBase->m_ObjectSize )
    v8 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v8 = 0LL;
  LOBYTE(v3) = v6;
  _a2 = (unsigned int)FxPowerDeviceArmWakeFromSx::Invoke(
                        &This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx,
                        v8,
                        v3,
                        v7);
  if ( _a2 < 0 )
  {
    v10 = This->m_DeviceBase;
    if ( v10->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v12 = 26;
LABEL_9:
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, v12, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
    return 34075LL;
  }
  v14 = *(_QWORD *)&This->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( v14 )
  {
    if ( *(_WORD *)(v14 + 8) == 4354 )
    {
      _a2 = This->PowerEnableWakeAtBusOverload(This);
      if ( _a2 < 0 )
      {
        v15 = This->m_DeviceBase;
        if ( v15->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        v12 = 27;
        goto LABEL_9;
      }
    }
  }
  FxPkgPnp::PowerProcessEvent(This, 0x1000u);
  return 1433LL;
}
