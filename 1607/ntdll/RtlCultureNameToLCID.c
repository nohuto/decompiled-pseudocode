/*
 * XREFs of RtlCultureNameToLCID @ 0x180043F70
 * Callers:
 *     LdrResFallbackLangList @ 0x18000FD94 (LdrResFallbackLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800104D8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010828 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180014890 (RtlpMuiRegTryToAppendLangId.c)
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x180039310 (LdrResSearchResource.c)
 *     RtlGetNeutralFallback @ 0x18003F59C (RtlGetNeutralFallback.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C30 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpLangFallbackListFindNode @ 0x180043CE0 (LdrpLangFallbackListFindNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044194 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180044478 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlGetFileMUIPath @ 0x180069AA0 (RtlGetFileMUIPath.c)
 *     GetLCIDFromLangListNode @ 0x180070ACC (GetLCIDFromLangListNode.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x180071E88 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180085190 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrLoadAlternateResourceModule @ 0x1800857B0 (LdrLoadAlternateResourceModule.c)
 *     LdrResRelease @ 0x180089970 (LdrResRelease.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DB34 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180094AB0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DF4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlGetUILanguageInfo @ 0x1800E5AC0 (RtlGetUILanguageInfo.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E6A40 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7250 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800F3D64 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800F48E0 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800F4FE8 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800F5790 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x1800F58D0 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800F5E08 (_RtlpMuiRegInitAnyLanguage.c)
 *     ResCultureNameToLCID @ 0x180103420 (ResCultureNameToLCID.c)
 * Callees:
 *     RtlLocaleNameToLcid @ 0x180040DB0 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180096DE0 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180098360 (_wcsicmp.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

char __fastcall RtlCultureNameToLCID(unsigned __int16 *a1, int *a2)
{
  char v2; // r8
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // bx
  const void *v6; // r9
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
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
  if ( !a1 )
    return v2;
  if ( !a2 )
    return v2;
  v4 = *a1;
  v5 = 0;
  if ( !*a1 )
    return v2;
  v6 = (const void *)*((_QWORD *)a1 + 1);
  if ( !v6 || v4 + 2 > 85 )
    return v2;
  v7 = v4;
  memmove(String2, v6, v4);
  v8 = v7 >> 1;
  if ( v8 >= 85 )
    _report_rangecheckfailure();
  v9 = g_RegInfo;
  String2[v8] = 0;
  if ( !v9 )
    return (int)RtlLocaleNameToLcid(String2, a2, 3) >= 0;
  v10 = *(_QWORD *)(v9 + 24);
  if ( !v10 || !*(_QWORD *)(v10 + 16) || !String2[0] )
    return (int)RtlLocaleNameToLcid(String2, a2, 3) >= 0;
  v11 = *(_QWORD *)(v9 + 32);
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
    return (int)RtlLocaleNameToLcid(String2, a2, 3) >= 0;
  v17 = *(_WORD *)(v10 + 6);
  if ( !v17 )
    return (int)RtlLocaleNameToLcid(String2, a2, 3) >= 0;
  v18 = *(_QWORD *)(v10 + 16);
  while ( *(_WORD *)(28LL * v5 + v18 + 6) != (_WORD)v12 )
  {
    if ( ++v5 >= v17 )
      return (int)RtlLocaleNameToLcid(String2, a2, 3) >= 0;
  }
  *a2 = *(unsigned __int16 *)(28LL * v5 + v18 + 4);
  return 1;
}
