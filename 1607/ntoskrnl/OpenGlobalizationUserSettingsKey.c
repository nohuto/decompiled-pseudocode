/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x140132358
 * Callers:
 *     NtSetDefaultLocale @ 0x140548C40 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x140548E70 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x140549424 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14022FD3C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlIsMultiSessionSku @ 0x1405037BC (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x14054960C (RtlOpenCurrentUser.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        PHANDLE KeyHandle)
{
  int v6; // ecx
  char IsMultiSessionSku; // al
  __int64 v9; // rcx

  if ( !KeyHandle )
    return -1073741811;
  if ( dword_140328BF8 )
  {
    v6 = dword_140341C4C;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_140341C4C;
    dword_140328BF8 = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_140341C4C = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(8u, KeyHandle);
  v9 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v9, a2, a3, KeyHandle);
  v9 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v9, a2, a3, KeyHandle);
  if ( (_DWORD)v9 == 1 )
    return -1073741822;
  return -1073741595;
}
