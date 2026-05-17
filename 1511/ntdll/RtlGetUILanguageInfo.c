/*
 * XREFs of RtlGetUILanguageInfo @ 0x1800DC890
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001B8EC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001D714 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003BDAC (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18003ED50 (RtlpInitializeLangRegistryInfo.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x180075D40 (RtlUnicodeStringToInteger.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180083270 (RtlpMuiFreeLangRegistryInfo.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlUnicodeStringToLcid @ 0x1800DCE2C (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800EB994 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800EBB60 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800EBCE8 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 */

__int64 __fastcall RtlGetUILanguageInfo(int a1, WCHAR *a2, _WORD *a3, unsigned int *a4, int *a5)
{
  char v5; // bl
  _WORD *v7; // r12
  WCHAR *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rdx
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rsi
  unsigned int FallbackLanguagesAsMultiSZ; // ebx
  __int64 v17; // r12
  unsigned __int16 *Heap; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v20; // r9
  __int64 v21; // r15
  const WCHAR *v22; // rdi
  int v24; // r8d
  int v25; // r9d
  int FallbackLanguageInfoByLangId; // eax
  int v27; // ecx
  char v28; // [rsp+30h] [rbp-61h]
  _WORD v29[2]; // [rsp+34h] [rbp-5Dh] BYREF
  _WORD *v30; // [rsp+38h] [rbp-59h]
  int v31; // [rsp+40h] [rbp-51h]
  unsigned int v32; // [rsp+44h] [rbp-4Dh] BYREF
  __int64 v33; // [rsp+48h] [rbp-49h] BYREF
  int v34; // [rsp+50h] [rbp-41h]
  int v35; // [rsp+54h] [rbp-3Dh]
  unsigned __int16 *v36; // [rsp+58h] [rbp-39h]
  UNICODE_STRING v37; // [rsp+60h] [rbp-31h] BYREF
  int *v38; // [rsp+70h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  __int128 v40; // [rsp+88h] [rbp-9h] BYREF
  __int64 v41; // [rsp+98h] [rbp+7h]
  int v42; // [rsp+A0h] [rbp+Fh]

  v5 = a1;
  v35 = a1;
  v30 = a3;
  v38 = a5;
  v33 = 0LL;
  v7 = a3;
  v29[0] = -1;
  v8 = a2;
  LOBYTE(v31) = 0;
  v36 = 0LL;
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
  v34 = v5 & 0x80;
  if ( v5 < 0 )
    v14 = RtlpInitializeLangRegistryInfo(&v33);
  else
    v14 = RtlpCreateProcessRegistryInfo(&v33, v12, v13);
  v15 = v33;
  FallbackLanguagesAsMultiSZ = v14;
  if ( v14 >= 0 )
  {
    if ( !v33 )
    {
      FallbackLanguagesAsMultiSZ = -1073741823;
      goto LABEL_56;
    }
    v17 = *(_QWORD *)(v33 + 24);
    if ( v11 )
    {
      v28 = 1;
      Heap = (unsigned __int16 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
      v36 = Heap;
      if ( !Heap )
      {
        v15 = v33;
        FallbackLanguagesAsMultiSZ = -1073741801;
LABEL_32:
        v7 = v30;
        goto LABEL_56;
      }
      v37.Buffer = Heap;
      *(_DWORD *)&v37.Length = 11141120;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( (int)RtlUnicodeStringToLcid(&DestinationString, &v32) < 0 || !RtlLCIDToCultureName(v32, (__int64)&v37) )
      {
        v15 = v33;
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_53;
      }
      v15 = v33;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v33, v32, 1, v29);
    }
    else
    {
      v28 = 0;
      RtlInitUnicodeString(&v37, v8);
      if ( !RtlCultureNameToLCID(&v37.Length, (int *)&v32) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_32;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName(v15, v8, 1, v29);
    }
    FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
    if ( InstalledLanguageIndexByLangId < 0 )
    {
      v7 = v30;
      if ( InstalledLanguageIndexByLangId == -1073741823 )
        FallbackLanguagesAsMultiSZ = -1073741772;
      goto LABEL_54;
    }
    if ( v29[0] < 0 || v29[0] >= (int)*(unsigned __int16 *)(v17 + 6) )
      goto LABEL_52;
    v21 = *(_QWORD *)(v17 + 16) + 28LL * v29[0];
    while ( *v8 )
      ++v8;
    v22 = v8 + 1;
    v40 = *(_OWORD *)v21;
    v41 = *(_QWORD *)(v21 + 16);
    v42 = *(_DWORD *)(v21 + 24);
    if ( (*(_BYTE *)v21 & 1) != 0 )
    {
      if ( (*(_BYTE *)v21 & 6) != 0 )
      {
        FallbackLanguagesAsMultiSZ = -1073741595;
        goto LABEL_53;
      }
      if ( *v22 )
      {
LABEL_52:
        FallbackLanguagesAsMultiSZ = -1073741772;
        goto LABEL_53;
      }
      LOBYTE(v24) = v31;
    }
    else
    {
      LOBYTE(v24) = v31;
      if ( *v22 )
      {
        while ( !(_BYTE)v24 )
        {
          if ( v28 )
          {
            RtlInitUnicodeString(&DestinationString, v22);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v32) < 0 )
              break;
            LOBYTE(v25) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                             v15,
                                             (unsigned int)&v40,
                                             (unsigned __int16)v32,
                                             v25,
                                             (__int64)&v40);
          }
          else
          {
            LOBYTE(v20) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v15, &v40, v22, v20, &v40);
          }
          FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
          if ( FallbackLanguageInfoByLangId < 0 )
            goto LABEL_53;
          v24 = (unsigned __int8)v31;
          if ( (v40 & 0x20) != 0 )
            v24 = 1;
          v31 = v24;
          while ( *v22 )
            ++v22;
          if ( !*++v22 )
            goto LABEL_81;
        }
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_53;
      }
    }
LABEL_81:
    if ( v38 )
    {
      v27 = *(_WORD *)v21 & 0x419F;
      if ( (*(_WORD *)v21 & 0x1000) == 0 )
        v27 |= 0x20u;
      *v38 = v27 | 0x40;
    }
    if ( a4 )
    {
      v7 = v30;
      *a4 = v9;
      if ( (_BYTE)v24 )
        *a4 = 2;
      else
        FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                       v35,
                                       v15,
                                       (unsigned int)&v40,
                                       (_DWORD)a4,
                                       (__int64)v7);
LABEL_54:
      if ( v36 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v36);
        v15 = v33;
      }
      goto LABEL_56;
    }
LABEL_53:
    v7 = v30;
    goto LABEL_54;
  }
LABEL_56:
  if ( v34 && v15 )
    RtlpMuiFreeLangRegistryInfo(v15);
  if ( !FallbackLanguagesAsMultiSZ && a4 && *a4 > v9 )
  {
    if ( v7 )
      return (unsigned int)-1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
