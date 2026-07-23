/*
 * XREFs of RtlCultureNameToLCID @ 0x18001CFF0
 * Callers:
 *     LdrResRelease @ 0x180003E40 (LdrResRelease.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180019B9C (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001B8EC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpLangFallbackListFindNode @ 0x18001CD90 (LdrpLangFallbackListFindNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001D214 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18001D4F0 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 *     LdrResFallbackLangList @ 0x18003A1E8 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003A5C8 (LdrpLoadResourceFromAlternativeModule.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003BB00 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     GetLCIDFromLangListNode @ 0x18003BE24 (GetLCIDFromLangListNode.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18003E62C (RtlpMuiRegGetLanguageSpec.c)
 *     RtlGetNeutralFallback @ 0x18003E900 (RtlGetNeutralFallback.c)
 *     RtlGetFileMUIPath @ 0x18003F210 (RtlGetFileMUIPath.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180080990 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrLoadAlternateResourceModule @ 0x180082AD0 (LdrLoadAlternateResourceModule.c)
 *     RtlpLoadInstallLanguageFallback @ 0x180089484 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800931CC (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800934CC (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlGetUILanguageInfo @ 0x1800DC890 (RtlGetUILanguageInfo.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800DD810 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpMUIEnumerateFolder @ 0x1800DE020 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetInstallLanguage @ 0x1800DE4C0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800EAFE4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800EBB60 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800EC274 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800ECA20 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x1800ECB5C (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800ED094 (_RtlpMuiRegInitAnyLanguage.c)
 *     ResCultureNameToLCID @ 0x1800F8A8C (ResCultureNameToLCID.c)
 * Callees:
 *     RtlLocaleNameToLcid @ 0x18001C1C0 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800959E0 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180096F90 (_wcsicmp.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // bl
  unsigned __int16 *Buffer; // rdx
  size_t Length; // rdi
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int16 v10; // si
  int v11; // edi
  __int64 v12; // r15
  wchar_t *v13; // rcx
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // dx
  __int64 v16; // r8
  __int64 v18; // rax
  wchar_t String2[88]; // [rsp+30h] [rbp-F8h] BYREF

  v2 = 0;
  if ( !String )
    return v2;
  if ( !Lcid )
    return v2;
  if ( !String->Length )
    return v2;
  Buffer = String->Buffer;
  if ( !Buffer || String->Length + 2 > 85 )
    return v2;
  Length = String->Length;
  memmove(String2, Buffer, Length);
  v6 = Length >> 1;
  if ( v6 >= 85 )
    _report_rangecheckfailure();
  v7 = g_RegInfo;
  String2[v6] = 0;
  if ( !v7 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v8 = v7[3];
  if ( !v8 || !*(_QWORD *)(v8 + 16) || !String2[0] )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v9 = v7[4];
  v10 = -1;
  if ( v9 && (v11 = 0, *(_WORD *)(v9 + 6)) )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (wchar_t *)(*(_QWORD *)(v9 + 24) + 2LL * *(__int16 *)(v12 + *(_QWORD *)(v9 + 16)));
      if ( v13 == String2 || !wcsicmp(v13, String2) )
        break;
      ++v11;
      v12 += 2LL;
      if ( v11 >= *(unsigned __int16 *)(v9 + 6) )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    v11 = -1;
  }
  if ( v11 < 0 )
  {
    if ( v9 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( String2[v18] );
    }
  }
  else
  {
    v10 = v11;
  }
  if ( v10 < 0 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v14 = *(_WORD *)(v8 + 6);
  v15 = 0;
  if ( !v14 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v16 = *(_QWORD *)(v8 + 16);
  while ( *(_WORD *)(28LL * v15 + v16 + 6) != v10 )
  {
    if ( ++v15 >= v14 )
      return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  }
  *Lcid = *(unsigned __int16 *)(28LL * v15 + v16 + 4);
  return 1;
}
