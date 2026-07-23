/*
 * XREFs of CmpCompareUnicodeString @ 0x1404B6020
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmpGetMappingHiveForString @ 0x1403E1798 (CmpGetMappingHiveForString.c)
 *     CmpFindKcbInHashEntryByName @ 0x140435B44 (CmpFindKcbInHashEntryByName.c)
 *     CmpCheckValueList @ 0x14043B810 (CmpCheckValueList.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpCompareKeysByName @ 0x140606994 (CmpCompareKeysByName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareUnicodeString(__int64 a1, __int64 a2, char a3)
{
  WCHAR *v4; // r14
  WCHAR *v5; // r15
  unsigned __int16 v6; // bp
  unsigned __int16 v7; // si
  WCHAR v8; // bx
  WCHAR v9; // di

  v4 = *(WCHAR **)(a1 + 8);
  v5 = *(WCHAR **)(a2 + 8);
  v6 = *(_WORD *)a2 >> 1;
  v7 = *(_WORD *)a1 >> 1;
  if ( v7 )
  {
    while ( v6 )
    {
      v8 = *v4++;
      v9 = *v5++;
      if ( v8 != v9 )
      {
        if ( (a3 & 1) == 0 && v8 >= 0x61u )
        {
          if ( v8 > 0x7Au )
            v8 = RtlUpcaseUnicodeChar(v8);
          else
            v8 -= 32;
        }
        if ( (a3 & 2) == 0 && v9 >= 0x61u )
        {
          if ( v9 <= 0x7Au )
            v9 -= 32;
          else
            v9 = RtlUpcaseUnicodeChar(v9);
        }
        if ( v8 != v9 )
          return v8 - (unsigned int)v9;
      }
      --v6;
      if ( !--v7 )
        return v7 - (unsigned int)v6;
    }
  }
  return v7 - (unsigned int)v6;
}
