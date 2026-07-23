/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x14014FC60
 * Callers:
 *     NtSetDefaultLocale @ 0x14056C478 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x14056C694 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x14056CC50 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     sub_140265DD0 @ 0x140265DD0 (sub_140265DD0.c)
 *     RtlIsMultiSessionSku @ 0x14040FE94 (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x14056CE38 (RtlOpenCurrentUser.c)
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
  if ( dword_140356CA4 )
  {
    v6 = dword_14036D028;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_14036D028;
    dword_140356CA4 = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_14036D028 = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(8u, KeyHandle);
  v9 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v9 )
    return sub_140265DD0(v9, a2, a3, KeyHandle);
  v9 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v9 )
    return sub_140265DD0(v9, a2, a3, KeyHandle);
  if ( (_DWORD)v9 == 1 )
    return -1073741822;
  return -1073741595;
}
