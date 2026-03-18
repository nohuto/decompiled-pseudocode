/*
 * XREFs of ?bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ @ 0x1C00D51BC
 * Callers:
 *     GreDwmStartup @ 0x1C00D4D7C (GreDwmStartup.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

_BOOL8 bDwmDeviceBitmapsEnabledForMultiAdapter(void)
{
  BOOL v0; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v7; // [rsp+84h] [rbp-7Ch]
  int v8; // [rsp+8Ch] [rbp-74h]

  v0 = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\DWM");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"DisableDeviceBitmapsForMultiAdapter");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v7 == 4 )
    {
      v0 = v8 == 0;
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
