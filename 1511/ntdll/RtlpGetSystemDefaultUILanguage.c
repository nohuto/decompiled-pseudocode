/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x18003EB40
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18001C3DC (LdrpMergeLangFallbackLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x180039B90 (RtlpQueryDefaultUILanguage.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003E6C8 (RtlpAddNeutralsToMergedList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800DD3A0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x180089484 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x1800A6F50 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A77F0 (NtQueryInstallUILanguage.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlpGetSystemDefaultUILanguage(LANGID DefaultUILanguageId, PLCID Lcid)
{
  __int64 v2; // r8
  PLCID v3; // rbx
  LANGID *v4; // rsi
  int v5; // edi
  int v7; // eax
  LANGID InstallUILanguageId; // [rsp+40h] [rbp+8h] BYREF
  DWORD *v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = Lcid;
  InstallUILanguageId = 0;
  v4 = (LANGID *)DefaultUILanguageId;
  v9 = 0LL;
  v5 = 0;
  if ( DefaultUILanguageId )
  {
    *(_WORD *)DefaultUILanguageId = 0;
    if ( !Lcid && (v7 = RtlpCreateProcessRegistryInfo(&v9, 0LL, v2), v3 = v9, v5 = v7, v7 < 0)
      || (!v3 || !*((_WORD *)v3 + 2) ? (v5 = -1073741595) : (InstallUILanguageId = *((_WORD *)v3 + 2)), v5 < 0) )
    {
      v5 = NtQueryInstallUILanguage(&InstallUILanguageId);
      if ( v5 < 0 )
        return v5;
      if ( NtIsUILanguageComitted() >= 0 )
      {
        if ( v3 )
        {
          RtlpLoadInstallLanguageFallback(v3, (char *)v3 + 6, v3 + 2);
          *((_WORD *)v3 + 2) = InstallUILanguageId;
        }
      }
    }
    *v4 = InstallUILanguageId;
    return v5;
  }
  return -1073741811;
}
