/*
 * XREFs of RtlpMatchUserLanguage @ 0x1800EF594
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180040DB0 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1800195B0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x1800EF2E8 (RtlpGetUserLocaleName.c)
 */

bool __fastcall RtlpMatchUserLanguage(PCWSTR SourceString, __int64 a2, __int64 a3, __int64 a4)
{
  bool result; // al
  UNICODE_STRING v6; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-D8h] BYREF
  char v8; // [rsp+50h] [rbp-C8h] BYREF

  v6.Buffer = (wchar_t *)&v8;
  v6.MaximumLength = 170;
  result = 0;
  if ( (int)RtlpGetUserLocaleName(&v6, a2, a3, a4) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !(unsigned int)RtlCompareUnicodeStrings(
                          DestinationString.Buffer,
                          (unsigned __int64)DestinationString.Length >> 1,
                          (__int64)v6.Buffer,
                          (unsigned __int64)v6.Length >> 1,
                          1) )
      return 1;
  }
  return result;
}
