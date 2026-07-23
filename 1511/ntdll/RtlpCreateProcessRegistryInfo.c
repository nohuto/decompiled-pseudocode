/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x18003B8A0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180039B90 (RtlpQueryDefaultUILanguage.c)
 *     LdrpSetThreadPreferredLangList @ 0x18003B354 (LdrpSetThreadPreferredLangList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003B530 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18003D860 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18003DF80 (RtlGetUserPreferredUILanguages.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003EB40 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlGetFileMUIPath @ 0x18003F210 (RtlGetFileMUIPath.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180084820 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180088F80 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800DC6C0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x1800DC890 (RtlGetUILanguageInfo.c)
 *     RtlpCleanupRegistryKeys @ 0x1800DD3A0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800DE4C0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800ECA20 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpInitMuiCriticalSection @ 0x18003D4E4 (RtlpInitMuiCriticalSection.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18003ED50 (RtlpInitializeLangRegistryInfo.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(_QWORD *a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rax
  PVOID v4; // rbx
  int v6; // edi

  v3 = g_RegInfo;
  v4 = 0LL;
  v6 = 0;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection(a1, a2, a3);
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    v6 = RtlpInitializeLangRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    v3 = g_RegInfo;
  }
  if ( a1 )
  {
    if ( v6 >= 0 )
      v4 = v3;
    *a1 = v4;
  }
  return (unsigned int)v6;
}
