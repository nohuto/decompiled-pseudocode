/*
 * XREFs of ?PnpEventSurpriseRemoveIoStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00936C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventSurpriseRemoveIoStarted(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rax
  WDFDEVICE__ *v3; // rax

  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v3 = 0LL;
  This->m_DeviceSurpriseRemoval.m_Device = v3;
  FxPrePostCallback::InvokeStateless(&This->m_DeviceSurpriseRemoval);
  This->PnpEventSurpriseRemovePendingOverload(This);
  return 297LL;
}
