/*
 * XREFs of ?PnpEventFailedSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0096D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0037600 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C0065924 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedSurpriseRemoved(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  FxPnpDeviceSurpriseRemoval *p_m_DeviceSurpriseRemoval; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // dl

  m_DeviceBase = This->m_DeviceBase;
  p_m_DeviceSurpriseRemoval = &This->m_DeviceSurpriseRemoval;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v5 = 0LL;
  p_m_DeviceSurpriseRemoval->m_Device = (WDFDEVICE__ *)v5;
  FxPrePostCallback::InvokeStateless(p_m_DeviceSurpriseRemoval);
  This->PnpEventSurpriseRemovePendingOverload(This);
  FxPkgPnp::PnpFinishProcessingIrp(This, v6);
  return 302LL;
}
