/*
 * XREFs of AslStringPatternMatchW @ 0x140579274
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140513CD0 (SdbpFindFirstIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x140579274 (AslStringPatternMatchW.c)
 *     KseLookupHardwareId @ 0x140653AC4 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C26A4 (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckPackageAttributes @ 0x1406C2FFC (SdbpCheckPackageAttributes.c)
 *     SdbpCheckAttribute @ 0x1406C4E30 (SdbpCheckAttribute.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C50E8 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     AslStringPatternMatchW @ 0x140579274 (AslStringPatternMatchW.c)
 */

__int64 __fastcall AslStringPatternMatchW(WCHAR *a1, WCHAR *a2)
{
  unsigned int v4; // edi
  WCHAR v5; // cx
  WCHAR v6; // bx
  WCHAR v8; // cx
  WCHAR v9; // bx

  v4 = 0;
  while ( 1 )
  {
    v5 = *a1;
    if ( !*a1 && !*a2 )
      return 1;
    if ( v5 == 63 )
      goto LABEL_7;
    if ( v5 != 42 )
    {
      v6 = RtlUpcaseUnicodeChar(v5);
      if ( v6 != RtlUpcaseUnicodeChar(*a2) )
        return v4;
LABEL_7:
      ++a1;
      goto LABEL_15;
    }
    v8 = a1[1];
    if ( v8 == 42 )
    {
      ++a1;
    }
    else
    {
      if ( !v8 )
        return 1;
      v9 = RtlUpcaseUnicodeChar(v8);
      if ( v9 == RtlUpcaseUnicodeChar(*a2) )
      {
        if ( (unsigned int)AslStringPatternMatchW(a1 + 1, a2) )
          return 1;
      }
LABEL_15:
      if ( !*a2 )
        return v4;
      ++a2;
    }
  }
}
