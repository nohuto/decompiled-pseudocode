/*
 * XREFs of CmpCompareCompressedName @ 0x1403FBC30
 * Callers:
 *     CmpFindNameInListWithStatus @ 0x1403F40F0 (CmpFindNameInListWithStatus.c)
 *     CmpGetNameControlBlock @ 0x1403FAA10 (CmpGetNameControlBlock.c)
 *     CmpFindValueByNameFromCache @ 0x1403FBA30 (CmpFindValueByNameFromCache.c)
 *     CmpDoCompareKeyName @ 0x1403FBB80 (CmpDoCompareKeyName.c)
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 *     CmpCompareKeysByName @ 0x1405E7348 (CmpCompareKeysByName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareCompressedName(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // di
  WCHAR *v7; // rsi
  WCHAR v9; // r14
  unsigned int v10; // r15d

  v5 = *(_WORD *)a1 >> 1;
  v7 = *(WCHAR **)(a1 + 8);
  if ( v5 )
  {
    while ( a3 )
    {
      v9 = *v7++;
      v10 = *a2++;
      if ( v9 != (_WORD)v10 )
      {
        if ( (a4 & 1) == 0 && v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
            v9 = RtlUpcaseUnicodeChar(v9);
          else
            v9 -= 32;
        }
        if ( (a4 & 2) == 0 && v10 >= 0x61 )
        {
          if ( v10 > 0x7A )
            LOWORD(v10) = RtlUpcaseUnicodeChar(v10);
          else
            LOWORD(v10) = v10 - 32;
        }
        if ( v9 != (unsigned __int16)v10 )
          return v9 - (unsigned int)(unsigned __int16)v10;
      }
      --a3;
      if ( !--v5 )
        return v5 - (unsigned int)a3;
    }
  }
  return v5 - (unsigned int)a3;
}
