/*
 * XREFs of ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1C008D040
 * Callers:
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C008CF9C (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?_DeviceUsageNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C008D100 (-_DeviceUsageNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0025CE0 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall SendDeviceUsageNotificationWorker(
        MxDeviceObject *RelatedDevice,
        FxIrp *RelatedIrp,
        FxIrp *OriginalIrp,
        unsigned __int8 Revert)
{
  _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  unsigned int v8; // edi

  AttachedDeviceReference = IoGetAttachedDeviceReference(RelatedDevice->m_DeviceObject);
  RelatedIrp->m_Irp->Tail.Overlay.CurrentStackLocation[-1] = *OriginalIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( Revert )
    RelatedIrp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = RelatedIrp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock == 0;
  RelatedIrp->m_Irp->IoStatus.Status = -1073741637;
  v8 = FxIrp::SendIrpSynchronously(RelatedIrp, AttachedDeviceReference);
  ObfDereferenceObject(AttachedDeviceReference);
  return v8;
}
