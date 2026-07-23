/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x140127774
 * Callers:
 *     NtSetDefaultLocale @ 0x14050D2C4 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x14050DAB0 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     sub_140215C6C @ 0x140215C6C (sub_140215C6C.c)
 *     RtlIsMultiSessionSku @ 0x1403BE644 (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x14050DC98 (RtlOpenCurrentUser.c)
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
  if ( dword_140306994 )
  {
    v6 = dword_14031CCA0;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_14031CCA0;
    dword_140306994 = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_14031CCA0 = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(8u, KeyHandle);
  v9 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v9 )
    return sub_140215C6C(v9, a2, a3, KeyHandle);
  v9 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v9 )
    return sub_140215C6C(v9, a2, a3, KeyHandle);
  if ( (_DWORD)v9 == 1 )
    return -1073741822;
  return -1073741595;
}
