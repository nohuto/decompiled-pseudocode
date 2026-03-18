/*
 * XREFs of ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140251834
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStoreActionNotify@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_ACTION_TYPE@@PEAX@Z @ 0x14014A2B8 (-SmStoreActionNotify@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_S.c)
 *     SmProcessEmptyRequest @ 0x1406D9400 (SmProcessEmptyRequest.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?SmEmptyQueueToStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1402517C0 (-SmEmptyQueueToStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeEmptyInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140251A74 (-SmFeEmptyInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmEmptyStore(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebp
  __int64 v7; // r14
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned __int64 v9; // rtt
  __int64 v10; // rbx
  unsigned __int64 v11; // rtt
  struct _EX_RUNDOWN_REF *v12; // rcx
  unsigned __int64 v13; // rtt

  if ( a2 >= 0x20 )
    return;
  v4 = a2;
  _mm_lfence();
  v6 = a2 | (32 * (*(_WORD *)(176LL * a2 + a1 + 24) & 0x7FF));
  v7 = 176LL * (a2 & 0x1F);
  v8 = (struct _EX_RUNDOWN_REF *)(v7 + a1);
  _m_prefetchw((const void *)(v7 + a1 + 8));
  v9 = *(_QWORD *)(v7 + a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + a1 + 8), v9 + 2, v9)
    && !ExfAcquireRundownProtection(v8 + 1) )
  {
    goto LABEL_8;
  }
  if ( (*(_WORD *)(v7 + a1 + 24) & 0x7FF) != v6 >> 5 )
  {
    _m_prefetchw(&v8[1]);
    v11 = v8[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&v8[1], v11 - 2, v11) )
      ExfReleaseRundownProtection(v8 + 1);
LABEL_8:
    v10 = 0LL;
    goto LABEL_9;
  }
  v10 = *(_QWORD *)(v7 + a1);
LABEL_9:
  if ( !v10 )
    return;
  if ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmFeEmptyInitiate(a1, (unsigned int)v4) )
  {
    v10 = 0LL;
    if ( a3 )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(48 * v4 + a1 + 7384), CriticalWorkQueue);
      return;
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmEmptyQueueToStore(a1, v4);
  }
  if ( v10 )
  {
    v12 = (struct _EX_RUNDOWN_REF *)(176LL * (*(_DWORD *)(v10 + 4480) & 0x1F) + a1 + 8);
    _m_prefetchw(v12);
    v13 = v12->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v13 - 2, v13) )
      ExfReleaseRundownProtection(v12);
  }
}
