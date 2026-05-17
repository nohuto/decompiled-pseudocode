/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x180006D78
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x180004EE8 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x180005100 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180006844 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18003E2C8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpSetInstallLanguage @ 0x1800DE4C0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800DEA1C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800E5F7C (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800EABF0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
