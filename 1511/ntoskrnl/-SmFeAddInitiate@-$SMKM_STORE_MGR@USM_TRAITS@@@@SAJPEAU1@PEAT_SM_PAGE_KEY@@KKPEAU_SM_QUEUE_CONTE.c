/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14010BA28
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14010B87C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14010BC20 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14010D6FC (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010D88C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14010D8C0 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010E160 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
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
  volatile signed __int64 *v9; // r15
  int v10; // r12d
  int v11; // esi
  int v12; // r14d
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // eax
  NTSTATUS v21; // esi
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int16 Object; // [rsp+40h] [rbp-C0h] BYREF
  char v26; // [rsp+42h] [rbp-BEh]
  int v27; // [rsp+44h] [rbp-BCh]
  _QWORD v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-98h]
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h]
  _QWORD v34[5]; // [rsp+80h] [rbp-80h] BYREF
  char v35; // [rsp+A8h] [rbp-58h] BYREF

  v6 = *a2;
  v7 = a4;
  v29 = a2;
  v33 = a5;
  memset(v34, 0, sizeof(v34));
  v34[3] = 0x800000000LL;
  v34[0] = &v35;
  v9 = (volatile signed __int64 *)(a1 + 5816);
  v24 = 0x1000000000000LL;
  WORD2(v24) = v7;
  v10 = 0;
  v11 = 0;
  StLockAcquireExclusive(a1 + 5816);
  v12 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
      a1 + 5824,
      v6,
      v34);
    v13 = *(_DWORD *)(a1 + 5840);
    if ( _bittest(&v13, a4) )
    {
      v12 = -1072103354;
      goto LABEL_13;
    }
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
      *v29,
      &v30,
      v34);
    if ( !v30 )
      break;
    v16 = v31 + 8;
    v17 = (unsigned __int16)*(_DWORD *)v30 + 2LL;
    v31 = v16;
    if ( v16 >= v30 + 8 * v17 )
    {
      v18 = *(_QWORD *)(v30 + 8);
      if ( v18 )
      {
        v30 = *(_QWORD *)(v30 + 8);
        v16 = v18 + 16;
        v31 = v16;
      }
      else
      {
        v16 = 0LL;
      }
    }
    if ( !v16 || v14 < *(_DWORD *)v16 && v15 < *(_DWORD *)v16 )
      break;
    if ( (*(_BYTE *)(v16 + 7) & 1) != 0 )
    {
      v12 = -1073740747;
      goto LABEL_13;
    }
    if ( v11 || !a6 )
      goto LABEL_13;
    Object = 0;
    v28[1] = v28;
    v28[0] = v28;
    *(_QWORD *)(a1 + 9944) = &Object;
    v26 = 6;
    v27 = 0;
    *(_DWORD *)(a1 + 9936) = v6;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5816));
    KeAbPostRelease(a1 + 5816);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    Timeout.QuadPart = -2500000LL;
    v21 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    StLockAcquireExclusive(a1 + 5816);
    *(_QWORD *)(a1 + 9944) = 0LL;
    if ( v21 )
      goto LABEL_13;
    v11 = 1;
  }
  while ( 1 )
  {
    LODWORD(v24) = v6;
    v19 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
            a1 + 5824,
            v6,
            v34);
    v12 = v19;
    if ( v19 == -1073741275 )
    {
      v12 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeInsertEx(
              a1 + 5824,
              v34,
              &v24);
    }
    else if ( v19 >= 0 )
    {
      v12 = -1073741484;
    }
    if ( v12 < 0 )
      break;
    if ( ++v10 == a3 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(*(_QWORD *)(v33 + 24), a1, a4, v33 | 1);
      v12 = 0;
      goto LABEL_13;
    }
    ++v6;
  }
  if ( v10 )
    SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, (_DWORD)v29, v10, a4, 2);
LABEL_13:
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5816));
  KeAbPostRelease(a1 + 5816);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
