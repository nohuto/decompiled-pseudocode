/*
 * XREFs of ViAvlTableIndex @ 0x1400025BC
 * Callers:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140002274 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x140002484 (VfAvlInsertReservedTreeNode.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViAvlTableIndex(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v3 == 1 )
    return 0LL;
  else
    return (a2 >> 12) % v3;
}
