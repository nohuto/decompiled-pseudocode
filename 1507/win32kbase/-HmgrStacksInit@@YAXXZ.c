/*
 * XREFs of ?HmgrStacksInit@@YAXXZ @ 0x1C007D2B4
 * Callers:
 *     HmgCreate @ 0x1C007CEA4 (HmgCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

void HmgrStacksInit(void)
{
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v5; // [rsp+84h] [rbp-7Ch]
  int v6; // [rsp+8Ch] [rbp-74h]

  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"GDIEnableStackTrace");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v5 == 4 )
    {
      LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = v6 != 0;
    }
    RtlInitUnicodeString(&DestinationString, L"GDIEnableAltStackTrace");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v5 == 4 )
    {
      *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = v6 != 0;
    }
    RtlInitUnicodeString(&DestinationString, L"GDICaptureStackTraceForObjectType");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v5 == 4 )
    {
      *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = v6;
    }
    ZwClose(KeyHandle);
  }
}
