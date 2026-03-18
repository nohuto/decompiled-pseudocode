/*
 * XREFs of AdtpAppendZString @ 0x14068CE04
 * Callers:
 *     AdtpBuildObjectTypeStrings @ 0x14068D2DC (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     AdtpAppendString @ 0x14068CC68 (AdtpAppendString.c)
 */

__int64 __fastcall AdtpAppendZString(__int64 a1, __int64 a2, const WCHAR *a3, _DWORD *a4)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a3);
  return AdtpAppendString(a1, a2, &DestinationString, a4);
}
