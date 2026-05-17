/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x18003F6C0
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x18003F364 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180041058 (LdrpMergeLangFallbackLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x1800708D0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DB34 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x1800A82F0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A8BB0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpGetSystemDefaultUILanguage(_WORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // edi
  int v6; // eax
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v7 = 0;
  v8 = 0LL;
  v4 = 0;
  if ( a1 )
  {
    *a1 = 0;
    if ( !a2 && (v6 = RtlpCreateProcessRegistryInfo(&v8), v2 = v8, v4 = v6, v6 < 0)
      || (!v2 || !*(_WORD *)(v2 + 4) ? (v4 = -1073741595) : (v7 = *(_WORD *)(v2 + 4)), v4 < 0) )
    {
      v4 = NtQueryInstallUILanguage(&v7);
      if ( v4 < 0 )
        return (unsigned int)v4;
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        if ( v2 )
        {
          RtlpLoadInstallLanguageFallback(v2, v2 + 6, v2 + 8);
          *(_WORD *)(v2 + 4) = v7;
        }
      }
    }
    *a1 = v7;
    return (unsigned int)v4;
  }
  return 3221225485LL;
}
