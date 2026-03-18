/*
 * XREFs of CmpRemoveKeyHash @ 0x14052B5B0
 * Callers:
 *     CmpMarkKcbDeletedAndCache @ 0x1404470AC (CmpMarkKcbDeletedAndCache.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x1404F3380 (CmpCommitDeleteKeyUoW.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpMarkKcbDeleted @ 0x140656EA0 (CmpMarkKcbDeleted.c)
 *     CmpRehashKcbSubtree @ 0x140656EC8 (CmpRehashKcbSubtree.c)
 *     CmpSyncKcbCacheForHive @ 0x14065914C (CmpSyncKcbCacheForHive.c)
 *     CmpRefreshWorkerRoutine @ 0x140662748 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  __int64 *v5; // rdx

  result = *(_QWORD *)(a1 + 2800);
  v4 = (unsigned int)(*(_DWORD *)(a1 + 2808) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9));
  v5 = (__int64 *)(result + 8 * (v4 + 2 * (v4 + 1)));
  if ( v5 )
  {
    do
    {
      result = *v5;
      if ( !*v5 )
        break;
      if ( (_DWORD *)result == a2 )
      {
        *v5 = *(_QWORD *)(result + 8);
        return result;
      }
      v5 = (__int64 *)(result + 8);
    }
    while ( result != -8 );
  }
  return result;
}
