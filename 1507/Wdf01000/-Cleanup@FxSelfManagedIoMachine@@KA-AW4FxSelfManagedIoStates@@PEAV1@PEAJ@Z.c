/*
 * XREFs of ?Cleanup@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJ@Z @ 0x1C00A3120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxSelfManagedIoMachine::Cleanup(FxSelfManagedIoMachine *This, int *Status)
{
  FxDeviceBase *m_DeviceBase; // rcx
  WDFDEVICE__ *v4; // rcx

  m_DeviceBase = This->m_PkgPnp->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v4 = 0LL;
  if ( This->m_DeviceSelfManagedIoCleanup.m_Method )
    This->m_DeviceSelfManagedIoCleanup.m_Method(v4);
  return 12LL;
}
