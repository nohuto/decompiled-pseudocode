/*
 * XREFs of ACPIGetD3Policy @ 0x1C000D400
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0067750 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ACPIGetD3Policy(__int64 a1, bool *a2)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  void *DeviceRegKey; // [rsp+40h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+98h] [rbp+2Fh] BYREF
  int v12; // [rsp+A4h] [rbp+3Bh]

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 728);
  DeviceRegKey = 0LL;
  result = IoOpenDeviceRegistryKey(v2, 1u, 0xF003Fu, &DeviceRegKey);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"e5b3b5ac-9725-4f78-963f-03dfb1d828c7");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    ZwClose(DeviceRegKey);
    if ( v5 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"D3ColdSupported");
      v5 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
      ZwClose(KeyHandle);
      if ( v5 >= 0 )
        *a2 = v12 != 0;
    }
    return v5;
  }
  return result;
}
