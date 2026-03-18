/*
 * XREFs of CmpNameSize @ 0x1403F4458
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpAddValueKeyNew @ 0x1403F448C (CmpAddValueKeyNew.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x1405E1F44 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x140745B5C (CmpCreateRootNode.c)
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
