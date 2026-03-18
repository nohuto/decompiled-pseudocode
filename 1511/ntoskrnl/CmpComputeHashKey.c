/*
 * XREFs of CmpComputeHashKey @ 0x1403DA088
 * Callers:
 *     CmpGetMappingHiveForString @ 0x1403BC7AC (CmpGetMappingHiveForString.c)
 *     CmpAddToLeaf @ 0x1403D97A4 (CmpAddToLeaf.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpAddInfoAfterParseFailure @ 0x1403E0290 (CmpAddInfoAfterParseFailure.c)
 *     CmpCheckLeaf @ 0x1403F9670 (CmpCheckLeaf.c)
 *     CmpWaitForHiveMount @ 0x14053FF80 (CmpWaitForHiveMount.c)
 *     CmpAddStringToMapping @ 0x140549E4C (CmpAddStringToMapping.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpComputeHashKey(unsigned int a1, unsigned __int16 *a2)
{
  WCHAR *v3; // rdi
  __int64 i; // rsi
  WCHAR v5; // ax
  int v6; // ecx

  v3 = (WCHAR *)*((_QWORD *)a2 + 1);
  if ( *a2 )
  {
    for ( i = (((unsigned int)*a2 - 1) >> 1) + 1; i; --i )
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 <= 0x7Au )
        {
          v6 = v5 - 32;
          goto LABEL_5;
        }
        v5 = RtlUpcaseUnicodeChar(v5);
      }
      v6 = v5;
LABEL_5:
      ++v3;
      a1 = v6 + 37 * a1;
    }
  }
  return a1;
}
