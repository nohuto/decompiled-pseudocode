/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x1800ED408
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x18003D550 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     LdrpQueryValueKey @ 0x180006C48 (LdrpQueryValueKey.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18003D640 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x180089484 (RtlpLoadInstallLanguageFallback.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A5700 (NtEnumerateKey.c)
 *     NtIsUILanguageComitted @ 0x1800A6F50 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A77F0 (NtQueryInstallUILanguage.c)
 *     RtlpMuiRegAddLanguageByName @ 0x1800EB364 (RtlpMuiRegAddLanguageByName.c)
 *     RtlpMuiRegCreateLanguages @ 0x1800EB590 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x1800EB628 (RtlpMuiRegCreateStringPool.c)
 *     ValidateRegistrLangType @ 0x1800ECB08 (ValidateRegistrLangType.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800EDC6C (_RtlpMuiRegValidateInstalled.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1)
{
  unsigned __int64 v1; // rbp
  NTSTATUS InstallUILanguage; // edi
  __int64 result; // rax
  unsigned int v5; // ecx
  _QWORD *Languages; // rax
  _QWORD *StringPool; // rax
  ULONG v8; // esi
  NTSTATUS v9; // eax
  unsigned __int64 v10; // rcx
  void *v11; // rcx
  __int16 v12; // r10
  unsigned int v13; // r10d
  void *v14; // rcx
  void *v15; // rcx
  int Length; // [rsp+20h] [rbp-30h]
  int v17; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_QWORD *)(v1 + 16) = 0LL;
  InstallUILanguage = 0;
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)v1 = 0;
  *(_WORD *)(v1 + 4) = -1;
  if ( !a1 )
    return 3221225485LL;
  if ( NtIsUILanguageComitted() >= 0 )
  {
    InstallUILanguage = NtQueryInstallUILanguage((LANGID *)(a1 + 4));
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_33;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  Languages = RtlpMuiRegCreateLanguages(v5);
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_33:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(-1, -1);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_33;
  *(_DWORD *)a1 |= 2u;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v1 + 40),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 40;
  *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 64;
  *(_OWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  if ( NtOpenKey((PHANDLE)(v1 + 8), 0x20019u, (POBJECT_ATTRIBUTES)(v1 + 56)) >= 0 )
  {
    v8 = 0;
    do
    {
      v9 = NtEnumerateKey(
             *(HANDLE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
             v8,
             KeyBasicInformation,
             (PVOID)(v1 + 128),
             0x200u,
             (PULONG)(v1 + 32));
      InstallUILanguage = v9;
      if ( v9 < 0 )
      {
        if ( v9 != -2147483622 )
          goto LABEL_33;
      }
      else
      {
        v10 = *(unsigned int *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8C);
        if ( v10 + 24 <= 0x200 )
        {
          *(_WORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90 + 2 * (v10 >> 1)) = 0;
          RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), (PCWSTR)(v1 + 144));
          *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 8);
          *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 40;
          *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
          *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 64;
          *(_OWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
          if ( NtOpenKey((PHANDLE)(v1 + 16), 0x20019u, (POBJECT_ATTRIBUTES)(v1 + 56)) >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), L"Type");
            v11 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
            *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 4;
            *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = 4;
            if ( (int)LdrpQueryValueKey(
                        v11,
                        (PUNICODE_STRING)(v1 + 40),
                        (_DWORD *)(v1 + 24),
                        (void *)((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL),
                        (ULONG *)(v1 + 28)) >= 0
              && (int)ValidateRegistrLangType(*(_DWORD *)v1) >= 0 )
            {
              v13 = v12 & 0x419F;
              *(_DWORD *)v1 = v13;
              if ( (v13 & 7) != 0 && (v13 & 7 & -(v13 & 7)) == (v13 & 7) )
              {
                if ( (v13 & 0x180) == 0 || (v13 & 0x180 & -(v13 & 0x180)) != (v13 & 0x180) )
                {
                  v13 = v13 & 0xFFFFFE7F | 0x80;
                  *(_DWORD *)v1 = v13;
                }
                if ( (v13 & 0x18) != 0 && (v13 & 0x18 & -(v13 & 0x18)) == (v13 & 0x18) && (v13 & 0xC) != 8 )
                  RtlpMuiRegAddLanguageByName(
                    (_QWORD *)a1,
                    *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                    (wchar_t *)(v1 + 144),
                    v13,
                    Length,
                    v1 + 4);
              }
            }
          }
        }
      }
      v14 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      if ( v14 )
      {
        NtClose(v14);
        *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
      }
      ++v8;
    }
    while ( InstallUILanguage != -2147483622 );
    v15 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v15 )
    {
      NtClose(v15);
      *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
    }
  }
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_33;
  return result;
}
