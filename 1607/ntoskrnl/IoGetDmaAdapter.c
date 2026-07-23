/*
 * XREFs of IoGetDmaAdapter @ 0x140578174
 * Callers:
 *     VfGetDmaAdapter @ 0x140707458 (VfGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     PnpQueryInterface @ 0x14050E494 (PnpQueryInterface.c)
 */

struct _DMA_ADAPTER *__stdcall IoGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  struct _DMA_ADAPTER *v3; // rbx
  _DWORD *DeviceNode; // rcx
  unsigned int v9; // eax
  NTSTATUS DeviceProperty; // eax
  int v11; // r8d
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v14; // rcx
  unsigned __int16 *v15; // rsi
  _WORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-C8h] BYREF
  USHORT v20; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B0h]
  void (__fastcall *v22)(__int64); // [rsp+58h] [rbp-A0h]
  __int64 (__fastcall *v23)(__int64, struct _DEVICE_DESCRIPTION *, PULONG); // [rsp+68h] [rbp-90h]
  _BYTE v24[20]; // [rsp+80h] [rbp-78h] BYREF
  int PropertyBuffer[11]; // [rsp+94h] [rbp-64h] BYREF

  v3 = 0LL;
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
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    off_1402F2618();
    if ( ((DeviceDescription->InterfaceType + 1) & 0xFFFFFFEF) == 0 )
    {
      if ( DeviceDescription->Version >= 3 )
      {
        v9 = 0;
        if ( DeviceDescription->Version == 3 )
          v9 = 64;
      }
      else
      {
        v9 = 40;
      }
      memmove(v24, DeviceDescription, v9);
      DeviceProperty = IoGetDeviceProperty(
                         PhysicalDeviceObject,
                         DevicePropertyLegacyBusType,
                         4u,
                         PropertyBuffer,
                         ResultLength);
      v11 = PropertyBuffer[0];
      DeviceDescription = (struct _DEVICE_DESCRIPTION *)v24;
      if ( DeviceProperty < 0 )
        v11 = PnpDefaultInterfaceType;
      PropertyBuffer[0] = v11;
    }
    if ( (int)PnpQueryInterface(PhysicalDeviceObject, (ULONG_PTR)&GUID_BUS_INTERFACE_STANDARD, 1u, 0x40u, 0LL, &v20) >= 0 )
    {
      if ( v23 )
        v3 = (struct _DMA_ADAPTER *)v23(v21, DeviceDescription, NumberOfMapRegisters);
      v22(v21);
    }
    off_1402F2618();
  }
  return v3;
}
