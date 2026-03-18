/*
 * XREFs of PipCheckComputerSupported @ 0x1405FF62C
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x140510B28 (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 */

bool __fastcall PipCheckComputerSupported(PCWSTR SourceString)
{
  NTSTATUS v2; // edi
  ULONG ResultLength; // [rsp+38h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+88h] [rbp+37h] BYREF

  *(_DWORD *)&DestinationString.Length = 7864438;
  ResultLength = 0;
  DestinationString.Buffer = L"\\Registry\\Machine\\System\\HardwareConfig\\Current\\ComputerIds";
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v2 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValueBasicInformation,
           KeyValueInformation,
           0x10u,
           &ResultLength);
    if ( v2 == -2147483643 )
      v2 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v2 >= 0;
}
