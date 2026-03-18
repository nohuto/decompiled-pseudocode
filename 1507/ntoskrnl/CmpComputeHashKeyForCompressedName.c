/*
 * XREFs of CmpComputeHashKeyForCompressedName @ 0x14042A7E4
 * Callers:
 *     CmpAddInfoAfterParseFailure @ 0x14042A390 (CmpAddInfoAfterParseFailure.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405414B8 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
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
        if ( *a2 <= 0x7Au )
          v6 -= 32;
        else
          v6 = RtlUpcaseUnicodeChar(v6);
      }
      ++a2;
      a1 = v6 + 37 * a1;
      --v5;
    }
    while ( v5 );
  }
  return a1;
}
