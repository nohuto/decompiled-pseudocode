/*
 * XREFs of RtlpMatchUserLanguage @ 0x1800E62D4
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18001C1C0 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x1800E6028 (RtlpGetUserLocaleName.c)
 */

bool __fastcall RtlpMatchUserLanguage(PCWSTR SourceString, __int64 a2, __int64 a3, __int64 a4)
{
  bool result; // al
  _UNICODE_STRING v6; // [rsp+30h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-D8h] BYREF
  char v8; // [rsp+50h] [rbp-C8h] BYREF

  v6.Buffer = (unsigned __int16 *)&v8;
  v6.MaximumLength = 170;
  result = 0;
  if ( (int)RtlpGetUserLocaleName(&v6, a2, a3, a4) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCompareUnicodeStrings(
            DestinationString.Buffer,
            (unsigned __int64)DestinationString.Length >> 1,
            v6.Buffer,
            (unsigned __int64)v6.Length >> 1,
            1u) )
      return 1;
  }
  return result;
}
