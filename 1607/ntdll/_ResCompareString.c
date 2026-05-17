/*
 * XREFs of _ResCompareString @ 0x180103B2C
 * Callers:
 *     ResCGetCultureID @ 0x1801059C4 (ResCGetCultureID.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1800195B0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 */

__int64 __fastcall ResCompareString(PCWSTR SourceString, PCWSTR a2)
{
  UNICODE_STRING v4; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v4, a2);
  return RtlCompareUnicodeStrings(
           DestinationString.Buffer,
           (unsigned __int64)DestinationString.Length >> 1,
           (__int64)v4.Buffer,
           (unsigned __int64)v4.Length >> 1,
           1);
}
