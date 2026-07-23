/*
 * XREFs of _RtlpMuiRegPopulateBaseLanguages @ 0x1406E7DC0
 * Callers:
 *     _RtlpMuiRegInitPartialLanguage @ 0x1406E7D6C (_RtlpMuiRegInitPartialLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x14015A450 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     NtQueryInstallUILanguage @ 0x1404C1B84 (NtQueryInstallUILanguage.c)
 *     RtlCompareUnicodeStrings @ 0x140511FA0 (RtlCompareUnicodeStrings.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140560264 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpQueryValueKey @ 0x140561174 (LdrpQueryValueKey.c)
 *     RtlLCIDToCultureName @ 0x140688FE8 (RtlLCIDToCultureName.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1406E77C8 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1406E820C (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 */

NTSTATUS __fastcall RtlpMuiRegPopulateBaseLanguages(_WORD *a1, __int64 a2, _WORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v8; // r15
  __int16 v9; // ax
  NTSTATUS v10; // r12d
  unsigned int v11; // ebx
  NTSTATUS result; // eax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // si
  __int64 v15; // r14
  void *v16; // rsi
  __int64 v17; // rsi
  ULONG i; // r12d
  unsigned __int64 v19; // rsi
  __int16 v20; // r14
  __int64 v21; // rax
  unsigned int *v22; // rax
  LANGID LanguageId[2]; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v4 + 40) = a2;
  *(_QWORD *)(v4 + 64) = a4;
  *(_DWORD *)(v4 + 32) = 0;
  memset((void *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 80), 0, 0xAAuLL);
  memset((void *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 768), 0, 0xAAuLL);
  memset((void *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 944), 0, 0xAAuLL);
  *(_WORD *)v4 = 0;
  *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
  LODWORD(v8) = 0;
  *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  if ( !a1 || !a3 || !a2 )
    return -1073741811;
  v9 = a1[2];
  v10 = 0;
  *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = 0;
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
    if ( (int)RtlpLoadInstallLanguageFallback((__int64)a1, (_WORD *)(v4 + 8), (_WORD *)(v4 + 24)) >= 0 )
    {
      v14 = *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      v13 = *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
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
      *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = ((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                 + 768;
      *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512;
      *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x32) = 170;
      if ( RtlLCIDToCultureName(v13, (PUNICODE_STRING)(v4 + 48)) )
      {
        if ( ZwQueryValueKey(
               *(HANDLE *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
               (PUNICODE_STRING)(v4 + 48),
               KeyValueFullInformation,
               (PVOID)(v4 + 256),
               0x200u,
               (PULONG)(v4 + 4)) >= 0
          && (int)RtlpMuiRegValidateAndGetInstallFallbackBase(a1, v4 + 256, v14, v4 + 944) >= 0
          && (int)RtlpMuiRegAddBaseLanguage((__int64)a1, a3, 0, v4 + 256, (wchar_t *)(v4 + 944)) >= 0 )
        {
          v11 = 1;
          v8 = -1LL;
          do
            ++v8;
          while ( *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x300 + 2 * v8) );
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v4 + 48), L"DefaultFallback");
  v16 = *(void **)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 1;
  *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 170;
  if ( (int)LdrpQueryValueKey(v16, (PUNICODE_STRING)(v4 + 48), (_DWORD *)(v4 + 8), (void *)(v4 + 80), (ULONG *)(v4 + 4)) >= 0
    && *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) == 1
    && (!(_DWORD)v8
     || RtlCompareUnicodeStrings(
          (PCWCH)(v4 + 80),
          (unsigned __int64)*(unsigned int *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) >> 1,
          (PCWCH)(v4 + 768),
          (unsigned int)v8,
          1u))
    && (RtlInitUnicodeString((PUNICODE_STRING)(v4 + 48), (PCWSTR)(v4 + 80)),
        *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512,
        ZwQueryValueKey(
          v16,
          (PUNICODE_STRING)(v4 + 48),
          KeyValueFullInformation,
          (PVOID)(v4 + 256),
          0x200u,
          (PULONG)(v4 + 4)) >= 0)
    && *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
    && (int)RtlpMuiRegAddBaseLanguage((__int64)a1, a3, v11, v4 + 256, 0LL) >= 0 )
  {
    ++v11;
    do
      ++v15;
    while ( *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * v15) );
    LODWORD(v17) = v15;
    *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v15;
  }
  else
  {
    v17 = *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  }
  if ( v10 != -2147483622 )
  {
    for ( i = *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C); ; ++i )
    {
      if ( v11 >= 4
        || ZwEnumerateValueKey(
             *(HANDLE *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
             i,
             KeyValueFullInformation,
             (PVOID)(v4 + 256),
             0x200u,
             (PULONG)(v4 + 32)) < 0 )
      {
        goto LABEL_47;
      }
      if ( *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
        && *(_DWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) <= 0x200u )
      {
        if ( !(_DWORD)v17 && !(_DWORD)v8 )
          goto LABEL_44;
        v19 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1;
        v20 = *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v19);
        *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v19) = 0;
        if ( !(_DWORD)v8
          || RtlCompareUnicodeStrings(
               (PCWCH)(v4 + 276),
               (unsigned __int64)*(unsigned int *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1,
               (PCWCH)(v4 + 768),
               (unsigned int)v8,
               1u) )
        {
          v21 = *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          if ( !(_DWORD)v21
            || RtlCompareUnicodeStrings(
                 (PCWCH)(v4 + 276),
                 (unsigned __int64)*(unsigned int *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1,
                 (PCWCH)(v4 + 80),
                 (unsigned int)v21,
                 1u) )
          {
            break;
          }
        }
      }
LABEL_46:
      v17 = *(_QWORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    }
    *(_WORD *)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v19) = v20;
LABEL_44:
    if ( (int)RtlpMuiRegAddBaseLanguage((__int64)a1, a3, v11, v4 + 256, 0LL) >= 0 )
      ++v11;
    goto LABEL_46;
  }
LABEL_47:
  v22 = *(unsigned int **)(((unsigned __int64)LanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  if ( v22 )
    *v22 = v11;
  return 0;
}
