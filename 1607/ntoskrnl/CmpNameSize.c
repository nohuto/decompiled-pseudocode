/*
 * XREFs of CmpNameSize @ 0x140402220
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140140F24 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x140401BC8 (CmpAddValueKeyNew.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1405FEB44 (CmpAddValueKeyTombstone.c)
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
