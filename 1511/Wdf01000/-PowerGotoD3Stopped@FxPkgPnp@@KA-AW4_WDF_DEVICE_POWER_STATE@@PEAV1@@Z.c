/*
 * XREFs of ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z @ 0x1C0012394 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0014AD4 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0014B50 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001DCA0 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00550E8 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00551C8 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077F70 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoD3Stopped(FxPkgPnp *This, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  char v5; // di
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  int _a1; // eax
  char v8; // al
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v10; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v12; // ecx
  FxDeviceBase *v13; // rax
  _DEVICE_OBJECT *_a3; // rdx
  const void *v15; // rax
  int v16; // eax
  FxDeviceBase *v17; // rcx
  unsigned __int64 v18; // rcx
  int (__fastcall *v19)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v20; // ecx
  FxDeviceBase *v21; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *v23; // rax
  unsigned __int8 v24; // r8

  v5 = 0;
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    _a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)4);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x11u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      v5 = 1;
    }
  }
  FxPkgIo::StopProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink, 1, a3, a4);
  v8 = FxPkgPnp::PowerDmaPowerDown(This);
  m_DeviceBase = This->m_DeviceBase;
  if ( !v8 )
    v5 = 1;
  if ( m_DeviceBase->m_ObjectSize )
    v10 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v10 = 0LL;
  m_Method = This->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( m_Method )
    v12 = m_Method((WDFDEVICE__ *)v10, WdfPowerDeviceD3Final);
  else
    v12 = 0;
  if ( v12 < 0 )
  {
    v5 = 1;
    v13 = This->m_DeviceBase;
    _a3 = v13->m_DeviceObject.m_DeviceObject;
    if ( v13->m_ObjectSize )
      v15 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)_a3,
      0xCu,
      0x12u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v15,
      _a3,
      5u,
      v12);
  }
  v16 = FxPkgPnp::NotifyResourceObjectsDx(This, 4);
  v17 = This->m_DeviceBase;
  if ( v16 < 0 )
    v5 = 1;
  if ( v17->m_ObjectSize )
    v18 = (unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v18 = 0LL;
  v19 = This->m_DeviceD0Exit.m_Method;
  if ( v19 )
    v20 = v19((WDFDEVICE__ *)v18, WdfPowerDeviceD3Final);
  else
    v20 = 0;
  if ( v20 < 0 )
  {
    v5 = 1;
    v21 = This->m_DeviceBase;
    m_DeviceObject = v21->m_DeviceObject.m_DeviceObject;
    if ( v21->m_ObjectSize )
      v23 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v23 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)m_DeviceObject,
      0xCu,
      0x13u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v23,
      m_DeviceObject,
      5u,
      v20);
  }
  FxPkgPnp::PowerSetDevicePowerState(This, 5);
  This->PowerParentPowerDereference(This);
  if ( v5 )
    return 848LL;
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit, v24);
  return 789LL;
}
