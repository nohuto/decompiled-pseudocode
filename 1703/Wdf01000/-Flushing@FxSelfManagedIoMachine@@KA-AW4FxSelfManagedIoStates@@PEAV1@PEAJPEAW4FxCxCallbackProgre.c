/*
 * XREFs of ?Flushing@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C00A09D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0037600 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Flushing(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxPnpDeviceSelfManagedIoFlush *p_m_DeviceSelfManagedIoFlush; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int64 v6; // rdx

  m_PkgPnp = This->m_PkgPnp;
  p_m_DeviceSelfManagedIoFlush = &This->m_DeviceSelfManagedIoFlush;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  LOWORD(m_PkgPnp) = m_DeviceBase->m_ObjectSize;
  v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !(_WORD)m_PkgPnp )
    v6 = 0LL;
  p_m_DeviceSelfManagedIoFlush->m_Device = (WDFDEVICE__ *)v6;
  FxPrePostCallback::InvokeStateless(p_m_DeviceSelfManagedIoFlush);
  return 12LL;
}
