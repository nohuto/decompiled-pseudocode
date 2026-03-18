/*
 * XREFs of ?FireAndForgetIrp@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0012CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002BBA0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

NTSTATUS __fastcall FxPkgFdo::FireAndForgetIrp(FxPkgFdo *this, FxIrp *Irp)
{
  _IRP *m_Irp; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxDeviceBase *m_DeviceBase; // rdi
  NTSTATUS v5; // ebx

  m_Irp = Irp->m_Irp;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 22 )
    return FxPkgFdo::_PowerPassDown(this, Irp);
  m_DeviceBase = this->m_DeviceBase;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v5 = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return v5;
}
