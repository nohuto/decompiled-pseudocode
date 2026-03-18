/*
 * XREFs of ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0012E30
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0013110 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008AF98 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterrupt(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  unsigned __int16 m_ObjectSize; // r8
  int globals; // r10d
  unsigned __int64 v7; // rcx
  FxDeviceBase *v8; // r8
  unsigned __int16 v9; // ax
  _DEVICE_OBJECT *_a3; // rdx
  const void *_a2; // r8

  if ( FxPkgPnp::NotifyResourceObjectsD0(This, 8u) >= 0 )
  {
    m_DeviceBase = This->m_DeviceBase;
    m_Method = This->m_DeviceD0EntryPostInterruptsEnabled.m_Method;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( m_Method )
    {
      v7 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v7 = 0LL;
      globals = m_Method((WDFDEVICE__ *)v7, (_WDF_POWER_DEVICE_STATE)This->m_DevicePowerState);
    }
    else
    {
      globals = 0;
    }
    if ( globals >= 0 )
      return 825LL;
    v8 = This->m_DeviceBase;
    v9 = v8->m_ObjectSize;
    _a3 = v8->m_DeviceObject.m_DeviceObject;
    _a2 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v9 )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)_a3,
      0xCu,
      0x16u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      This->m_DevicePowerState,
      globals);
  }
  return 823LL;
}
