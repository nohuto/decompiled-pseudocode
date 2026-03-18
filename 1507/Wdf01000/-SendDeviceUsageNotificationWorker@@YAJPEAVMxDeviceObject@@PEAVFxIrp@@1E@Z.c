/*
 * XREFs of ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1C00A2CE4
 * Callers:
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C00A2C40 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?_DeviceUsageNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00A2DF0 (-_DeviceUsageNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00154B4 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 */

__int64 __fastcall SendDeviceUsageNotificationWorker(
        MxDeviceObject *RelatedDevice,
        FxIrp *RelatedIrp,
        FxIrp *OriginalIrp,
        unsigned __int8 Revert)
{
  unsigned __int8 v7; // dl
  _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Status; // edi
  FxCREvent v12; // [rsp+20h] [rbp-28h] BYREF

  AttachedDeviceReference = IoGetAttachedDeviceReference(RelatedDevice->m_DeviceObject);
  RelatedIrp->m_Irp->Tail.Overlay.CurrentStackLocation[-1] = *OriginalIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( Revert )
    RelatedIrp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = RelatedIrp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock == 0;
  RelatedIrp->m_Irp->IoStatus.Status = -1073741637;
  FxCREvent::FxCREvent(&v12, v7);
  CurrentStackLocation = RelatedIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxIrp::_IrpSynchronousCompletion;
  CurrentStackLocation[-1].Context = &v12;
  CurrentStackLocation[-1].Control = -32;
  Status = IofCallDriver(AttachedDeviceReference, RelatedIrp->m_Irp);
  if ( Status == 259 )
  {
    FxCREvent::EnterCRAndWaitAndLeave(&v12);
    Status = RelatedIrp->m_Irp->IoStatus.Status;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
