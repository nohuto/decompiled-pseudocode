/*
 * XREFs of CmpNameSize @ 0x1404010E0
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x140400A88 (CmpAddValueKeyNew.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1405FEBF8 (CmpAddValueKeyTombstone.c)
 *     CmpCreateRootNode @ 0x1407AE788 (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpNameSize(unsigned __int16 *a1)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rdx
  unsigned int v3; // r9d

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1 >> 1;
  if ( !v3 )
    return v1 >> 1;
  while ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v2) <= 0xFFu )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= v3 )
      return v1 >> 1;
  }
  return (unsigned __int16)v1;
}
