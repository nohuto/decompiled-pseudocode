/*
 * XREFs of ?SendIrpSynchronously@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C00190F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxPkgFdo::SendIrpSynchronously(FxPkgFdo *this, FxIrp *Irp)
{
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  _DEVICE_OBJECT *m_DeviceObject; // rdi
  _IRP *v6; // rax
  _IO_STACK_LOCATION *v7; // rdx
  NTSTATUS result; // eax
  _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+48h] [rbp-10h]

  m_Irp = Irp->m_Irp;
  v10 = 0;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  m_DeviceObject = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = Irp->m_Irp;
  v10 = 1;
  v7 = v6->Tail.Overlay.CurrentStackLocation;
  v7[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
  v7[-1].Context = &Event;
  v7[-1].Control = -32;
  result = IofCallDriver(m_DeviceObject, Irp->m_Irp);
  if ( result == 259 )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    return Irp->m_Irp->IoStatus.Status;
  }
  return result;
}
