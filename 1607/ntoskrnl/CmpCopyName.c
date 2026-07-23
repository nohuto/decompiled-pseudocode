/*
 * XREFs of CmpCopyName @ 0x140400BB4
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x140400A88 (CmpAddValueKeyNew.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1405FEBF8 (CmpAddValueKeyTombstone.c)
 *     CmpCreateRootNode @ 0x1407AE788 (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
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
