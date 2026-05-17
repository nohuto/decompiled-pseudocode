/*
 * XREFs of RtlpGetLocaleDataKey @ 0x1800E0828
 * Callers:
 *     RtlpGetUserLocaleName @ 0x1800E08D4 (RtlpGetUserLocaleName.c)
 * Callees:
 *     CloseGlobalizationUserSettingsKey @ 0x180049B04 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180049B2C (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 */

__int64 __fastcall RtlpGetLocaleDataKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // [rsp+78h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !gLocaleDataRegKey && (int)OpenGlobalizationUserSettingsKey(0x20019u, 0, a3, a4, (__int64)&v5) >= 0 )
  {
    if ( (int)NtOpenKey() >= 0 && _InterlockedCompareExchange64(&gLocaleDataRegKey, 0LL, 0LL) )
      NtClose(0LL);
    CloseGlobalizationUserSettingsKey(v5);
  }
  return gLocaleDataRegKey;
}
