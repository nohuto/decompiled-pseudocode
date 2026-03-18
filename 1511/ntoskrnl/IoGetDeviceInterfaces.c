/*
 * XREFs of IoGetDeviceInterfaces @ 0x1404DD560
 * Callers:
 *     PnprIsMemoryDevice @ 0x14061056C (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x140610618 (PnprIsProcessorDevice.c)
 *     VerifierIoGetDeviceInterfaces @ 0x1406C0764 (VerifierIoGetDeviceInterfaces.c)
 *     IopFetchConfigurationInformation @ 0x14074F39C (IopFetchConfigurationInformation.c)
 *     VhdiMountVhdFile @ 0x140786C50 (VhdiMountVhdFile.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaces(
        const GUID *InterfaceClassGuid,
        PDEVICE_OBJECT PhysicalDeviceObject,
        ULONG Flags,
        PZZWSTR *SymbolicLinkList)
{
  int v5; // edx
  _DWORD *DeviceNode; // rdx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v10; // rcx
  unsigned __int16 *v11; // rdi
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx

  v5 = 0;
  if ( PhysicalDeviceObject )
  {
    DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock((int)PhysicalDeviceObject, PhysicalDeviceObject->Size);
      DriverObject = PhysicalDeviceObject->DriverObject;
      if ( DriverObject )
      {
        IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
        p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          IoAddTriageDumpDataBlock((int)p_DriverName, 2);
          IoAddTriageDumpDataBlock(
            (int)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
            PhysicalDeviceObject->DriverObject->DriverName.Length);
        }
      }
      v10 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
      if ( v10 )
      {
        v11 = (unsigned __int16 *)(v10 + 40);
        IoAddTriageDumpDataBlock((int)v10, 712);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((int)v11, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v11 + 1), *v11);
        }
        v12 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((int)v12, 2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
            *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        }
        v13 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        if ( v13 && *(_WORD *)(v13 + 56) )
        {
          IoAddTriageDumpDataBlock(v13 + 56, 2);
          v14 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 64), *(unsigned __int16 *)(v14 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    v5 = (_DWORD)DeviceNode + 40;
  }
  return IopGetDeviceInterfaces((_DWORD)InterfaceClassGuid, v5, Flags, 0, (__int64)SymbolicLinkList, 0LL);
}
