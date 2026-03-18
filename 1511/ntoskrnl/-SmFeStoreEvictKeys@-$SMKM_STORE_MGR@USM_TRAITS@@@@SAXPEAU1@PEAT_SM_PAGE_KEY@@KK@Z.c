/*
 * XREFs of ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140209BE4
 * Callers:
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140209B38 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010A268 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010D88C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010E160 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14010E2E0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(__int64 a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v7; // r12d
  int v8; // r15d
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  _OWORD *v18; // rax
  __int128 v20; // [rsp+20h] [rbp-B9h] BYREF
  int v21; // [rsp+30h] [rbp-A9h]
  _QWORD v22[5]; // [rsp+40h] [rbp-99h] BYREF
  char v23; // [rsp+68h] [rbp-71h] BYREF

  v4 = *a2;
  v21 = a3;
  memset(v22, 0, sizeof(v22));
  v22[3] = 0x800000000LL;
  v7 = 0;
  v22[0] = &v23;
  v8 = 1;
  StLockAcquireExclusive(a1 + 5816);
  v10 = *(_DWORD *)(a1 + 5840);
  if ( !_bittest(&v10, a4) )
  {
    v11 = *((_QWORD *)&v20 + 1);
    v12 = v20;
    while ( 1 )
    {
      if ( v8 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          (__int64 *)(a1 + 5824),
          v4,
          (__int64)v22);
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
          v13,
          &v20,
          (__int64)v22);
        v11 = *((_QWORD *)&v20 + 1);
        v8 = 0;
        v12 = v20;
      }
      if ( !v12 )
        break;
      v11 += 8LL;
      v14 = (unsigned __int16)*(_DWORD *)v12 + 2LL;
      *((_QWORD *)&v20 + 1) = v11;
      if ( v11 >= v12 + 8 * v14 )
      {
        v15 = *(_QWORD *)(v12 + 8);
        if ( !v15 )
          break;
        v11 = v15 + 16;
        *(_QWORD *)&v20 = *(_QWORD *)(v12 + 8);
        *((_QWORD *)&v20 + 1) = v15 + 16;
        v12 = v15;
      }
      v16 = v11;
LABEL_11:
      if ( *(_BYTE *)(v16 + 6) != 3 )
        goto LABEL_25;
      *(_BYTE *)(v16 + 6) = 0;
      if ( LODWORD(v22[3]) == -1 || !LODWORD(v22[3]) )
        v17 = &v22[1];
      else
        v17 = (_QWORD *)(v22[0] + 16LL * (unsigned int)(LODWORD(v22[3]) - 1));
      if ( *v17 == v12 )
        goto LABEL_23;
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchResultDeref(
        v9,
        (__int64)v22);
      if ( LODWORD(v22[3]) != -1 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          (__int64 *)(a1 + 5824),
          *(unsigned int *)(v12 + 16),
          (__int64)v22);
        if ( LODWORD(v22[3]) == -1 || !LODWORD(v22[3]) )
          v17 = &v22[1];
        else
          v17 = (_QWORD *)(v22[0] + 16LL * (unsigned int)(LODWORD(v22[3]) - 1));
LABEL_23:
        v17[1] = v11;
        goto LABEL_24;
      }
      *v18 = v20;
LABEL_24:
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
        (_QWORD *)(a1 + 5824),
        (__int64)v22);
      v8 = 1;
LABEL_25:
      if ( ++v7 == v21 )
        goto LABEL_27;
      ++v4;
    }
    v16 = 0LL;
    goto LABEL_11;
  }
LABEL_27:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5816), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5816));
  KeAbPostRelease(a1 + 5816);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
