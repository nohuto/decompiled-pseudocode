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

__int64 __fastcall RtlGetUserPreferredUILanguages(int a1, const WCHAR *a2, __int64 a3, _WORD *a4, unsigned int *a5)
{
  unsigned int *v5; // r15
  int v6; // edi
  unsigned int v7; // ebx
  _WORD *v8; // r12
  int v10; // eax
  __int64 result; // rax
  __int64 v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rax
  int v15; // eax
  int SystemPreferredUILanguages; // ebx
  __int64 v17; // rsi
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
  int v29; // eax
  char v30; // [rsp+28h] [rbp-51h]
  char v31; // [rsp+58h] [rbp-21h]
  int v32; // [rsp+5Ch] [rbp-1Dh] BYREF
  unsigned int v33; // [rsp+60h] [rbp-19h]
  int v34; // [rsp+64h] [rbp-15h]
  __int64 v35; // [rsp+68h] [rbp-11h] BYREF
  __int64 v36; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v37; // [rsp+78h] [rbp-1h] BYREF
  __int64 v38; // [rsp+80h] [rbp+7h]
  char v39; // [rsp+D8h] [rbp+5Fh]
  __int16 v40; // [rsp+E0h] [rbp+67h] BYREF
  _DWORD *v41; // [rsp+E8h] [rbp+6Fh]
  _WORD *v42; // [rsp+F0h] [rbp+77h]

  v42 = a4;
  v41 = (_DWORD *)a3;
  v39 = a1;
  v5 = a5;
  v35 = 0LL;
  v40 = -1;
  v6 = a1;
  v36 = 0LL;
  v7 = 0;
  v32 = 0;
  v8 = a4;
  v33 = 0;
  v37 = 0LL;
  v34 = -256;
  if ( a5 )
  {
    v7 = *a5;
    v33 = *a5;
  }
  if ( a2 )
  {
    v6 = 4104;
    v39 = 8;
    v34 = (a1 & 0x80u) != 0;
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
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
    return 3221225485LL;
  if ( (v6 & 0x9880) == 0 )
  {
    v6 |= 0x80u;
    v39 = v6;
  }
  if ( (v6 & 0xC) == 0xC )
    return 3221225485LL;
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
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo((__int64 *)&v37, 39040LL, a3);
  if ( (int)result >= 0 )
  {
    if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v37, a2, 1, &v40) < 0 )
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
             v19 = LdrpConvertLangFallbackListToMultiSz(v12, (__int64)v13, v8, v5, v6, v31, &v32),
             SystemPreferredUILanguages = v19,
             v19 < 0)
         || !*(_WORD *)(v12 + 4))
        && v19 != -1073741789 )
      {
        *v5 = v33;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       ((v6 & 8) != 0 ? 8 : 4) | 0x800u,
                                       a2,
                                       &v32,
                                       v8,
                                       v5);
      }
LABEL_31:
      if ( SystemPreferredUILanguages >= 0 )
      {
        *v41 = v32;
        return (unsigned int)SystemPreferredUILanguages;
      }
LABEL_39:
      if ( v8 && v33 )
      {
        if ( v33 == 1 )
          *v8 = 0;
        else
          *(_DWORD *)v8 = 0;
      }
      return (unsigned int)SystemPreferredUILanguages;
    }
    v15 = LdrpCreateLangFallbackList(&v35, (__int64)v37, 25, 0);
    SystemPreferredUILanguages = v15;
    if ( (v6 & 0x8080) != 0 )
    {
      if ( v15 >= 0 )
      {
        if ( !v35 )
          goto LABEL_31;
        SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v6 | 0x30u, v13, &v35, 0LL, 0LL, v12, v13[7], v38, 1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v17 = v35;
          *v5 = v33;
          v18 = LdrpConvertLangFallbackListToMultiSz(v17, (__int64)v13, v8, v5, v6, v31, &v32);
          SystemPreferredUILanguages = v18;
          if ( v18 >= 0 && *(_WORD *)(v17 + 4) || v18 == -1073741789 )
            goto LABEL_27;
          *v5 = v33;
          v29 = RtlGetSystemPreferredUILanguages(((v6 & 8) != 0 ? 8 : 4) | 0x8000u, a2, &v32, v8, v5);
          goto LABEL_92;
        }
      }
LABEL_93:
      v17 = v35;
      goto LABEL_27;
    }
    if ( v15 < 0 )
      goto LABEL_93;
    if ( !v35 )
      goto LABEL_31;
    SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v6 | 0x20u, v13, &v35, 0LL, 0LL, v12, 0LL, v38, 0);
    if ( SystemPreferredUILanguages < 0 )
      goto LABEL_93;
    SystemPreferredUILanguages = LdrpCreateLangFallbackList(&v36, (__int64)v13, 25, 0);
    if ( SystemPreferredUILanguages < 0 )
      goto LABEL_93;
    v17 = v35;
    if ( !v36 )
    {
LABEL_27:
      if ( v17 )
        RtlpMuiRegFreeLanguageList(v17);
      if ( v36 )
        RtlpMuiRegFreeLanguageList(v36);
      goto LABEL_31;
    }
    if ( a2 )
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
          if ( *(_BYTE *)(v36 + 8) )
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
      if ( *(_WORD *)(v35 + 4) )
      {
        v24 = v38;
        v25 = v31;
        do
        {
          v26 = *(_QWORD *)(v17 + 24);
          if ( *(_WORD *)(v26 + 6LL * v23) == 2 )
          {
            if ( (*(_BYTE *)(28LL * *(__int16 *)(v26 + 6LL * v23 + 4) + *(_QWORD *)(v13[3] + 16LL)) & 2) != 0 )
              v25 = 0;
            v27 = (_BYTE *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v23 + 4));
            if ( (*v27 & 6) != 0 )
            {
              if ( *(_BYTE *)(v36 + 8) )
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
        while ( v23 < *(unsigned __int16 *)(v17 + 4) );
        LOBYTE(v6) = v39;
        v5 = a5;
        v31 = v25;
        v8 = v42;
      }
      if ( !*(_WORD *)(*(_QWORD *)(v17 + 24) + 6LL * v23) || SystemPreferredUILanguages < 0 )
      {
        *v5 = v33;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       ((v6 & 8) != 0 ? 8 : 4) | 0x1000u,
                                       0LL,
                                       &v32,
                                       v8,
                                       v5);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_27;
      }
    }
    v21 = v31;
LABEL_89:
    v29 = LdrpConvertLangFallbackListToMultiSz(v36, (__int64)v13, v8, v5, v6, v21, &v32);
LABEL_92:
    SystemPreferredUILanguages = v29;
    goto LABEL_27;
  }
  return result;
}
