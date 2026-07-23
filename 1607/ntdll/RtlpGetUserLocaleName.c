/*
 * XREFs of RtlpGetUserLocaleName @ 0x1800EF2E8
 * Callers:
 *     RtlLcidToLocaleName @ 0x180042E70 (RtlLcidToLocaleName.c)
 *     RtlpMatchUserLanguage @ 0x1800EF594 (RtlpMatchUserLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpGetLocaleDataKey @ 0x1800EF23C (RtlpGetLocaleDataKey.c)
 */

__int64 __fastcall RtlpGetUserLocaleName(PUNICODE_STRING DestinationString, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  void *LocaleDataKey; // rax
  unsigned int v7; // edx
  ULONG v9[8]; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFE0uLL;
  LocaleDataKey = (void *)RtlpGetLocaleDataKey((__int64)DestinationString, a2, a3, a4);
  if ( !LocaleDataKey )
    return 3221225473LL;
  if ( NtQueryValueKey(
         LocaleDataKey,
         (PUNICODE_STRING)&`RtlpGetUserLocaleName'::`2'::KeyValueName,
         KeyValuePartialInformation,
         (PVOID)(v4 + 32),
         0xBAu,
         (PULONG)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFE0uLL)) < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) != 1 )
    return 3221225473LL;
  v7 = *(_DWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  if ( (v7 & 1) != 0
    || !v7
    || *(_WORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A + 2 * ((unsigned __int64)v7 >> 1))
    || v7 > DestinationString->MaximumLength )
  {
    return 3221225473LL;
  }
  memmove(DestinationString->Buffer, (const void *)(v4 + 44), v7);
  RtlInitUnicodeString(DestinationString, DestinationString->Buffer);
  return 0LL;
}
