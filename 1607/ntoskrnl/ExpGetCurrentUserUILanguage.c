/*
 * XREFs of ExpGetCurrentUserUILanguage @ 0x140549424
 * Callers:
 *     NtQueryDefaultUILanguage @ 0x1405493BC (NtQueryDefaultUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x140132338 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x140132358 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
 *     RtlUnicodeStringToInteger @ 0x1404B8E10 (RtlUnicodeStringToInteger.c)
 *     ExpGetUILanguagePolicy @ 0x14054954C (ExpGetUILanguagePolicy.c)
 *     ExpIsValidUILanguage @ 0x1406AB644 (ExpIsValidUILanguage.c)
 */

NTSTATUS __fastcall ExpGetCurrentUserUILanguage(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE v9; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v16; // [rsp+B4h] [rbp-4Ch]
  WCHAR SourceString[122]; // [rsp+BCh] [rbp-44h] BYREF

  result = OpenGlobalizationUserSettingsKey(a1, 0, a3, a4, &v9);
  v6 = result;
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MultiUILanguageId");
    RtlInitUnicodeString(&v11, L"Control Panel\\Desktop");
    ObjectAttributes.RootDirectory = v9;
    ObjectAttributes.ObjectName = &v11;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    if ( (int)ExpGetUILanguagePolicy(v9, a2) < 0 )
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
    CloseGlobalizationUserSettingsKey((char *)v9);
    return v6;
  }
  return result;
}
