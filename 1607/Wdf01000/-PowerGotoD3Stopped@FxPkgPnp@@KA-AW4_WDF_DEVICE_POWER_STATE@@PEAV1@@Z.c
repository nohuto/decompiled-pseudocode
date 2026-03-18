/*
 * XREFs of ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0094F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001CB10 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C00255F0 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C002566C (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C002DBBC (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00627CC (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00628AC (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0064340 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00873E0 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoD3Stopped(FxPkgPnp *This, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  char v5; // bl
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  int _a1; // eax
  char v8; // al
  FxDeviceBase *m_DeviceBase; // rdx
  WDFDEVICE__ *v10; // rdx
  int v11; // eax
  FxDeviceBase *v12; // rcx
  _DEVICE_OBJECT *_a3; // rdx
  const void *v14; // rcx
  bool v15; // sf
  FxDeviceBase *v16; // rax
  WDFDEVICE__ *v17; // rax

  v5 = 0;
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    _a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)4, 0LL);
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
  if ( m_DeviceBase->m_ObjectSize )
    v10 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v10 = 0LL;
  v11 = (unsigned int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
                        &This->m_DeviceD0ExitPreInterruptsDisabled,
                        v10,
                        5u);
  if ( v11 < 0 )
  {
    v5 = 1;
    v12 = This->m_DeviceBase;
    _a3 = v12->m_DeviceObject.m_DeviceObject;
    if ( v12->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)_a3,
      0xCu,
      0x11u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v14,
      _a3,
      5u,
      v11);
  }
  v15 = (int)FxPkgPnp::NotifyResourceObjectsDx(This, 4) < 0;
  v16 = This->m_DeviceBase;
  if ( v15 )
    v5 = 1;
  if ( v16->m_ObjectSize )
    v17 = (WDFDEVICE__ *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v17 = 0LL;
  This->m_DeviceD0Exit.m_Device = v17;
  This->m_DeviceD0Exit.m_TargetState = WdfPowerDeviceD3Final;
  if ( (int)FxPrePostCallback::InvokeStateless(&This->m_DeviceD0Exit) < 0 )
    v5 = 1;
  FxPkgPnp::PowerSetDevicePowerState(This, 5);
  This->PowerParentPowerDereference(This);
  if ( v5 )
    return 848LL;
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit);
  return 789LL;
}
