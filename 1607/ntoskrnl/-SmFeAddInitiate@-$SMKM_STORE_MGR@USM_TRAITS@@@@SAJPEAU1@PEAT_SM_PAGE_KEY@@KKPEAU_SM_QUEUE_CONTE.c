/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14011A480
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14011A2B8 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x140003A68 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A664 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14011B544 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14011B6B8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14011B6EC (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14011BAA0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
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
  __int16 v8; // r14
  volatile signed __int64 *v9; // r15
  int v10; // r12d
  int v11; // esi
  int v12; // r14d
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // eax
  int v19; // r9d
  NTSTATUS v21; // esi
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-C0h]
  __int16 Object; // [rsp+48h] [rbp-B8h] BYREF
  char v26; // [rsp+4Ah] [rbp-B6h]
  int v27; // [rsp+4Ch] [rbp-B4h]
  _QWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER Timeout; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h]
  _QWORD v34[5]; // [rsp+90h] [rbp-70h] BYREF
  char v35; // [rsp+B8h] [rbp-48h] BYREF

  v6 = *a2;
  v29 = a2;
  v8 = a4;
  v24 = a4;
  v33 = a5;
  memset(v34, 0, sizeof(v34));
  v34[3] = 0x800000000LL;
  v34[0] = &v35;
  v9 = (volatile signed __int64 *)(a1 + 440);
  v23 = 0x1000000000000LL;
  WORD2(v23) = v8;
  v10 = 0;
  v11 = 0;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
  v12 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v6,
      v34);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      *v29,
      &v30,
      v34);
    if ( !v30 )
      break;
    v15 = v31 + 8;
    v16 = (unsigned __int16)*(_DWORD *)v30 + 2LL;
    v31 = v15;
    if ( v15 >= v30 + 8 * v16 )
    {
      v17 = *(_QWORD *)(v30 + 8);
      if ( v17 )
      {
        v30 = *(_QWORD *)(v30 + 8);
        v15 = v17 + 16;
        v31 = v15;
      }
      else
      {
        v15 = 0LL;
      }
    }
    if ( !v15 || v13 < *(_DWORD *)v15 && v14 < *(_DWORD *)v15 )
      break;
    if ( (*(_BYTE *)(v15 + 7) & 1) != 0 )
    {
      v12 = -1073740747;
      goto LABEL_12;
    }
    if ( v11 || !a6 )
      goto LABEL_12;
    Object = 0;
    v28[1] = v28;
    v28[0] = v28;
    *(_QWORD *)(a1 + 1496) = &Object;
    v26 = 6;
    v27 = 0;
    *(_DWORD *)(a1 + 1488) = v6;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
    KeAbPostRelease(a1 + 440);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    Timeout.QuadPart = -2500000LL;
    v21 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
    *(_QWORD *)(a1 + 1496) = 0LL;
    if ( v21 )
      goto LABEL_12;
    v11 = 1;
  }
  while ( 1 )
  {
    LODWORD(v23) = v6;
    v18 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            a1 + 448,
            v6,
            v34);
    v12 = v18;
    if ( v18 == -1073741275 )
    {
      v12 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
              a1 + 448,
              v34,
              &v23);
    }
    else if ( v18 >= 0 )
    {
      v12 = -1073741484;
    }
    if ( v12 < 0 )
      break;
    if ( ++v10 == a3 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(*(_QWORD *)(v33 + 24), a1, v24, v33 | 1);
      v12 = 0;
      goto LABEL_12;
    }
    ++v6;
  }
  if ( v10 )
    SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, (_DWORD)v29, v10, v19, 2);
LABEL_12:
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  KeAbPostRelease(a1 + 440);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
