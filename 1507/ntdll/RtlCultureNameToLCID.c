/*
 * XREFs of RtlCultureNameToLCID @ 0x18001F170
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B314 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResFallbackLangList @ 0x18001BC14 (LdrResFallbackLangList.c)
 *     RtlGetNeutralFallback @ 0x18001D068 (RtlGetNeutralFallback.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18001E0B8 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001E1D8 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001E948 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18001EC2C (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     LdrpLangFallbackListFindNode @ 0x18001F008 (LdrpLangFallbackListFindNode.c)
 *     GetLCIDFromLangListNode @ 0x180048BFC (GetLCIDFromLangListNode.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18004A0F0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlGetFileMUIPath @ 0x180054700 (RtlGetFileMUIPath.c)
 *     LdrLoadAlternateResourceModule @ 0x180066760 (LdrLoadAlternateResourceModule.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800669C0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180074D60 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrResRelease @ 0x180081140 (LdrResRelease.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800818A4 (RtlpLoadInstallLanguageFallback.c)
 *     RtlGetUILanguageInfo @ 0x1800D4970 (RtlGetUILanguageInfo.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800D59A0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpMUIEnumerateFolder @ 0x1800D61B0 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetInstallLanguage @ 0x1800D66B0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800E6504 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E6AB0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800E74A0 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E7BB4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800E7DE0 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800E8750 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x1800E888C (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800E8DC4 (_RtlpMuiRegInitAnyLanguage.c)
 *     ResCultureNameToLCID @ 0x1800F9174 (ResCultureNameToLCID.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18001F2D0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlLocaleNameToLcid @ 0x18001F710 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180084230 (__report_rangecheckfailure.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // bl
  unsigned __int16 *Buffer; // rdx
  size_t Length; // rdi
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rdi
  __int16 v9; // r10
  unsigned __int16 v10; // r9
  unsigned __int16 v11; // dx
  __int64 v12; // r8
  _BYTE v14[16]; // [rsp+20h] [rbp-D8h] BYREF
  WCHAR LocaleName[88]; // [rsp+30h] [rbp-C8h] BYREF

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
  memmove(LocaleName, Buffer, Length);
  v6 = Length >> 1;
  if ( v6 >= 85 )
    _report_rangecheckfailure();
  v7 = g_RegInfo;
  LocaleName[v6] = 0;
  if ( !v7 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v8 = v7[3];
  if ( !v8 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  if ( !*(_QWORD *)(v8 + 16) )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  if ( !LocaleName[0] )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v9 = RtlpMuiRegGetOrAddStringToPool(v7[4], LocaleName, 0LL, v14);
  if ( v9 < 0 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v10 = *(_WORD *)(v8 + 6);
  v11 = 0;
  if ( !v10 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v12 = *(_QWORD *)(v8 + 16);
  while ( *(_WORD *)(28LL * v11 + v12 + 6) != v9 )
  {
    if ( ++v11 >= v10 )
      return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  }
  *Lcid = *(unsigned __int16 *)(28LL * v11 + v12 + 4);
  return 1;
}
