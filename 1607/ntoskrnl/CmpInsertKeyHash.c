/*
 * XREFs of CmpInsertKeyHash @ 0x1405FF8E4
 * Callers:
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x1405FF928 (CmpRehashKcbSubtree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInsertKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpAddKeyHashToEntry(
           (__int64)a2,
           *(_QWORD *)(a1 + 2800)
         + 24LL
         * ((*(_DWORD *)(a1 + 2808) - 1) & ((101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))),
           0);
}
