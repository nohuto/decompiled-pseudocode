/*
 * XREFs of SepDetermineGlobalTableCheckNeededForQuery @ 0x140482DB0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140044E10 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x14024FE78 (SepPotentialGlobalTableAttribute.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 */

char __fastcall SepDetermineGlobalTableCheckNeededForQuery(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  unsigned int v8; // edi

  v3 = 1;
  if ( (*((_DWORD *)SepSingletonGlobal + 4) & 1) == 0 || !a2 )
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
