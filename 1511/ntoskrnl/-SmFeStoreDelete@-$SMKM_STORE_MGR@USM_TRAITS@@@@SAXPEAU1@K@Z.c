/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1400F7E0C
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400F7F80 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
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

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  volatile signed __int64 *v4; // r14
  unsigned int v5; // r12d
  int v6; // r15d
  __int64 v7; // rsi
  __int64 *v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _OWORD *v17; // rax
  __int128 v18; // [rsp+28h] [rbp-A9h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-99h]
  _QWORD v20[5]; // [rsp+48h] [rbp-89h] BYREF
  char v21; // [rsp+70h] [rbp-61h] BYREF

  memset(v20, 0, sizeof(v20));
  v20[3] = 0x800000000LL;
  v4 = (volatile signed __int64 *)(a1 + 5816);
  v20[0] = &v21;
  v5 = 0;
  v19 = 0;
  v6 = 0;
  StLockAcquireExclusive(a1 + 5816);
  v7 = 0LL;
  v8 = (__int64 *)(a1 + 5824);
  v18 = 0uLL;
  v9 = 0LL;
  v10 = *v8;
  if ( *v8 )
  {
    while ( !*(_BYTE *)(v10 + 3) )
      v10 = *(_QWORD *)(v10 + 8);
    v9 = v10 + 8;
    *(_QWORD *)&v18 = v10;
    *((_QWORD *)&v18 + 1) = v10 + 8;
    v7 = v10;
  }
  while ( 1 )
  {
    if ( v6 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
        v8,
        v5,
        v20);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
        v15,
        &v18,
        v20);
      v9 = *((_QWORD *)&v18 + 1);
      v6 = 0;
      v7 = v18;
    }
    if ( !v7 )
      break;
    v9 += 8LL;
    v11 = (unsigned __int16)*(_DWORD *)v7 + 2LL;
    *((_QWORD *)&v18 + 1) = v9;
    if ( v9 >= v7 + 8 * v11 )
    {
      v13 = *(_QWORD *)(v7 + 8);
      if ( !v13 )
      {
        v12 = 0LL;
        goto LABEL_7;
      }
      v9 = v13 + 16;
      *(_QWORD *)&v18 = *(_QWORD *)(v7 + 8);
      *((_QWORD *)&v18 + 1) = v13 + 16;
      v7 = v13;
    }
    v12 = v9;
LABEL_7:
    if ( !v12 )
      break;
    if ( *(unsigned __int16 *)(v12 + 4) == a2 )
    {
      v5 = *(_DWORD *)v12;
      *(_BYTE *)(v12 + 6) = 0;
      v19 = v5;
      if ( LODWORD(v20[3]) == -1 || !LODWORD(v20[3]) )
        v16 = &v20[1];
      else
        v16 = (_QWORD *)(v20[0] + 16LL * (unsigned int)(LODWORD(v20[3]) - 1));
      if ( *v16 != v7 )
      {
        v17 = (_OWORD *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchResultDeref(
                          v12,
                          v20);
        if ( LODWORD(v20[3]) == -1 )
        {
          *v17 = v18;
          goto LABEL_31;
        }
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          v8,
          *(unsigned int *)(v7 + 16),
          v20);
        if ( LODWORD(v20[3]) == -1 || !LODWORD(v20[3]) )
          v16 = &v20[1];
        else
          v16 = (_QWORD *)(v20[0] + 16LL * (unsigned int)(LODWORD(v20[3]) - 1));
      }
      v16[1] = v9;
LABEL_31:
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
        v8,
        v20);
      v6 = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
