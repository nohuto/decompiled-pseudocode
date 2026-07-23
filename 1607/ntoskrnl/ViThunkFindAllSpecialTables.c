/*
 * XREFs of ViThunkFindAllSpecialTables @ 0x14070F8F0
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x14070F3E8 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkReplaceAllThunkedImports @ 0x14070FB94 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ViThunkFindNextSpecialTable @ 0x14070F99C (ViThunkFindNextSpecialTable.c)
 */

_QWORD *__fastcall ViThunkFindAllSpecialTables(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 NextSpecialTable; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rsi

  v2 = a2;
  NextSpecialTable = ViThunkFindNextSpecialTable(a1, a2);
  if ( !NextSpecialTable )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(ViVerifierSpecialThunkTables + 1), 0x74566D4Du);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 8LL * (unsigned int)(ViVerifierSpecialThunkTables + 1));
  v8 = 0LL;
  do
  {
    v7[v8] = NextSpecialTable;
    v8 = (unsigned int)(v8 + 1);
    NextSpecialTable = ViThunkFindNextSpecialTable(a1, v2);
  }
  while ( NextSpecialTable );
  return v7;
}
