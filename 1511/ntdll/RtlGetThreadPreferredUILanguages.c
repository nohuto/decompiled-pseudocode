/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180019DB0
 * Callers:
 *     LdrpSetThreadPreferredLangList @ 0x18003B354 (LdrpSetThreadPreferredLangList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003B530 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x18003F210 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlpMuiRegDupLanguageList @ 0x1800046DC (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180006844 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpComputeLangListCheckSum @ 0x1800107E8 (RtlpComputeLangListCheckSum.c)
 *     LdrpCreateLangFallbackList @ 0x18001A418 (LdrpCreateLangFallbackList.c)
 *     LdrpMergeLangFallbackLists @ 0x18001C3DC (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18001D9B0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpSetProcUserMachineLangList @ 0x180039D8C (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180039EE8 (InitializeTEBUserLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18003D4E4 (RtlpInitMuiCriticalSection.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003DA68 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003E6C8 (RtlpAddNeutralsToMergedList.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18003ED50 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18003F1A4 (RtlpSetProcMergedLangList.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180068DE0 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180083270 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180084C2C (RtlUpdateProcessRegistryInfo.c)
 */

__int64 __fastcall RtlGetThreadPreferredUILanguages(int a1, __int64 a2, _WORD *a3, _DWORD *a4)
{
  _WORD *v4; // r15
  int v5; // r14d
  bool v6; // bl
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rcx
  bool v17; // al
  void *MergedPrefLanguages; // rsi
  void *v19; // rcx
  __int64 v20; // rax
  char v21; // [rsp+58h] [rbp-39h]
  bool v22; // [rsp+59h] [rbp-38h]
  char v23; // [rsp+5Ah] [rbp-37h]
  __int64 v24; // [rsp+60h] [rbp-31h] BYREF
  void *v25; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v26; // [rsp+70h] [rbp-21h]
  __int64 v27; // [rsp+78h] [rbp-19h]
  void *PreferredLanguages; // [rsp+80h] [rbp-11h]
  int v29; // [rsp+88h] [rbp-9h]
  __int64 v30; // [rsp+90h] [rbp-1h] BYREF
  __int64 v31; // [rsp+98h] [rbp+7h]
  char v32; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v33; // [rsp+100h] [rbp+6Fh]
  _WORD *v34; // [rsp+108h] [rbp+77h]
  _DWORD *v35; // [rsp+110h] [rbp+7Fh]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v4 = a3;
  v29 = 0;
  v5 = a1;
  v26 = 0;
  v6 = (a1 & 0x30) == 48;
  PreferredLanguages = 0LL;
  v22 = v6;
  v7 = 0LL;
  v30 = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  v31 = 0LL;
  v21 = 0;
  v24 = 0LL;
  v23 = 0;
  v27 = 0LL;
  if ( a4 )
    v29 = *a4;
  if ( (a1 & 0xFFFEFC83) != 0 )
    goto LABEL_64;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      goto LABEL_64;
  }
  else
  {
    v5 = a1 | 8;
  }
  if ( (v5 & 0x10000) != 0 )
  {
    if ( (v5 & 0x40) != 0 || (v5 & 0x30) != 0 )
      goto LABEL_64;
    v5 |= 0x30u;
  }
  if ( (v5 & 0x40) != 0 && (v5 & 0x30) != 0 )
    goto LABEL_64;
  if ( (v5 & 0x70) == 0 )
    v5 |= 0x20u;
  if ( !a4 )
    goto LABEL_64;
  if ( !*a4 || a3 )
  {
    if ( (v5 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v24);
      if ( (int)result < 0 )
        return result;
      if ( v6 )
      {
        v9 = v24;
        if ( *(_DWORD *)(v24 + 12) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo(v12, v11, 0LL) < 0 )
          goto LABEL_17;
        v24 = 0LL;
        v13 = RtlpCreateProcessRegistryInfo(&v24);
        if ( v13 < 0 )
          goto LABEL_99;
      }
      v9 = v24;
LABEL_17:
      if ( (v5 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
        v9 = v24;
        goto LABEL_21;
      }
      v32 = 0;
      PreferredLanguages = 0LL;
      if ( *(_DWORD *)(v9 + 12) == MEMORY[0x7FFE03A4] )
      {
LABEL_21:
        if ( (v5 & 0x40) == 0 )
        {
          v13 = InitializeTEBUserLangList(0LL, v9, 0LL);
          if ( v13 < 0 )
            goto LABEL_65;
          v7 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v9 = v24;
          v27 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *(_QWORD *)(v24 + 48);
          v13 = RtlpSetProcUserMachineLangList(v24, 0LL, 0LL);
          if ( v13 < 0 )
            goto LABEL_65;
          v8 = *(_QWORD *)(v9 + 56);
        }
        if ( NtCurrentTeb()->MergedPrefLanguages )
        {
          v21 = 1;
          if ( v22 )
          {
            if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
              && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v24 + 16) )
            {
              v9 = v24;
              v15 = v27;
              MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
              v25 = MergedPrefLanguages;
LABEL_43:
              v13 = LdrpConvertLangFallbackListToMultiSz(
                      (_DWORD)MergedPrefLanguages,
                      v9,
                      (_DWORD)v4,
                      (_DWORD)v35,
                      v5,
                      0,
                      v33);
              if ( ((int)(v13 + 0x80000000) < 0 || v13 == -1073741789) && v22 )
              {
                if ( !*((_WORD *)MergedPrefLanguages + 22) )
                  RtlpComputeLangListCheckSum((__int64)MergedPrefLanguages);
                if ( !v21 )
                {
                  if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) == 0 )
                  {
                    RtlpMUIRegPatchLicenseInfortmation(MergedPrefLanguages);
                    if ( !PreferredLanguages && (*(_BYTE *)(v7 + 40) & 0x40) != 0 && v15 == *(_QWORD *)(v9 + 48) )
                      RtlpSetProcMergedLangList(v9, MergedPrefLanguages);
                  }
                  NtCurrentTeb()->MergedPrefLanguages = v25;
                  v9 = v24;
                  NtCurrentTeb()->MuiGeneration = v26;
                }
                MergedPrefLanguages = 0LL;
                v25 = 0LL;
              }
              goto LABEL_53;
            }
            v21 = 0;
            RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
            NtCurrentTeb()->MergedPrefLanguages = 0LL;
          }
          goto LABEL_31;
        }
        v21 = 0;
        if ( !v22 || PreferredLanguages )
        {
LABEL_31:
          v9 = v24;
          goto LABEL_32;
        }
        v9 = v24;
        v20 = *(_QWORD *)(v24 + 96);
        if ( v20 && v7 && (*(_BYTE *)(v7 + 40) & 0x40) != 0 && *(char *)(v20 + 40) >= 0 )
        {
          v9 = v24;
          v15 = v27;
          v25 = *(void **)(v24 + 96);
          NtCurrentTeb()->MuiGeneration = *(_DWORD *)(v24 + 16);
LABEL_42:
          MergedPrefLanguages = v25;
          goto LABEL_43;
        }
LABEL_32:
        if ( (v5 & 0x10000) == 0 )
        {
          RtlpInitMuiCriticalSection(v12, v11, 0LL);
          RtlEnterCriticalSection(&RegistryInfoCritSect);
          v31 = RtlpMuiRegDupLanguageList(*(_QWORD *)(v9 + 72), v14);
          v26 = *(_DWORD *)(v9 + 16);
          RtlLeaveCriticalSection(&RegistryInfoCritSect);
        }
        v13 = LdrpCreateLangFallbackList(&v25, v9, 25LL);
        if ( v13 < 0 )
          goto LABEL_107;
        if ( (v5 & 0x40) != 0 )
        {
          v15 = v27;
          v13 = LdrpMergeLangFallbackLists(v5, v9, (unsigned int)&v25, (_DWORD)PreferredLanguages, 0LL, v7, v8, v27, 0);
        }
        else
        {
          LdrpCreateLangFallbackList(&v30, v9, 25LL);
          v15 = v27;
          v13 = LdrpMergeLangFallbackLists(v5, v9, (unsigned int)&v30, (_DWORD)PreferredLanguages, v31, v7, v8, v27, 0);
          if ( v13 >= 0 )
          {
            v17 = v22 || (v5 & 0x10) != 0;
            LOBYTE(v16) = v17;
            v13 = RtlpAddNeutralsToMergedList(v16, v9, v30, &v25);
          }
          RtlpMuiRegFreeLanguageList(v30);
        }
        if ( v13 < 0 )
        {
LABEL_107:
          MergedPrefLanguages = v25;
LABEL_53:
          if ( MergedPrefLanguages )
          {
            v19 = v25;
            if ( v25 == NtCurrentTeb()->MergedPrefLanguages )
            {
              v19 = v25;
              NtCurrentTeb()->MergedPrefLanguages = 0LL;
            }
            RtlpMuiRegFreeLanguageList(v19);
            v9 = v24;
          }
          goto LABEL_57;
        }
        goto LABEL_42;
      }
      v24 = 0LL;
      v13 = RtlpInitializeLangRegistryInfo(&v24);
      if ( v13 >= 0 )
      {
        v9 = v24;
        v23 = 1;
        v4 = (_WORD *)(v24 + 56);
        if ( !*(_QWORD *)(v24 + 56)
          && (v13 = RtlpMuiRegLoadPreferredUILanguages(v24, v11, 0, 3, &v32, (__int64 *)(v24 + 56)), v13 < 0)
          && !v32
          || !*(_QWORD *)(v9 + 64)
          && (v32 = 0, v13 = RtlpMuiRegLoadPreferredUILanguages(v9, v11, 1u, 3, &v32, (__int64 *)(v9 + 64)), v13 < 0)
          && !v32 )
        {
LABEL_57:
          if ( v13 >= 0 )
          {
LABEL_58:
            if ( v23 && v9 )
              RtlpMuiFreeLangRegistryInfo(v9);
            if ( v31 )
              RtlpMuiRegFreeLanguageList(v31);
            return (unsigned int)v13;
          }
          v4 = v34;
LABEL_65:
          if ( v4 && v29 )
          {
            if ( v29 == 1 )
              *v4 = 0;
            else
              *(_DWORD *)v4 = 0;
          }
          goto LABEL_58;
        }
        v7 = *(_QWORD *)(v9 + 64);
        v8 = *(_QWORD *)v4;
        LODWORD(v4) = (_DWORD)v34;
        goto LABEL_32;
      }
LABEL_99:
      v9 = v24;
      goto LABEL_65;
    }
LABEL_64:
    v13 = -1073741811;
    goto LABEL_65;
  }
  return (unsigned int)-1073741811;
}
