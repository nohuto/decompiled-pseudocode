/*
 * XREFs of CmpRemoveKeyHash @ 0x1403FA7F8
 * Callers:
 *     CmpRemoveKeyControlBlock @ 0x1403FA7E8 (CmpRemoveKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x1405FF928 (CmpRehashKcbSubtree.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  CmpRemoveKeyHashFromTableEntry(
    (__int64)a2,
    *(_QWORD *)(a1 + 2800)
  + 24
  * ((unsigned int)(*(_DWORD *)(a1 + 2808) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
