/*
 * XREFs of ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002BC50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqLd @ 0x1C008667C (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0Starting(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int globals; // edx
  FxDeviceBase *v7; // rcx
  _DEVICE_OBJECT *_a3; // r8
  const void *_a2; // rcx

  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = This->m_DeviceD0Entry.m_Method;
  if ( m_Method )
    globals = m_Method((WDFDEVICE__ *)v3, (_WDF_POWER_DEVICE_STATE)This->m_DevicePowerState);
  else
    globals = 0;
  if ( globals >= 0 )
    return 784LL;
  v7 = This->m_DeviceBase;
  _a3 = v7->m_DeviceObject.m_DeviceObject;
  if ( v7->m_ObjectSize )
    _a2 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a2 = 0LL;
  WPP_IFR_SF_qqLd(
    This->m_Globals,
    globals,
    0xCu,
    0xFu,
    WPP_PowerStateMachine_cpp_Traceguids,
    _a2,
    _a3,
    This->m_DevicePowerState,
    globals);
  return 836LL;
}
