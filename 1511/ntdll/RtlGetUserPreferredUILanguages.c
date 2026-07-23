/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x18003DF80
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x18001A418 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001B8EC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpMergeLangFallbackLists @ 0x18001C3DC (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18001D9B0 (RtlpMuiRegFreeLanguageList.c)
 *     InitializeTEBUserLangList @ 0x180039EE8 (InitializeTEBUserLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18003D860 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003DA68 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18008599C (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x1800E5C40 (RtlIsValidLocaleName.c)
 */

NTSTATUS __cdecl RtlGetUserPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v5; // r15
  ULONG v6; // edi
  ULONG v7; // ebx
  WCHAR *v8; // r12
  int v10; // eax
  NTSTATUS result; // eax
  __int64 v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rax
  int LangFallbackList; // eax
  NTSTATUS SystemPreferredUILanguages; // ebx
  _WORD *v17; // rsi
  int v18; // eax
  int v19; // eax
  _BYTE *v20; // rdx
  char v21; // bl
  __int64 v22; // rax
  unsigned int v23; // r13d
  int v24; // r15d
  char v25; // r12
  __int64 v26; // r10
  _BYTE *v27; // rdx
  __int64 v28; // r9
  NTSTATUS v29; // eax
  char v30; // [rsp+28h] [rbp-51h]
  char v31; // [rsp+58h] [rbp-21h]
  ULONG NumberOfLanguagesa; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG v33; // [rsp+60h] [rbp-19h]
  int v34; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  PVOID v36; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v37; // [rsp+78h] [rbp-1h] BYREF
  __int64 v38; // [rsp+80h] [rbp+7h]
  char v39; // [rsp+D8h] [rbp+5Fh]
  __int16 v40; // [rsp+E0h] [rbp+67h] BYREF
  PULONG v41; // [rsp+E8h] [rbp+6Fh]
  PZZWSTR v42; // [rsp+F0h] [rbp+77h]

  v42 = Languages;
  v41 = NumberOfLanguages;
  v39 = Flags;
  v5 = ReturnLength;
  BaseAddress = 0LL;
  v40 = -1;
  v6 = Flags;
  v36 = 0LL;
  v7 = 0;
  NumberOfLanguagesa = 0;
  v8 = Languages;
  v33 = 0;
  v37 = 0LL;
  v34 = -256;
  if ( ReturnLength )
  {
    v7 = *ReturnLength;
    v33 = *ReturnLength;
  }
  if ( LocaleName )
  {
    v6 = 4104;
    v39 = 8;
    v34 = (Flags & 0x80u) != 0;
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( !v5 )
        goto LABEL_39;
LABEL_43:
      *v5 = 2;
      goto LABEL_39;
    }
  }
  if ( (v6 & 0xFFFF6771) != 0 )
    return -1073741811;
  if ( (v6 & 0x9880) == 0 )
  {
    v6 |= 0x80u;
    v39 = v6;
  }
  if ( (v6 & 0xC) == 0xC )
    return -1073741811;
  if ( (v6 & 0xC) == 0 )
  {
    v6 |= 8u;
    v39 = v6;
  }
  v31 = (v6 & 2) == 0;
  v10 = v6 & 0x9880;
  if ( (v6 & 0x9880) == 0 )
  {
    v6 |= 0x8000u;
    v10 = 0x8000;
    v39 = v6;
  }
  if ( v10 != 128 && v10 != 2048 && v10 != 4096 && v10 != 0x8000 || !v5 || *v5 && !v8 )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v37, 39040LL, (__int64)NumberOfLanguages);
  if ( result >= 0 )
  {
    if ( LocaleName && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v37, LocaleName, 1, &v40) < 0 )
    {
      SystemPreferredUILanguages = -1073741772;
      goto LABEL_43;
    }
    InitializeTEBUserLangList(v6 & 1, (__int64)v37);
    v12 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v13 = v37;
    if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
      v14 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v14 = v37[6];
    v38 = v14;
    if ( (v6 & 0x800) != 0 )
    {
      if ( !v12
        || ((*v5 = v7,
             v19 = LdrpConvertLangFallbackListToMultiSz(v12, (__int64)v13, v8, v5, v6, v31, (int *)&NumberOfLanguagesa),
             SystemPreferredUILanguages = v19,
             v19 < 0)
         || !*(_WORD *)(v12 + 4))
        && v19 != -1073741789 )
      {
        *v5 = v33;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       ((v6 & 8) != 0 ? 8 : 4) | 0x800,
                                       LocaleName,
                                       &NumberOfLanguagesa,
                                       v8,
                                       v5);
      }
LABEL_31:
      if ( SystemPreferredUILanguages >= 0 )
      {
        *v41 = NumberOfLanguagesa;
        return SystemPreferredUILanguages;
      }
LABEL_39:
      if ( v8 && v33 )
      {
        if ( v33 == 1 )
          *v8 = 0;
        else
          *(_DWORD *)v8 = 0;
      }
      return SystemPreferredUILanguages;
    }
    LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v37, 25, 0);
    SystemPreferredUILanguages = LangFallbackList;
    if ( (v6 & 0x8080) != 0 )
    {
      if ( LangFallbackList >= 0 )
      {
        if ( !BaseAddress )
          goto LABEL_31;
        SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                       v6 | 0x30,
                                       (__int64)v13,
                                       &BaseAddress,
                                       0LL,
                                       0LL,
                                       v12,
                                       v13[7],
                                       v38,
                                       1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v17 = BaseAddress;
          *v5 = v33;
          v18 = LdrpConvertLangFallbackListToMultiSz(
                  (__int64)v17,
                  (__int64)v13,
                  v8,
                  v5,
                  v6,
                  v31,
                  (int *)&NumberOfLanguagesa);
          SystemPreferredUILanguages = v18;
          if ( v18 >= 0 && v17[2] || v18 == -1073741789 )
            goto LABEL_27;
          *v5 = v33;
          v29 = RtlGetSystemPreferredUILanguages(
                  ((v6 & 8) != 0 ? 8 : 4) | 0x8000,
                  LocaleName,
                  &NumberOfLanguagesa,
                  v8,
                  v5);
          goto LABEL_92;
        }
      }
