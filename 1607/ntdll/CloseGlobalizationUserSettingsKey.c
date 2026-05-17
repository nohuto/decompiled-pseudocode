/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x180071804
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070C5C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x1800710C4 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180071A10 (RtlpLoadUserUIByPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800E7C4C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800EF23C (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F3970 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
