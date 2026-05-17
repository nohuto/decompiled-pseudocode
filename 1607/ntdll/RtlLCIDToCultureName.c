/*
 * XREFs of RtlLCIDToCultureName @ 0x1800448B0
 * Callers:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800104D8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpComputeLangListCheckSum @ 0x180011954 (RtlpComputeLangListCheckSum.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003F364 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180041058 (LdrpMergeLangFallbackLists.c)
 *     GetNameFromLangListNode @ 0x180043374 (GetNameFromLangListNode.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180067188 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetFileMUIPath @ 0x180069AA0 (RtlGetFileMUIPath.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x180076C6C (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180082920 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D890 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlGetUILanguageInfo @ 0x1800E5AC0 (RtlGetUILanguageInfo.c)
 *     RtlUnicodeStringToLcid @ 0x1800E6058 (RtlUnicodeStringToLcid.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E6C60 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800E6FDC (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x1800F4B9C (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800F64AC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1800F6914 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x180040FD4 (RtlStringCbCopyW.c)
 *     RtlLcidToLocaleName @ 0x180042E80 (RtlLcidToLocaleName.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180044994 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 */

char __fastcall RtlLCIDToCultureName(unsigned int a1, __int64 a2)
{
  char v2; // bl
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int16 Length; // si
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int16 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 && a2 && a1 != 4096 )
  {
    if ( g_RegInfo
      && (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(g_RegInfo, (unsigned __int16)a1, 0LL, &v10) >= 0
      && (v6 = 28LL * v10, v7 = *(_QWORD *)(*(_QWORD *)(g_RegInfo + 24) + 16LL), *(__int16 *)(v7 + v6 + 6) > 0) )
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 16LL) + 2LL * *(__int16 *)(v7 + v6 + 6))));
      Length = DestinationString.Length;
      if ( DestinationString.Length <= *(_WORD *)(a2 + 2)
        && (int)RtlStringCbCopyW(*(_WORD **)(a2 + 8), *(unsigned __int16 *)(a2 + 2), (__int64)DestinationString.Buffer) >= 0 )
      {
        *(_WORD *)a2 = Length;
        return 1;
      }
    }
    else if ( (int)RtlLcidToLocaleName(a1, a2, 2, 0) >= 0 )
    {
      return 1;
    }
  }
  return v2;
}
