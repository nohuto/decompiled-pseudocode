/*
 * XREFs of _ResCompareString @ 0x1800F9198
 * Callers:
 *     ResCGetCultureID @ 0x1800FB024 (ResCGetCultureID.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
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
