/*
 * XREFs of MiFreeLargeZeroPages @ 0x140662930
 * Callers:
 *     MiCreatePagingFileMap @ 0x1404B8370 (MiCreatePagingFileMap.c)
 *     MiMapUserLargePages @ 0x140662B28 (MiMapUserLargePages.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14001BB40 (MiFreeZeroPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x140022BE0 (MiUpdateLargePageBitMap.c)
 *     MiInsertUnusedLargePageInNodeList @ 0x1401F58D4 (MiInsertUnusedLargePageInNodeList.c)
 */

_UNKNOWN **__fastcall MiFreeLargeZeroPages(__int64 a1, _QWORD **a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbp
  _QWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = 2LL;
  do
  {
    while ( *a2 )
    {
      v6 = *a2;
      *a2 = (_QWORD *)**a2;
      v7 = MiLargePageSizes[(unsigned int)MiFreeZeroPageSizeIndex((__int64)v6)];
      v9 = (v8 + 0x58000000000LL) / 48;
      MiUpdateLargePageBitMap(a1, v9, v7, 0, 1);
      result = (_UNKNOWN **)MiInsertUnusedLargePageInNodeList(v9, v7);
    }
    ++a2;
    --v5;
  }
  while ( v5 );
  return result;
}
