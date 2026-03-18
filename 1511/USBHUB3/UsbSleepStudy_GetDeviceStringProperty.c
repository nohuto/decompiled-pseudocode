/*
 * XREFs of UsbSleepStudy_GetDeviceStringProperty @ 0x1C00338F0
 * Callers:
 *     UsbSleepStudy_RegisterPdo @ 0x1C0033250 (UsbSleepStudy_RegisterPdo.c)
 * Callees:
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall UsbSleepStudy_GetDeviceStringProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        PUNICODE_STRING DestinationString)
{
  NTSTATUS v6; // ebx
  PVOID PoolWithTag; // rax
  void *v8; // rdi
  unsigned int v9; // ebx
  NTSTATUS v10; // eax
  ULONG BufferLength; // [rsp+68h] [rbp+20h] BYREF

  BufferLength = 0;
  DbgPrint("UsbSleepStudy_GetDeviceStringProperty: Enter\r\n");
  DbgPrint("UsbSleepStudy_GetDeviceStringProperty: Device %#p\r\n", DeviceObject);
  DbgPrint("UsbSleepStudy_GetDeviceStringProperty: DeviceProperty %#010x\r\n", DeviceProperty);
  v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, &BufferLength);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, BufferLength, 0x53535554u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, BufferLength);
    v10 = IoGetDeviceProperty(DeviceObject, DeviceProperty, BufferLength, v8, &BufferLength);
    v9 = v10;
    if ( v10 >= 0 )
    {
      RtlInitUnicodeString(DestinationString, (PCWSTR)v8);
      DbgPrint("UsbSleepStudy_GetDeviceStringProperty: PropertyString %wZ\r\n", DestinationString);
    }
    else
    {
      DbgPrint("UsbSleepStudy_GetDeviceStringProperty: Failed to fetch DeviceProperty %#010x\r\n", v10);
    }
  }
  else
  {
    DbgPrint("UsbSleepStudy_GetDeviceStringProperty: Failed to allocate for DeviceProperty %#010x\r\n", v6);
    v9 = -1073741670;
  }
  DbgPrint("UsbSleepStudy_GetDeviceStringProperty: Exit\r\n");
  return v9;
}
