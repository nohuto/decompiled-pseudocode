/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14010D6FC
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14010BA28 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D658 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
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

unsigned __int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // ebx
  int v8; // r12d
  int v9; // r13d
  bool v10; // zf
  int v11; // r15d
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  _OWORD *v19; // rax
  __int128 v20; // [rsp+20h] [rbp-C1h] BYREF
  int v21; // [rsp+30h] [rbp-B1h]
  _QWORD v22[5]; // [rsp+40h] [rbp-A1h] BYREF
  char v23; // [rsp+68h] [rbp-79h] BYREF
  int v24; // [rsp+160h] [rbp+7Fh]

  v5 = *a2;
  v21 = a3;
  memset(v22, 0, sizeof(v22));
  v22[3] = 0x800000000LL;
  v22[0] = &v23;
  v8 = 0;
  v9 = a5 & 1;
  v10 = (a5 & 2) == 0;
  v24 = a5 & 2;
  v11 = 1;
  if ( v10 )
    StLockAcquireExclusive(a1 + 5816);
  result = *(unsigned int *)(a1 + 5840);
  if ( !_bittest((const int *)&result, a4) )
  {
    v13 = *((_QWORD *)&v20 + 1);
    v14 = v20;
    while ( 1 )
    {
      if ( v11 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          a1 + 5824,
          v5,
          v22);
        result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
                   v15,
                   &v20,
                   v22);
        v13 = *((_QWORD *)&v20 + 1);
        v11 = 0;
        v14 = v20;
      }
      if ( v14 )
      {
        v13 += 8LL;
        v16 = (unsigned __int16)*(_DWORD *)v14 + 2LL;
        *((_QWORD *)&v20 + 1) = v13;
        result = v14 + 8 * v16;
        if ( v13 < result )
          goto LABEL_9;
        result = *(_QWORD *)(v14 + 8);
        if ( result )
          break;
      }
      v17 = 0LL;
LABEL_10:
      if ( (*(_BYTE *)(v17 + 7) & 1) != 0 )
      {
        if ( v9 )
          goto LABEL_14;
      }
      else
      {
        if ( *(_BYTE *)(v17 + 6) != 1 )
          goto LABEL_14;
        if ( v9 )
        {
          *(_BYTE *)(v17 + 6) = 3;
          goto LABEL_14;
        }
      }
      *(_BYTE *)(v17 + 6) = 0;
      if ( LODWORD(v22[3]) == -1 || !LODWORD(v22[3]) )
        v18 = &v22[1];
      else
        v18 = (_QWORD *)(v22[0] + 16LL * (unsigned int)(LODWORD(v22[3]) - 1));
      if ( *v18 == v14 )
        goto LABEL_36;
      v19 = (_OWORD *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchResultDeref(
                        v17,
                        v22);
      if ( LODWORD(v22[3]) != -1 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          a1 + 5824,
          *(unsigned int *)(v14 + 16),
          v22);
        if ( LODWORD(v22[3]) == -1 || !LODWORD(v22[3]) )
          v18 = &v22[1];
        else
          v18 = (_QWORD *)(v22[0] + 16LL * (unsigned int)(LODWORD(v22[3]) - 1));
LABEL_36:
        v18[1] = v13;
        goto LABEL_37;
      }
      *v19 = v20;
LABEL_37:
      result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
                 (_QWORD *)(a1 + 5824),
                 (__int64)v22);
      v11 = 1;
LABEL_14:
      if ( ++v8 == v21 )
        goto LABEL_15;
      ++v5;
    }
    v13 = result + 16;
    *(_QWORD *)&v20 = *(_QWORD *)(v14 + 8);
    *((_QWORD *)&v20 + 1) = result + 16;
    v14 = result;
LABEL_9:
    v17 = v13;
    goto LABEL_10;
  }
LABEL_15:
  if ( !v24 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5816), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5816));
    KeAbPostRelease(a1 + 5816);
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
