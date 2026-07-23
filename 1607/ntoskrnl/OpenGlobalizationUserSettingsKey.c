/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x1401328C8
 * Callers:
 *     NtSetDefaultLocale @ 0x140549180 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405493B0 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x140549964 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14022FB68 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlIsMultiSessionSku @ 0x1404E674C (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x140549B4C (RtlOpenCurrentUser.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        PHANDLE KeyHandle)
{
  int v6; // ecx
  BOOLEAN IsMultiSessionSku; // al
  __int64 v9; // rcx

  if ( !KeyHandle )
    return -1073741811;
  if ( dword_140328C38 )
  {
    v6 = dword_140341C94;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_140341C94;
    dword_140328C38 = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_140341C94 = v6;
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
