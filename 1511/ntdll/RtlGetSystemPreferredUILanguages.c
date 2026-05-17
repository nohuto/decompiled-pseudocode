/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x18003D860
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x18003DF80 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x18001A418 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001B8EC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpMergeLangFallbackLists @ 0x18001C3DC (LdrpMergeLangFallbackLists.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18001D9B0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180039D8C (RtlpSetProcUserMachineLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003DA68 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18008599C (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x1800E5C40 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlGetSystemPreferredUILanguages(int a1, const WCHAR *a2, _DWORD *a3, _WORD *a4, unsigned int *a5)
{
  unsigned int *v7; // rcx
  __int64 v9; // r15
  unsigned int v10; // esi
  char v11; // bl
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdi
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rsi
  char v19; // r13
  int v20; // ecx
  bool v21; // zf
  unsigned int *v22; // r13
  int v23; // r9d
  int v24; // eax
  _BYTE *v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r10
  _BYTE *v28; // rdx
  __int64 v29; // r9
  char v30; // [rsp+20h] [rbp-51h]
  char v31; // [rsp+50h] [rbp-21h]
  int v32; // [rsp+54h] [rbp-1Dh] BYREF
  int v33; // [rsp+58h] [rbp-19h]
  unsigned int v34; // [rsp+5Ch] [rbp-15h]
  __int64 v35; // [rsp+60h] [rbp-11h] BYREF
  __int64 v36; // [rsp+68h] [rbp-9h] BYREF
  _QWORD *v37; // [rsp+70h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp+7h] BYREF
  __int16 v39; // [rsp+D8h] [rbp+67h] BYREF
  _DWORD *v40; // [rsp+E0h] [rbp+6Fh]

  v40 = a3;
  v39 = -1;
  v32 = 0;
  v7 = a5;
  v35 = 0LL;
  v36 = 0LL;
  v33 = -256;
  v9 = 0LL;
  v10 = *a5;
  v37 = 0LL;
  if ( a2 )
  {
    v21 = (a1 & 0x80u) == 0;
    a1 = 4104;
    v33 = !v21;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
      goto LABEL_34;
    v7 = a5;
  }
  if ( (a1 & 0xFFFF6373) != 0 )
    return 3221225485LL;
  if ( (a1 & 0x9880) == 0 )
    a1 |= 0x80u;
  if ( (a1 & 0xC) == 0xC )
    return 3221225485LL;
  if ( (a1 & 0xC) == 0 )
    a1 |= 8u;
  v11 = (a1 & 0x400) == 0;
  v31 = v11;
  v12 = a1 & 0x9880;
  if ( (a1 & 0x9880) == 0 )
  {
    a1 |= 0x8000u;
    v12 = 0x8000;
  }
  if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 )
    return 3221225485LL;
  v10 = *v7;
  v34 = v10;
  if ( v10 )
  {
    if ( !a4 )
      return 3221225485LL;
  }
  result = RtlpCreateProcessRegistryInfo((__int64 *)&v37, 0x8000LL, 39040LL);
  if ( (int)result < 0 )
    return result;
  v15 = v37;
  if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v37, a2, 0, &v39) < 0 )
  {
LABEL_34:
    v17 = -1073741772;
    goto LABEL_35;
  }
  result = RtlpSetProcUserMachineLangList((__int64)v15, 0LL, v14);
  if ( (int)result >= 0 )
  {
    if ( (a1 & 0x800) != 0 )
    {
      v22 = a5;
      v23 = (int)a5;
      *a5 = v10;
      v17 = LdrpConvertLangFallbackListToMultiSz(v15[7], (_DWORD)v15, (_DWORD)a4, v23, a1, v11, (__int64)&v32);
      if ( v17 >= 0 && v32 )
        goto LABEL_27;
      v17 = LdrpCreateLangFallbackList(&v35, (__int64)v15, 25, 1);
      if ( v17 >= 0 )
      {
        v17 = LdrpMergeLangFallbackLists(a1 | 0x30u, v15, &v35, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        if ( v17 >= 0 )
        {
          *v22 = v10;
LABEL_20:
          v18 = v35;
          v19 = v31;
          v20 = v35;
LABEL_21:
          v17 = LdrpConvertLangFallbackListToMultiSz(v20, (_DWORD)v15, (_DWORD)a4, (_DWORD)a5, a1, v19, (__int64)&v32);
LABEL_22:
          if ( v18 )
            RtlpMuiRegFreeLanguageList(v18);
          if ( v9 )
            RtlpMuiRegFreeLanguageList(v9);
          v10 = v34;
LABEL_27:
          if ( v17 >= 0 )
          {
            *v40 = v32;
            return (unsigned int)v17;
          }
LABEL_35:
          if ( a4 )
          {
            if ( v10 )
              *a4 = 0;
            if ( v10 > 1 )
              a4[1] = 0;
          }
          return (unsigned int)v17;
        }
      }
LABEL_81:
      v18 = v35;
      goto LABEL_22;
    }
    v16 = LdrpCreateLangFallbackList(&v35, (__int64)v15, 25, 1);
    v17 = v16;
    if ( (a1 & 0x8080) != 0 )
    {
      if ( v16 >= 0 )
      {
        v17 = LdrpMergeLangFallbackLists(a1 | 0x30u, v15, &v35, 0LL, 0LL, 0LL, v15[7], 0LL, 1);
        if ( v17 >= 0 )
          goto LABEL_20;
      }
      goto LABEL_81;
    }
    if ( v16 < 0 )
      goto LABEL_81;
    v17 = LdrpMergeLangFallbackLists(a1 | 0x30u, v15, &v35, 0LL, 0LL, 0LL, v15[7], 0LL, 0);
    if ( v17 < 0 )
      goto LABEL_81;
    v24 = LdrpCreateLangFallbackList(&v36, (__int64)v15, 25, 1);
    v18 = v35;
    v17 = v24;
    if ( v24 >= 0 )
    {
      if ( a2 )
      {
        if ( v39 == -1 || (v25 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * v39)) == 0LL )
        {
          v19 = v31;
        }
        else
        {
          if ( (*v25 & 2) != 0 || (_BYTE)v33 && (*v25 & 4) != 0 )
            v19 = 0;
          else
            v19 = v31;
          if ( *(_BYTE *)(v35 + 8) )
            v26 = v15[5];
          else
            v26 = v15[6];
          v17 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v36, (_DWORD)v25, (_DWORD)v15, v26, v30);
        }
      }
      else
      {
        v19 = v31;
        if ( *(_WORD *)(v35 + 4) )
        {
          do
          {
            v27 = *(_QWORD *)(v18 + 24);
            if ( *(_WORD *)(v27 + 6LL * (unsigned int)v9) == 2 )
            {
              if ( (*(_BYTE *)(28LL * *(__int16 *)(v27 + 6LL * (unsigned int)v9 + 4) + *(_QWORD *)(v15[3] + 16LL)) & 2) != 0 )
                v19 = 0;
              v28 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * *(__int16 *)(v27 + 6LL * (unsigned int)v9 + 4));
              if ( (*v28 & 6) != 0 )
              {
                v29 = *(_BYTE *)(v18 + 8) ? v15[5] : v15[6];
                v17 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v36, (_DWORD)v28, (_DWORD)v15, v29, v30);
                if ( v17 >= 0 )
                  goto LABEL_79;
              }
            }
            LODWORD(v9) = v9 + 1;
          }
          while ( (unsigned int)v9 < *(unsigned __int16 *)(v18 + 4) );
        }
      }
      if ( v17 >= 0 )
      {
LABEL_79:
        v9 = v36;
        v20 = v36;
        goto LABEL_21;
      }
    }
    v9 = v36;
    goto LABEL_22;
  }
  return result;
}
