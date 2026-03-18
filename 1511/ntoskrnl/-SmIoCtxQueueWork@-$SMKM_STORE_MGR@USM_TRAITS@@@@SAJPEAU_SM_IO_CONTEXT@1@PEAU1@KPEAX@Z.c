/*
 * XREFs of ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14010BC20
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140109D44 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14010BA28 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14010FF18 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     KeQueryPriorityThread @ 0x140102090 (KeQueryPriorityThread.c)
 *     ?SmQueueContextCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14010BE10 (-SmQueueContextCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14010BE48 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14010E5D8 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140116010 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     memset @ 0x140166CC0 (memset.c)
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
  int v16; // edi
  void (__fastcall *v18)(__int64, __int64 *, __int64); // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v20; // rbx
  __int64 *v21; // rdx
  __int64 *v22; // rcx
  unsigned int PriorityThread; // eax
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+38h] [rbp-40h]
  __int16 v26; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v27[4]; // [rsp+40h] [rbp-38h] BYREF

  memset(v27, 0, sizeof(v27));
  v27[0] = 0LL;
  v9 = 0LL;
  v27[1] = v27;
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
    v16 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue((_DWORD)a1, a2, v8, a4, (__int64)v27);
    if ( v16 < 0 )
      goto LABEL_11;
    v13 = *(_DWORD *)a4;
    v11 = v27;
  }
  if ( (v13 & 7) != 2 )
    goto LABEL_6;
  v18 = *(void (__fastcall **)(__int64, __int64 *, __int64))(a2 + 10120);
  if ( v18 )
  {
    v24 = *a1;
    v25 = *(_DWORD *)(v9 + 24);
    v26 = a3;
    v18(a2, &v24, 5LL);
  }
  CurrentThread = KeGetCurrentThread();
  v20 = *(_QWORD *)(176LL * (a3 & 0x1F) + a2);
  if ( (*(_BYTE *)(v20 + 4485) & 4) != 0
    && (*(_DWORD *)(v9 + 8) & 0x4000000) != 0
    && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2 )
  {
    v21 = (__int64 *)v11[1];
    if ( v21 != v11 )
    {
      v22 = (__int64 *)*v11;
      *v11 = *(_QWORD *)*v11 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v22 == v21 )
      {
        *v11 = 0LL;
        v11[1] = (__int64)v11;
      }
      else
      {
        *v21 = *v21 & 7 | (8 * ((unsigned __int64)*v21 >> 3) - 8);
      }
    }
    memset((void *)(v9 + 40), 0, 0x30uLL);
    *(_QWORD *)(v9 + 72) = v20;
    *(_QWORD *)(v9 + 80) = a2 + 8920;
    PriorityThread = KeQueryPriorityThread(CurrentThread);
    SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(a2 + 8920, v9 + 40, PriorityThread);
  }
  else
  {
LABEL_6:
    v14 = (__int64 *)v11[1];
    if ( v14 == v11 )
    {
      v15 = 0LL;
    }
    else
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
    SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(176LL * (a3 & 0x1F) + a2), v15, 0LL);
  }
  v11[2] = 0LL;
  v16 = 0;
LABEL_11:
  SMKM_STORE_MGR<SM_TRAITS>::SmQueueContextCleanup(a2, v27);
  return (unsigned int)v16;
}
