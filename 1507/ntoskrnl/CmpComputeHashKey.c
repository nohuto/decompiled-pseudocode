/*
 * XREFs of CmpComputeHashKey @ 0x140533C5C
 * Callers:
 *     CmpGetMappingHiveForString @ 0x14040799C (CmpGetMappingHiveForString.c)
 *     CmpAddInfoAfterParseFailure @ 0x14042A390 (CmpAddInfoAfterParseFailure.c)
 *     CmpCheckLeaf @ 0x1404CD0D0 (CmpCheckLeaf.c)
 *     CmpAddToLeaf @ 0x1405339A8 (CmpAddToLeaf.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405414B8 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpWaitForHiveMount @ 0x1405B5F44 (CmpWaitForHiveMount.c)
 *     CmpAddStringToMapping @ 0x1405BFB4C (CmpAddStringToMapping.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
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
