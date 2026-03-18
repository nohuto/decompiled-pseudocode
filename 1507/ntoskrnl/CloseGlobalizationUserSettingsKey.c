/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x14014FC40
 * Callers:
 *     NtSetDefaultLocale @ 0x14056C478 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x14056C694 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x14056CC50 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
