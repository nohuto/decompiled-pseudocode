/*
 * XREFs of AslStringPatternMatchW @ 0x1405A9E4C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140577324 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405A9D10 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x1405A9E4C (AslStringPatternMatchW.c)
 *     KseLookupHardwareId @ 0x14069D464 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140702898 (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckPackageAttributes @ 0x1407031D8 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckAttribute @ 0x140704BAC (SdbpCheckAttribute.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     AslStringPatternMatchW @ 0x1405A9E4C (AslStringPatternMatchW.c)
 */

__int64 __fastcall AslStringPatternMatchW(WCHAR *a1, WCHAR *a2)
{
  unsigned int v4; // edi
  WCHAR v5; // cx
  WCHAR v6; // bx
  WCHAR v7; // cx
  WCHAR v9; // bx

  v4 = 0;
  while ( 1 )
  {
    v5 = *a1;
    if ( !*a1 && !*a2 )
      return 1;
    if ( v5 != 42 )
    {
      if ( v5 != 63 )
      {
        v6 = RtlUpcaseUnicodeChar(v5);
        if ( v6 != RtlUpcaseUnicodeChar(*a2) )
          return v4;
      }
      ++a1;
      goto LABEL_7;
    }
    v7 = a1[1];
    if ( v7 == 42 )
    {
      ++a1;
    }
    else
    {
      if ( !v7 )
        return 1;
      v9 = RtlUpcaseUnicodeChar(v7);
      if ( v9 == RtlUpcaseUnicodeChar(*a2) )
      {
        if ( (unsigned int)AslStringPatternMatchW(a1 + 1, a2) )
          return 1;
      }
LABEL_7:
      if ( !*a2 )
        return v4;
      ++a2;
    }
  }
}
