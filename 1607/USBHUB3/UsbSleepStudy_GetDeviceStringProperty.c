/*
 * XREFs of UsbSleepStudy_GetDeviceStringProperty @ 0x1C0033B38
 * Callers:
 *     UsbSleepStudy_RegisterPdo @ 0x1C0033494 (UsbSleepStudy_RegisterPdo.c)
 * Callees:
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall UsbSleepStudy_GetDeviceStringProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        PUNICODE_STRING DestinationString)
{
  void *v6; // rdi
  unsigned int v7; // eax
  int v8; // ebx
  PVOID PoolWithTag; // rax
  NTSTATUS v10; // eax
  ULONG BufferLength; // [rsp+68h] [rbp+20h] BYREF

  BufferLength = 0;
  v6 = 0LL;
  DbgPrint("UsbSleepStudy_GetDeviceStringProperty: Enter\r\n");
  DbgPrint("UsbSleepStudy_GetDeviceStringProperty: Device %#p\r\n", DeviceObject);
  DbgPrint("UsbSleepStudy_GetDeviceStringProperty: DeviceProperty %#010x\r\n", DeviceProperty);
  v7 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, &BufferLength);
  v8 = v7;
  if ( v7 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, BufferLength, 0x53535554u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DbgPrint("UsbSleepStudy_GetDeviceStringProperty: Failed to allocate for DeviceProperty %#010x\r\n", -1073741789);
      v8 = -1073741670;
      goto LABEL_12;
    }
    memset(PoolWithTag, 0, BufferLength);
    v10 = IoGetDeviceProperty(DeviceObject, DeviceProperty, BufferLength, v6, &BufferLength);
    v8 = v10;
    if ( v10 >= 0 )
    {
      RtlInitUnicodeString(DestinationString, (PCWSTR)v6);
      DbgPrint("UsbSleepStudy_GetDeviceStringProperty: PropertyString %wZ\r\n", DestinationString);
    }
    else
    {
      DbgPrint("UsbSleepStudy_GetDeviceStringProperty: Failed to fetch DeviceProperty %#010x\r\n", (unsigned int)v10);
    }
  }
  else
  {
    DbgPrint("UsbSleepStudy_GetDeviceStringProperty: IoGetDeviceProperty failed with %#010x\r\n", v7);
  }
  if ( v8 < 0 && v6 )
    ExFreePoolWithTag(v6, 0x53535554u);
LABEL_12:
  DbgPrint("UsbSleepStudy_GetDeviceStringProperty: Exit\r\n");
  return (unsigned int)v8;
}
