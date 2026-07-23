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

NTSTATUS __cdecl RtlGetUILanguageInfo(
        ULONG Flags,
        PCZZWSTR Languages,
        PZZWSTR FallbackLanguages,
        PULONG NumberOfFallbackLanguages,
        PULONG Attributes)
{
  char v5; // bl
  PZZWSTR v7; // r12
  WCHAR *v8; // rdi
  ULONG v9; // r13d
  __int64 v10; // rdx
  ULONG v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  PVOID v15; // rsi
  NTSTATUS FallbackLanguagesAsMultiSZ; // ebx
  __int64 v17; // r12
  PVOID Heap; // rax
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
  PZZWSTR v30; // [rsp+38h] [rbp-59h]
  int v31; // [rsp+40h] [rbp-51h]
  LCID Lcid; // [rsp+44h] [rbp-4Dh] BYREF
  PVOID v33; // [rsp+48h] [rbp-49h] BYREF
  int v34; // [rsp+50h] [rbp-41h]
  ULONG v35; // [rsp+54h] [rbp-3Dh]
  PVOID BaseAddress; // [rsp+58h] [rbp-39h]
  _UNICODE_STRING String; // [rsp+60h] [rbp-31h] BYREF
  PULONG v38; // [rsp+70h] [rbp-21h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  __int128 v40; // [rsp+88h] [rbp-9h] BYREF
  __int64 v41; // [rsp+98h] [rbp+7h]
  int v42; // [rsp+A0h] [rbp+Fh]

  v5 = Flags;
  v35 = Flags;
  v30 = FallbackLanguages;
  v38 = Attributes;
  v33 = 0LL;
  v7 = FallbackLanguages;
  v29[0] = -1;
  v8 = (WCHAR *)Languages;
  LOBYTE(v31) = 0;
  BaseAddress = 0LL;
  if ( NumberOfFallbackLanguages )
    v9 = *NumberOfFallbackLanguages;
  else
    v9 = 0;
  if ( !Languages || !*Languages || (Flags & 0xC) == 0xC || (Flags & 0xFFFFFF73) != 0 || v9 && !FallbackLanguages )
    return -1073741811;
  v10 = 4LL;
  v11 = Flags & 4;
  if ( (Flags & 4) == 0 )
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
  if ( NumberOfFallbackLanguages )
    *NumberOfFallbackLanguages = 2;
  if ( Attributes )
    *Attributes = 0;
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
    v17 = *((_QWORD *)v33 + 3);
    if ( v11 )
    {
      v28 = 1;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      BaseAddress = Heap;
      if ( !Heap )
      {
        v15 = v33;
        FallbackLanguagesAsMultiSZ = -1073741801;
LABEL_32:
        v7 = v30;
        goto LABEL_56;
      }
      String.Buffer = (unsigned __int16 *)Heap;
      *(_DWORD *)&String.Length = 11141120;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( (int)RtlUnicodeStringToLcid(&DestinationString, &Lcid) < 0 || !RtlLCIDToCultureName(Lcid, &String) )
      {
        v15 = v33;
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_53;
      }
      v15 = v33;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId((__int64)v33, Lcid, 1, v29);
    }
    else
    {
      v28 = 0;
      RtlInitUnicodeString(&String, v8);
      if ( !RtlCultureNameToLCID(&String, &Lcid) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_32;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v15, v8, 1, v29);
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
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Lcid) < 0 )
              break;
            LOBYTE(v25) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                             (_DWORD)v15,
                                             (unsigned int)&v40,
                                             (unsigned __int16)Lcid,
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
    if ( NumberOfFallbackLanguages )
    {
      v7 = v30;
      *NumberOfFallbackLanguages = v9;
      if ( (_BYTE)v24 )
        *NumberOfFallbackLanguages = 2;
      else
        FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                       v35,
                                       (_DWORD)v15,
                                       (unsigned int)&v40,
                                       (_DWORD)NumberOfFallbackLanguages,
                                       (__int64)v7);
LABEL_54:
      if ( BaseAddress )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
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
  if ( !FallbackLanguagesAsMultiSZ && NumberOfFallbackLanguages && *NumberOfFallbackLanguages > v9 )
  {
    if ( v7 )
      return -1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
