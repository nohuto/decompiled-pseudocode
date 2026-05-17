/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x18006C270
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x18006CFE0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpSetProcUserMachineLangList @ 0x18001BAC8 (RtlpSetProcUserMachineLangList.c)
 *     LdrpCreateLangFallbackList @ 0x18001DA28 (LdrpCreateLangFallbackList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001DD60 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18001DDDC (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001E1D8 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpMergeLangFallbackLists @ 0x18001E368 (LdrpMergeLangFallbackLists.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800273D8 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800D44C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x1800E04F0 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlGetSystemPreferredUILanguages(int a1, const WCHAR *a2, _DWORD *a3, __int64 a4, unsigned int *a5)
{
  unsigned int *v7; // rcx
  __int64 v9; // r15
  unsigned int v10; // esi
  char v11; // bl
  int v12; // eax
  __int64 result; // rax
  _QWORD *v14; // rdi
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rsi
  char v18; // r13
  __int64 v19; // rcx
  bool v20; // zf
  unsigned int *v21; // r13
  unsigned int *v22; // r9
  int v23; // eax
  _BYTE *v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r10
  _BYTE *v27; // rdx
  __int64 v28; // r9
  char v29; // [rsp+20h] [rbp-51h]
  char v30; // [rsp+50h] [rbp-21h]
  int v31; // [rsp+54h] [rbp-1Dh] BYREF
  int v32; // [rsp+58h] [rbp-19h]
  unsigned int v33; // [rsp+5Ch] [rbp-15h]
  __int64 v34; // [rsp+60h] [rbp-11h] BYREF
  __int64 v35; // [rsp+68h] [rbp-9h] BYREF
  _QWORD *v36; // [rsp+70h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp+7h] BYREF
  __int16 v38; // [rsp+D8h] [rbp+67h] BYREF
  _DWORD *v39; // [rsp+E0h] [rbp+6Fh]

  v39 = a3;
  v38 = -1;
  v31 = 0;
  v7 = a5;
  v34 = 0LL;
  v35 = 0LL;
  v32 = -256;
  v9 = 0LL;
  v10 = *a5;
  v36 = 0LL;
  if ( a2 )
  {
    v20 = (a1 & 0x80u) == 0;
    a1 = 4104;
    v32 = !v20;
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
  v30 = v11;
  v12 = a1 & 0x9880;
  if ( (a1 & 0x9880) == 0 )
  {
    a1 |= 0x8000u;
    v12 = 0x8000;
  }
  if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 )
    return 3221225485LL;
  v10 = *v7;
  v33 = v10;
  if ( v10 )
  {
    if ( !a4 )
      return 3221225485LL;
  }
  result = RtlpCreateProcessRegistryInfo((__int64 *)&v36);
  if ( (int)result < 0 )
    return result;
  v14 = v36;
  if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v36, a2, 0, &v38) < 0 )
  {
LABEL_34:
    v16 = -1073741772;
    goto LABEL_35;
  }
  result = RtlpSetProcUserMachineLangList((__int64)v14, 0);
  if ( (int)result >= 0 )
  {
    if ( (a1 & 0x800) != 0 )
    {
      v21 = a5;
      v22 = a5;
      *a5 = v10;
      v16 = LdrpConvertLangFallbackListToMultiSz(v14[7], (__int64)v14, (_DWORD *)a4, v22, a1, v11, &v31);
      if ( v16 >= 0 && v31 )
        goto LABEL_27;
      v16 = LdrpCreateLangFallbackList(&v34, (__int64)v14, 0x19u, 1);
      if ( v16 >= 0 )
      {
        v16 = LdrpMergeLangFallbackLists(a1 | 0x30u, v14, (__int64)&v34, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        if ( v16 >= 0 )
        {
          *v21 = v10;
LABEL_20:
          v17 = v34;
          v18 = v30;
          v19 = v34;
LABEL_21:
          v16 = LdrpConvertLangFallbackListToMultiSz(v19, (__int64)v14, (_DWORD *)a4, a5, a1, v18, &v31);
LABEL_22:
          if ( v17 )
            RtlpMuiRegFreeLanguageList(v17);
          if ( v9 )
            RtlpMuiRegFreeLanguageList(v9);
          v10 = v33;
LABEL_27:
          if ( v16 >= 0 )
          {
            *v39 = v31;
            return (unsigned int)v16;
          }
LABEL_35:
          if ( a4 )
          {
            if ( v10 )
              *(_WORD *)a4 = 0;
            if ( v10 > 1 )
              *(_WORD *)(a4 + 2) = 0;
          }
          return (unsigned int)v16;
        }
      }
LABEL_81:
      v17 = v34;
      goto LABEL_22;
    }
    v15 = LdrpCreateLangFallbackList(&v34, (__int64)v14, 0x19u, 1);
    v16 = v15;
    if ( (a1 & 0x8080) != 0 )
    {
      if ( v15 >= 0 )
      {
        v16 = LdrpMergeLangFallbackLists(a1 | 0x30u, v14, (__int64)&v34, 0LL, 0LL, 0LL, v14[7], 0LL, 1);
        if ( v16 >= 0 )
          goto LABEL_20;
      }
      goto LABEL_81;
    }
    if ( v15 < 0 )
      goto LABEL_81;
    v16 = LdrpMergeLangFallbackLists(a1 | 0x30u, v14, (__int64)&v34, 0LL, 0LL, 0LL, v14[7], 0LL, 0);
    if ( v16 < 0 )
      goto LABEL_81;
    v23 = LdrpCreateLangFallbackList(&v35, (__int64)v14, 0x19u, 1);
    v17 = v34;
    v16 = v23;
    if ( v23 >= 0 )
    {
      if ( a2 )
      {
        if ( v38 == -1 || (v24 = (_BYTE *)(*(_QWORD *)(v14[3] + 16LL) + 28LL * v38)) == 0LL )
        {
          v18 = v30;
        }
        else
        {
          if ( (*v24 & 2) != 0 || (_BYTE)v32 && (*v24 & 4) != 0 )
            v18 = 0;
          else
            v18 = v30;
          if ( *(_BYTE *)(v34 + 8) )
            v25 = v14[5];
          else
            v25 = v14[6];
          v16 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v35, (_DWORD)v24, (_DWORD)v14, v25, v29);
        }
      }
      else
      {
        v18 = v30;
        if ( *(_WORD *)(v34 + 4) )
        {
          do
          {
            v26 = *(_QWORD *)(v17 + 24);
            if ( *(_WORD *)(v26 + 6LL * (unsigned int)v9) == 2 )
            {
              if ( (*(_BYTE *)(28LL * *(__int16 *)(v26 + 6LL * (unsigned int)v9 + 4) + *(_QWORD *)(v14[3] + 16LL)) & 2) != 0 )
                v18 = 0;
              v27 = (_BYTE *)(*(_QWORD *)(v14[3] + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * (unsigned int)v9 + 4));
              if ( (*v27 & 6) != 0 )
              {
                v28 = *(_BYTE *)(v17 + 8) ? v14[5] : v14[6];
                v16 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v35, (_DWORD)v27, (_DWORD)v14, v28, v29);
                if ( v16 >= 0 )
                  goto LABEL_79;
              }
            }
            LODWORD(v9) = v9 + 1;
          }
          while ( (unsigned int)v9 < *(unsigned __int16 *)(v17 + 4) );
        }
      }
      if ( v16 >= 0 )
      {
LABEL_79:
        v9 = v35;
        v19 = v35;
        goto LABEL_21;
      }
    }
    v9 = v35;
    goto LABEL_22;
  }
  return result;
}
