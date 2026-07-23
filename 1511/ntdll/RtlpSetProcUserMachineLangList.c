/*
 * XREFs of RtlpSetProcUserMachineLangList @ 0x180039D8C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeUserOrMachineLangList @ 0x180039CC8 (InitializeUserOrMachineLangList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18003D550 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18003D860 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180005200 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180006844 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpInitMuiCriticalSection @ 0x18003D4E4 (RtlpInitMuiCriticalSection.c)
 */

__int64 __fastcall RtlpSetProcUserMachineLangList(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v5; // edi
  __int64 v7; // rdx
  __int64 LanguageList; // rcx
  bool v9; // sf
  char v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v3 = a2;
  v5 = 0;
  v11 = 0LL;
  v10 = 0;
  if ( !a1 || (unsigned int)a2 > 1 )
    return 3221225485LL;
  if ( (_DWORD)a2 == 1 && *(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 56) && !(_DWORD)a2 )
    return 0LL;
  RtlpInitMuiCriticalSection(a1, a2, a3);
  RtlEnterCriticalSection(&RegistryInfoCritSect);
  if ( (!*(_QWORD *)(a1 + 64) || v3 != 1) && (!*(_QWORD *)(a1 + 56) || v3) )
  {
    v5 = RtlpMuiRegLoadPreferredUILanguages(a1, v7, v3, 3, &v10, &v11);
    LanguageList = v11;
    if ( !v11 )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, v3 != 1, a1);
      v11 = LanguageList;
      if ( !LanguageList )
        v5 = -1073741801;
    }
    v9 = v5 < 0;
    if ( v5 )
    {
      if ( v5 != -1073741801 && v10 )
        v5 = 0;
      v9 = v5 < 0;
    }
    if ( !v9 )
    {
      *(_DWORD *)(LanguageList + 40) |= 0x10u;
      *(_DWORD *)(LanguageList + 40) |= 0x40u;
      if ( v3 == 1 )
      {
        *(_QWORD *)(a1 + 64) = LanguageList;
        *(_DWORD *)a1 |= 0x20u;
      }
      else if ( !v3 )
      {
        *(_QWORD *)(a1 + 56) = LanguageList;
        *(_DWORD *)a1 |= 0x10u;
      }
    }
  }
  RtlLeaveCriticalSection(&RegistryInfoCritSect);
  return (unsigned int)v5;
}
