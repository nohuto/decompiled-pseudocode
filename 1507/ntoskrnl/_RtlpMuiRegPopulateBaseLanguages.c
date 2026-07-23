/*
 * XREFs of _RtlpMuiRegPopulateBaseLanguages @ 0x140720A68
 * Callers:
 *     _RtlpMuiRegInitPartialLanguage @ 0x140720A14 (_RtlpMuiRegInitPartialLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x14017F250 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlCompareUnicodeStrings @ 0x1404DA390 (RtlCompareUnicodeStrings.c)
 *     NtQueryInstallUILanguage @ 0x14054D864 (NtQueryInstallUILanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140590CB0 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpQueryValueKey @ 0x140591BAC (LdrpQueryValueKey.c)
 *     RtlLCIDToCultureName @ 0x1406CC9C0 (RtlLCIDToCultureName.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x14072046C (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x140720EC8 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 */

NTSTATUS __fastcall RtlpMuiRegPopulateBaseLanguages(_WORD *a1, __int64 a2, _WORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v8; // r14
  __int16 v9; // ax
  NTSTATUS v10; // r12d
  unsigned int v11; // edi
  NTSTATUS result; // eax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // si
  __int64 v15; // r15
  void *v16; // rsi
  ULONG i; // r12d
  unsigned __int64 v18; // rsi
  __int16 v19; // r15
  __int64 v20; // rax
  unsigned int *v21; // rax
  LANGID LanguageId[2]; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v4 + 32) = a2;
  *(_QWORD *)(v4 + 64) = a4;
  *(_DWORD *)(v4 + 24) = 0;
  *(_WORD *)(v4 + 80) = 0;
  memset((void *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 82), 0, 0xA8uLL);
  *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x100) = 0;
  memset((void *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 258), 0, 0xA8uLL);
  *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C0) = 0;
  memset((void *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 962), 0, 0xA8uLL);
  *(_WORD *)v4 = 0;
  *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  LODWORD(v8) = 0;
  *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  if ( !a1 || !a3 || !a2 )
    return -1073741811;
  v9 = a1[2];
  v10 = 0;
  *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0;
  v11 = 0;
  if ( v9 )
  {
    v13 = a1[3];
    v14 = a1[4];
  }
  else
  {
    result = NtQueryInstallUILanguage((LANGID *)((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL));
    v10 = result;
    if ( result < 0 )
      return result;
    if ( (int)RtlpLoadInstallLanguageFallback((__int64)a1, (_WORD *)(v4 + 16), (_WORD *)(v4 + 20)) >= 0 )
    {
      v14 = *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x14);
      v13 = *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    }
    else
    {
      v13 = 0;
      v14 = 0;
    }
    v9 = *(_WORD *)v4;
    if ( PsUILanguageComitted )
    {
      a1[4] = v14;
      a1[3] = v13;
      a1[2] = v9;
    }
  }
  v15 = -1LL;
  if ( a3[2] == v9 )
  {
    if ( v13 )
    {
      *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x32) = 170;
      *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = ((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                 + 256;
      *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512;
      if ( RtlLCIDToCultureName(v13, (PUNICODE_STRING)(v4 + 48)) )
      {
        if ( ZwQueryValueKey(
               *(HANDLE *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
               (PUNICODE_STRING)(v4 + 48),
               KeyValueFullInformation,
               (PVOID)(v4 + 448),
               0x200u,
               (PULONG)(v4 + 4)) >= 0
          && (int)RtlpMuiRegValidateAndGetInstallFallbackBase(a1, v4 + 448, v14, v4 + 960) >= 0
          && (int)RtlpMuiRegAddBaseLanguage((__int64)a1, a3, 0, v4 + 448, (wchar_t *)(v4 + 960)) >= 0 )
        {
          v11 = 1;
          v8 = -1LL;
          do
            ++v8;
          while ( *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x100 + 2 * v8) );
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v4 + 48), L"DefaultFallback");
  v16 = *(void **)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
  *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 1;
  *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 170;
  if ( (int)LdrpQueryValueKey(
              v16,
              (PUNICODE_STRING)(v4 + 48),
              (_DWORD *)(v4 + 16),
              (void *)(v4 + 80),
              (ULONG *)(v4 + 4)) >= 0
    && *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) == 1
    && (!(_DWORD)v8
     || RtlCompareUnicodeStrings(
          (PCWCH)(v4 + 80),
          (unsigned __int64)*(unsigned int *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) >> 1,
          (PCWCH)(v4 + 256),
          (unsigned int)v8,
          1u))
    && (RtlInitUnicodeString((PUNICODE_STRING)(v4 + 48), (PCWSTR)(v4 + 80)),
        *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512,
        ZwQueryValueKey(
          v16,
          (PUNICODE_STRING)(v4 + 48),
          KeyValueFullInformation,
          (PVOID)(v4 + 448),
          0x200u,
          (PULONG)(v4 + 4)) >= 0)
    && *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C4) == 7
    && (int)RtlpMuiRegAddBaseLanguage((__int64)a1, a3, v11, v4 + 448, 0LL) >= 0 )
  {
    ++v11;
    do
      ++v15;
    while ( *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * v15) );
    *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v15;
  }
  else
  {
    v15 = *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  }
  if ( v10 != -2147483622 )
  {
    for ( i = *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28); ; ++i )
    {
      if ( v11 >= 4
        || ZwEnumerateValueKey(v16, i, KeyValueFullInformation, (PVOID)(v4 + 448), 0x200u, (PULONG)(v4 + 24)) < 0 )
      {
        goto LABEL_47;
      }
      if ( *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C4) == 7
        && *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D0) <= 0x200u )
      {
        if ( !(_DWORD)v15 && !(_DWORD)v8 )
          goto LABEL_44;
        v18 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D0) >> 1;
        v19 = *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D4 + 2 * v18);
        *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D4 + 2 * v18) = 0;
        if ( !(_DWORD)v8
          || RtlCompareUnicodeStrings(
               (PCWCH)(v4 + 468),
               (unsigned __int64)*(unsigned int *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D0) >> 1,
               (PCWCH)(v4 + 256),
               (unsigned int)v8,
               1u) )
        {
          v20 = *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          if ( !(_DWORD)v20
            || RtlCompareUnicodeStrings(
                 (PCWCH)(v4 + 468),
                 (unsigned __int64)*(unsigned int *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D0) >> 1,
                 (PCWCH)(v4 + 80),
                 (unsigned int)v20,
                 1u) )
          {
            break;
          }
        }
      }
LABEL_46:
      v16 = *(void **)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      v15 = *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    }
    *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D4 + 2 * v18) = v19;
LABEL_44:
    if ( (int)RtlpMuiRegAddBaseLanguage((__int64)a1, a3, v11, v4 + 448, 0LL) >= 0 )
      ++v11;
    goto LABEL_46;
  }
LABEL_47:
  v21 = *(unsigned int **)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  if ( v21 )
    *v21 = v11;
  return 0;
}
