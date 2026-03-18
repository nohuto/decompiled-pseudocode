/*
 * XREFs of ?PowerInitialDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095440
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C00255F0 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0064340 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00873E0 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialDmaEnableFailed(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  WDFDEVICE__ *v3; // rdx
  int v4; // eax
  FxDeviceBase *v5; // rcx
  _DEVICE_OBJECT *_a3; // rdx
  const void *_a2; // rcx

  FxPkgPnp::PowerDmaPowerDown(This);
  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v3 = 0LL;
  v4 = (unsigned int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(&This->m_DeviceD0ExitPreInterruptsDisabled, v3, 5u);
  if ( v4 < 0 )
  {
    v5 = This->m_DeviceBase;
    _a3 = v5->m_DeviceObject.m_DeviceObject;
    if ( v5->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)_a3,
      0xCu,
      0x1Bu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      5u,
      v4);
  }
  return 833LL;
}
