/*
 * XREFs of CmpNameSize @ 0x1404A109C
 * Callers:
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpAddValueKeyNew @ 0x1404A0F2C (CmpAddValueKeyNew.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x140658120 (CmpCreateEmptyKey.c)
 *     CmpCreateRootNode @ 0x1407D79B4 (CmpCreateRootNode.c)
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
