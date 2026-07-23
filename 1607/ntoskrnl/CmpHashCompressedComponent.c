/*
 * XREFs of CmpHashCompressedComponent @ 0x14010BF1C
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1401B30E8 (CmpPartialPromoteSubkeys.c)
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405185D4 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpHashCompressedComponent(_BYTE *a1, int a2)
{
  unsigned int v2; // ebx
  int i; // esi
  WCHAR v5; // ax

  v2 = 0;
  for ( i = a2; i; --i )
  {
    LOBYTE(v5) = *a1;
    if ( *a1 >= 0x61u )
    {
      if ( (unsigned __int8)v5 <= 0x7Au )
        v5 = (unsigned __int8)v5 - 32;
      else
        v5 = RtlUpcaseUnicodeChar((unsigned __int8)v5);
    }
    else
    {
      v5 = (unsigned __int8)v5;
    }
    ++a1;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
