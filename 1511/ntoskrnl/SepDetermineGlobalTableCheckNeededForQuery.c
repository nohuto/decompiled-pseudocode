/*
 * XREFs of SepDetermineGlobalTableCheckNeededForQuery @ 0x140433D48
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x14000507C (SepPotentialGlobalTableAttribute.c)
 *     SeSecurityAttributePresent @ 0x140470FCC (SeSecurityAttributePresent.c)
 */

char __fastcall SepDetermineGlobalTableCheckNeededForQuery(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  unsigned int v8; // edi

  v3 = 1;
  if ( (SepSingletonGlobal[4] & 1) == 0 || !a2 )
    return 0;
  v8 = 0;
  if ( a3 )
  {
    while ( SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a2 + 16LL * v8))
         && !(unsigned __int8)SeSecurityAttributePresent(a1, a2 + 16LL * v8) )
    {
      if ( ++v8 >= a3 )
        return v3;
    }
    return 0;
  }
  return v3;
}
