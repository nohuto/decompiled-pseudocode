/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x140127754
 * Callers:
 *     NtSetDefaultLocale @ 0x14050D2C4 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x14050DAB0 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
