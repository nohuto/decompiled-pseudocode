/*
 * XREFs of RtlpIsCustomLocale @ 0x1800EF3C4
 * Callers:
 *     RtlGetParentLocaleName @ 0x18003E5F0 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180040DB0 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x1800EEF00 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

bool __fastcall RtlpIsCustomLocale(PCWSTR SourceString)
{
  unsigned __int64 v1; // rbp
  bool v3; // zf
  HANDLE Handle; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&Handle & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = gCustomCultureRegKey == 0;
  *(_QWORD *)((unsigned __int64)&Handle & 0xFFFFFFFFFFFFFFE0uLL) = 0LL;
  if ( v3 && (int)NtOpenKey() >= 0 && _InterlockedCompareExchange64(&gCustomCultureRegKey, *(_QWORD *)v1, 0LL) )
    NtClose(*(HANDLE *)v1);
  if ( !gCustomCultureRegKey || !*SourceString )
    return 0;
  RtlInitUnicodeString((PUNICODE_STRING)(v1 + 16), SourceString);
  return (int)NtQueryValueKey() >= 0;
}
