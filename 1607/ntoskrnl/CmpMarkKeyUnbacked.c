/*
 * XREFs of CmpMarkKeyUnbacked @ 0x140518288
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x14060BA04 (CmpCommitDiscardReplacePost.c)
 *     CmpForceInvalidatePostCallback @ 0x14060BCD4 (CmpForceInvalidatePostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x14060DB04 (CmpRefreshWorkerRoutine.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E518 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E88C (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
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
