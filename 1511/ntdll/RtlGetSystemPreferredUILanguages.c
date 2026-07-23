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
  __int64 v14; // r8
  _QWORD *v15; // rdi
  int v16; // eax
  NTSTATUS LangFallbackList; // ebx
  unsigned __int16 *v18; // rsi
  char v19; // r13
  int v20; // ecx
  bool v21; // zf
  PULONG v22; // r13
  int v23; // r9d
  int v24; // eax
  _BYTE *v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r10
  _BYTE *v28; // rdx
  __int64 v29; // r9
  char v30; // [rsp+20h] [rbp-51h]
  char v31; // [rsp+50h] [rbp-21h]
  ULONG v32; // [rsp+54h] [rbp-1Dh] BYREF
  int v33; // [rsp+58h] [rbp-19h]
  ULONG v34; // [rsp+5Ch] [rbp-15h]
  PVOID BaseAddress; // [rsp+60h] [rbp-11h] BYREF
  void *v36; // [rsp+68h] [rbp-9h] BYREF
  _QWORD *v37; // [rsp+70h] [rbp-1h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp+7h] BYREF
  __int16 v39; // [rsp+D8h] [rbp+67h] BYREF
  PULONG v40; // [rsp+E0h] [rbp+6Fh]

  v40 = NumberOfLanguages;
  v39 = -1;
  v32 = 0;
  v7 = ReturnLength;
  BaseAddress = 0LL;
  v36 = 0LL;
  v33 = -256;
  v9 = 0LL;
  v10 = *ReturnLength;
  v37 = 0LL;
  if ( LocaleName )
  {
    v21 = (Flags & 0x80u) == 0;
    Flags = 4104;
    v33 = !v21;
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
  v31 = v11;
  v12 = Flags & 0x9880;
  if ( (Flags & 0x9880) == 0 )
  {
    Flags |= 0x8000u;
    v12 = 0x8000;
  }
  if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 )
    return -1073741811;
  v10 = *v7;
  v34 = v10;
  if ( v10 )
  {
    if ( !Languages )
      return -1073741811;
  }
  result = RtlpCreateProcessRegistryInfo(&v37, 0x8000LL, 39040LL);
  if ( result < 0 )
    return result;
  v15 = v37;
  if ( LocaleName && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v37, LocaleName, 0, &v39) < 0 )
  {
LABEL_34:
    LangFallbackList = -1073741772;
    goto LABEL_35;
  }
  result = RtlpSetProcUserMachineLangList((__int64)v15, 0LL, v14);
  if ( result >= 0 )
  {
    if ( (Flags & 0x800) != 0 )
    {
      v22 = ReturnLength;
      v23 = (int)ReturnLength;
      *ReturnLength = v10;
      LangFallbackList = LdrpConvertLangFallbackListToMultiSz(
                           v15[7],
                           (_DWORD)v15,
                           (_DWORD)Languages,
                           v23,
                           Flags,
                           v11,
                           (__int64)&v32);
      if ( LangFallbackList >= 0 && v32 )
        goto LABEL_27;
      LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v15, 25, 1);
      if ( LangFallbackList >= 0 )
      {
        LangFallbackList = LdrpMergeLangFallbackLists(
                             Flags | 0x30,
                             (__int64)v15,
                             &BaseAddress,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             0);
        if ( LangFallbackList >= 0 )
        {
          *v22 = v10;
LABEL_20:
          v18 = (unsigned __int16 *)BaseAddress;
          v19 = v31;
          v20 = (int)BaseAddress;
LABEL_21:
          LangFallbackList = LdrpConvertLangFallbackListToMultiSz(
                               v20,
                               (_DWORD)v15,
                               (_DWORD)Languages,
                               (_DWORD)ReturnLength,
                               Flags,
                               v19,
                               (__int64)&v32);
LABEL_22:
          if ( v18 )
            RtlpMuiRegFreeLanguageList(v18);
          if ( v9 )
            RtlpMuiRegFreeLanguageList(v9);
          v10 = v34;
LABEL_27:
          if ( LangFallbackList >= 0 )
          {
            *v40 = v32;
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
      v18 = (unsigned __int16 *)BaseAddress;
      goto LABEL_22;
    }
    v16 = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v15, 25, 1);
    LangFallbackList = v16;
    if ( (Flags & 0x8080) != 0 )
    {
      if ( v16 >= 0 )
      {
        LangFallbackList = LdrpMergeLangFallbackLists(
                             Flags | 0x30,
                             (__int64)v15,
                             &BaseAddress,
                             0LL,
                             0LL,
                             0LL,
                             v15[7],
                             0LL,
                             1);
        if ( LangFallbackList >= 0 )
          goto LABEL_20;
      }
      goto LABEL_81;
    }
    if ( v16 < 0 )
      goto LABEL_81;
    LangFallbackList = LdrpMergeLangFallbackLists(
                         Flags | 0x30,
                         (__int64)v15,
                         &BaseAddress,
                         0LL,
                         0LL,
                         0LL,
                         v15[7],
                         0LL,
                         0);
    if ( LangFallbackList < 0 )
      goto LABEL_81;
    v24 = LdrpCreateLangFallbackList((__int64 *)&v36, (__int64)v15, 25, 1);
    v18 = (unsigned __int16 *)BaseAddress;
    LangFallbackList = v24;
    if ( v24 >= 0 )
    {
      if ( LocaleName )
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
          if ( *((_BYTE *)BaseAddress + 8) )
            v26 = v15[5];
          else
            v26 = v15[6];
          LangFallbackList = LdrpMergeParentBaseLanguagesToList((unsigned int)&v36, (_DWORD)v25, (_DWORD)v15, v26, v30);
        }
      }
      else
      {
        v19 = v31;
        if ( *((_WORD *)BaseAddress + 2) )
        {
          do
          {
            v27 = *((_QWORD *)v18 + 3);
            if ( *(_WORD *)(v27 + 6LL * (unsigned int)v9) == 2 )
            {
              if ( (*(_BYTE *)(28LL * *(__int16 *)(v27 + 6LL * (unsigned int)v9 + 4) + *(_QWORD *)(v15[3] + 16LL)) & 2) != 0 )
                v19 = 0;
              v28 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * *(__int16 *)(v27 + 6LL * (unsigned int)v9 + 4));
              if ( (*v28 & 6) != 0 )
              {
                v29 = *((_BYTE *)v18 + 8) ? v15[5] : v15[6];
                LangFallbackList = LdrpMergeParentBaseLanguagesToList(
                                     (unsigned int)&v36,
                                     (_DWORD)v28,
                                     (_DWORD)v15,
                                     v29,
                                     v30);
                if ( LangFallbackList >= 0 )
                  goto LABEL_79;
              }
            }
            LODWORD(v9) = (_DWORD)v9 + 1;
          }
          while ( (unsigned int)v9 < v18[2] );
        }
      }
      if ( LangFallbackList >= 0 )
      {
LABEL_79:
        v9 = v36;
        v20 = (int)v36;
        goto LABEL_21;
      }
    }
    v9 = v36;
    goto LABEL_22;
  }
  return result;
}
