/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x18007181C
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070C4C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x1800710B4 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712C8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180071A00 (RtlpLoadUserUIByPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800E77B0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800E7D0C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800EF23C (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F3970 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlOpenCurrentUser @ 0x180071890 (RtlOpenCurrentUser.c)
 *     RtlIsMultiSessionSku @ 0x180072070 (RtlIsMultiSessionSku.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180102AF0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE CurrentUserKey)
{
  int v6; // ecx
  BOOLEAN IsMultiSessionSku; // al
  int v9; // ecx
  int v10; // ecx

  if ( !CurrentUserKey )
    return -1073741811;
  if ( dword_18015309C )
  {
    v6 = dword_1801534E0;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_1801534E0;
    dword_18015309C = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_1801534E0 = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(DesiredAccess, CurrentUserKey);
  v9 = v6 - 1;
  if ( !v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess);
  v10 = v9 - 1;
  if ( !v10 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess);
  if ( v10 == 1 )
    return -1073741822;
  return -1073741595;
}
