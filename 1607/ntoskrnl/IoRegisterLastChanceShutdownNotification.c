/*
 * XREFs of IoRegisterLastChanceShutdownNotification @ 0x140550F30
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x14013C370 (IopInterlockedInsertHeadList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x140551010 (IopLogAuditIoRegisterNotificationEvent.c)
 */

NTSTATUS __stdcall IoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  _QWORD *PoolWithTag; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68536F49u);
  if ( !PoolWithTag )
    return -1073741670;
  ObfReferenceObject(DeviceObject);
  PoolWithTag[2] = DeviceObject;
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyLastChanceShutdownQueueHead, PoolWithTag);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERLASTCHANCESHUTDOWNNOTIFICATION);
  return 0;
}
