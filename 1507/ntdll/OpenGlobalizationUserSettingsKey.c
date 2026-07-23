/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x180049B2C
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
 *     <none>
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        HANDLE *a5)
{
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx

  if ( !a5 )
    return -1073741811;
  v6 = dword_180147708;
  if ( !dword_180146F24 )
  {
    dword_180146F24 = 1;
    if ( (MEMORY[0x7FFE02F0] & 0x100) == 0 )
      v6 = 1;
    dword_180147708 = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(DesiredAccess, a5);
  v8 = v6 - 1;
  if ( !v8 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess);
  v9 = v8 - 1;
  if ( !v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess);
  if ( v9 == 1 )
    return -1073741822;
  return -1073741595;
}
