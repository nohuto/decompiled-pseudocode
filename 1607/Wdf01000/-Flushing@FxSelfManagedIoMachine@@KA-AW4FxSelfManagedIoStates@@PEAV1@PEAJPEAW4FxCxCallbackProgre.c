/*
 * XREFs of ?Flushing@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C009BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Flushing(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int64 v4; // rdx
  FxPnpDeviceSelfManagedIoFlush *p_m_DeviceSelfManagedIoFlush; // rcx

  m_DeviceBase = This->m_PkgPnp->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v4 = 0LL;
  p_m_DeviceSelfManagedIoFlush = &This->m_DeviceSelfManagedIoFlush;
  p_m_DeviceSelfManagedIoFlush->m_Device = (WDFDEVICE__ *)v4;
  FxPrePostCallback::InvokeStateless(p_m_DeviceSelfManagedIoFlush);
  return 12LL;
}