LABEL_93:
      v17 = BaseAddress;
      goto LABEL_27;
    }
    if ( LangFallbackList < 0 )
      goto LABEL_93;
    if ( !BaseAddress )
      goto LABEL_31;
    SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v6 | 0x20,
                                   (__int64)v13,
                                   &BaseAddress,
                                   0LL,
                                   0LL,
                                   v12,
                                   0LL,
                                   v38,
                                   0);
    if ( SystemPreferredUILanguages < 0 )
      goto LABEL_93;
    SystemPreferredUILanguages = LdrpCreateLangFallbackList((__int64 *)&v36, (__int64)v13, 25, 0);
    if ( SystemPreferredUILanguages < 0 )
      goto LABEL_93;
    v17 = BaseAddress;
    if ( !v36 )
    {
LABEL_27:
      if ( v17 )
        RtlpMuiRegFreeLanguageList(v17);
      if ( v36 )
        RtlpMuiRegFreeLanguageList(v36);
      goto LABEL_31;
    }
    if ( LocaleName )
    {
      if ( v40 != -1 )
      {
        v20 = (_BYTE *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * v40);
        if ( v20 )
        {
          if ( (*v20 & 2) != 0 || (_BYTE)v34 && (*v20 & 4) != 0 )
            v21 = 0;
          else
            v21 = v31;
          if ( *((_BYTE *)v36 + 8) )
            v22 = v13[5];
          else
            LODWORD(v22) = v38;
          LdrpMergeParentBaseLanguagesToList((unsigned int)&v36, (_DWORD)v20, (_DWORD)v13, v22, v30);
          goto LABEL_89;
        }
      }
    }
    else
    {
      v23 = 0;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        v24 = v38;
        v25 = v31;
        do
        {
          v26 = *((_QWORD *)v17 + 3);
          if ( *(_WORD *)(v26 + 6LL * v23) == 2 )
          {
            if ( (*(_BYTE *)(28LL * *(__int16 *)(v26 + 6LL * v23 + 4) + *(_QWORD *)(v13[3] + 16LL)) & 2) != 0 )
              v25 = 0;
            v27 = (_BYTE *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v23 + 4));
            if ( (*v27 & 6) != 0 )
            {
              if ( *((_BYTE *)v36 + 8) )
                v28 = v13[5];
              else
                LODWORD(v28) = v24;
              SystemPreferredUILanguages = LdrpMergeParentBaseLanguagesToList(
                                             (unsigned int)&v36,
                                             (_DWORD)v27,
                                             (_DWORD)v13,
                                             v28,
                                             v30);
              if ( SystemPreferredUILanguages >= 0 )
                break;
            }
          }
          ++v23;
        }
        while ( v23 < (unsigned __int16)v17[2] );
        LOBYTE(v6) = v39;
        v5 = ReturnLength;
        v31 = v25;
        v8 = v42;
      }
      if ( !*(_WORD *)(*((_QWORD *)v17 + 3) + 6LL * v23) || SystemPreferredUILanguages < 0 )
      {
        *v5 = v33;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       ((v6 & 8) != 0 ? 8 : 4) | 0x1000,
                                       0LL,
                                       &NumberOfLanguagesa,
                                       v8,
                                       v5);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_27;
      }
    }
    v21 = v31;
LABEL_89:
    v29 = LdrpConvertLangFallbackListToMultiSz((__int64)v36, (__int64)v13, v8, v5, v6, v21, (int *)&NumberOfLanguagesa);
LABEL_92:
    SystemPreferredUILanguages = v29;
    goto LABEL_27;
  }
  return result;
}
