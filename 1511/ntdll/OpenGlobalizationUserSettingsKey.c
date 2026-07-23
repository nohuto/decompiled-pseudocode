/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x180009598
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
  v6 = dword_180146398;
  if ( !dword_180145FA4 )
  {
    dword_180145FA4 = 1;
    if ( (MEMORY[0x7FFE02F0] & 0x100) == 0 )
      v6 = 1;
    dword_180146398 = v6;
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
