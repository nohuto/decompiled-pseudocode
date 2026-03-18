/*
 * XREFs of ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14013E83C
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14013C608 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14013CC18 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14013E5E4 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     ?SmQueueContextCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14013EA5C (-SmQueueContextCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14013F8E0 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14014B864 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     memset @ 0x140195A80 (memset.c)
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
  int v21; // edx
  __int64 *v22; // rdx
  __int64 *v23; // rcx
  unsigned int PriorityThread; // eax
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+38h] [rbp-50h]
  __int16 v27; // [rsp+3Ch] [rbp-4Ch]
  _QWORD v28[4]; // [rsp+40h] [rbp-48h] BYREF

  memset(v28, 0, sizeof(v28));
  v28[1] = v28;
  v9 = 0LL;
  v28[0] = 0LL;
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
    v16 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue((_DWORD)a1, a2, v8, a4, (__int64)v28);
    if ( v16 < 0 )
      goto LABEL_11;
    v13 = *(_DWORD *)a4;
    v11 = v28;
  }
  if ( (v13 & 7) != 2 )
    goto LABEL_6;
  v18 = *(void (__fastcall **)(__int64, __int64 *, __int64))(a2 + 10104);
  if ( v18 )
  {
    v25 = *a1;
    v26 = *(_DWORD *)(v9 + 24);
    v27 = a3;
    v18(a2, &v25, 5LL);
  }
  CurrentThread = KeGetCurrentThread();
  v20 = *(_QWORD *)(176LL * (a3 & 0x1F) + a2);
  if ( (*(_BYTE *)(v20 + 4485) & 4) == 0 || (*(_DWORD *)(v9 + 8) & 0x4000000) == 0 )
    goto LABEL_6;
  v21 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v21 = 0;
  if ( v21 >= 2 )
    goto LABEL_21;
  if ( CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    v21 = 2;
  if ( v21 >= 2 )
  {
LABEL_21:
    v22 = (__int64 *)v11[1];
    if ( v22 != v11 )
    {
      v23 = (__int64 *)*v11;
      *v11 = *(_QWORD *)*v11 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v23 == v22 )
      {
        v11[1] = (__int64)v11;
        *v11 = 0LL;
      }
      else
      {
        *v22 = *v22 & 7 | (8 * ((unsigned __int64)*v22 >> 3) - 8);
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
        v11[1] = (__int64)v11;
        *v11 = 0LL;
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
  SMKM_STORE_MGR<SM_TRAITS>::SmQueueContextCleanup(a2, v28);
  return (unsigned int)v16;
}
