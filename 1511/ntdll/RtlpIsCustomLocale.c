/*
 * XREFs of RtlpIsCustomLocale @ 0x1800E6104
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18001C1C0 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x18003EA20 (RtlGetParentLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800E5C40 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 */

bool __fastcall RtlpIsCustomLocale(PCWSTR SourceString)
{
  unsigned __int64 v1; // rbp
  bool v3; // zf
  HANDLE v4; // rbx
  HANDLE KeyHandle; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = gCustomCultureRegKey == 0LL;
  *(_QWORD *)((unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL) = 0LL;
  if ( v3
    && NtOpenKey(
         (PHANDLE)((unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL),
         1u,
         (POBJECT_ATTRIBUTES)&`RtlpGetCustomCultureRegKey'::`2'::ObjAttribute) >= 0
    && _InterlockedCompareExchange64((volatile signed __int64 *)&gCustomCultureRegKey, *(_QWORD *)v1, 0LL) )
  {
    NtClose(*(HANDLE *)v1);
  }
  v4 = gCustomCultureRegKey;
  if ( !gCustomCultureRegKey || !*SourceString )
    return 0;
  RtlInitUnicodeString((PUNICODE_STRING)(v1 + 16), SourceString);
  return NtQueryValueKey(
           v4,
           (PUNICODE_STRING)(v1 + 16),
           KeyValuePartialInformation,
           (PVOID)(v1 + 32),
           0x78u,
           (PULONG)(v1 + 8)) >= 0;
}
