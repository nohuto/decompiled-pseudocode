/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x180079BF0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeTEBUserLangList @ 0x180012650 (InitializeTEBUserLangList.c)
 *     LdrpCreateLangFallbackList @ 0x1800143F8 (LdrpCreateLangFallbackList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014530 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x1800145AC (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpMergeLangFallbackLists @ 0x180041048 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F04 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180067178 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007B0D0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlIsValidLocaleName @ 0x1800EEF00 (RtlIsValidLocaleName.c)
 */

NTSTATUS __cdecl RtlGetUserPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v5; // r15
  ULONG v7; // ebx
  WCHAR *v8; // r12
  ULONG v9; // edi
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
  unsigned int v22; // r13d
  int v23; // r15d
  char v24; // r12
  __int64 v25; // r10
  _BYTE *v26; // rdx
  int v27; // eax
  NTSTATUS v28; // eax
  char v29; // [rsp+58h] [rbp-21h]
  ULONG NumberOfLanguagesa; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG v31; // [rsp+60h] [rbp-19h]
  int v32; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  PVOID v34; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v35; // [rsp+78h] [rbp-1h] BYREF
  __int64 v36; // [rsp+80h] [rbp+7h]
  char v37; // [rsp+D8h] [rbp+5Fh]
  __int16 v38; // [rsp+E0h] [rbp+67h] BYREF
  PULONG v39; // [rsp+E8h] [rbp+6Fh]
  PZZWSTR v40; // [rsp+F0h] [rbp+77h]

  v40 = Languages;
  v39 = NumberOfLanguages;
  v37 = Flags;
  v5 = ReturnLength;
  BaseAddress = 0LL;
  v38 = -1;
  v34 = 0LL;
  v7 = 0;
  NumberOfLanguagesa = 0;
  v8 = Languages;
  v31 = 0;
  v35 = 0LL;
  v32 = -256;
  v9 = Flags;
  if ( ReturnLength )
  {
    v7 = *ReturnLength;
    v31 = *ReturnLength;
  }
  if ( LocaleName )
  {
    v9 = 4104;
    v37 = 8;
    v32 = (Flags & 0x80u) != 0;
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( !v5 )
        goto LABEL_38;
LABEL_42:
      *v5 = 2;
      goto LABEL_38;
    }
  }
  if ( (v9 & 0xFFFF6771) != 0 )
    return -1073741811;
  if ( (v9 & 0x9880) == 0 )
  {
    v9 |= 0x80u;
    v37 = v9;
  }
  if ( (v9 & 0xC) == 0xC )
    return -1073741811;
  if ( (v9 & 0xC) == 0 )
  {
    v9 |= 8u;
    v37 = v9;
  }
  v29 = (v9 & 2) == 0;
  v10 = v9 & 0x9880;
  if ( (v9 & 0x9880) == 0 )
  {
    v9 |= 0x8000u;
    v10 = 0x8000;
    v37 = v9;
  }
  if ( v10 != 128 && v10 != 2048 && v10 != 4096 && v10 != 0x8000 || !v5 || *v5 && !v8 )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v35);
  if ( result >= 0 )
  {
    if ( LocaleName && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v35, LocaleName, 1, &v38) < 0 )
    {
      SystemPreferredUILanguages = -1073741772;
      goto LABEL_42;
    }
    InitializeTEBUserLangList(v9 & 1, (__int64)v35);
    v12 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v13 = v35;
    if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
      v14 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v14 = v35[6];
    v36 = v14;
    if ( (v9 & 0x800) != 0 )
    {
      if ( !v12
        || ((*v5 = v7,
             v19 = LdrpConvertLangFallbackListToMultiSz(v12, (__int64)v13, v8, v5, v9, v29, (int *)&NumberOfLanguagesa),
             SystemPreferredUILanguages = v19,
             v19 < 0)
         || !*(_WORD *)(v12 + 4))
        && v19 != -1073741789 )
      {
        *v5 = v31;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       ((v9 & 8) != 0 ? 8 : 4) | 0x800,
                                       LocaleName,
                                       &NumberOfLanguagesa,
                                       v8,
                                       v5);
      }
LABEL_31:
      if ( SystemPreferredUILanguages >= 0 )
      {
        *v39 = NumberOfLanguagesa;
        return SystemPreferredUILanguages;
      }
