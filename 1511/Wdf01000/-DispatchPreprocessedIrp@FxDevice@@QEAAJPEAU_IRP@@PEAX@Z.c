/*
 * XREFs of ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0055588
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C0064910 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C0033BF0 (-_RequiresRemLock@FxDevice@@SA-AW4FxDeviceRemLockAction@@EE@Z.c)
 *     ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C006B36C (-DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z.c)
 */

NTSTATUS __fastcall FxDevice::DispatchPreprocessedIrp(FxDevice *this, _IRP *Irp, void *DispatchContext)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v7; // eax
  NTSTATUS v8; // edi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation = --CurrentStackLocation;
  if ( (unsigned int)FxDevice::_RequiresRemLock(
                       CurrentStackLocation->MajorFunction,
                       CurrentStackLocation->MinorFunction) != 1 )
    return DispatchWorker(this, Irp, DispatchContext);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceObject.m_DeviceObject[1], Irp, &id, 1u, 0x20u);
  v8 = v7;
  if ( v7 >= 0 )
    return DispatchWorker(this, Irp, DispatchContext);
  Irp->IoStatus.Information = 0LL;
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return v8;
}
