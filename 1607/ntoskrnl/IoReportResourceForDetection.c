/*
 * XREFs of IoReportResourceForDetection @ 0x14062BF88
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     IoReportResourceUsageInternal @ 0x14062C348 (IoReportResourceUsageInternal.c)
 */

NTSTATUS __stdcall IoReportResourceForDetection(
        PDRIVER_OBJECT DriverObject,
        PCM_RESOURCE_LIST DriverList,
        ULONG DriverListSize,
        PDEVICE_OBJECT DeviceObject,
        PCM_RESOURCE_LIST DeviceList,
        ULONG DeviceListSize,
        PBOOLEAN ConflictDetected)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *v10; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v12; // rcx
  unsigned __int16 *v13; // rsi
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx

  if ( DeviceObject )
  {
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        if ( DriverObject )
        {
          IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
          if ( DriverObject->DriverName.Length )
          {
            IoAddTriageDumpDataBlock((_DWORD)DriverObject + 56, 2);
            IoAddTriageDumpDataBlock((int)DriverObject->DriverName.Buffer, DriverObject->DriverName.Length);
          }
        }
        IoAddTriageDumpDataBlock((int)DeviceObject, DeviceObject->Size);
        v10 = DeviceObject->DriverObject;
        if ( v10 )
        {
          IoAddTriageDumpDataBlock((int)v10, v10->Size);
          p_DriverName = &DeviceObject->DriverObject->DriverName;
          if ( p_DriverName->Length )
          {
            IoAddTriageDumpDataBlock((int)p_DriverName, 2);
            IoAddTriageDumpDataBlock(
              (int)DeviceObject->DriverObject->DriverName.Buffer,
              DeviceObject->DriverObject->DriverName.Length);
          }
        }
        v12 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
        if ( v12 )
        {
          v13 = (unsigned __int16 *)(v12 + 40);
          IoAddTriageDumpDataBlock((int)v12, 720);
          if ( *v13 )
          {
            IoAddTriageDumpDataBlock((int)v13, 2);
            IoAddTriageDumpDataBlock(*((_QWORD *)v13 + 1), *v13);
          }
          v14 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode + 56;
          if ( *v14 )
          {
            IoAddTriageDumpDataBlock((int)v14, 2);
            IoAddTriageDumpDataBlock(
              *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
              *((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
          }
          v15 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
          if ( v15 )
          {
            if ( *(_WORD *)(v15 + 56) )
            {
              IoAddTriageDumpDataBlock(v15 + 56, 2);
              v16 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), *(unsigned __int16 *)(v16 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, (ULONG_PTR)DriverObject, 0LL);
      }
    }
  }
  return IoReportResourceUsageInternal(3, (_DWORD)DriverList, (_DWORD)DriverObject, (_DWORD)DriverList);
}
