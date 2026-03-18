/*
 * XREFs of ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099380
 * Callers:
 *     <none>
 * Callees:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0022564 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0024C28 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0024CA8 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C003296C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0037600 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00657B8 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00658B4 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C00676D0 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008AF98 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoD3Stopped(FxPkgPnp *This, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  char v5; // bl
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  int _a1; // eax
  char v8; // al
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v11; // rdx
  int v12; // eax
  unsigned __int8 v13; // dl
  FxDeviceBase *v14; // r11
  unsigned __int16 v15; // cx
  _DEVICE_OBJECT *_a3; // r10
  const void *v17; // r11
  int v18; // eax
  FxDeviceBase *v19; // r8
  unsigned __int16 v20; // ax
  WDFDEVICE__ *v21; // r8

  v5 = 0;
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    _a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventSuspend, 0LL);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x10u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      v5 = 1;
    }
  }
  FxPkgIo::StopProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink, 1, a3, a4);
  v8 = FxPkgPnp::PowerDmaPowerDown(This);
  m_DeviceBase = This->m_DeviceBase;
  if ( !v8 )
    v5 = 1;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v11 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v11 = 0LL;
  v12 = (unsigned int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
                        &This->m_DeviceD0ExitPreInterruptsDisabled,
                        v11,
                        5u);
  if ( v12 < 0 )
  {
    v5 = 1;
    v14 = This->m_DeviceBase;
    v15 = v14->m_ObjectSize;
    _a3 = v14->m_DeviceObject.m_DeviceObject;
    v17 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v15 )
      v17 = 0LL;
    WPP_IFR_SF_qqLd(This->m_Globals, v13, 0xCu, 0x11u, WPP_PowerStateMachine_cpp_Traceguids, v17, _a3, 5u, v12);
  }
  v18 = FxPkgPnp::NotifyResourceObjectsDx(This, 4);
  v19 = This->m_DeviceBase;
  if ( v18 < 0 )
    v5 = 1;
  v20 = v19->m_ObjectSize;
  v21 = (WDFDEVICE__ *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
  This->m_DeviceD0Exit.m_TargetState = WdfPowerDeviceD3Final;
  if ( !v20 )
    v21 = 0LL;
  This->m_DeviceD0Exit.m_Device = v21;
  if ( (int)FxPrePostCallback::InvokeStateless(&This->m_DeviceD0Exit) < 0 )
    v5 = 1;
  FxPkgPnp::PowerSetDevicePowerState(This, 5);
  This->PowerParentPowerDereference(This);
  if ( v5 )
    return 848LL;
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit);
  return 789LL;
}
