/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x18001D3C0
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x18001C2B0 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001DB80 (LdrpSetThreadPreferredLangList.c)
 *     RtlGetFileMUIPath @ 0x180054700 (RtlGetFileMUIPath.c)
 * Callees:
 *     InitializeTEBUserLangList @ 0x18001B7C8 (InitializeTEBUserLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x18001BAC8 (RtlpSetProcUserMachineLangList.c)
 *     RtlpInitMuiCriticalSection @ 0x18001CD58 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegDupLanguageList @ 0x18001CDB8 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18001CE50 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpAddNeutralsToMergedList @ 0x18001D184 (RtlpAddNeutralsToMergedList.c)
 *     LdrpCreateLangFallbackList @ 0x18001DA28 (LdrpCreateLangFallbackList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001DD60 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18001DDDC (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpMergeLangFallbackLists @ 0x18001E368 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800273D8 (RtlpMuiRegFreeLanguageList.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800476E4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180047C10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x180048F30 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800495D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpComputeLangListCheckSum @ 0x180050794 (RtlpComputeLangListCheckSum.c)
 *     RtlpSetProcMergedLangList @ 0x18007458C (RtlpSetProcMergedLangList.c)
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
  char v16; // al
  void *MergedPrefLanguages; // rsi
  void *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
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
        PreferredUILanguages = RtlpCreateProcessRegistryInfo(&v24);
        if ( PreferredUILanguages < 0 )
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
          PreferredUILanguages = InitializeTEBUserLangList(0, v9);
          if ( PreferredUILanguages < 0 )
            goto LABEL_65;
          v7 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v9 = v24;
          v27 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *(_QWORD *)(v24 + 48);
          PreferredUILanguages = RtlpSetProcUserMachineLangList(v24, 0);
          if ( PreferredUILanguages < 0 )
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
              PreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(
                                       (_DWORD)MergedPrefLanguages,
                                       v9,
                                       (_DWORD)v4,
                                       (_DWORD)v35,
                                       v5,
                                       0,
                                       v33);
              if ( ((int)(PreferredUILanguages + 0x80000000) < 0 || PreferredUILanguages == -1073741789) && v22 )
              {
                if ( !*((_WORD *)MergedPrefLanguages + 22) )
                  RtlpComputeLangListCheckSum(MergedPrefLanguages);
                if ( !v21 )
                {
                  if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) == 0 )
                  {
                    RtlpMUIRegPatchLicenseInfortmation((__int64)MergedPrefLanguages);
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
        v19 = *(_QWORD *)(v24 + 96);
        if ( v19 && v7 && (*(_BYTE *)(v7 + 40) & 0x40) != 0 && *(char *)(v19 + 40) >= 0 )
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
          RtlpInitMuiCriticalSection();
          RtlEnterCriticalSection(&RegistryInfoCritSect);
          v31 = RtlpMuiRegDupLanguageList(*(_QWORD *)(v9 + 72), v14);
          v26 = *(_DWORD *)(v9 + 16);
          RtlLeaveCriticalSection(&RegistryInfoCritSect);
        }
        PreferredUILanguages = LdrpCreateLangFallbackList(&v25, v9, 25LL, 0LL);
        if ( PreferredUILanguages < 0 )
          goto LABEL_107;
        if ( (v5 & 0x40) != 0 )
        {
          v15 = v27;
          PreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v5,
                                   v9,
                                   (unsigned int)&v25,
                                   (_DWORD)PreferredLanguages,
                                   0LL,
                                   v7,
                                   v8,
                                   v27,
                                   0);
        }
        else
        {
          LdrpCreateLangFallbackList(&v30, v9, 25LL, 0LL);
          v15 = v27;
          PreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v5,
                                   v9,
                                   (unsigned int)&v30,
                                   (_DWORD)PreferredLanguages,
                                   v31,
                                   v7,
                                   v8,
                                   v27,
                                   0);
          if ( PreferredUILanguages >= 0 )
          {
            v16 = v22 || (v5 & 0x10) != 0;
            PreferredUILanguages = RtlpAddNeutralsToMergedList(v16, v9, v30, &v25);
          }
          RtlpMuiRegFreeLanguageList(v30);
        }
        if ( PreferredUILanguages < 0 )
        {
LABEL_107:
          MergedPrefLanguages = v25;
LABEL_53:
          if ( MergedPrefLanguages )
          {
            v18 = v25;
            if ( v25 == NtCurrentTeb()->MergedPrefLanguages )
            {
              v18 = v25;
              NtCurrentTeb()->MergedPrefLanguages = 0LL;
            }
            RtlpMuiRegFreeLanguageList(v18);
            v9 = v24;
          }
          goto LABEL_57;
        }
        goto LABEL_42;
      }
      v24 = 0LL;
      PreferredUILanguages = RtlpInitializeLangRegistryInfo(&v24);
      if ( PreferredUILanguages >= 0 )
      {
        v9 = v24;
        v23 = 1;
        v4 = (_WORD *)(v24 + 56);
        if ( !*(_QWORD *)(v24 + 56)
          && (PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v24, v20, 0, 3, (__int64)&v32, v24 + 56),
              PreferredUILanguages < 0)
          && !v32
          || !*(_QWORD *)(v9 + 64)
          && (v32 = 0,
              PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v9, v20, 1, 3, (__int64)&v32, v9 + 64),
              PreferredUILanguages < 0)
          && !v32 )
        {
LABEL_57:
          if ( PreferredUILanguages >= 0 )
          {
LABEL_58:
            if ( v23 && v9 )
              RtlpMuiFreeLangRegistryInfo(v9);
            if ( v31 )
              RtlpMuiRegFreeLanguageList(v31);
            return (unsigned int)PreferredUILanguages;
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
    PreferredUILanguages = -1073741811;
    goto LABEL_65;
  }
  return (unsigned int)-1073741811;
}
