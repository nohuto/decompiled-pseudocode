/*
 * XREFs of IoInvalidateDeviceRelations @ 0x14009ECD4
 * Callers:
 *     PiSwProcessRemove @ 0x1404C36B0 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1404C3900 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessParentStartIrp @ 0x1404C8128 (PiSwProcessParentStartIrp.c)
 *     IopPnPDispatch @ 0x1404E7998 (IopPnPDispatch.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140641FDC (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14000794C (PnpRequestDeviceAction.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B3B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __stdcall IoInvalidateDeviceRelations(PDEVICE_OBJECT DeviceObject, DEVICE_RELATION_TYPE Type)
{
  _DWORD *DeviceNode; // rcx
  int v4; // edx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v7; // rcx
  unsigned __int16 *v8; // rdi
  _WORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  if ( !DeviceObject )
    goto LABEL_26;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(DeviceObject, DeviceObject->Size);
    DriverObject = DeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock(DriverObject, (unsigned int)DriverObject->Size);
      p_DriverName = &DeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock(p_DriverName, 2LL);
        IoAddTriageDumpDataBlock(
          DeviceObject->DriverObject->DriverName.Buffer,
          DeviceObject->DriverObject->DriverName.Length);
      }
    }
    v7 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v7 )
    {
      v8 = (unsigned __int16 *)(v7 + 40);
      IoAddTriageDumpDataBlock(v7, 720LL);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock(v8, 2LL);
        IoAddTriageDumpDataBlock(*((_QWORD *)v8 + 1), *v8);
      }
      v9 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock(v9, 2LL);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v10 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v10 )
      {
        if ( *(_WORD *)(v10 + 56) )
        {
          IoAddTriageDumpDataBlock(v10 + 56, 2LL);
          v11 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v11 + 64), *(unsigned __int16 *)(v11 + 56));
        }
      }
    }
LABEL_26:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  }
  switch ( Type )
  {
    case BusRelations:
      goto LABEL_8;
    case EjectionRelations:
      v4 = 20;
      goto LABEL_9;
    case PowerRelations:
      v4 = 5;
      goto LABEL_9;
    case SingleBusRelations:
LABEL_8:
      v4 = 9 - (Type != BusRelations);
LABEL_9:
      PnpRequestDeviceAction(DeviceObject, v4, 0, 0LL, 0LL, 0LL);
      return;
    case TransportRelations:
      v4 = 19;
      goto LABEL_9;
  }
}
