/*
 * XREFs of RtlEqualDomainName @ 0x180055580
 * Callers:
 *     RtlEqualComputerName @ 0x180090E30 (RtlEqualComputerName.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001A1C0 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlCanonicalizeDomainName @ 0x180055600 (RtlCanonicalizeDomainName.c)
 */

BOOLEAN __cdecl RtlEqualDomainName(PUNICODE_STRING String1, PUNICODE_STRING String2)
{
  BOOLEAN v2; // bl
  _UNICODE_STRING String2a; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING String1a; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( (int)RtlCanonicalizeDomainName(&String1a) >= 0 )
  {
    if ( (int)RtlCanonicalizeDomainName(&String2a) >= 0 )
    {
      v2 = RtlEqualUnicodeString(&String1a, &String2a, 0);
      RtlFreeAnsiString(&String2a);
    }
    RtlFreeAnsiString(&String1a);
  }
  return v2;
}
