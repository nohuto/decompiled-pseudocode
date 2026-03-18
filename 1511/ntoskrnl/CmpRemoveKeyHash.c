/*
 * XREFs of CmpRemoveKeyHash @ 0x1404B48FC
 * Callers:
 *     CmpCommitDeleteKeyUoW @ 0x1403B4CF0 (CmpCommitDeleteKeyUoW.c)
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpMarkKcbDeletedAndCache @ 0x1403DB284 (CmpMarkKcbDeletedAndCache.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x1405E11A4 (CmpRehashKcbSubtree.c)
 *     CmpSyncKcbCacheForHive @ 0x1405E2CC8 (CmpSyncKcbCacheForHive.c)
 *     CmpRefreshWorkerRoutine @ 0x1405EAD40 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
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
