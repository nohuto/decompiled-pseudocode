/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140003640
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140002EE8 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x140003A68 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x140117F38 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14011B6B8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14011BAA0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-A9h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-A1h]
  unsigned int v16; // [rsp+30h] [rbp-99h]
  _QWORD v17[5]; // [rsp+40h] [rbp-89h] BYREF
  char v18; // [rsp+68h] [rbp-61h] BYREF

  memset(v17, 0, sizeof(v17));
  v17[3] = 0x800000000LL;
  v17[0] = &v18;
  v4 = 0;
  v16 = 0;
  v5 = 0;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 448);
  v8 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( v7 )
  {
    while ( !*(_BYTE *)(v7 + 3) )
      v7 = *(_QWORD *)(v7 + 8);
    v8 = v7 + 8;
    v14 = v7;
    v15 = v7 + 8;
    v6 = v7;
  }
  while ( 1 )
  {
    if ( v5 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v4,
        v17);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v13,
        &v14,
        v17);
      v8 = v15;
      v5 = 0;
      v6 = v14;
    }
    if ( !v6 )
      break;
    v8 += 8LL;
    v9 = (unsigned __int16)*(_DWORD *)v6 + 2LL;
    v15 = v8;
    if ( v8 < v6 + 8 * v9 )
      goto LABEL_6;
    v12 = *(_QWORD *)(v6 + 8);
    if ( v12 )
    {
      v8 = v12 + 16;
      v14 = *(_QWORD *)(v6 + 8);
      v15 = v12 + 16;
      v6 = v12;
LABEL_6:
      v10 = v8;
      goto LABEL_7;
    }
    v10 = 0LL;
LABEL_7:
    if ( !v10 )
      break;
    if ( *(unsigned __int16 *)(v10 + 4) == a2 )
    {
      v4 = *(_DWORD *)v10;
      *(_BYTE *)(v10 + 6) = 0;
      v16 = v4;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v17, &v14);
      v8 = v15;
      v5 = 1;
      v6 = v14;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 440);
  KeAbPostRelease(a1 + 440);
  return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
}
