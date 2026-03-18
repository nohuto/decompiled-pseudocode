/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14013E5E4
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14013E454 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14013E83C (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14013F2EC (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14013F4E8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14013F51C (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14013F74C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v6; // edi
  __int16 v7; // bx
  int v9; // r12d
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // r14
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  int v17; // esi
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // eax
  struct _KTHREAD *v25; // rax
  __int16 v26; // cx
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  NTSTATUS v30; // eax
  struct _KTHREAD *v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // r15
  int Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS v40; // [rsp+40h] [rbp-C0h]
  __int16 Object; // [rsp+48h] [rbp-B8h] BYREF
  char v42; // [rsp+4Ah] [rbp-B6h]
  int v43; // [rsp+4Ch] [rbp-B4h]
  _QWORD v44[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h]
  _QWORD v50[5]; // [rsp+90h] [rbp-70h] BYREF
  char v51; // [rsp+B8h] [rbp-48h] BYREF

  v6 = *a2;
  v7 = a4;
  v45 = a2;
  v49 = a5;
  memset(v50, 0, sizeof(v50));
  v50[0] = &v51;
  v39 = 0x1000000000000LL;
  v9 = 0;
  v50[3] = 0x800000000LL;
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  WORD2(v39) = v7;
  --CurrentThread->SpecialApcDisable;
  v12 = (volatile signed __int64 *)(a1 + 5816);
  v14 = KeAbPreAcquire(a1 + 5816, 0LL, 0LL, v13);
  v16 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 5816), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 5816), v14, a1 + 5816, v15);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  v17 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
      a1 + 5824,
      v6,
      v50);
    v18 = *(_DWORD *)(a1 + 5840);
    if ( _bittest(&v18, a4) )
    {
      v17 = -1072103354;
      goto LABEL_17;
    }
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
      *v45,
      &v46,
      v50);
    if ( !v46 )
      break;
    v21 = v47 + 8;
    v22 = (unsigned __int16)*(_DWORD *)v46 + 2LL;
    v47 = v21;
    if ( v21 >= v46 + 8 * v22 )
    {
      v23 = *(_QWORD *)(v46 + 8);
      if ( v23 )
      {
        v46 = *(_QWORD *)(v46 + 8);
        v21 = v23 + 16;
        v47 = v21;
      }
      else
      {
        v21 = 0LL;
      }
    }
    if ( !v21 || v19 < *(_DWORD *)v21 && v20 < *(_DWORD *)v21 )
      break;
    if ( (*(_BYTE *)(v21 + 7) & 1) != 0 )
    {
      v17 = -1073740747;
      goto LABEL_17;
    }
    if ( v10 || !a6 )
      goto LABEL_17;
    Object = 0;
    v44[1] = v44;
    v44[0] = v44;
    *(_QWORD *)(a1 + 9928) = &Object;
    v42 = 6;
    v43 = 0;
    *(_DWORD *)(a1 + 9920) = v6;
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5816));
    KeAbPostRelease(a1 + 5816);
    v28 = KeGetCurrentThread();
    v29 = v28->SpecialApcDisable + 1;
    v28->SpecialApcDisable = v29;
    if ( !v29 && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
      KiCheckForKernelApcDelivery();
    v48.QuadPart = -2500000LL;
    v30 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &v48);
    v31 = KeGetCurrentThread();
    v40 = v30;
    --v31->SpecialApcDisable;
    v33 = KeAbPreAcquire(a1 + 5816, 0LL, 0LL, v32);
    v35 = v33;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 5816), v33, a1 + 5816, v34);
    if ( v35 )
      *(_BYTE *)(v35 + 26) |= 1u;
    *(_QWORD *)(a1 + 9928) = 0LL;
    if ( v40 )
      goto LABEL_17;
    v10 = 1;
  }
  while ( 1 )
  {
    LODWORD(v39) = v6;
    v24 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
            a1 + 5824,
            v6,
            v50);
    v17 = v24;
    if ( v24 == -1073741275 )
    {
      v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeInsertEx(
              a1 + 5824,
              v50,
              &v39);
    }
    else if ( v24 >= 0 )
    {
      v17 = -1073741484;
    }
    if ( v17 < 0 )
      break;
    if ( ++v9 == a3 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(*(_QWORD *)(v49 + 24), a1, a4, v49 | 1, Timeout);
      v17 = 0;
      goto LABEL_17;
    }
    ++v6;
  }
  if ( v9 )
    SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, (_DWORD)v45, v9, a4, 2);
LABEL_17:
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5816));
  KeAbPostRelease(a1 + 5816);
  v25 = KeGetCurrentThread();
  v26 = v25->SpecialApcDisable + 1;
  v25->SpecialApcDisable = v26;
  if ( !v26 && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v17;
}
