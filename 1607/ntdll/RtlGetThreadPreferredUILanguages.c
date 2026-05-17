/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180013DA0
 * Callers:
 *     LdrpSetThreadPreferredLangList @ 0x1800134BC (LdrpSetThreadPreferredLangList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180013860 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x180069AA0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800114D8 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpComputeLangListCheckSum @ 0x180011954 (RtlpComputeLangListCheckSum.c)
 *     InitializeTEBUserLangList @ 0x180012660 (InitializeTEBUserLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012958 (RtlpSetProcUserMachineLangList.c)
 *     RtlpInitMuiCriticalSection @ 0x180013B94 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegDupLanguageList @ 0x180013BF4 (RtlpMuiRegDupLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x180014408 (LdrpCreateLangFallbackList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x1800145BC (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003F364 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180041058 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F14 (RtlpMuiRegFreeLanguageList.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800706C4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070880 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x180070C30 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpSetProcMergedLangList @ 0x1800847CC (RtlpSetProcMergedLangList.c)
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
  int PreferredUILanguages; // ebx
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rcx
  bool v17; // al
  void *MergedPrefLanguages; // rsi
  void *v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  bool v22; // [rsp+58h] [rbp-39h]
  char v23; // [rsp+59h] [rbp-38h]
  char v24; // [rsp+5Ah] [rbp-37h]
  __int64 v25; // [rsp+60h] [rbp-31h] BYREF
  void *v26; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v27; // [rsp+70h] [rbp-21h]
  __int64 v28; // [rsp+78h] [rbp-19h]
  void *PreferredLanguages; // [rsp+80h] [rbp-11h]
  int v30; // [rsp+88h] [rbp-9h]
  __int64 v31; // [rsp+90h] [rbp-1h] BYREF
  __int64 v32; // [rsp+98h] [rbp+7h]
  char v33; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v34; // [rsp+100h] [rbp+6Fh]
  _WORD *v35; // [rsp+108h] [rbp+77h]
  _DWORD *v36; // [rsp+110h] [rbp+7Fh]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v4 = a3;
  v30 = 0;
  v5 = a1;
  v27 = 0;
  v6 = (a1 & 0x30) == 48;
  PreferredLanguages = 0LL;
  v22 = v6;
  v7 = 0LL;
  v31 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  v32 = 0LL;
  v23 = 0;
  v25 = 0LL;
  v24 = 0;
  v28 = 0LL;
  if ( a4 )
    v30 = *a4;
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
      result = RtlpCreateProcessRegistryInfo(&v25);
      if ( (int)result < 0 )
        return result;
      if ( v6 )
      {
        v9 = v25;
        if ( *(_DWORD *)(v25 + 12) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo(v12, v11, 0LL) < 0 )
          goto LABEL_17;
        v25 = 0LL;
        PreferredUILanguages = RtlpCreateProcessRegistryInfo(&v25);
        if ( PreferredUILanguages < 0 )
          goto LABEL_99;
      }
      v9 = v25;
LABEL_17:
      if ( (v5 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
        v9 = v25;
        goto LABEL_21;
      }
      v33 = 0;
      PreferredLanguages = 0LL;
      if ( *(_DWORD *)(v9 + 12) == MEMORY[0x7FFE03A4] )
      {
LABEL_21:
        if ( (v5 & 0x40) == 0 )
        {
          PreferredUILanguages = InitializeTEBUserLangList(0, v9);
          if ( PreferredUILanguages < 0 )
            goto LABEL_65;
          v7 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v9 = v25;
          v28 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *(_QWORD *)(v25 + 48);
          PreferredUILanguages = RtlpSetProcUserMachineLangList(v25, 0);
          if ( PreferredUILanguages < 0 )
            goto LABEL_65;
          v8 = *(_QWORD *)(v9 + 56);
        }
        if ( NtCurrentTeb()->MergedPrefLanguages )
        {
          v23 = 1;
          if ( v22 )
          {
            if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
              && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v25 + 16) )
            {
              v9 = v25;
              v15 = v28;
              MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
              v26 = MergedPrefLanguages;
LABEL_43:
              PreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(
                                       (_DWORD)MergedPrefLanguages,
                                       v9,
                                       (_DWORD)v4,
                                       (_DWORD)v36,
                                       v5,
                                       0,
                                       v34);
              if ( ((int)(PreferredUILanguages + 0x80000000) < 0 || PreferredUILanguages == -1073741789) && v22 )
              {
                if ( !*((_WORD *)MergedPrefLanguages + 22) )
                  RtlpComputeLangListCheckSum((__int64)MergedPrefLanguages);
                if ( !v23 )
                {
                  if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) == 0 )
                  {
                    RtlpMUIRegPatchLicenseInfortmation((__int64)MergedPrefLanguages);
                    if ( !PreferredLanguages && (*(_BYTE *)(v7 + 40) & 0x40) != 0 && v15 == *(_QWORD *)(v9 + 48) )
                      RtlpSetProcMergedLangList(v9, MergedPrefLanguages);
                  }
                  NtCurrentTeb()->MergedPrefLanguages = v26;
                  v9 = v25;
                  NtCurrentTeb()->MuiGeneration = v27;
                }
                MergedPrefLanguages = 0LL;
                v26 = 0LL;
              }
              goto LABEL_53;
            }
            v23 = 0;
            RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
            NtCurrentTeb()->MergedPrefLanguages = 0LL;
          }
          goto LABEL_31;
        }
        v23 = 0;
        if ( !v22 || PreferredLanguages )
        {
LABEL_31:
          v9 = v25;
          goto LABEL_32;
        }
        v9 = v25;
        v20 = *(_QWORD *)(v25 + 96);
        if ( v20 && v7 && (*(_BYTE *)(v7 + 40) & 0x40) != 0 && *(char *)(v20 + 40) >= 0 )
        {
          v9 = v25;
          v15 = v28;
          v26 = *(void **)(v25 + 96);
          NtCurrentTeb()->MuiGeneration = *(_DWORD *)(v25 + 16);
LABEL_42:
          MergedPrefLanguages = v26;
          goto LABEL_43;
        }
LABEL_32:
        if ( (v5 & 0x10000) == 0 )
        {
          RtlpInitMuiCriticalSection();
          RtlEnterCriticalSection(&RegistryInfoCritSect);
          v32 = RtlpMuiRegDupLanguageList(*(_QWORD *)(v9 + 72), v14);
          v27 = *(_DWORD *)(v9 + 16);
          RtlLeaveCriticalSection(&RegistryInfoCritSect);
        }
        PreferredUILanguages = LdrpCreateLangFallbackList(&v26, v9, 25LL, 0LL);
        if ( PreferredUILanguages < 0 )
          goto LABEL_107;
        if ( (v5 & 0x40) != 0 )
        {
          v15 = v28;
          PreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v5,
                                   v9,
                                   (unsigned int)&v26,
                                   (_DWORD)PreferredLanguages,
                                   0LL,
                                   v7,
                                   v8,
                                   v28,
                                   0);
        }
        else
        {
          LdrpCreateLangFallbackList(&v31, v9, 25LL, 0LL);
          v15 = v28;
          PreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v5,
                                   v9,
                                   (unsigned int)&v31,
                                   (_DWORD)PreferredLanguages,
                                   v32,
                                   v7,
                                   v8,
                                   v28,
                                   0);
          if ( PreferredUILanguages >= 0 )
          {
            v17 = v22 || (v5 & 0x10) != 0;
            LOBYTE(v16) = v17;
            PreferredUILanguages = RtlpAddNeutralsToMergedList(v16, v9, v31, &v26);
          }
          RtlpMuiRegFreeLanguageList(v31);
        }
        if ( PreferredUILanguages < 0 )
        {
LABEL_107:
          MergedPrefLanguages = v26;
LABEL_53:
          if ( MergedPrefLanguages )
          {
            v19 = v26;
            if ( v26 == NtCurrentTeb()->MergedPrefLanguages )
            {
              v19 = v26;
              NtCurrentTeb()->MergedPrefLanguages = 0LL;
            }
            RtlpMuiRegFreeLanguageList(v19);
            v9 = v25;
          }
          goto LABEL_57;
        }
        goto LABEL_42;
      }
      v25 = 0LL;
      PreferredUILanguages = RtlpInitializeLangRegistryInfo(&v25);
      if ( PreferredUILanguages >= 0 )
      {
        v9 = v25;
        v24 = 1;
        v4 = (_WORD *)(v25 + 56);
        if ( !*(_QWORD *)(v25 + 56)
          && (PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v25, v21, 0, 3, (__int64)&v33, v25 + 56),
              PreferredUILanguages < 0)
          && !v33
          || !*(_QWORD *)(v9 + 64)
          && (v33 = 0,
              PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v9, v21, 1, 3, (__int64)&v33, v9 + 64),
              PreferredUILanguages < 0)
          && !v33 )
        {
LABEL_57:
          if ( PreferredUILanguages >= 0 )
          {
LABEL_58:
            if ( v24 && v9 )
              RtlpMuiFreeLangRegistryInfo(v9);
            if ( v32 )
              RtlpMuiRegFreeLanguageList(v32);
            return (unsigned int)PreferredUILanguages;
          }
          v4 = v35;
LABEL_65:
          if ( v4 && v30 )
          {
            if ( v30 == 1 )
              *v4 = 0;
            else
              *(_DWORD *)v4 = 0;
          }
          goto LABEL_58;
        }
        v7 = *(_QWORD *)(v9 + 64);
        v8 = *(_QWORD *)v4;
        LODWORD(v4) = (_DWORD)v35;
        goto LABEL_32;
      }
LABEL_99:
      v9 = v25;
      goto LABEL_65;
    }
LABEL_64:
    PreferredUILanguages = -1073741811;
    goto LABEL_65;
  }
  return (unsigned int)-1073741811;
}
