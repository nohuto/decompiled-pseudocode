/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x18007182C
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
 *     RtlOpenCurrentUser @ 0x1800718A0 (RtlOpenCurrentUser.c)
 *     RtlIsMultiSessionSku @ 0x180072080 (RtlIsMultiSessionSku.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180102BB0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // ecx
  char IsMultiSessionSku; // al
  int v10; // ecx
  int v11; // ecx

  if ( !a5 )
    return 3221225485LL;
  if ( dword_18015309C )
  {
    v7 = dword_1801534E0;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v7 = dword_1801534E0;
    dword_18015309C = 1;
    if ( !IsMultiSessionSku )
      v7 = 1;
    dword_1801534E0 = v7;
  }
  if ( !v7 )
    return RtlOpenCurrentUser(a1, a5);
  v10 = v7 - 1;
  if ( !v10 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a2, a3, a5);
  v11 = v10 - 1;
  if ( !v11 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a2, a3, a5);
  if ( v11 == 1 )
    return 3221225474LL;
  return 3221225701LL;
}
