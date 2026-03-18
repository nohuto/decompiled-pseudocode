/*
 * XREFs of ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009A160
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0013110 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C00676D0 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008AF98 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterruptNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v5; // rdx
  int v6; // eax
  FxDeviceBase *v7; // r10
  _DEVICE_OBJECT *_a3; // r8
  unsigned __int16 v9; // cx
  const void *_a2; // r10

  if ( (int)FxPkgPnp::NotifyResourceObjectsD0(This, 1u) < 0 )
    return 33592LL;
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  v6 = (unsigned int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
                       (FxPnpDeviceD0ExitPreInterruptsDisabled *)&This->m_DeviceD0EntryPostInterruptsEnabled,
                       v5,
                       This->m_DevicePowerState);
  if ( v6 < 0 )
  {
    v7 = This->m_DeviceBase;
    _a3 = v7->m_DeviceObject.m_DeviceObject;
    v9 = v7->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v9 )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      This->m_DevicePowerState,
      0xCu,
      0x17u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      This->m_DevicePowerState,
      v6);
    return 33592LL;
  }
  return 33594LL;
}
