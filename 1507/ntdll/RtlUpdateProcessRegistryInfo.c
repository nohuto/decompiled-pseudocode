/*
 * XREFs of RtlUpdateProcessRegistryInfo @ 0x1800476E4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18001D3C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x18001CD58 (RtlpInitMuiCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180047C10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x180048F30 (RtlpInitializeLangRegistryInfo.c)
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
