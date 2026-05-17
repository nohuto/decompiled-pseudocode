/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x180049B04
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180048F5C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x1800493C4 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800495D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180049C70 (RtlpLoadUserUIByPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800D66B0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800D6C0C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800E0828 (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800E6110 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
