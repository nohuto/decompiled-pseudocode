/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x1401328A8
 * Callers:
 *     NtSetDefaultLocale @ 0x140549180 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405493B0 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x140549964 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