LABEL_38:
      if ( v8 && v31 )
      {
        if ( v31 == 1 )
          *v8 = 0;
        else
          *(_DWORD *)v8 = 0;
      }
      return SystemPreferredUILanguages;
    }
    LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v35, 25, 0);
    SystemPreferredUILanguages = LangFallbackList;
    if ( (v9 & 0x8080) != 0 )
    {
      if ( LangFallbackList >= 0 )
      {
        if ( !BaseAddress )
          goto LABEL_31;
        SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                       v9 | 0x30,
                                       (__int64)v13,
                                       (__int64)&BaseAddress,
                                       0LL,
                                       0LL,
                                       v12,
                                       v13[7],
                                       v36,
                                       1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v17 = BaseAddress;
          *v5 = v31;
          v18 = LdrpConvertLangFallbackListToMultiSz(
                  (__int64)v17,
                  (__int64)v13,
                  v8,
                  v5,
                  v9,
                  v29,
                  (int *)&NumberOfLanguagesa);
          SystemPreferredUILanguages = v18;
          if ( v18 >= 0 && v17[2] || v18 == -1073741789 )
            goto LABEL_27;
          *v5 = v31;
          v28 = RtlGetSystemPreferredUILanguages(
                  ((v9 & 8) != 0 ? 8 : 4) | 0x8000,
                  LocaleName,
                  &NumberOfLanguagesa,
                  v8,
                  v5);
          goto LABEL_91;
        }
      }
LABEL_92:
      v17 = BaseAddress;
      goto LABEL_27;
    }
    if ( LangFallbackList < 0 )
      goto LABEL_92;
    if ( !BaseAddress )
      goto LABEL_31;
    SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v9 | 0x20,
                                   (__int64)v13,
                                   (__int64)&BaseAddress,
                                   0LL,
                                   0LL,
                                   v12,
                                   0LL,
                                   v36,
                                   0);
    if ( SystemPreferredUILanguages < 0 )
      goto LABEL_92;
    SystemPreferredUILanguages = LdrpCreateLangFallbackList((__int64 *)&v34, (__int64)v13, 25, 0);
    if ( SystemPreferredUILanguages < 0 )
      goto LABEL_92;
    v17 = BaseAddress;
    if ( !v34 )
    {
LABEL_27:
      if ( v17 )
        RtlpMuiRegFreeLanguageList(v17);
      if ( v34 )
        RtlpMuiRegFreeLanguageList(v34);
      goto LABEL_31;
    }
    if ( LocaleName )
    {
      if ( v38 != -1 )
      {
        v20 = (_BYTE *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * v38);
        if ( v20 )
        {
          if ( (*v20 & 2) != 0 || (_BYTE)v32 && (*v20 & 4) != 0 )
            v21 = 0;
          else
            v21 = v29;
          if ( *((_BYTE *)v34 + 8) )
            LdrpMergeParentBaseLanguagesToList((__int64 *)&v34, (__int64)v20, (__int64)v13, v13[5]);
          else
            LdrpMergeParentBaseLanguagesToList((__int64 *)&v34, (__int64)v20, (__int64)v13, v36);
          goto LABEL_88;
        }
      }
    }
    else
    {
      v22 = 0;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        v23 = v36;
        v24 = v29;
        do
        {
          v25 = *((_QWORD *)v17 + 3);
          if ( *(_WORD *)(v25 + 6LL * v22) == 2 )
          {
            if ( (*(_BYTE *)(28LL * *(__int16 *)(v25 + 6LL * v22 + 4) + *(_QWORD *)(v13[3] + 16LL)) & 2) != 0 )
              v24 = 0;
            v26 = (_BYTE *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * *(__int16 *)(v25 + 6LL * v22 + 4));
            if ( (*v26 & 6) != 0 )
            {
              v27 = *((_BYTE *)v34 + 8)
                  ? LdrpMergeParentBaseLanguagesToList((__int64 *)&v34, (__int64)v26, (__int64)v13, v13[5])
                  : LdrpMergeParentBaseLanguagesToList((__int64 *)&v34, (__int64)v26, (__int64)v13, v23);
              SystemPreferredUILanguages = v27;
              if ( v27 >= 0 )
                break;
            }
          }
          ++v22;
        }
        while ( v22 < (unsigned __int16)v17[2] );
        LOBYTE(v9) = v37;
        v5 = ReturnLength;
        v29 = v24;
        v8 = v40;
      }
      if ( !*(_WORD *)(*((_QWORD *)v17 + 3) + 6LL * v22) || SystemPreferredUILanguages < 0 )
      {
        *v5 = v31;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       ((v9 & 8) != 0 ? 8 : 4) | 0x1000,
                                       0LL,
                                       &NumberOfLanguagesa,
                                       v8,
                                       v5);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_27;
      }
    }
    v21 = v29;
LABEL_88:
    v28 = LdrpConvertLangFallbackListToMultiSz((__int64)v34, (__int64)v13, v8, v5, v9, v21, (int *)&NumberOfLanguagesa);
LABEL_91:
    SystemPreferredUILanguages = v28;
    goto LABEL_27;
  }
  return result;
}
