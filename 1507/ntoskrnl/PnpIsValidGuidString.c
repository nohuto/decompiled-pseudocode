/*
 * XREFs of PnpIsValidGuidString @ 0x14058E904
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}
