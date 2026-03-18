/*
 * XREFs of ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140258FE4
 * Callers:
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140258EC4 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14013CFB0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14013F4E8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14013F74C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14013F8CC (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(__int64 a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r12d
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  _OWORD *v22; // rax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  int v25; // [rsp+20h] [rbp-B9h]
  __int128 v26; // [rsp+28h] [rbp-B1h] BYREF
  int v27; // [rsp+38h] [rbp-A1h]
  _QWORD v28[5]; // [rsp+40h] [rbp-99h] BYREF
  char v29; // [rsp+68h] [rbp-71h] BYREF

  v4 = *a2;
  v27 = a3;
  memset(v28, 0, sizeof(v28));
  v28[3] = 0x800000000LL;
  v28[0] = &v29;
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  v8 = 1;
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire(a1 + 5816, 0LL, 0LL, v9);
  v13 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 5816), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 5816), v10, a1 + 5816, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = *(_DWORD *)(a1 + 5840);
  if ( !_bittest(&v14, a4) )
  {
    v15 = *((_QWORD *)&v26 + 1);
    v16 = v26;
    while ( 1 )
    {
      if ( v8 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          (__int64 *)(a1 + 5824),
          v4,
          (__int64)v28);
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
          v17,
          &v26,
          (__int64)v28);
        v15 = *((_QWORD *)&v26 + 1);
        v16 = v26;
        v8 = 0;
      }
      if ( !v16 )
        break;
      v15 += 8LL;
      v18 = (unsigned __int16)*(_DWORD *)v16 + 2LL;
      *((_QWORD *)&v26 + 1) = v15;
      if ( v15 >= v16 + 8 * v18 )
      {
        v19 = *(_QWORD *)(v16 + 8);
        if ( !v19 )
          break;
        v15 = v19 + 16;
        *(_QWORD *)&v26 = *(_QWORD *)(v16 + 8);
        *((_QWORD *)&v26 + 1) = v19 + 16;
        v16 = v19;
      }
      v20 = v15;
LABEL_15:
      if ( *(_BYTE *)(v20 + 6) != 3 )
        goto LABEL_29;
      *(_BYTE *)(v20 + 6) = 0;
      if ( LODWORD(v28[3]) == -1 || !LODWORD(v28[3]) )
        v21 = &v28[1];
      else
        v21 = (_QWORD *)(v28[0] + 16LL * (unsigned int)(LODWORD(v28[3]) - 1));
      if ( *v21 == v16 )
        goto LABEL_27;
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchResultDeref(
        v11,
        (__int64)v28);
      if ( LODWORD(v28[3]) != -1 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          (__int64 *)(a1 + 5824),
          *(unsigned int *)(v16 + 16),
          (__int64)v28);
        if ( LODWORD(v28[3]) == -1 || !LODWORD(v28[3]) )
          v21 = &v28[1];
        else
          v21 = (_QWORD *)(v28[0] + 16LL * (unsigned int)(LODWORD(v28[3]) - 1));
LABEL_27:
        v21[1] = v15;
        goto LABEL_28;
      }
      *v22 = v26;
LABEL_28:
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
        (_QWORD *)(a1 + 5824),
        (__int64)v28);
      v8 = 1;
LABEL_29:
      if ( ++v25 == v27 )
        goto LABEL_31;
      ++v4;
    }
    v20 = 0LL;
    goto LABEL_15;
  }
LABEL_31:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5816), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5816));
  KeAbPostRelease(a1 + 5816);
  v23 = KeGetCurrentThread();
  v24 = v23->SpecialApcDisable + 1;
  v23->SpecialApcDisable = v24;
  if ( !v24 && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
    KiCheckForKernelApcDelivery();
}
