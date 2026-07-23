/*
 * XREFs of IoRequestDeviceEjectEx @ 0x1401CCCF0
 * Callers:
 *     IoRequestDeviceEject @ 0x1401CCCE0 (IoRequestDeviceEject.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoRequestDeviceEjectEx(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PIO_DEVICE_EJECT_CALLBACK Callback,
        PVOID Context,
        PDRIVER_OBJECT DriverObject)
{
  _DWORD *DeviceNode; // rcx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  const void **v11; // rbx
  struct _DRIVER_OBJECT *v12; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v14; // rcx
  unsigned __int16 *v15; // rdi
  _WORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_20;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)PhysicalDeviceObject, PhysicalDeviceObject->Size);
    v12 = PhysicalDeviceObject->DriverObject;
    if ( v12 )
    {
      IoAddTriageDumpDataBlock((int)v12, v12->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((int)p_DriverName, 2);
        IoAddTriageDumpDataBlock(
          (int)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v14 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v14 )
    {
      v15 = (unsigned __int16 *)(v14 + 40);
      IoAddTriageDumpDataBlock((int)v14, 720);
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((int)v15, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v15 + 1), *v15);
      }
      v16 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((int)v16, 2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v17 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v17 && *(_WORD *)(v17 + 56) )
      {
        IoAddTriageDumpDataBlock(v17 + 56, 2);
        v18 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), *(unsigned __int16 *)(v18 + 56));
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5D8uLL, 0x46706E50u);
  if ( !PoolWithTag )
    return -1073741670;
  v11 = (const void **)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  PoolWithTag->List.Flink = (struct _LIST_ENTRY *)Callback;
  PoolWithTag->List.Blink = (struct _LIST_ENTRY *)Context;
  memmove(&PoolWithTag[2], v11[6], *((unsigned __int16 *)v11 + 20));
  *((_WORD *)&PoolWithTag[2].List.Flink + ((unsigned __int64)*((unsigned __int16 *)v11 + 20) >> 1)) = 0;
  if ( DriverObject )
    ObfReferenceObjectWithTag(DriverObject, 0x746C6644u);
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))DriverObject;
  LODWORD(PoolWithTag[14].WorkerRoutine) = 0;
  WORD2(PoolWithTag[14].WorkerRoutine) = 0;
  PoolWithTag[1].WorkerRoutine = (void (__fastcall *)(void *))PnpRequestDeviceEjectExWorker;
  PoolWithTag[1].Parameter = PoolWithTag;
  PoolWithTag[1].List.Flink = 0LL;
  ExQueueWorkItem(PoolWithTag + 1, DelayedWorkQueue);
  return 0;
}
