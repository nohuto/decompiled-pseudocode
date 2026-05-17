/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x180014540
 * Callers:
 *     LdrpSetThreadPreferredLangList @ 0x1800134BC (LdrpSetThreadPreferredLangList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180013860 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003F6C0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlGetFileMUIPath @ 0x180069AA0 (RtlGetFileMUIPath.c)
 *     RtlpQueryDefaultUILanguage @ 0x1800708D0 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079C00 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007B0E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180088A20 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D890 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800E58F0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x1800E5AC0 (RtlGetUILanguageInfo.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800F5790 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x180013B94 (RtlpInitMuiCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpInitializeLangRegistryInfo @ 0x180070C30 (RtlpInitializeLangRegistryInfo.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // edi

  v1 = g_RegInfo;
  v2 = 0LL;
  v4 = 0;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    v4 = RtlpInitializeLangRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    v1 = g_RegInfo;
  }
  if ( a1 )
  {
    if ( v4 >= 0 )
      v2 = v1;
    *a1 = v2;
  }
  return (unsigned int)v4;
}
