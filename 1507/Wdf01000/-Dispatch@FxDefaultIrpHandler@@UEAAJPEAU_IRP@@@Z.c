/*
 * XREFs of ?Dispatch@FxDefaultIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C00304B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxDefaultIrpHandler::Dispatch(FxDefaultIrpHandler *this, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // al

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction >= 0x16u )
  {
    if ( MajorFunction <= 0x17u )
    {
      if ( MajorFunction == 22 )
        PoStartNextPowerIrp(Irp);
      goto LABEL_5;
    }
    if ( MajorFunction == 27 && CurrentStackLocation->MinorFunction != 2 )
    {
LABEL_5:
      Irp->IoStatus.Information = 0LL;
      Irp->IoStatus.Status = -1073741808;
      IofCompleteRequest(Irp, 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
      return -1073741808;
    }
  }
  if ( !BYTE1(this->m_DeviceBase[1].m_Globals) )
  {
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = -1073741808;
    IofCompleteRequest(Irp, 0);
    return -1073741808;
  }
  ++Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
  return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
}
