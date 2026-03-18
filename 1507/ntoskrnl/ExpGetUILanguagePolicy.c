/*
 * XREFs of ExpGetUILanguagePolicy @ 0x14056CD78
 * Callers:
 *     ExpGetCurrentUserUILanguage @ 0x14056CC50 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     RtlUnicodeStringToInteger @ 0x140522AA0 (RtlUnicodeStringToInteger.c)
 *     ExpIsValidUILanguage @ 0x1406EE5F4 (ExpIsValidUILanguage.c)
 */

__int64 __fastcall ExpGetUILanguagePolicy(void *a1, _WORD *a2)
{
  NTSTATUS v4; // ebx
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v10; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v13; // [rsp+A4h] [rbp-5Ch]
  unsigned int v14; // [rsp+A8h] [rbp-58h]
  WCHAR SourceString[122]; // [rsp+ACh] [rbp-54h] BYREF

  RtlInitUnicodeString(&DestinationString, L"MultiUILanguageId");
  RtlInitUnicodeString(&v10, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    v4 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength);
    if ( v4 >= 0 )
    {
      if ( v14 > 2 && v13 == 1 && (unsigned __int8)ExpIsValidUILanguage(SourceString) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v4 = RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
        if ( v4 >= 0 )
          *a2 = Value;
      }
      else
      {
        v4 = -1073741823;
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v4;
}
