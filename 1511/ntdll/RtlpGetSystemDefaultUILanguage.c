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

__int64 __fastcall RtlpGetSystemDefaultUILanguage(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // edi
  int v7; // eax
  __int16 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  v8 = 0;
  v9 = 0LL;
  v5 = 0;
  if ( a1 )
  {
    *a1 = 0;
    if ( !a2 && (v7 = RtlpCreateProcessRegistryInfo(&v9, 0LL, a3), v3 = v9, v5 = v7, v7 < 0)
      || (!v3 || !*(_WORD *)(v3 + 4) ? (v5 = -1073741595) : (v8 = *(_WORD *)(v3 + 4)), v5 < 0) )
    {
      v5 = NtQueryInstallUILanguage(&v8);
      if ( v5 < 0 )
        return (unsigned int)v5;
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        if ( v3 )
        {
          RtlpLoadInstallLanguageFallback(v3, v3 + 6, v3 + 8);
          *(_WORD *)(v3 + 4) = v8;
        }
      }
    }
    *a1 = v8;
    return (unsigned int)v5;
  }
  return 3221225485LL;
}
