/*
 * XREFs of ?PowerInitialDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C060
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0019618 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008667C (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialDmaEnableFailed(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v5; // ecx
  FxDeviceBase *v6; // rax
  _DEVICE_OBJECT *_a3; // rdx
  const void *_a2; // rax

  FxPkgPnp::PowerDmaPowerDown(This);
  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = This->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( m_Method )
    v5 = m_Method((WDFDEVICE__ *)v3, WdfPowerDeviceD3Final);
  else
    v5 = 0;
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
      (unsigned __int8)_a3,
      0xCu,
      0x23u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      5u,
      v5);
  }
  return 833LL;
}
