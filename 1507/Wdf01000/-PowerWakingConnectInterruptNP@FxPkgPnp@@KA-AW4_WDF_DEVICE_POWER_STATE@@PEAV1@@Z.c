/*
 * XREFs of ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C720
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C00065CC (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008667C (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterruptNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v4; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v6; // edx
  FxDeviceBase *v7; // rcx
  _DEVICE_OBJECT *_a3; // r8
  const void *_a2; // rcx

  if ( (int)FxPkgPnp::NotifyResourceObjectsD0(This, 1u) < 0 )
    return 33592LL;
  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v4 = 0LL;
  m_Method = This->m_DeviceD0EntryPostInterruptsEnabled.m_Method;
  if ( m_Method )
    v6 = m_Method((WDFDEVICE__ *)v4, (_WDF_POWER_DEVICE_STATE)This->m_DevicePowerState);
  else
    v6 = 0;
  if ( v6 < 0 )
  {
    v7 = This->m_DeviceBase;
    _a3 = v7->m_DeviceObject.m_DeviceObject;
    if ( v7->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v6,
      0xCu,
      0x1Fu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      This->m_DevicePowerState,
      v6);
    return 33592LL;
  }
  return 33594LL;
}
