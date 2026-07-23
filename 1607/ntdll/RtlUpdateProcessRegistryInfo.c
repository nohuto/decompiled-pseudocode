/*
 * XREFs of RtlUpdateProcessRegistryInfo @ 0x1800706B4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013D90 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D880 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x180013B84 (RtlpInitMuiCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070870 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x180070C20 (RtlpInitializeLangRegistryInfo.c)
 */

__int64 RtlUpdateProcessRegistryInfo()
{
  int v0; // ebx
  _QWORD *v1; // rdx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !g_RegInfo || *((_DWORD *)g_RegInfo + 3) != MEMORY[0x7FFE03A4] )
  {
    BaseAddress = 0LL;
    v0 = RtlpInitializeLangRegistryInfo(&BaseAddress);
    if ( v0 >= 0 )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection(&RegistryInfoCritSect);
      if ( g_RegInfo && *((_DWORD *)g_RegInfo + 3) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(BaseAddress);
      }
      else
      {
        v1 = BaseAddress;
        *((_QWORD *)BaseAddress + 13) = g_RegInfo;
        if ( g_RegInfo )
          v1[9] = *((_QWORD *)g_RegInfo + 9);
        g_RegInfo = v1;
      }
      RtlLeaveCriticalSection(&RegistryInfoCritSect);
    }
  }
  return (unsigned int)v0;
}
