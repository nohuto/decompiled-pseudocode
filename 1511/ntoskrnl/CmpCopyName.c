/*
 * XREFs of CmpCopyName @ 0x1403F45B4
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpAddValueKeyNew @ 0x1403F448C (CmpAddValueKeyNew.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x1405E1F44 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x140745B5C (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

unsigned __int64 __fastcall CmpCopyName(_BYTE *a1, const void **a2)
{
  __int64 v3; // rdx
  _WORD *v4; // rax

  v3 = 0LL;
  if ( (*(_WORD *)a2 & 0xFFFE) == 0 )
    return (unsigned __int64)*(unsigned __int16 *)a2 >> 1;
  while ( 1 )
  {
    v4 = a2[1];
    if ( v4[v3] > 0xFFu )
      break;
    a1[v3] = v4[v3];
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(unsigned __int16 *)a2 >> 1 )
      return (unsigned __int64)*(unsigned __int16 *)a2 >> 1;
  }
  memmove(a1, a2[1], *(unsigned __int16 *)a2);
  return *(unsigned __int16 *)a2;
}
