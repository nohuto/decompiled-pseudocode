/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x140132338
 * Callers:
 *     NtSetDefaultLocale @ 0x140548C40 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x140548E70 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x140549424 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
