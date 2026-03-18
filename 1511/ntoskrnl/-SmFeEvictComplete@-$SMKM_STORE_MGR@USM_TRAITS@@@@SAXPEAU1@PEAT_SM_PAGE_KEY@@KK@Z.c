/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14010A09C
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D2C0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14010267C (SmKmStoreDeleteWhenEmpty.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010A268 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010D88C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010E160 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010E2E0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // edi
  volatile signed __int64 *v7; // r12
  int v8; // eax
  int v9; // r12d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  struct _KEVENT *v15; // rcx
  _QWORD *v16; // rax
  __int64 v18; // rax
  _OWORD *v19; // rax
  int v20; // [rsp+20h] [rbp-B9h]
  char v21; // [rsp+24h] [rbp-B5h]
  __int128 v22; // [rsp+28h] [rbp-B1h] BYREF
  int v23; // [rsp+38h] [rbp-A1h]
  _QWORD v24[5]; // [rsp+40h] [rbp-99h] BYREF
  char v25; // [rsp+68h] [rbp-71h] BYREF

  v4 = *a2;
  v23 = a3;
  v21 = a4;
  v6 = a4;
  memset(v24, 0, sizeof(v24));
  v24[3] = 0x800000000LL;
  v20 = 0;
  v7 = (volatile signed __int64 *)(a1 + 5816);
  v24[0] = &v25;
  StLockAcquireExclusive(a1 + 5816);
  v8 = *(_DWORD *)(a1 + 5840);
  if ( !_bittest(&v8, v6) )
  {
    v9 = v23;
    while ( 1 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
        a1 + 5824,
        v4,
        v24);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
        v10,
        &v22,
        v24);
      v11 = *((_QWORD *)&v22 + 1);
      v12 = v22;
      if ( !(_QWORD)v22 )
        break;
      v11 = *((_QWORD *)&v22 + 1) + 8LL;
      v13 = (unsigned __int16)*(_DWORD *)v22 + 2LL;
      *((_QWORD *)&v22 + 1) = v11;
      if ( v11 >= (__int64)v22 + 8 * v13 )
      {
        v18 = *(_QWORD *)(v22 + 8);
        if ( !v18 )
          break;
        v11 = v18 + 16;
        *(_QWORD *)&v22 = *(_QWORD *)(v22 + 8);
        *((_QWORD *)&v22 + 1) = v18 + 16;
        v12 = v18;
      }
      v14 = v11;
LABEL_6:
      v15 = *(struct _KEVENT **)(a1 + 9944);
      if ( v15 && *(_DWORD *)(a1 + 9936) == *(_DWORD *)v14 )
        KeSetEvent(v15, 0, 0);
      *(_BYTE *)(v14 + 6) = 0;
      if ( LODWORD(v24[3]) == -1 || !LODWORD(v24[3]) )
        v16 = &v24[1];
      else
        v16 = (_QWORD *)(v24[0] + 16LL * (unsigned int)(LODWORD(v24[3]) - 1));
      if ( *v16 == v12 )
        goto LABEL_11;
      v19 = (_OWORD *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchResultDeref(
                        v15,
                        v24);
      if ( LODWORD(v24[3]) != -1 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          a1 + 5824,
          *(unsigned int *)(v12 + 16),
          v24);
        if ( LODWORD(v24[3]) == -1 || !LODWORD(v24[3]) )
          v16 = &v24[1];
        else
          v16 = (_QWORD *)(v24[0] + 16LL * (unsigned int)(LODWORD(v24[3]) - 1));
LABEL_11:
        v16[1] = v11;
        goto LABEL_12;
      }
      *v19 = v22;
LABEL_12:
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
        a1 + 5824,
        v24);
      if ( ++v20 == v9 )
      {
        LOBYTE(v6) = v21;
        v7 = (volatile signed __int64 *)(a1 + 5816);
        goto LABEL_15;
      }
      ++v4;
    }
    v14 = 0LL;
    goto LABEL_6;
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return SmKmStoreDeleteWhenEmpty(a1, *(_DWORD **)(176LL * (v6 & 0x1F) + a1), 0);
}
