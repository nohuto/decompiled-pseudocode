/*
 * XREFs of IoInvalidateDeviceState @ 0x140130E58
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __stdcall IoInvalidateDeviceState(PDEVICE_OBJECT PhysicalDeviceObject)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v5; // rcx
  unsigned __int16 *v6; // rdi
  _WORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_18;
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
    v5 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v5 )
    {
      v6 = (unsigned __int16 *)(v5 + 40);
      IoAddTriageDumpDataBlock(v5, 720LL);
      if ( *v6 )
      {
        IoAddTriageDumpDataBlock(v6, 2LL);
        IoAddTriageDumpDataBlock(*((_QWORD *)v6 + 1), *v6);
      }
      v7 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock(v7, 2LL);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v8 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v8 && *(_WORD *)(v8 + 56) )
      {
        IoAddTriageDumpDataBlock(v8 + 56, 2LL);
        v9 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v9 + 64), *(unsigned __int16 *)(v9 + 56));
      }
    }
LABEL_18:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  if ( DeviceNode[75] == 776 )
    PnpRequestDeviceAction(PhysicalDeviceObject, 11, 0, 0LL, 0LL, 0LL);
}
