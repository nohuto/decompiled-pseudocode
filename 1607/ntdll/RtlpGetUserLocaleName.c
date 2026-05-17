/*
 * XREFs of RtlpGetUserLocaleName @ 0x1800EF2E8
 * Callers:
 *     RtlLcidToLocaleName @ 0x180042E80 (RtlLcidToLocaleName.c)
 *     RtlpMatchUserLanguage @ 0x1800EF594 (RtlpMatchUserLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpGetLocaleDataKey @ 0x1800EF23C (RtlpGetLocaleDataKey.c)
 */

__int64 __fastcall RtlpGetUserLocaleName(PUNICODE_STRING DestinationString, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edx
  _BYTE v7[32]; // [rsp+50h] [rbp+0h] BYREF

  if ( !RtlpGetLocaleDataKey((__int64)DestinationString, a2, a3, a4) )
    return 3221225473LL;
  if ( (int)NtQueryValueKey() < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) != 1 )
    return 3221225473LL;
  v5 = *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  if ( (v5 & 1) != 0
    || !v5
    || *(_WORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A + 2 * ((unsigned __int64)v5 >> 1))
    || v5 > DestinationString->MaximumLength )
  {
    return 3221225473LL;
  }
  memmove(DestinationString->Buffer, (const void *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 44), v5);
  RtlInitUnicodeString(DestinationString, DestinationString->Buffer);
  return 0LL;
}
