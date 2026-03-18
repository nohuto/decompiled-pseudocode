/*
 * XREFs of CmpCopyName @ 0x1404A1054
 * Callers:
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpAddValueKeyNew @ 0x1404A0F2C (CmpAddValueKeyNew.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x140658120 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x1407D79B4 (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
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
