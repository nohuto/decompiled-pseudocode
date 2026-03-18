/*
 * XREFs of ?SmFeEmptyInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140202910
 * Callers:
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140202784 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
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

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEmptyInitiate(__int64 a1, int a2)
{
  char v2; // r12
  volatile signed __int64 *v4; // r14
  unsigned int v5; // ebx
  int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _OWORD *v16; // rax
  __int128 v18; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-D0h]
  int v20; // [rsp+3Ch] [rbp-CCh]
  __int64 v21; // [rsp+40h] [rbp-C8h]
  __int64 v22; // [rsp+48h] [rbp-C0h]
  volatile signed __int64 *v23; // [rsp+50h] [rbp-B8h]
  _QWORD v24[5]; // [rsp+58h] [rbp-B0h] BYREF
  char v25; // [rsp+80h] [rbp-88h] BYREF

  v2 = a2;
  LODWORD(v21) = a2;
  memset(v24, 0, sizeof(v24));
  v24[0] = &v25;
  v4 = (volatile signed __int64 *)(a1 + 5816);
  v23 = (volatile signed __int64 *)(a1 + 5816);
  v5 = 0;
  v22 = 0LL;
  v19 = 0;
  v24[3] = 0x800000000LL;
  v6 = 0;
  StLockAcquireExclusive(a1 + 5816);
  v7 = *(_QWORD *)(a1 + 5824);
  v8 = 0LL;
  v18 = 0uLL;
  v9 = 0LL;
  if ( v7 )
  {
    while ( !*(_BYTE *)(v7 + 3) )
      v7 = *(_QWORD *)(v7 + 8);
    v9 = v7 + 8;
    *(_QWORD *)&v18 = v7;
    *((_QWORD *)&v18 + 1) = v7 + 8;
    v8 = v7;
  }
  v20 = 1 << v2;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 5840)) == 0 )
  {
    v10 = v22;
    while ( 1 )
    {
      if ( v6 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          (__int64 *)(a1 + 5824),
          v10,
          (__int64)v24);
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
          v11,
          &v18,
          (__int64)v24);
        v9 = *((_QWORD *)&v18 + 1);
        v6 = 0;
        v8 = v18;
      }
      if ( !v8 )
      {
LABEL_31:
        v5 = 1;
        *(_DWORD *)(a1 + 5840) |= v20;
        v4 = v23;
        goto LABEL_32;
      }
      v9 += 8LL;
      v12 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
      *((_QWORD *)&v18 + 1) = v9;
      if ( v9 < v8 + 8 * v12 )
        goto LABEL_15;
      v13 = *(_QWORD *)(v8 + 8);
      if ( v13 )
        break;
      v14 = 0LL;
LABEL_16:
      if ( !v14 )
        goto LABEL_31;
      if ( *(unsigned __int16 *)(v14 + 4) == (_DWORD)v21 )
      {
        v10 = *(_DWORD *)v14;
        *(_BYTE *)(v14 + 6) = 0;
        v19 = v10;
        if ( LODWORD(v24[3]) == -1 || !LODWORD(v24[3]) )
          v15 = &v24[1];
        else
          v15 = (_QWORD *)(v24[0] + 16LL * (unsigned int)(LODWORD(v24[3]) - 1));
        if ( *v15 != v8 )
        {
          B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchResultDeref(
            v14,
            (__int64)v24);
          if ( LODWORD(v24[3]) == -1 )
          {
            *v16 = v18;
            goto LABEL_30;
          }
          B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
            (__int64 *)(a1 + 5824),
            *(unsigned int *)(v8 + 16),
            (__int64)v24);
          if ( LODWORD(v24[3]) == -1 || !LODWORD(v24[3]) )
            v15 = &v24[1];
          else
            v15 = (_QWORD *)(v24[0] + 16LL * (unsigned int)(LODWORD(v24[3]) - 1));
        }
        v15[1] = v9;
LABEL_30:
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
          (_QWORD *)(a1 + 5824),
          (__int64)v24);
        v6 = 1;
      }
    }
    v9 = v13 + 16;
    *(_QWORD *)&v18 = *(_QWORD *)(v8 + 8);
    *((_QWORD *)&v18 + 1) = v13 + 16;
    v8 = v13;
LABEL_15:
    v14 = v9;
    goto LABEL_16;
  }
LABEL_32:
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
