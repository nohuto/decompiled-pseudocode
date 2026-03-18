/*
 * XREFs of ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0006370
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C00065CC (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008667C (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterrupt(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int globals; // edx
  const void *_a2; // rcx
  FxDeviceBase *v8; // rcx
  _DEVICE_OBJECT *_a3; // r8

  if ( FxPkgPnp::NotifyResourceObjectsD0(This, 8u) >= 0 )
  {
    m_DeviceBase = This->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v3 = 0LL;
    m_Method = This->m_DeviceD0EntryPostInterruptsEnabled.m_Method;
    if ( m_Method )
      globals = ((__int64 (__fastcall *)(unsigned __int64))m_Method)(v3);
    else
      globals = 0;
    if ( globals >= 0 )
      return 825LL;
    v8 = This->m_DeviceBase;
    _a3 = v8->m_DeviceObject.m_DeviceObject;
    if ( v8->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      globals,
      0xCu,
      0x1Eu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      This->m_DevicePowerState,
      globals);
  }
  return 823LL;
}
