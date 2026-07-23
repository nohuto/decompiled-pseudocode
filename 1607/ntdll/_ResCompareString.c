/*
 * XREFs of _ResCompareString @ 0x180103A6C
 * Callers:
 *     ResCGetCultureID @ 0x180105904 (ResCGetCultureID.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1800195A0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 */

LONG __fastcall ResCompareString(PCWSTR SourceString, PCWSTR a2)
{
  _UNICODE_STRING v4; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v4, a2);
  return RtlCompareUnicodeStrings(
           DestinationString.Buffer,
           (unsigned __int64)DestinationString.Length >> 1,
           v4.Buffer,
           (unsigned __int64)v4.Length >> 1,
           1u);
}
