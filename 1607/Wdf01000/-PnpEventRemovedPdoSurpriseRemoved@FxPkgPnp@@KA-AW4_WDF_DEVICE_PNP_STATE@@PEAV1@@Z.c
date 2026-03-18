/*
 * XREFs of ?PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0093430
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006292C (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRemovedPdoSurpriseRemoved(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rax
  WDFDEVICE__ *v3; // rax
  unsigned __int8 v4; // dl

  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v3 = 0LL;
  This->m_DeviceSurpriseRemoval.m_Device = v3;
  FxPrePostCallback::InvokeStateless(&This->m_DeviceSurpriseRemoval);
  This->PnpEventSurpriseRemovePendingOverload(This);
  FxPkgPnp::PnpFinishProcessingIrp(This, v4);
  return 277LL;
}
