/*
 * XREFs of PnpIsValidGuidString @ 0x14062DA34
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1404FB370 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}
