/*
 * XREFs of IoRegisterShutdownNotification @ 0x140523374
 * Callers:
 *     VerifierIoRegisterShutdownNotification @ 0x1406C0804 (VerifierIoRegisterShutdownNotification.c)
 *     RawInitialize @ 0x1407528E0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140752B34 (WmipDriverEntry.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x140133E5C (IopInterlockedInsertHeadList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x1405233E4 (IopLogAuditIoRegisterNotificationEvent.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  __int64 *PoolWithTag; // rax
  __int64 *v3; // rdi

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68536F49u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  PoolWithTag[2] = (__int64)DeviceObject;
  ObfReferenceObject(DeviceObject);
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyShutdownQueueHead, v3);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERSHUTDOWNNOTIFICATION);
  return 0;
}
