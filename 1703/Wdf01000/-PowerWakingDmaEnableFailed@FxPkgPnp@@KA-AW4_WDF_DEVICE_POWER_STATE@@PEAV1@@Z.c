/*
 * XREFs of ?PowerWakingDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009A220
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0024C28 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C00676D0 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008AF98 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnableFailed(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v4; // rdx
  int v5; // eax
  FxDeviceBase *v6; // r8
  unsigned __int16 v7; // cx
  _DEVICE_OBJECT *_a3; // rdx
  const void *_a2; // r8

  FxPkgPnp::PowerDmaPowerDown(This);
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v4 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v4 = 0LL;
  v5 = (unsigned int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(&This->m_DeviceD0ExitPreInterruptsDisabled, v4, 5u);
  if ( v5 < 0 )
  {
    v6 = This->m_DeviceBase;
    v7 = v6->m_ObjectSize;
    _a3 = v6->m_DeviceObject.m_DeviceObject;
    _a2 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7 )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)_a3,
      0xCu,
      0x19u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      5u,
      v5);
  }
  return 823LL;
}
