/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x180079C00
 * Callers:
 *     <none>
 * Callees:
 *     InitializeTEBUserLangList @ 0x180012660 (InitializeTEBUserLangList.c)
 *     LdrpCreateLangFallbackList @ 0x180014408 (LdrpCreateLangFallbackList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x1800145BC (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C30 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpMergeLangFallbackLists @ 0x180041058 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F14 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180067188 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007B0E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlIsValidLocaleName @ 0x1800EEF00 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlGetUserPreferredUILanguages(int a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // r15
  int v7; // ebx
  _DWORD *v8; // r12
  int v9; // edi
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
  __int64 v20; // rcx
  _BYTE *v21; // rdx
  char v22; // bl
  unsigned int v23; // r13d
  int v24; // r15d
  char v25; // r12
  __int64 v26; // r10
  _BYTE *v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  char v32; // [rsp+58h] [rbp-21h]
  int v33; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v34; // [rsp+60h] [rbp-19h]
  int v35; // [rsp+64h] [rbp-15h]
  __int64 v36; // [rsp+68h] [rbp-11h] BYREF
  __int64 v37; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v38; // [rsp+78h] [rbp-1h] BYREF
  __int64 v39; // [rsp+80h] [rbp+7h]
  char v40; // [rsp+D8h] [rbp+5Fh]
  __int16 v41; // [rsp+E0h] [rbp+67h] BYREF
  _DWORD *v42; // [rsp+E8h] [rbp+6Fh]
  _DWORD *v43; // [rsp+F0h] [rbp+77h]

  v43 = a4;
  v42 = a3;
  v40 = a1;
  v5 = a5;
  v36 = 0LL;
  v41 = -1;
  v37 = 0LL;
  v7 = 0;
  v33 = 0;
  v8 = a4;
  v34 = 0;
  v38 = 0LL;
  v35 = -256;
  v9 = a1;
  if ( a5 )
  {
    v7 = *a5;
    v34 = *a5;
  }
  if ( a2 )
  {
    v9 = 4104;
    v40 = 8;
    v35 = (a1 & 0x80u) != 0;
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
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
    return 3221225485LL;
  if ( (v9 & 0x9880) == 0 )
  {
    v9 |= 0x80u;
    v40 = v9;
  }
  if ( (v9 & 0xC) == 0xC )
    return 3221225485LL;
  if ( (v9 & 0xC) == 0 )
  {
    v9 |= 8u;
    v40 = v9;
  }
  v32 = (v9 & 2) == 0;
  v10 = v9 & 0x9880;
  if ( (v9 & 0x9880) == 0 )
  {
    v9 |= 0x8000u;
    v10 = 0x8000;
    v40 = v9;
  }
  if ( v10 != 128 && v10 != 2048 && v10 != 4096 && v10 != 0x8000 || !v5 || *v5 && !v8 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo((__int64 *)&v38);
  if ( (int)result >= 0 )
  {
    if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v38, a2, 1, &v41) < 0 )
    {
      SystemPreferredUILanguages = -1073741772;
      goto LABEL_42;
    }
    InitializeTEBUserLangList(v9 & 1, (__int64)v38);
    v12 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v13 = v38;
    if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
      v14 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v14 = v38[6];
    v39 = v14;
    if ( (v9 & 0x800) != 0 )
    {
      if ( !v12
        || ((*v5 = v7,
             v19 = LdrpConvertLangFallbackListToMultiSz(v12, (__int64)v13, v8, v5, v9, v32, &v33),
             SystemPreferredUILanguages = v19,
             v19 < 0)
         || !*(_WORD *)(v12 + 4))
        && v19 != -1073741789 )
      {
        *v5 = v34;
        v20 = (v9 & 8) != 0 ? 8 : 4;
        LODWORD(v20) = v20 | 0x800;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(v20, a2, &v33, v8, v5);
      }
LABEL_31:
      if ( SystemPreferredUILanguages >= 0 )
      {
        *v42 = v33;
        return (unsigned int)SystemPreferredUILanguages;
      }
LABEL_38:
      if ( v8 && v34 )
      {
        if ( v34 == 1 )
          *(_WORD *)v8 = 0;
        else
          *v8 = 0;
      }
      return (unsigned int)SystemPreferredUILanguages;
    }
    v15 = LdrpCreateLangFallbackList(&v36, (__int64)v38, 25, 0);
    SystemPreferredUILanguages = v15;
    if ( (v9 & 0x8080) != 0 )
    {
      if ( v15 >= 0 )
      {
        if ( !v36 )
          goto LABEL_31;
        SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                       v9 | 0x30u,
                                       v13,
                                       (__int64)&v36,
                                       0LL,
                                       0LL,
                                       v12,
                                       v13[7],
                                       v39,
                                       1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v17 = v36;
          *v5 = v34;
          v18 = LdrpConvertLangFallbackListToMultiSz(v17, (__int64)v13, v8, v5, v9, v32, &v33);
          SystemPreferredUILanguages = v18;
          if ( v18 >= 0 && *(_WORD *)(v17 + 4) || v18 == -1073741789 )
            goto LABEL_27;
          *v5 = v34;
          v31 = (v9 & 8) != 0 ? 8 : 4;
          LODWORD(v31) = v31 | 0x8000;
          v30 = RtlGetSystemPreferredUILanguages(v31, a2, &v33, v8, v5);
          goto LABEL_91;
        }
      }
LABEL_92:
      v17 = v36;
      goto LABEL_27;
    }
    if ( v15 < 0 )
      goto LABEL_92;
    if ( !v36 )
      goto LABEL_31;
    SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v9 | 0x20u, v13, (__int64)&v36, 0LL, 0LL, v12, 0LL, v39, 0);
    if ( SystemPreferredUILanguages < 0 )
      goto LABEL_92;
    SystemPreferredUILanguages = LdrpCreateLangFallbackList(&v37, (__int64)v13, 25, 0);
    if ( SystemPreferredUILanguages < 0 )
      goto LABEL_92;
    v17 = v36;
    if ( !v37 )
    {
LABEL_27:
      if ( v17 )
        RtlpMuiRegFreeLanguageList(v17);
      if ( v37 )
        RtlpMuiRegFreeLanguageList(v37);
      goto LABEL_31;
    }
    if ( a2 )
    {
      if ( v41 != -1 )
      {
        v21 = (_BYTE *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * v41);
        if ( v21 )
        {
          if ( (*v21 & 2) != 0 || (_BYTE)v35 && (*v21 & 4) != 0 )
            v22 = 0;
          else
            v22 = v32;
          if ( *(_BYTE *)(v37 + 8) )
            LdrpMergeParentBaseLanguagesToList(&v37, (__int64)v21, (__int64)v13, v13[5]);
          else
            LdrpMergeParentBaseLanguagesToList(&v37, (__int64)v21, (__int64)v13, v39);
          goto LABEL_88;
        }
      }
    }
    else
    {
      v23 = 0;
      if ( *(_WORD *)(v36 + 4) )
      {
        v24 = v39;
        v25 = v32;
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
              v28 = *(_BYTE *)(v37 + 8)
                  ? LdrpMergeParentBaseLanguagesToList(&v37, (__int64)v27, (__int64)v13, v13[5])
                  : LdrpMergeParentBaseLanguagesToList(&v37, (__int64)v27, (__int64)v13, v24);
              SystemPreferredUILanguages = v28;
              if ( v28 >= 0 )
                break;
            }
          }
          ++v23;
        }
        while ( v23 < *(unsigned __int16 *)(v17 + 4) );
        LOBYTE(v9) = v40;
        v5 = a5;
        v32 = v25;
        v8 = v43;
      }
      if ( !*(_WORD *)(*(_QWORD *)(v17 + 24) + 6LL * v23) || SystemPreferredUILanguages < 0 )
      {
        *v5 = v34;
        v29 = (v9 & 8) != 0 ? 8 : 4;
        LODWORD(v29) = v29 | 0x1000;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(v29, 0LL, &v33, v8, v5);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_27;
      }
    }
    v22 = v32;
LABEL_88:
    v30 = LdrpConvertLangFallbackListToMultiSz(v37, (__int64)v13, v8, v5, v9, v22, &v33);
LABEL_91:
    SystemPreferredUILanguages = v30;
    goto LABEL_27;
  }
  return result;
}
