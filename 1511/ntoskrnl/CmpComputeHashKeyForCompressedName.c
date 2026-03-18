/*
 * XREFs of CmpComputeHashKeyForCompressedName @ 0x1403E06DC
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpAddInfoAfterParseFailure @ 0x1403E0290 (CmpAddInfoAfterParseFailure.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpComputeHashKeyForCompressedName(unsigned int a1, _BYTE *a2, unsigned int a3)
{
  __int64 v5; // rsi
  int v6; // ecx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = (unsigned __int8)*a2;
      if ( *a2 >= 0x61u )
      {
        if ( *a2 > 0x7Au )
          v6 = RtlUpcaseUnicodeChar(v6);
        else
          v6 -= 32;
      }
      ++a2;
      a1 = v6 + 37 * a1;
      --v5;
    }
    while ( v5 );
  }
  return a1;
}
