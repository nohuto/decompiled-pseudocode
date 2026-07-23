/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140117DCC
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011B110 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     SmKmStoreDeleteWhenEmpty @ 0x140002FD0 (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140003390 (SmKmStoreRefFromStoreIndex.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x140003A68 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x140117F38 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14011B6B8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14011BAA0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, __int16 a4)
{
  unsigned int v4; // ebx
  int v8; // r12d
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  struct _KEVENT *v12; // rcx
  _DWORD **v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rdi
  __int64 v17; // [rsp+20h] [rbp-A9h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-A1h]
  _QWORD v19[5]; // [rsp+30h] [rbp-99h] BYREF
  char v20; // [rsp+58h] [rbp-71h] BYREF

  v4 = *a2;
  memset(v19, 0, sizeof(v19));
  v19[3] = 0x800000000LL;
  v8 = 0;
  v19[0] = &v20;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v4,
      v19);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v9,
      &v17,
      v19);
    if ( !v17 )
    {
LABEL_12:
      v10 = 0LL;
      goto LABEL_4;
    }
    v10 = v18 + 8;
    v11 = (unsigned __int16)*(_DWORD *)v17 + 2LL;
    v18 = v10;
    if ( v10 >= v17 + 8 * v11 )
    {
      v16 = *(_QWORD *)(v17 + 8);
      if ( !v16 )
        goto LABEL_12;
      v17 = *(_QWORD *)(v17 + 8);
      v10 = v16 + 16;
      v18 = v10;
    }
LABEL_4:
    v12 = *(struct _KEVENT **)(a1 + 1496);
    if ( v12 && *(_DWORD *)(a1 + 1488) == *(_DWORD *)v10 )
      KeSetEvent(v12, 0, 0);
    *(_BYTE *)(v10 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v19, &v17);
    if ( ++v8 == a3 )
      break;
    ++v4;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  KeAbPostRelease(a1 + 440);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v13 = (_DWORD **)SmKmStoreRefFromStoreIndex(a1, a4 & 0x3FF);
  return SmKmStoreDeleteWhenEmpty(v14, *v13);
}
