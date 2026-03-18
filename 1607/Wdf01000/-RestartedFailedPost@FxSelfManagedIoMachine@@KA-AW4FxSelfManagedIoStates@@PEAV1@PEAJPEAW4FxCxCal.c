/*
 * XREFs of ?RestartedFailedPost@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C009BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::RestartedFailedPost(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int64 v4; // rdx
  FxPnpDeviceSelfManagedIoSuspend *p_m_DeviceSelfManagedIoSuspend; // rcx

  m_DeviceBase = This->m_PkgPnp->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v4 = 0LL;
  p_m_DeviceSelfManagedIoSuspend = &This->m_DeviceSelfManagedIoSuspend;
  p_m_DeviceSelfManagedIoSuspend->m_Device = (WDFDEVICE__ *)v4;
  FxPrePostCallback::InvokeStateless(p_m_DeviceSelfManagedIoSuspend);
  return 10LL;
}
