/*
 * XREFs of ExpGetCurrentUserUILanguage @ 0x14056CC50
 * Callers:
 *     NtQueryDefaultUILanguage @ 0x14056CBE8 (NtQueryDefaultUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x14014FC40 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x14014FC60 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     RtlUnicodeStringToInteger @ 0x140522AA0 (RtlUnicodeStringToInteger.c)
 *     ExpGetUILanguagePolicy @ 0x14056CD78 (ExpGetUILanguagePolicy.c)
 *     ExpIsValidUILanguage @ 0x1406EE5F4 (ExpIsValidUILanguage.c)
 */

NTSTATUS __fastcall ExpGetCurrentUserUILanguage(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v8; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v16; // [rsp+B4h] [rbp-4Ch]
  WCHAR SourceString[122]; // [rsp+BCh] [rbp-44h] BYREF

  result = OpenGlobalizationUserSettingsKey(a1, 0, a3, a4, &v8);
  v6 = result;
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MultiUILanguageId");
    RtlInitUnicodeString(&v11, L"Control Panel\\Desktop");
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.ObjectName = &v11;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    if ( (int)ExpGetUILanguagePolicy(v8, a2) < 0 )
    {
      v6 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      if ( v6 >= 0 )
      {
        v6 = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x100u,
               &ResultLength);
        if ( v6 >= 0 )
        {
          if ( v16 == 1 && (unsigned __int8)ExpIsValidUILanguage(SourceString) )
          {
            RtlInitUnicodeString(&String, SourceString);
            v6 = RtlUnicodeStringToInteger(&String, 0x10u, &Value);
            if ( v6 >= 0 )
              *a2 = Value;
          }
          else
          {
            v6 = -1073741823;
          }
        }
        ZwClose(KeyHandle);
      }
    }
    CloseGlobalizationUserSettingsKey((char *)v8);
    return v6;
  }
  return result;
}
