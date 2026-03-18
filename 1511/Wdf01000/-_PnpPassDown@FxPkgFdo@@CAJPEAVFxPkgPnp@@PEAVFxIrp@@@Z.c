/*
 * XREFs of ?_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0031880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgFdo::_PnpPassDown(FxPkgPnp *This, FxIrp *Irp)
{
  _IRP *m_Irp; // rsi
  FxDeviceBase *m_DeviceBase; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebx

  m_Irp = Irp->m_Irp;
  m_DeviceBase = This->m_DeviceBase;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v5 = IofCallDriver(This->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return v5;
}
