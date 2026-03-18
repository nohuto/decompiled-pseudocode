/*
 * XREFs of ?SmEmptyQueueToStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1402517C0
 * Callers:
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140251834 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
 *     ?SmEmptyWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140251974 (-SmEmptyWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmEmptyQueueToStore(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  volatile signed __int64 *v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx

  v3 = a2;
  v4 = (volatile signed __int64 *)(a1 + 8 * (a2 + 731LL));
  v5 = _InterlockedCompareExchange64(v4, 1LL, 0LL);
  if ( v5 >= 2 )
    ExfWaitForRundownProtectionRelease(v4, v5);
  v6 = a1 + 8 * (v3 + 4 * v3 + 763);
  *(_QWORD *)(v6 + 32) = 1LL;
  SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(176 * (v3 & 0x1F) + a1), v6, 0);
}
