/*
 * XREFs of ?Init@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJ@Z @ 0x1C002F200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxSelfManagedIoMachine::Init(FxSelfManagedIoMachine *This, int *Status)
{
  int v3; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v6; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  int v8; // eax

  v3 = 0;
  m_DeviceBase = This->m_PkgPnp->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v6 = 0LL;
  m_Method = This->m_DeviceSelfManagedIoInit.m_Method;
  if ( m_Method )
    v8 = m_Method((WDFDEVICE__ *)v6);
  else
    v8 = 0;
  *Status = v8;
  LOBYTE(v3) = v8 >= 0;
  return (unsigned int)(v3 + 3);
}
