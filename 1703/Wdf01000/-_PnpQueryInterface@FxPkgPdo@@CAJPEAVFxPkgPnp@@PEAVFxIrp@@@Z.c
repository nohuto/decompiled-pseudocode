/*
 * XREFs of ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0038FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0026E00 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryInterface(FxPkgPnp *This, FxIrp *Irp)
{
  int v4; // eax
  _IRP *m_Irp; // rbx
  unsigned int v6; // ebp
  unsigned __int8 completeIrp; // [rsp+30h] [rbp+8h] BYREF

  v4 = FxPkgPnp::HandleQueryInterface(This, Irp, &completeIrp);
  m_Irp = Irp->m_Irp;
  v6 = v4;
  Irp->m_Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return v6;
}
