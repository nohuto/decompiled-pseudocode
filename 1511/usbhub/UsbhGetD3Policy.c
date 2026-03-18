/*
 * XREFs of UsbhGetD3Policy @ 0x1C0006F34
 * Callers:
 *     UsbhReadPdoRegistryKeys @ 0x1C0006CC0 (UsbhReadPdoRegistryKeys.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 */

int __fastcall UsbhGetD3Policy(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rax
  __int64 v3; // rax
  NTSTATUS v4; // ebx
  NTSTATUS v5; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+88h] [rbp+2Fh] BYREF
  int v13; // [rsp+94h] [rbp+3Bh]

  DeviceRegKey = 0LL;
  v2 = PdoExt(DeviceObject);
  *(_DWORD *)(v2 + 1412) &= ~0x400000u;
  LODWORD(v3) = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0xF003Fu, &DeviceRegKey);
  if ( (int)v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"e5b3b5ac-9725-4f78-963f-03dfb1d828c7");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    LODWORD(v3) = ZwClose(DeviceRegKey);
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"D3ColdSupported");
      v5 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
      LODWORD(v3) = ZwClose(KeyHandle);
      if ( v5 >= 0 )
      {
        if ( v13 )
        {
          v3 = PdoExt(DeviceObject);
          *(_DWORD *)(v3 + 1412) |= 0x400000u;
        }
      }
    }
  }
  return v3;
}
