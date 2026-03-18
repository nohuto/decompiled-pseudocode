/*
 * XREFs of ?Init@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C002EBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0033614 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Init(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxDeviceBase *m_DeviceBase; // r9
  unsigned __int64 v6; // r9
  FxPnpDeviceSelfManagedIoInit *p_m_DeviceSelfManagedIoInit; // rcx
  FxCxCallbackProgress v8; // al
  FxCxCallbackProgress v10; // [rsp+30h] [rbp+8h] BYREF

  m_DeviceBase = This->m_PkgPnp->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v6 = 0LL;
  p_m_DeviceSelfManagedIoInit = &This->m_DeviceSelfManagedIoInit;
  p_m_DeviceSelfManagedIoInit->m_Device = (WDFDEVICE__ *)v6;
  *Status = FxPrePostCallback::InvokeStateful(p_m_DeviceSelfManagedIoInit, &v10, FxCxCleanupAfterPreOrClientFailure);
  v8 = v10;
  if ( Progress )
    *Progress = v10;
  if ( *Status >= 0 )
    return 5LL;
  if ( v8 )
    return 4 - (unsigned int)((unsigned __int8)v8 < FxCxCallbackProgressClientSucceeded);
  return 1LL;
}
