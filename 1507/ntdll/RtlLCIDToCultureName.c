/*
 * XREFs of RtlLCIDToCultureName @ 0x18001ECA0
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x18001D184 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x18001E368 (LdrpMergeLangFallbackLists.c)
 *     GetNameFromLangListNode @ 0x18001E8A0 (GetNameFromLangListNode.c)
 *     RtlpComputeLangListCheckSum @ 0x180050794 (RtlpComputeLangListCheckSum.c)
 *     RtlGetFileMUIPath @ 0x180054700 (RtlGetFileMUIPath.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800669C0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x180067018 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800731F0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800D44C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetUILanguageInfo @ 0x1800D4970 (RtlGetUILanguageInfo.c)
 *     RtlUnicodeStringToLcid @ 0x1800D4F0C (RtlUnicodeStringToLcid.c)
 *     RtlpCleanupRegistryKeys @ 0x1800D5480 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800D5BC0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800D5F3C (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x1800D66B0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x1800E775C (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800E947C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1800E98F8 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001ED84 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x18001F420 (RtlLcidToLocaleName.c)
 *     RtlStringCbCopyW @ 0x18001F684 (RtlStringCbCopyW.c)
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
        && (int)RtlStringCbCopyW(*(_QWORD *)(a2 + 8), *(unsigned __int16 *)(a2 + 2), DestinationString.Buffer) >= 0 )
      {
        *(_WORD *)a2 = Length;
        return 1;
      }
    }
    else if ( (int)RtlLcidToLocaleName(a1, a2, 2LL) >= 0 )
    {
      return 1;
    }
  }
  return v2;
}
