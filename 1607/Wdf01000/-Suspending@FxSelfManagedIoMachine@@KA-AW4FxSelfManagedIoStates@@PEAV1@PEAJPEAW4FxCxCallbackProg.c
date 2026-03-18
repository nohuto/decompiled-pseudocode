/*
 * XREFs of ?Suspending@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C0013DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Suspending(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int64 v5; // r8
  FxPnpDeviceSelfManagedIoSuspend *p_m_DeviceSelfManagedIoSuspend; // rcx
  int v7; // eax
  unsigned int v8; // ecx

  m_DeviceBase = This->m_PkgPnp->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v5 = 0LL;
  p_m_DeviceSelfManagedIoSuspend = &This->m_DeviceSelfManagedIoSuspend;
  p_m_DeviceSelfManagedIoSuspend->m_Device = (WDFDEVICE__ *)v5;
  v7 = FxPrePostCallback::InvokeStateless(p_m_DeviceSelfManagedIoSuspend);
  v8 = 10;
  *Status = v7;
  if ( v7 >= 0 )
    return 7;
  return v8;
}
