/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14013CD78
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013EEA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14012A8A0 (SmKmStoreDeleteWhenEmpty.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14013CFB0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14013F4E8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14013F74C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14013F8CC (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v6; // r14d
  unsigned __int64 v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // r12
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rax
  struct _KEVENT *v20; // rcx
  _QWORD *v21; // rax
  struct _KTHREAD *v22; // rdx
  __int16 v23; // ax
  __int64 v25; // rax
  _OWORD *v26; // rax
  int v27; // [rsp+20h] [rbp-B9h]
  char v28; // [rsp+24h] [rbp-B5h]
  __int128 v29; // [rsp+28h] [rbp-B1h] BYREF
  int v30; // [rsp+38h] [rbp-A1h]
  _QWORD v31[5]; // [rsp+40h] [rbp-99h] BYREF
  char v32; // [rsp+68h] [rbp-71h] BYREF

  v4 = *a2;
  v30 = a3;
  v28 = a4;
  v6 = a4;
  memset(v31, 0, sizeof(v31));
  v7 = 0LL;
  v31[3] = 0x800000000LL;
  v31[0] = &v32;
  CurrentThread = KeGetCurrentThread();
  v27 = 0;
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 5816);
  v11 = KeAbPreAcquire(a1 + 5816, 0LL, 0LL, v10);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 5816), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 5816), v11, a1 + 5816, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = *(_DWORD *)(a1 + 5840);
  if ( !_bittest(&v14, v6) )
  {
    v15 = v30;
    while ( 1 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
        a1 + 5824,
        v4,
        v31);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
        v16,
        &v29,
        v31);
      v17 = *((_QWORD *)&v29 + 1);
      v18 = v29;
      if ( (_QWORD)v29 )
      {
        v17 = *((_QWORD *)&v29 + 1) + 8LL;
        v19 = (unsigned __int16)*(_DWORD *)v29 + 2LL;
        *((_QWORD *)&v29 + 1) = v17;
        if ( v17 >= (__int64)v29 + 8 * v19 )
        {
          v25 = *(_QWORD *)(v29 + 8);
          if ( !v25 )
            goto LABEL_10;
          v17 = v25 + 16;
          *(_QWORD *)&v29 = *(_QWORD *)(v29 + 8);
          *((_QWORD *)&v29 + 1) = v25 + 16;
          v18 = v25;
        }
        v7 = v17;
      }
LABEL_10:
      v20 = *(struct _KEVENT **)(a1 + 9928);
      if ( v20 && *(_DWORD *)(a1 + 9920) == *(_DWORD *)v7 )
        KeSetEvent(v20, 0, 0);
      *(_BYTE *)(v7 + 6) = 0;
      if ( LODWORD(v31[3]) == -1 || !LODWORD(v31[3]) )
        v21 = &v31[1];
      else
        v21 = (_QWORD *)(v31[0] + 16LL * (unsigned int)(LODWORD(v31[3]) - 1));
      if ( *v21 == v18 )
        goto LABEL_15;
      v26 = (_OWORD *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchResultDeref(
                        v20,
                        v31);
      if ( LODWORD(v31[3]) != -1 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          a1 + 5824,
          *(unsigned int *)(v18 + 16),
          v31);
        if ( LODWORD(v31[3]) == -1 || !LODWORD(v31[3]) )
          v21 = &v31[1];
        else
          v21 = (_QWORD *)(v31[0] + 16LL * (unsigned int)(LODWORD(v31[3]) - 1));
LABEL_15:
        v21[1] = v17;
        goto LABEL_16;
      }
      *v26 = v29;
LABEL_16:
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
        a1 + 5824,
        v31);
      if ( ++v27 == v15 )
      {
        LOBYTE(v6) = v28;
        v9 = (volatile signed __int64 *)(a1 + 5816);
        break;
      }
      ++v4;
      v7 = 0LL;
    }
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  v22 = KeGetCurrentThread();
  v23 = v22->SpecialApcDisable + 1;
  v22->SpecialApcDisable = v23;
  if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery();
  return SmKmStoreDeleteWhenEmpty(a1, *(_DWORD **)(176LL * (v6 & 0x1F) + a1), 0);
}
