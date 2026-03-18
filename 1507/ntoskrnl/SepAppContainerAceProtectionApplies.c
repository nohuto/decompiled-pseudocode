/*
 * XREFs of SepAppContainerAceProtectionApplies @ 0x1406D712C
 * Callers:
 *     SeAdjustObjectAppContainerSecurity @ 0x1406D7010 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

char __fastcall SepAppContainerAceProtectionApplies(PCUNICODE_STRING String2)
{
  int v2; // ebx
  wchar_t *i; // rcx

  v2 = 0;
  if ( RtlEqualUnicodeString(String2, &stru_1402AD158, 0) )
    return 1;
  if ( RtlPrefixUnicodeString(&stru_1402AD148, String2, 1u) && String2->Length >= 0x4Cu )
  {
    for ( i = String2->Buffer + 35; (unsigned __int16)(*i - 48) <= 9u; ++i )
    {
      if ( (unsigned int)++v2 >= 3 )
        return 1;
    }
  }
  return 0;
}
