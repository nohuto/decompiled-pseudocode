/*
 * XREFs of ExpIsValidUILanguage @ 0x1406AB644
 * Callers:
 *     ExpGetCurrentUserUILanguage @ 0x140549424 (ExpGetCurrentUserUILanguage.c)
 *     ExpGetUILanguagePolicy @ 0x14054954C (ExpGetUILanguagePolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
 */

bool __fastcall ExpIsValidUILanguage(PCWSTR SourceString)
{
  bool v1; // bl
  int v2; // edx
  PCWSTR v3; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v10; // [rsp+84h] [rbp-7Ch]
  __int16 v11; // [rsp+8Ch] [rbp-74h]

  v1 = 0;
  v2 = 0;
  if ( *SourceString )
  {
    v3 = SourceString;
    do
    {
      ++v2;
      ++v3;
    }
    while ( *v3 );
    if ( v2 >= 8 )
      SourceString += 4;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1402F4B98;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v10 == 1 )
    {
      v1 = v11 == 49;
    }
    ZwClose(KeyHandle);
  }
  return v1;
}
