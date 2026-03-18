/*
 * XREFs of CmpHashUnicodeComponent @ 0x1404B1340
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1401B3204 (CmpPartialPromoteSubkeys.c)
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmpGetMappingHiveForString @ 0x1403E1798 (CmpGetMappingHiveForString.c)
 *     CmpGetNameControlBlock @ 0x140436F80 (CmpGetNameControlBlock.c)
 *     CmpCheckLeaf @ 0x14043FDC0 (CmpCheckLeaf.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1404A01C8 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpAddToLeaf @ 0x1404B0DF0 (CmpAddToLeaf.c)
 *     CmpComputeComponentHashes @ 0x1404B10A0 (CmpComputeComponentHashes.c)
 *     CmpWaitForHiveMount @ 0x1405752DC (CmpWaitForHiveMount.c)
 *     CmpAddStringToMapping @ 0x14057F170 (CmpAddStringToMapping.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405132D0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // ebx
  __int16 v2; // ax
  WCHAR *v3; // rdi
  __int64 v4; // rsi
  WCHAR v5; // ax

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 )
  {
    v3 = (WCHAR *)a1->m128i_i64[1];
    v4 = (unsigned __int16)(((unsigned __int16)(v2 - 1) >> 1) + 1);
    do
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 > 0x7Au )
          v5 = RtlUpcaseUnicodeChar(v5);
        else
          v5 -= 32;
      }
      ++v3;
      v1 = v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
