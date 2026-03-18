/*
 * XREFs of IoGetDeviceInterfaces @ 0x140457D34
 * Callers:
 *     PnprIsMemoryDevice @ 0x1406902E0 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x14069038C (PnprIsProcessorDevice.c)
 *     VerifierIoGetDeviceInterfaces @ 0x140741F58 (VerifierIoGetDeviceInterfaces.c)
 *     IopFetchConfigurationInformation @ 0x1407B5F40 (IopFetchConfigurationInformation.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
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
