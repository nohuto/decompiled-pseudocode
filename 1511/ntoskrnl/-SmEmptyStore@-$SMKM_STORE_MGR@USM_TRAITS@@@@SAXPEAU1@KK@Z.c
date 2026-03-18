/*
 * XREFs of ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140202784
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStoreActionNotify@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_ACTION_TYPE@@PEAX@Z @ 0x14011489C (-SmStoreActionNotify@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_S.c)
 *     SmProcessEmptyRequest @ 0x140657174 (SmProcessEmptyRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ?SmEmptyQueueToStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14020272C (-SmEmptyQueueToStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeEmptyInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140202910 (-SmFeEmptyInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmEmptyStore(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // rbx

  if ( a2 >= 0x20 )
    return;
  v4 = a2;
  _mm_lfence();
  v6 = a2 | (32 * (*(_WORD *)(176LL * a2 + a1 + 24) & 0x7FF));
  v7 = a1 + 176LL * (a2 & 0x1F);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 8)) )
    goto LABEL_6;
  if ( (*(_WORD *)(v7 + 24) & 0x7FF) != v6 >> 5 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 8));
LABEL_6:
    v8 = 0LL;
    goto LABEL_7;
  }
  v8 = *(_QWORD *)v7;
LABEL_7:
  if ( !v8 )
    return;
  if ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmFeEmptyInitiate(a1, (unsigned int)v4) )
  {
    v8 = 0LL;
    if ( a3 )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(48 * v4 + a1 + 7384), CriticalWorkQueue);
      return;
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmEmptyQueueToStore(a1, v4);
  }
  if ( v8 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (*(_DWORD *)(v8 + 4480) & 0x1F) + a1 + 8));
}
