/*
 * XREFs of PopReadShutdownPolicy @ 0x140233B48
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 */

int PopReadShutdownPolicy()
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp+37h] BYREF
  int v6; // [rsp+84h] [rbp+3Bh]
  char v7; // [rsp+8Ch] [rbp+43h]

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows NT");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"DontPowerOffAfterShutdown");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v6 == 4 )
    {
      PopShutdownPowerOffPolicy = v7 == 1;
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
