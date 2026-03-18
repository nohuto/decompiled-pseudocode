/*
 * XREFs of AslStringPatternMatchW @ 0x140535084
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1403B72DC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140534F48 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x140535084 (AslStringPatternMatchW.c)
 *     KseLookupHardwareId @ 0x14061E768 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14067DA2C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckPackageAttributes @ 0x14067E384 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckAttribute @ 0x14067FD78 (SdbpCheckAttribute.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     AslStringPatternMatchW @ 0x140535084 (AslStringPatternMatchW.c)
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
