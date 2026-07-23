/*
 * XREFs of IoReportResourceUsage @ 0x14062C168
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     IoReportResourceUsageInternal @ 0x14062C348 (IoReportResourceUsageInternal.c)
 */

NTSTATUS __stdcall IoReportResourceUsage(
        PUNICODE_STRING DriverClassName,
        PDRIVER_OBJECT DriverObject,
        PCM_RESOURCE_LIST DriverList,
        ULONG DriverListSize,
        PDEVICE_OBJECT DeviceObject,
        PCM_RESOURCE_LIST DeviceList,
        ULONG DeviceListSize,
        BOOLEAN OverrideConflict,
        PBOOLEAN ConflictDetected)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *v11; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rsi
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx

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
        v11 = DeviceObject->DriverObject;
        if ( v11 )
        {
          IoAddTriageDumpDataBlock((int)v11, v11->Size);
          p_DriverName = &DeviceObject->DriverObject->DriverName;
          if ( p_DriverName->Length )
          {
            IoAddTriageDumpDataBlock((int)p_DriverName, 2);
            IoAddTriageDumpDataBlock(
              (int)DeviceObject->DriverObject->DriverName.Buffer,
              DeviceObject->DriverObject->DriverName.Length);
          }
        }
        v13 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
        if ( v13 )
        {
          v14 = (unsigned __int16 *)(v13 + 40);
          IoAddTriageDumpDataBlock((int)v13, 720);
          if ( *v14 )
          {
            IoAddTriageDumpDataBlock((int)v14, 2);
            IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), *v14);
          }
          v15 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode + 56;
          if ( *v15 )
          {
            IoAddTriageDumpDataBlock((int)v15, 2);
            IoAddTriageDumpDataBlock(
              *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
              *((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
          }
          v16 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
          if ( v16 )
          {
            if ( *(_WORD *)(v16 + 56) )
            {
              IoAddTriageDumpDataBlock(v16 + 56, 2);
              v17 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), *(unsigned __int16 *)(v17 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, (ULONG_PTR)DriverObject, 0LL);
      }
    }
  }
  return IoReportResourceUsageInternal(0, (_DWORD)DriverObject, (_DWORD)DriverObject, (_DWORD)DriverList);
}
