/*
 * XREFs of SepAppContainerAceProtectionApplies @ 0x1406948B8
 * Callers:
 *     SeAdjustObjectAppContainerSecurity @ 0x14069479C (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1404FDFD0 (RtlPrefixUnicodeString.c)
 */

char __fastcall SepAppContainerAceProtectionApplies(PCUNICODE_STRING String2)
{
  int v2; // ebx
  wchar_t *i; // rcx

  v2 = 0;
  if ( RtlEqualUnicodeString(String2, &stru_14025D2F8, 0) )
    return 1;
  if ( RtlPrefixUnicodeString(&stru_14025D308, String2, 1u) && String2->Length >= 0x4Cu )
  {
    for ( i = String2->Buffer + 35; (unsigned __int16)(*i - 48) <= 9u; ++i )
    {
      if ( (unsigned int)++v2 >= 3 )
        return 1;
    }
  }
  return 0;
}
