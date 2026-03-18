/*
 * XREFs of ?FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0011780
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C001C5A8 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

int __fastcall FxPkgPdo::FireAndForgetIrp(FxPkgPdo *this, FxIrp *Irp)
{
  _IRP *m_Irp; // rbx
  int Status; // ebp

  m_Irp = Irp->m_Irp;
  Status = Irp->m_Irp->IoStatus.Status;
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 22 )
    return FxPkgPnp::CompletePowerRequest(this, Irp, Status);
  IofCompleteRequest(m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return Status;
}
