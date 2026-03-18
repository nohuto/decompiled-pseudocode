/*
 * XREFs of ?Flushing@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJ@Z @ 0x1C008D460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxSelfManagedIoMachine::Flushing(FxSelfManagedIoMachine *This, int *Status)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v4; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

  m_DeviceBase = This->m_PkgPnp->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v4 = 0LL;
  m_Method = This->m_DeviceSelfManagedIoFlush.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)v4);
  return 10LL;
}
