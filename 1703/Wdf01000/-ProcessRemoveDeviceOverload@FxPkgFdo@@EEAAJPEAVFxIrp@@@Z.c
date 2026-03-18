/*
 * XREFs of ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C009D240
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C009AB00 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C009AF1C (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgFdo::ProcessRemoveDeviceOverload(FxPkgFdo *this, FxIrp *Irp)
{
  FxIrp *v3; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx

  v3 = Irp;
  IoReleaseRemoveLockAndWaitEx(
    (PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
    Irp->m_Irp,
    0x20u);
  FxPkgPnp::CleanupStateMachines(this, 1u);
  CurrentStackLocation = v3->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  LODWORD(v3) = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, v3->m_Irp);
  FxPkgPnp::DeleteDevice(this);
  return (unsigned int)v3;
}
