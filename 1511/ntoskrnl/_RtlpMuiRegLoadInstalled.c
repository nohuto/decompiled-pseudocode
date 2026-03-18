/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x140539304
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140538D48 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140150C60 (ZwEnumerateKey.c)
 *     ZwQueryInstallUILanguage @ 0x140152D60 (ZwQueryInstallUILanguage.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140538BC4 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x140538ECC (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegCreateLanguages @ 0x140539160 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x140539214 (RtlpMuiRegCreateStringPool.c)
 *     ValidateRegistrLangType @ 0x1405392B0 (ValidateRegistrLangType.c)
 *     RtlpMuiRegAddLanguageByName @ 0x140539604 (RtlpMuiRegAddLanguageByName.c)
 *     LdrpQueryValueKey @ 0x1405396B8 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405397F4 (_RtlpMuiRegValidateInstalled.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1)
{
  unsigned __int64 v1; // rbp
  NTSTATUS InstallUILanguage; // edi
  unsigned int v4; // ecx
  _QWORD *Languages; // rax
  _QWORD *StringPool; // rax
  ULONG v7; // esi
  NTSTATUS v8; // eax
  unsigned __int64 v9; // rcx
  void *v10; // rcx
  __int16 v11; // cx
  unsigned int v12; // ecx
  void *v13; // rcx
  void *v14; // rcx
  __int64 result; // rax
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
  if ( PsUILanguageComitted )
  {
    InstallUILanguage = ZwQueryInstallUILanguage((LANGID *)(a1 + 4));
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_28;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  Languages = RtlpMuiRegCreateLanguages(v4);
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_28:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(-1, -1);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_28;
  *(_DWORD *)a1 |= 2u;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v1 + 40),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 40;
  *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 576;
  *(_OWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  if ( ZwOpenKey((PHANDLE)(v1 + 8), 0x20019u, (POBJECT_ATTRIBUTES)(v1 + 56)) >= 0 )
  {
    v7 = 0;
    do
    {
      v8 = ZwEnumerateKey(
             *(HANDLE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
             v7,
             KeyBasicInformation,
             (PVOID)(v1 + 128),
             0x200u,
             (PULONG)(v1 + 32));
      InstallUILanguage = v8;
      if ( v8 < 0 )
      {
        if ( v8 != -2147483622 )
          goto LABEL_28;
      }
      else
      {
        v9 = *(unsigned int *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8C);
        if ( v9 + 24 <= 0x200 )
        {
          *(_WORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90 + 2 * (v9 >> 1)) = 0;
          RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), (PCWSTR)(v1 + 144));
          *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 8);
          *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 40;
          *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
          *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 576;
          *(_OWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
          if ( ZwOpenKey((PHANDLE)(v1 + 16), 0x20019u, (POBJECT_ATTRIBUTES)(v1 + 56)) >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), L"Type");
            v10 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
            *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 4;
            *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = 4;
            if ( (int)LdrpQueryValueKey(v10, (PUNICODE_STRING)(v1 + 40), v1 + 28) >= 0
              && (int)ValidateRegistrLangType(*(_DWORD *)v1) >= 0 )
            {
              v12 = v11 & 0x419F;
              *(_DWORD *)v1 = v12;
              if ( (v12 & 7) != 0 && (v12 & 7 & -(v12 & 7)) == (v12 & 7) )
              {
                if ( (v12 & 0x180) == 0 || (v12 & 0x180 & -(v12 & 0x180)) != (v12 & 0x180) )
                {
                  v12 = v12 & 0xFFFFFE7F | 0x80;
                  *(_DWORD *)v1 = v12;
                }
                if ( (v12 & 0x18) != 0 && (v12 & 0x18 & -(v12 & 0x18)) == (v12 & 0x18) && (v12 & 0xC) != 8 )
                  RtlpMuiRegAddLanguageByName(
                    a1,
                    *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                    v1 + 144,
                    v12,
                    Length,
                    v1 + 4);
              }
            }
          }
        }
      }
      v13 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      if ( v13 )
      {
        NtClose(v13);
        *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
      }
      ++v7;
    }
    while ( InstallUILanguage != -2147483622 );
    v14 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v14 )
    {
      NtClose(v14);
      *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
    }
  }
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_28;
  return result;
}
