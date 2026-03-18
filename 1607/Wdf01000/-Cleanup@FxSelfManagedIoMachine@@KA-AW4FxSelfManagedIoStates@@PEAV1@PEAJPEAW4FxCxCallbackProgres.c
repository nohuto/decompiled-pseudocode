/*
 * XREFs of ?Cleanup@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C009BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Cleanup(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxDeviceBase *m_DeviceBase; // rdx
  WDFDEVICE__ *v4; // rdx

  m_DeviceBase = This->m_PkgPnp->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v4 = 0LL;
  This->m_DeviceSelfManagedIoCleanup.m_Device = v4;
  FxPrePostCallback::InvokeStateless(&This->m_DeviceSelfManagedIoCleanup);
  return 14LL;
}
