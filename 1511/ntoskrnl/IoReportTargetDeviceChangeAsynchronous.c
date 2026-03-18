/*
 * XREFs of IoReportTargetDeviceChangeAsynchronous @ 0x140102528
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400D11E4 (PnpDeviceActionWorker.c)
 *     FsRtlNotifyVolumeEventEx @ 0x1404917BC (FsRtlNotifyVolumeEventEx.c)
 *     VerifierIoReportTargetDeviceChangeAsynchronous @ 0x1406C083C (VerifierIoReportTargetDeviceChangeAsynchronous.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PnpSetCustomTargetEvent @ 0x1404E221C (PnpSetCustomTargetEvent.c)
 */

NTSTATUS __stdcall IoReportTargetDeviceChangeAsynchronous(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PVOID NotificationStructure,
        PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
        PVOID Context)
{
  _DWORD *DeviceNode; // rcx
  GUID *v9; // rdi
  unsigned __int16 v10; // cx
  int v11; // edx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v16; // rcx
  unsigned __int16 *v17; // rsi
  _WORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_31;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(PhysicalDeviceObject, PhysicalDeviceObject->Size);
    DriverObject = PhysicalDeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock(DriverObject, (unsigned int)DriverObject->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock(p_DriverName, 2LL);
        IoAddTriageDumpDataBlock(
          PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v16 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v16 )
    {
      v17 = (unsigned __int16 *)(v16 + 40);
      IoAddTriageDumpDataBlock(v16, 712LL);
      if ( *v17 )
      {
        IoAddTriageDumpDataBlock(v17, 2LL);
        IoAddTriageDumpDataBlock(*((_QWORD *)v17 + 1), *v17);
      }
      v18 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v18 )
      {
        IoAddTriageDumpDataBlock(v18, 2LL);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v19 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v19 && *(_WORD *)(v19 + 56) )
      {
        IoAddTriageDumpDataBlock(v19 + 56, 2LL);
        v20 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v20 + 64), *(unsigned __int16 *)(v20 + 56));
      }
    }
LABEL_31:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  v9 = (GUID *)((char *)NotificationStructure + 4);
  if ( (char *)NotificationStructure + 4 == (char *)&GUID_TARGET_DEVICE_QUERY_REMOVE )
    return -1073741808;
  if ( RtlCompareMemory(v9, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16 )
    return -1073741808;
  if ( v9 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED )
    return -1073741808;
  if ( RtlCompareMemory(v9, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
    return -1073741808;
  if ( v9 == &GUID_TARGET_DEVICE_REMOVE_COMPLETE )
    return -1073741808;
  if ( RtlCompareMemory(v9, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0x10uLL) == 16 )
    return -1073741808;
  v10 = *((_WORD *)NotificationStructure + 1);
  if ( v10 < 0x24u )
    return -1073741808;
  v11 = *((_DWORD *)NotificationStructure + 8);
  if ( v11 != -1 && v11 > v10 - 36 )
    return -1073741808;
  if ( KeGetCurrentIrql() != 2 )
    return PnpSetCustomTargetEvent(PhysicalDeviceObject, (__int64)Context, NotificationStructure);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 64LL, 0x38706E50u);
  if ( !PoolWithTag )
    return -1073741670;
  ObfReferenceObjectWithTag(PhysicalDeviceObject, 0x746C6644u);
  PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)PhysicalDeviceObject;
  PoolWithTag[1].Parameter = &PoolWithTag[2];
  memmove(&PoolWithTag[2], NotificationStructure, *((unsigned __int16 *)NotificationStructure + 1));
  PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)Callback;
  PoolWithTag[1].WorkerRoutine = (void (__fastcall *)(void *))Context;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PnpReportTargetDeviceChangeAsyncWorker;
  PoolWithTag->Parameter = PoolWithTag;
  PoolWithTag->List.Flink = 0LL;
  ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  return 259;
}
