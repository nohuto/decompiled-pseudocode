/*
 * XREFs of ?PowerWakingNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqLd @ 0x1C0077F70 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v5; // edx
  FxDeviceBase *v6; // rcx
  _DEVICE_OBJECT *_a3; // r8
  const void *_a2; // rcx

  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = This->m_DeviceD0Entry.m_Method;
  if ( m_Method )
    v5 = m_Method((WDFDEVICE__ *)v3, (_WDF_POWER_DEVICE_STATE)This->m_DevicePowerState);
  else
    v5 = 0;
  if ( v5 >= 0 )
    return 33628LL;
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
    0x1Du,
    WPP_PowerStateMachine_cpp_Traceguids,
    _a2,
    _a3,
    This->m_DevicePowerState,
    v5);
  return 33624LL;
}
