/*
 * XREFs of CmpCompareTwoCompressedNames @ 0x140606A64
 * Callers:
 *     CmpFindKcbInHashEntryByCompressedName @ 0x1401B49D8 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpFindNameInListCellWithStatus @ 0x140401A80 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1404F5740 (CmpDoCompareKeyName.c)
 *     CmpCompareInIndex @ 0x1404F5A90 (CmpCompareInIndex.c)
 *     CmpCompareKeysByName @ 0x140606994 (CmpCompareKeysByName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareTwoCompressedNames(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        unsigned __int16 a4)
{
  unsigned __int16 v6; // si
  unsigned int v8; // ebx
  unsigned int v9; // edi

  v6 = a2;
  if ( a2 )
  {
    while ( a4 )
    {
      v8 = *a1++;
      v9 = *a3++;
      if ( (_WORD)v8 != (_WORD)v9 )
      {
        if ( v8 >= 0x61 )
        {
          if ( v8 <= 0x7A )
            LOWORD(v8) = v8 - 32;
          else
            LOWORD(v8) = RtlUpcaseUnicodeChar(v8);
        }
        if ( v9 >= 0x61 )
        {
          if ( v9 <= 0x7A )
            LOWORD(v9) = v9 - 32;
          else
            LOWORD(v9) = RtlUpcaseUnicodeChar(v9);
        }
        if ( (unsigned __int16)v8 != (unsigned __int16)v9 )
          return (unsigned __int16)v8 - (unsigned int)(unsigned __int16)v9;
      }
      --a4;
      if ( !--v6 )
        return v6 - (unsigned int)a4;
    }
  }
  return v6 - (unsigned int)a4;
}
