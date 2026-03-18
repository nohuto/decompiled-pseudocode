/*
 * XREFs of ?Suspending@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJ@Z @ 0x1C0008020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxSelfManagedIoMachine::Suspending(FxSelfManagedIoMachine *This, int *Status)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v5; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  int v7; // ecx
  __int64 result; // rax

  m_DeviceBase = This->m_PkgPnp->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v5 = 0LL;
  m_Method = This->m_DeviceSelfManagedIoSuspend.m_Method;
  if ( m_Method )
    v7 = m_Method((WDFDEVICE__ *)v5);
  else
    v7 = 0;
  result = 8LL;
  *Status = v7;
  if ( v7 >= 0 )
    return 6LL;
  return result;
}
