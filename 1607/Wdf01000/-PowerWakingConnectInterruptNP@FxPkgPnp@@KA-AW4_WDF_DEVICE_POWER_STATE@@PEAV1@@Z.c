/*
 * XREFs of ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095C40
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0012E84 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0064340 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00873E0 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterruptNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  WDFDEVICE__ *v4; // rdx
  int v5; // edx
  FxDeviceBase *v6; // rcx
  _DEVICE_OBJECT *_a3; // r8
  const void *_a2; // rcx

  if ( (int)FxPkgPnp::NotifyResourceObjectsD0(This, 1u) < 0 )
    return 33592LL;
  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v4 = 0LL;
  v5 = (unsigned int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
                       (FxPnpDeviceD0ExitPreInterruptsDisabled *)&This->m_DeviceD0EntryPostInterruptsEnabled,
                       v4,
                       This->m_DevicePowerState);
  if ( v5 < 0 )
  {
    v6 = This->m_DeviceBase;
    _a3 = v6->m_DeviceObject.m_DeviceObject;
    if ( v6->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v5,
      0xCu,
      0x17u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      This->m_DevicePowerState,
      v5);
    return 33592LL;
  }
  return 33594LL;
}
