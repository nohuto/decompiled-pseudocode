/*
 * XREFs of CmpMarkKeyUnbacked @ 0x14049FE7C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmpSearchForOpenSubKeys @ 0x14049ACE4 (CmpSearchForOpenSubKeys.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x14060B950 (CmpCommitDiscardReplacePost.c)
 *     CmpForceInvalidatePostCallback @ 0x14060BC20 (CmpForceInvalidatePostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x14060DA50 (CmpRefreshWorkerRoutine.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E464 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E7D8 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbValueCache @ 0x1404372D8 (CmpCleanUpKcbValueCache.c)
 */

void __fastcall CmpMarkKeyUnbacked(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 32) = -1;
  *(_BYTE *)(a1 + 57) = v1 && *(_BYTE *)(v1 + 57) == 3;
  CmpCleanUpKcbValueCache(a1);
  *(_WORD *)(a1 + 178) &= 4u;
  *(_DWORD *)(a1 + 176) &= 0xFFFFFF00;
  *(_QWORD *)(a1 + 96) = 0xFFFFFFFFLL;
  *(_BYTE *)(a1 + 177) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
}
