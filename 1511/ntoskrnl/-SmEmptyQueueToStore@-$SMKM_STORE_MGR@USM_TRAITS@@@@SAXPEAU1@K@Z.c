/*
 * XREFs of ?SmEmptyQueueToStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14020272C
 * Callers:
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140202784 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
 *     ?SmEmptyWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140202888 (-SmEmptyWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmEmptyQueueToStore(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx

  v3 = a2;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 8 * (a2 + 731LL)));
  v4 = a1 + 8 * (v3 + 4 * v3 + 763);
  *(_QWORD *)(v4 + 32) = 1LL;
  SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(176 * (v3 & 0x1F) + a1), v4, 0);
}
