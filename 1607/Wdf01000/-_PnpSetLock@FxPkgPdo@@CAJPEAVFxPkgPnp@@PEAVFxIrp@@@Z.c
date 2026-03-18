/*
 * XREFs of ?_PnpSetLock@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00926C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPdo::_PnpSetLock(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // rcx
  FxIrp *v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 (__fastcall *m_Lock)(unsigned __int64, FxIrp *); // rax
  signed int v7; // r8d

  m_DeviceBase = This->m_DeviceBase;
  v4 = Irp;
  LOBYTE(Irp) = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.SetLock.Lock;
  if ( m_DeviceBase->m_ObjectSize )
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v5 = 0LL;
  m_Lock = (__int64 (__fastcall *)(unsigned __int64, FxIrp *))This[1].m_SpinLock.m_Lock;
  if ( m_Lock )
    v7 = m_Lock(v5, Irp);
  else
    v7 = -1073741823;
  if ( v7 >= 0 )
    v4->m_Irp->IoStatus.Information = 0LL;
  return FxPkgPnp::CompletePnpRequest(This, v4, v7);
}
