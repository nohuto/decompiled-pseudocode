/*
 * XREFs of IopInitializeSystemVariableService @ 0x1401423C8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 */

int IopInitializeSystemVariableService()
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp+37h] BYREF
  int v6; // [rsp+84h] [rbp+3Bh]
  int v7; // [rsp+88h] [rbp+3Fh]
  int v8; // [rsp+8Ch] [rbp+43h]

  KeyHandle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\WindowsTrustedRT\\Parameters");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Flags");
    result = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x10u,
               &ResultLength);
    if ( result >= 0 && v6 == 4 && v7 == 4 )
    {
      result = v8;
      IopSysEnvOverrideFlags = v8;
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
