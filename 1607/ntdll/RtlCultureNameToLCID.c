/*
 * XREFs of RtlCultureNameToLCID @ 0x180043F60
 * Callers:
 *     LdrResFallbackLangList @ 0x18000FD84 (LdrResFallbackLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800104C8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010818 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180014880 (RtlpMuiRegTryToAppendLangId.c)
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x180039300 (LdrResSearchResource.c)
 *     RtlGetNeutralFallback @ 0x18003F58C (RtlGetNeutralFallback.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpLangFallbackListFindNode @ 0x180043CD0 (LdrpLangFallbackListFindNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044184 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180044468 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlGetFileMUIPath @ 0x180069A90 (RtlGetFileMUIPath.c)
 *     GetLCIDFromLangListNode @ 0x180070ABC (GetLCIDFromLangListNode.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x180071E78 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180085180 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrLoadAlternateResourceModule @ 0x1800857A0 (LdrLoadAlternateResourceModule.c)
 *     LdrResRelease @ 0x180089960 (LdrResRelease.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DB24 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180094AA0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DE4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlGetUILanguageInfo @ 0x1800E5B80 (RtlGetUILanguageInfo.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E6B00 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7310 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetInstallLanguage @ 0x1800E77B0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800F3D64 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800F48E0 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800F4FE8 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800F5790 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x1800F58D0 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800F5E08 (_RtlpMuiRegInitAnyLanguage.c)
 *     ResCultureNameToLCID @ 0x180103360 (ResCultureNameToLCID.c)
 * Callees:
 *     RtlLocaleNameToLcid @ 0x180040DA0 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180096DD0 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // r8
  unsigned __int16 Length; // dx
  unsigned __int16 v5; // bx
  wchar_t *Buffer; // r9
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rsi
  int v12; // edi
  __int64 v13; // r14
  wchar_t *v14; // rcx
  __int64 v15; // rax
  unsigned __int16 v17; // r8
  __int64 v18; // rdx
  wchar_t String2[88]; // [rsp+30h] [rbp-E8h] BYREF

  v2 = 0;
  if ( !String )
    return v2;
  if ( !Lcid )
    return v2;
  Length = String->Length;
  v5 = 0;
  if ( !String->Length )
    return v2;
  Buffer = String->Buffer;
  if ( !Buffer || Length + 2 > 85 )
    return v2;
  v7 = Length;
  memmove(String2, Buffer, Length);
  v8 = v7 >> 1;
  if ( v8 >= 85 )
    _report_rangecheckfailure();
  v9 = g_RegInfo;
  String2[v8] = 0;
  if ( !v9 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v10 = v9[3];
  if ( !v10 || !*(_QWORD *)(v10 + 16) || !String2[0] )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v11 = v9[4];
  if ( !v11 )
    goto LABEL_17;
  v12 = 0;
  if ( !*(_WORD *)(v11 + 6) )
    goto LABEL_17;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = (wchar_t *)(*(_QWORD *)(v11 + 24) + 2LL * *(__int16 *)(v13 + *(_QWORD *)(v11 + 16)));
    if ( v14 == String2 || !wcsicmp(v14, String2) )
      break;
    ++v12;
    v13 += 2LL;
    if ( v12 >= *(unsigned __int16 *)(v11 + 6) )
      goto LABEL_17;
  }
  if ( v12 < 0 )
  {
LABEL_17:
    LOWORD(v12) = -1;
    if ( v11 )
    {
      v15 = -1LL;
      while ( String2[++v15] != 0 )
        ;
    }
  }
  if ( (v12 & 0x8000u) != 0 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v17 = *(_WORD *)(v10 + 6);
  if ( !v17 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v18 = *(_QWORD *)(v10 + 16);
  while ( *(_WORD *)(28LL * v5 + v18 + 6) != (_WORD)v12 )
  {
    if ( ++v5 >= v17 )
      return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  }
  *Lcid = *(unsigned __int16 *)(28LL * v5 + v18 + 4);
  return 1;
}
