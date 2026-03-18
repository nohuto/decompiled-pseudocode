/*
 * XREFs of IoRegisterLastChanceShutdownNotification @ 0x140523304
 * Callers:
 *     VerifierIoRegisterLastChanceShutdownNotification @ 0x1406C07F4 (VerifierIoRegisterLastChanceShutdownNotification.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x140133E5C (IopInterlockedInsertHeadList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x1405233E4 (IopLogAuditIoRegisterNotificationEvent.c)
 */

NTSTATUS __stdcall IoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  __int64 *PoolWithTag; // rdi

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68536F49u);
  if ( !PoolWithTag )
    return -1073741670;
  ObfReferenceObject(DeviceObject);
  PoolWithTag[2] = (__int64)DeviceObject;
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyLastChanceShutdownQueueHead, PoolWithTag);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERLASTCHANCESHUTDOWNNOTIFICATION);
  return 0;
}
