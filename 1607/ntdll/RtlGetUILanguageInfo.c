/*
 * XREFs of RtlGetUILanguageInfo @ 0x1800E5AC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCheckMuiMultiStringSafe @ 0x180010648 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C30 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448B0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180044994 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x18006AEB0 (RtlUnicodeStringToInteger.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070880 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x180070C30 (RtlpInitializeLangRegistryInfo.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlUnicodeStringToLcid @ 0x1800E6058 (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800F4714 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800F48E0 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800F4A68 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 */

__int64 __fastcall RtlGetUILanguageInfo(int a1, WCHAR *a2, _WORD *a3, unsigned int *a4, int *a5)
{
  char v5; // bl
  _WORD *v7; // r12
  WCHAR *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rdx
  int v11; // r15d
  int v12; // eax
  __int64 v13; // rsi
  unsigned int FallbackLanguagesAsMultiSZ; // ebx
  __int64 v15; // r12
  wchar_t *Heap; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v18; // r9
  __int64 v19; // r15
  const WCHAR *v20; // rdi
  int v22; // r8d
  int v23; // r9d
  int FallbackLanguageInfoByLangId; // eax
  int v25; // ecx
  char v26; // [rsp+30h] [rbp-61h]
  _WORD v27[2]; // [rsp+34h] [rbp-5Dh] BYREF
  _WORD *v28; // [rsp+38h] [rbp-59h]
  unsigned int v29; // [rsp+40h] [rbp-51h] BYREF
  int v30; // [rsp+44h] [rbp-4Dh]
  __int64 v31; // [rsp+48h] [rbp-49h] BYREF
  int v32; // [rsp+50h] [rbp-41h]
  int v33; // [rsp+54h] [rbp-3Dh]
  wchar_t *v34; // [rsp+58h] [rbp-39h]
  UNICODE_STRING v35; // [rsp+60h] [rbp-31h] BYREF
  int *v36; // [rsp+70h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  __int128 v38; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+98h] [rbp+7h]
  int v40; // [rsp+A0h] [rbp+Fh]

  v5 = a1;
  v32 = a1;
  v28 = a3;
  v36 = a5;
  v31 = 0LL;
  v7 = a3;
  v27[0] = -1;
  v8 = a2;
  LOBYTE(v30) = 0;
  v34 = 0LL;
  if ( a4 )
    v9 = *a4;
  else
    v9 = 0;
  if ( !a2 || !*a2 || (a1 & 0xC) == 0xC || (a1 & 0xFFFFFF73) != 0 || v9 && !a3 )
    return 3221225485LL;
  v10 = 4LL;
  v11 = a1 & 4;
  if ( (a1 & 4) == 0 )
    v10 = 85LL;
  if ( (int)RtlpCheckMuiMultiStringSafe(v8, v10) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter pwmszLanguage for function RtlGetUILanguageInfo is not a valid multi-string!\n");
  if ( v7 )
  {
    if ( v9 )
      *v7 = 0;
    if ( v9 > 1 )
      v7[1] = 0;
  }
  if ( a4 )
    *a4 = 2;
  if ( a5 )
    *a5 = 0;
  v33 = v5 & 0x80;
  if ( v5 < 0 )
    v12 = RtlpInitializeLangRegistryInfo(&v31);
  else
    v12 = RtlpCreateProcessRegistryInfo(&v31);
  v13 = v31;
  FallbackLanguagesAsMultiSZ = v12;
  if ( v12 >= 0 )
  {
    if ( !v31 )
    {
      FallbackLanguagesAsMultiSZ = -1073741823;
      goto LABEL_56;
    }
    v15 = *(_QWORD *)(v31 + 24);
    if ( v11 )
    {
      v26 = 1;
      Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      v34 = Heap;
      if ( !Heap )
      {
        v13 = v31;
        FallbackLanguagesAsMultiSZ = -1073741801;
LABEL_32:
        v7 = v28;
        goto LABEL_56;
      }
      v35.Buffer = Heap;
      *(_DWORD *)&v35.Length = 11141120;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( (int)RtlUnicodeStringToLcid(&DestinationString, &v29) < 0 || !RtlLCIDToCultureName(v29, (__int64)&v35) )
      {
        v13 = v31;
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_53;
      }
      v13 = v31;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v31, v29, 1, v27);
    }
    else
    {
      v26 = 0;
      RtlInitUnicodeString(&v35, v8);
      if ( !RtlCultureNameToLCID(&v35.Length, (int *)&v29) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_32;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName(v13, v8, 1, v27);
    }
    FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
    if ( InstalledLanguageIndexByLangId < 0 )
    {
      v7 = v28;
      if ( InstalledLanguageIndexByLangId == -1073741823 )
        FallbackLanguagesAsMultiSZ = -1073741772;
      goto LABEL_54;
    }
    if ( v27[0] < 0 || v27[0] >= (int)*(unsigned __int16 *)(v15 + 6) )
      goto LABEL_52;
    v19 = *(_QWORD *)(v15 + 16) + 28LL * v27[0];
    while ( *v8 )
      ++v8;
    v20 = v8 + 1;
    v38 = *(_OWORD *)v19;
    v39 = *(_QWORD *)(v19 + 16);
    v40 = *(_DWORD *)(v19 + 24);
    if ( (*(_BYTE *)v19 & 1) != 0 )
    {
      if ( (*(_BYTE *)v19 & 6) != 0 )
      {
        FallbackLanguagesAsMultiSZ = -1073741595;
        goto LABEL_53;
      }
      if ( *v20 )
      {
LABEL_52:
        FallbackLanguagesAsMultiSZ = -1073741772;
        goto LABEL_53;
      }
      LOBYTE(v22) = v30;
    }
    else
    {
      LOBYTE(v22) = v30;
      if ( *v20 )
      {
        while ( !(_BYTE)v22 )
        {
          if ( v26 )
          {
            RtlInitUnicodeString(&DestinationString, v20);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v29) < 0 )
              break;
            LOBYTE(v23) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                             v13,
                                             (unsigned int)&v38,
                                             (unsigned __int16)v29,
                                             v23,
                                             (__int64)&v38);
          }
          else
          {
            LOBYTE(v18) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v13, &v38, v20, v18, &v38);
          }
          FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
          if ( FallbackLanguageInfoByLangId < 0 )
            goto LABEL_53;
          v22 = (unsigned __int8)v30;
          if ( (v38 & 0x20) != 0 )
            v22 = 1;
          v30 = v22;
          while ( *v20 )
            ++v20;
          if ( !*++v20 )
            goto LABEL_81;
        }
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_53;
      }
    }
LABEL_81:
    if ( v36 )
    {
      v25 = *(_WORD *)v19 & 0x419F;
      if ( (*(_WORD *)v19 & 0x1000) == 0 )
        v25 |= 0x20u;
      *v36 = v25 | 0x40;
    }
    if ( a4 )
    {
      v7 = v28;
      *a4 = v9;
      if ( (_BYTE)v22 )
        *a4 = 2;
      else
        FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                       v32,
                                       v13,
                                       (unsigned int)&v38,
                                       (_DWORD)a4,
                                       (__int64)v7);
LABEL_54:
      if ( v34 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v34);
        v13 = v31;
      }
      goto LABEL_56;
    }
LABEL_53:
    v7 = v28;
    goto LABEL_54;
  }
LABEL_56:
  if ( v33 && v13 )
    RtlpMuiFreeLangRegistryInfo(v13);
  if ( !FallbackLanguagesAsMultiSZ && a4 && *a4 > v9 )
  {
    if ( v7 )
      return (unsigned int)-1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
