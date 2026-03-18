/*
 * XREFs of UsbhUpdateSqmFlags @ 0x1C0070000
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C0007FDC (UsbhUpdateUxdSettings.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_DeviceUsageNotification @ 0x1C00547F0 (UsbhPdoPnp_DeviceUsageNotification.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

void __fastcall UsbhUpdateSqmFlags(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  _QWORD *v6; // rdi
  _DWORD *v7; // rsi
  _QWORD *PoolWithTag; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  void *DeviceRegKey; // [rsp+B8h] [rbp+38h] BYREF

  v5 = PdoExt((__int64)DeviceObject, a2, a3, a4);
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v6 = 0LL;
  v7 = v5;
  if ( IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x1F0000u, &DeviceRegKey) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Ceip");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"DeviceInformation");
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x42554855u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        v9 = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               PoolWithTag,
               0x10u,
               &ResultLength);
        if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741772 )
        {
          v10 = (*((_DWORD *)v6 + 3) | v7[695]) & 0xFFFFFFF7;
          *((_DWORD *)v6 + 3) = v10;
          v7[695] = v10;
          RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"DeviceInformation", 4u, (char *)v6 + 12, 4u);
        }
      }
    }
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
