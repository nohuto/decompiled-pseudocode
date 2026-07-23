/*
 * XREFs of ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14021C6F8
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14011DDCC (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x140003A68 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14011B6B8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14011BAA0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v13; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-71h]
  _QWORD v15[5]; // [rsp+38h] [rbp-69h] BYREF
  char v16; // [rsp+60h] [rbp-41h] BYREF

  v3 = *a2;
  memset(v15, 0, sizeof(v15));
  v15[3] = 0x800000000LL;
  v15[0] = &v16;
  v5 = 0;
  StLockAcquireExclusive((struct VLOCK *)&qword_1403BEBF8);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    qword_1403BEC00,
    v3,
    (__int64)v15);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    v6,
    &v13,
    (__int64)v15);
  v7 = v14;
  v8 = v13;
  do
  {
    if ( !v8 )
    {
LABEL_5:
      v11 = 0LL;
      goto LABEL_8;
    }
    v7 += 8LL;
    v9 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
    v14 = v7;
    if ( v7 >= v8 + 8 * v9 )
    {
      v10 = *(_QWORD *)(v8 + 8);
      if ( !v10 )
        goto LABEL_5;
      v7 = v10 + 16;
      v8 = *(_QWORD *)(v8 + 8);
      v14 = v10 + 16;
    }
    v11 = v7;
LABEL_8:
    *(_BYTE *)(v11 + 7) |= 1u;
    ++v5;
    *(_BYTE *)(v11 + 6) = 3;
  }
  while ( v5 != a3 );
  v13 = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403BEBF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403BEBF8);
  KeAbPostRelease((ULONG_PTR)&qword_1403BEBF8);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
