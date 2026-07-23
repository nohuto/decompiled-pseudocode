/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001B8EC
 * Callers:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001D714 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003BB00 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18003D860 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18003DF80 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetNeutralFallback @ 0x18003E900 (RtlGetNeutralFallback.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180068DE0 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpGetInstalledLanguageType @ 0x180089190 (RtlpGetInstalledLanguageType.c)
 *     RtlGetUILanguageInfo @ 0x1800DC890 (RtlGetUILanguageInfo.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800DD254 (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpCleanupRegistryKeys @ 0x1800DD3A0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetAlternateCodePage @ 0x1800E5CF0 (RtlpGetAlternateCodePage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800EE3A0 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x18001B9DC (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001D714 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(__int64 a1, const WCHAR *a2, char a3, _WORD *a4)
{
  unsigned int InstalledLanguageIndexByLangId; // ebx
  char v9; // r15
  __int64 v10; // rsi
  int v12; // ecx
  __int64 v13; // r10
  __int64 v14; // rdx
  __int16 v15; // r8
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  InstalledLanguageIndexByLangId = -1073741772;
  v9 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 24);
  if ( (int)RtlpMuiRegGetOrAddString(a1, a2, 0LL, &Lcid) >= 0 )
  {
    v12 = 0;
    if ( *(_WORD *)(v10 + 6) )
    {
      v13 = *(_QWORD *)(v10 + 16);
      do
      {
        v14 = 28LL * v12;
        if ( *(_WORD *)(v14 + v13 + 6) == (_WORD)Lcid )
        {
          v15 = *(_WORD *)(v14 + v13);
          if ( (v15 & 0x1020) == 0x20 )
          {
            if ( a4 )
            {
              *a4 = v12;
              return 0LL;
            }
          }
          else if ( (v15 & 0x1000) != 0 )
          {
            v9 = 1;
          }
        }
        ++v12;
      }
      while ( v12 < *(unsigned __int16 *)(v10 + 6) );
    }
  }
  if ( a3 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
    {
      if ( Lcid != 4096 )
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(
                                           a1,
                                           (unsigned __int16)Lcid,
                                           0LL,
                                           a4);
    }
  }
  if ( v9 && InstalledLanguageIndexByLangId == -1073741772 )
    return 3221225659LL;
  else
    return InstalledLanguageIndexByLangId;
}
