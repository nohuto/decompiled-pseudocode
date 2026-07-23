/*
 * XREFs of ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A664
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140117558 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14011A480 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14011DDCC (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140003390 (SmKmStoreRefFromStoreIndex.c)
 *     KeQueryPriorityThread @ 0x1400C5260 (KeQueryPriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     ?SmQueueContextCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14011A85C (-SmQueueContextCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14011A894 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14011BC50 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140124ECC (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
        __int64 *a1,
        __int64 a2,
        __int16 a3,
        unsigned __int64 a4)
{
  int v8; // r8d
  unsigned __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  int *v12; // rax
  int v13; // eax
  __int64 *v14; // rdx
  __int64 *v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // r9
  int v18; // edi
  void (__fastcall *v20)(__int64, __int64 *, __int64); // r9
  struct _KTHREAD *CurrentThread; // r15
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 *v24; // rdx
  __int64 *v25; // rcx
  unsigned int PriorityThread; // eax
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  int v28; // [rsp+38h] [rbp-40h]
  __int16 v29; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v30[4]; // [rsp+40h] [rbp-38h] BYREF

  memset(v30, 0, sizeof(v30));
  v30[0] = 0LL;
  v9 = 0LL;
  v30[1] = v30;
  if ( (a4 & 1) != 0 )
  {
    v10 = (__int64 *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    v11 = v10;
    if ( v10 == (__int64 *)v10[1] )
      v12 = 0LL;
    else
      v12 = (int *)(*v10 & 0xFFFFFFFFFFFFFFF8uLL);
    v13 = *v12;
  }
  else
  {
    v9 = a4;
    v18 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue((_DWORD)a1, a2, v8, a4, (__int64)v30);
    if ( v18 < 0 )
      goto LABEL_11;
    v13 = *(_DWORD *)a4;
    v11 = v30;
  }
  if ( (v13 & 7) != 2 )
    goto LABEL_6;
  v20 = *(void (__fastcall **)(__int64, __int64 *, __int64))(a2 + 1672);
  if ( v20 )
  {
    v27 = *a1;
    v28 = *(_DWORD *)(v9 + 24);
    v29 = a3;
    v20(a2, &v27, 5LL);
  }
  CurrentThread = KeGetCurrentThread();
  v22 = SmKmStoreRefFromStoreIndex(a2, a3 & 0x3FF);
  v23 = *(_QWORD *)v22;
  if ( (*(_BYTE *)(*(_QWORD *)v22 + 5861LL) & 4) != 0
    && (*(_DWORD *)(v9 + 8) & 0x4000000) != 0
    && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2 )
  {
    v24 = (__int64 *)v11[1];
    if ( v24 != v11 )
    {
      v25 = (__int64 *)*v11;
      *v11 = *(_QWORD *)*v11 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v25 == v24 )
      {
        *v11 = 0LL;
        v11[1] = (__int64)v11;
      }
      else
      {
        *v24 = *v24 & 7 | (8 * ((unsigned __int64)*v24 >> 3) - 8);
      }
    }
    memset((void *)(v9 + 40), 0, 0x30uLL);
    *(_QWORD *)(v9 + 72) = v23;
    *(_QWORD *)(v9 + 80) = a2 + 464;
    PriorityThread = KeQueryPriorityThread(CurrentThread);
    SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(a2 + 464, v9 + 40, PriorityThread);
  }
  else
  {
LABEL_6:
    v14 = (__int64 *)v11[1];
    if ( v14 != v11 )
    {
      v15 = (__int64 *)*v11;
      *v11 = *(_QWORD *)*v11 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v15 == v14 )
      {
        *v11 = 0LL;
        v11[1] = (__int64)v11;
      }
      else
      {
        *v14 = *v14 & 7 | (8 * ((unsigned __int64)*v14 >> 3) - 8);
      }
    }
    v16 = (_QWORD *)SmKmStoreRefFromStoreIndex(a2, a3 & 0x3FF);
    SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*v16, v17, 0LL);
  }
  v11[2] = 0LL;
  v18 = 0;
LABEL_11:
  SMKM_STORE_MGR<SM_TRAITS>::SmQueueContextCleanup(a2, v30);
  return (unsigned int)v18;
}
