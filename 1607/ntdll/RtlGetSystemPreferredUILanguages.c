/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x18007B0D0
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180079BF0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpSetProcUserMachineLangList @ 0x180012948 (RtlpSetProcUserMachineLangList.c)
 *     LdrpCreateLangFallbackList @ 0x1800143F8 (LdrpCreateLangFallbackList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014530 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x1800145AC (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpMergeLangFallbackLists @ 0x180041048 (LdrpMergeLangFallbackLists.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F04 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180067178 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x1800EEF00 (RtlIsValidLocaleName.c)
 */

NTSTATUS __cdecl RtlGetSystemPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v7; // rcx
  void *v9; // r15
  ULONG v10; // esi
  char v11; // bl
  ULONG v12; // eax
  NTSTATUS result; // eax
  _QWORD *v14; // rdi
  int v15; // eax
  NTSTATUS LangFallbackList; // ebx
  unsigned __int16 *v17; // rsi
  char v18; // r13
  PVOID v19; // rcx
  bool v20; // zf
  PULONG v21; // r13
  PULONG v22; // r9
  int v23; // eax
  _BYTE *v24; // rdx
  NTSTATUS v25; // eax
  __int64 v26; // r10
  _BYTE *v27; // rdx
  int v28; // eax
  char v29; // [rsp+50h] [rbp-21h]
  ULONG v30; // [rsp+54h] [rbp-1Dh] BYREF
  int v31; // [rsp+58h] [rbp-19h]
  ULONG v32; // [rsp+5Ch] [rbp-15h]
  PVOID BaseAddress; // [rsp+60h] [rbp-11h] BYREF
  void *v34; // [rsp+68h] [rbp-9h] BYREF
  _QWORD *v35; // [rsp+70h] [rbp-1h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp+7h] BYREF
  __int16 v37; // [rsp+D8h] [rbp+67h] BYREF
  PULONG v38; // [rsp+E0h] [rbp+6Fh]

  v38 = NumberOfLanguages;
  v37 = -1;
  v30 = 0;
  v7 = ReturnLength;
  BaseAddress = 0LL;
  v34 = 0LL;
  v31 = -256;
  v9 = 0LL;
  v10 = *ReturnLength;
  v35 = 0LL;
  if ( LocaleName )
  {
    v20 = (Flags & 0x80u) == 0;
    Flags = 4104;
    v31 = !v20;
    RtlInitUnicodeString(&DestinationString, LocaleName);
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
      goto LABEL_34;
    v7 = ReturnLength;
  }
  if ( (Flags & 0xFFFF6373) != 0 )
    return -1073741811;
  if ( (Flags & 0x9880) == 0 )
    Flags |= 0x80u;
  if ( (Flags & 0xC) == 0xC )
    return -1073741811;
  if ( (Flags & 0xC) == 0 )
    Flags |= 8u;
  v11 = (Flags & 0x400) == 0;
  v29 = v11;
  v12 = Flags & 0x9880;
  if ( (Flags & 0x9880) == 0 )
  {
    Flags |= 0x8000u;
    v12 = 0x8000;
  }
  if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 )
    return -1073741811;
  v10 = *v7;
  v32 = v10;
  if ( v10 )
  {
    if ( !Languages )
      return -1073741811;
  }
  result = RtlpCreateProcessRegistryInfo(&v35);
  if ( result < 0 )
    return result;
  v14 = v35;
  if ( LocaleName && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v35, LocaleName, 0, &v37) < 0 )
  {
LABEL_34:
    LangFallbackList = -1073741772;
    goto LABEL_35;
  }
  result = RtlpSetProcUserMachineLangList((__int64)v14, 0);
  if ( result >= 0 )
  {
    if ( (Flags & 0x800) != 0 )
    {
      v21 = ReturnLength;
      v22 = ReturnLength;
      *ReturnLength = v10;
      LangFallbackList = LdrpConvertLangFallbackListToMultiSz(
                           v14[7],
                           (__int64)v14,
                           Languages,
                           v22,
                           Flags,
                           v11,
                           (int *)&v30);
      if ( LangFallbackList >= 0 && v30 )
        goto LABEL_27;
      LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v14, 25, 1);
      if ( LangFallbackList >= 0 )
      {
        LangFallbackList = LdrpMergeLangFallbackLists(
                             Flags | 0x30,
                             (__int64)v14,
                             (__int64)&BaseAddress,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             0);
        if ( LangFallbackList >= 0 )
        {
          *v21 = v10;
LABEL_20:
          v17 = (unsigned __int16 *)BaseAddress;
          v18 = v29;
          v19 = BaseAddress;
LABEL_21:
          LangFallbackList = LdrpConvertLangFallbackListToMultiSz(
                               (__int64)v19,
                               (__int64)v14,
                               Languages,
                               ReturnLength,
                               Flags,
                               v18,
                               (int *)&v30);
LABEL_22:
          if ( v17 )
            RtlpMuiRegFreeLanguageList(v17);
          if ( v9 )
            RtlpMuiRegFreeLanguageList(v9);
          v10 = v32;
LABEL_27:
          if ( LangFallbackList >= 0 )
          {
            *v38 = v30;
            return LangFallbackList;
          }
LABEL_35:
          if ( Languages )
          {
            if ( v10 )
              *Languages = 0;
            if ( v10 > 1 )
              Languages[1] = 0;
          }
          return LangFallbackList;
        }
      }
LABEL_81:
      v17 = (unsigned __int16 *)BaseAddress;
      goto LABEL_22;
    }
    v15 = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v14, 25, 1);
    LangFallbackList = v15;
    if ( (Flags & 0x8080) != 0 )
    {
      if ( v15 >= 0 )
      {
        LangFallbackList = LdrpMergeLangFallbackLists(
                             Flags | 0x30,
                             (__int64)v14,
                             (__int64)&BaseAddress,
                             0LL,
                             0LL,
                             0LL,
                             v14[7],
                             0LL,
                             1);
        if ( LangFallbackList >= 0 )
          goto LABEL_20;
      }
      goto LABEL_81;
    }
    if ( v15 < 0 )
      goto LABEL_81;
    LangFallbackList = LdrpMergeLangFallbackLists(
                         Flags | 0x30,
                         (__int64)v14,
                         (__int64)&BaseAddress,
                         0LL,
                         0LL,
                         0LL,
                         v14[7],
                         0LL,
                         0);
    if ( LangFallbackList < 0 )
      goto LABEL_81;
    v23 = LdrpCreateLangFallbackList((__int64 *)&v34, (__int64)v14, 25, 1);
    v17 = (unsigned __int16 *)BaseAddress;
    LangFallbackList = v23;
    if ( v23 >= 0 )
    {
      if ( LocaleName )
      {
        if ( v37 == -1 || (v24 = (_BYTE *)(*(_QWORD *)(v14[3] + 16LL) + 28LL * v37)) == 0LL )
        {
          v18 = v29;
        }
        else
        {
          if ( (*v24 & 2) != 0 || (_BYTE)v31 && (*v24 & 4) != 0 )
            v18 = 0;
          else
            v18 = v29;
          if ( *((_BYTE *)BaseAddress + 8) )
            v25 = LdrpMergeParentBaseLanguagesToList((__int64 *)&v34, (__int64)v24, (__int64)v14, v14[5]);
          else
            v25 = LdrpMergeParentBaseLanguagesToList((__int64 *)&v34, (__int64)v24, (__int64)v14, v14[6]);
          LangFallbackList = v25;
        }
      }
      else
      {
        v18 = v29;
        if ( *((_WORD *)BaseAddress + 2) )
        {
          do
          {
            v26 = *((_QWORD *)v17 + 3);
            if ( *(_WORD *)(v26 + 6LL * (unsigned int)v9) == 2 )
            {
              if ( (*(_BYTE *)(28LL * *(__int16 *)(v26 + 6LL * (unsigned int)v9 + 4) + *(_QWORD *)(v14[3] + 16LL)) & 2) != 0 )
                v18 = 0;
              v27 = (_BYTE *)(*(_QWORD *)(v14[3] + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * (unsigned int)v9 + 4));
              if ( (*v27 & 6) != 0 )
              {
                v28 = *((_BYTE *)v17 + 8)
                    ? LdrpMergeParentBaseLanguagesToList((__int64 *)&v34, (__int64)v27, (__int64)v14, v14[5])
                    : LdrpMergeParentBaseLanguagesToList((__int64 *)&v34, (__int64)v27, (__int64)v14, v14[6]);
                LangFallbackList = v28;
                if ( v28 >= 0 )
                  goto LABEL_79;
              }
            }
            LODWORD(v9) = (_DWORD)v9 + 1;
          }
          while ( (unsigned int)v9 < v17[2] );
        }
      }
      if ( LangFallbackList >= 0 )
      {
LABEL_79:
        v9 = v34;
        v19 = v34;
        goto LABEL_21;
      }
    }
    v9 = v34;
    goto LABEL_22;
  }
  return result;
}
