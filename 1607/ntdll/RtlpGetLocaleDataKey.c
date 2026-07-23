/*
 * XREFs of RtlpGetLocaleDataKey @ 0x1800EF23C
 * Callers:
 *     RtlpGetUserLocaleName @ 0x1800EF2E8 (RtlpGetUserLocaleName.c)
 * Callees:
 *     CloseGlobalizationUserSettingsKey @ 0x1800717F4 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007181C (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 */

__int64 __fastcall RtlpGetLocaleDataKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  HANDLE CurrentUserKey; // [rsp+78h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  CurrentUserKey = 0LL;
  if ( !gLocaleDataRegKey && OpenGlobalizationUserSettingsKey(0x20019u, 0LL, a3, a4, &CurrentUserKey) >= 0 )
  {
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"68";
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0
      && _InterlockedCompareExchange64(&gLocaleDataRegKey, (signed __int64)KeyHandle, 0LL) )
    {
      NtClose(KeyHandle);
    }
    CloseGlobalizationUserSettingsKey((char *)CurrentUserKey);
  }
  return gLocaleDataRegKey;
}
