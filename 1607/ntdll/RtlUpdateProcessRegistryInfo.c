/*
 * XREFs of RtlUpdateProcessRegistryInfo @ 0x1800706C4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D890 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x180013B94 (RtlpInitMuiCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070880 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x180070C30 (RtlpInitializeLangRegistryInfo.c)
 */

__int64 RtlUpdateProcessRegistryInfo()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !g_RegInfo || *(_DWORD *)(g_RegInfo + 12) != MEMORY[0x7FFE03A4] )
  {
    v3 = 0LL;
    v0 = RtlpInitializeLangRegistryInfo(&v3);
    if ( v0 >= 0 )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
      if ( g_RegInfo && *(_DWORD *)(g_RegInfo + 12) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(v3);
      }
      else
      {
        v1 = v3;
        *(_QWORD *)(v3 + 104) = g_RegInfo;
        if ( g_RegInfo )
          *(_QWORD *)(v1 + 72) = *(_QWORD *)(g_RegInfo + 72);
        g_RegInfo = v1;
      }
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    }
  }
  return (unsigned int)v0;
}
