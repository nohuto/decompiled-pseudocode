/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14013F2EC
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14013E5E4 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013F248 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
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

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // edi
  __int64 v8; // r9
  bool v9; // zf
  int v10; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rsi
  __int64 v17; // r14
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _OWORD *v26; // rax
  int v27; // [rsp+20h] [rbp-C1h]
  __int128 v28; // [rsp+28h] [rbp-B9h] BYREF
  int v29; // [rsp+38h] [rbp-A9h]
  int v30; // [rsp+3Ch] [rbp-A5h]
  _QWORD v31[5]; // [rsp+40h] [rbp-A1h] BYREF
  char v32; // [rsp+68h] [rbp-79h] BYREF
  int v33; // [rsp+160h] [rbp+7Fh]

  v5 = *a2;
  v29 = a3;
  memset(v31, 0, sizeof(v31));
  v31[0] = &v32;
  v31[3] = 0x800000000LL;
  v30 = a5 & 1;
  v9 = (a5 & 2) == 0;
  v27 = 0;
  v33 = a5 & 2;
  v10 = 1;
  if ( v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v12 = KeAbPreAcquire(a1 + 5816, 0LL, 0LL, v8);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 5816), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 5816), v12, a1 + 5816, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
  }
  v15 = *(_DWORD *)(a1 + 5840);
  if ( !_bittest(&v15, a4) )
  {
    v16 = *((_QWORD *)&v28 + 1);
    v17 = v28;
    v18 = v30;
    while ( 1 )
    {
      if ( v10 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          a1 + 5824,
          v5,
          v31);
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
          v19,
          &v28,
          v31);
        v16 = *((_QWORD *)&v28 + 1);
        v17 = v28;
        v10 = 0;
      }
      if ( v17 )
      {
        v16 += 8LL;
        v20 = (unsigned __int16)*(_DWORD *)v17 + 2LL;
        *((_QWORD *)&v28 + 1) = v16;
        if ( v16 < v17 + 8 * v20 )
          goto LABEL_12;
        v24 = *(_QWORD *)(v17 + 8);
        if ( v24 )
          break;
      }
      v21 = 0LL;
LABEL_13:
      if ( (*(_BYTE *)(v21 + 7) & 1) != 0 )
      {
        if ( v18 )
          goto LABEL_17;
      }
      else
      {
        if ( *(_BYTE *)(v21 + 6) != 1 )
          goto LABEL_17;
        if ( v18 )
        {
          *(_BYTE *)(v21 + 6) = 3;
          goto LABEL_17;
        }
      }
      *(_BYTE *)(v21 + 6) = 0;
      if ( LODWORD(v31[3]) == -1 || !LODWORD(v31[3]) )
        v25 = &v31[1];
      else
        v25 = (_QWORD *)(v31[0] + 16LL * (unsigned int)(LODWORD(v31[3]) - 1));
      if ( *v25 == v17 )
        goto LABEL_38;
      v26 = (_OWORD *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchResultDeref(
                        v21,
                        v31);
      if ( LODWORD(v31[3]) != -1 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          a1 + 5824,
          *(unsigned int *)(v17 + 16),
          v31);
        if ( LODWORD(v31[3]) == -1 || !LODWORD(v31[3]) )
          v25 = &v31[1];
        else
          v25 = (_QWORD *)(v31[0] + 16LL * (unsigned int)(LODWORD(v31[3]) - 1));
LABEL_38:
        v25[1] = v16;
        goto LABEL_39;
      }
      *v26 = v28;
LABEL_39:
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
        (_QWORD *)(a1 + 5824),
        (__int64)v31);
      v10 = 1;
LABEL_17:
      if ( ++v27 == v29 )
        goto LABEL_18;
      ++v5;
    }
    v16 = v24 + 16;
    *(_QWORD *)&v28 = *(_QWORD *)(v17 + 8);
    *((_QWORD *)&v28 + 1) = v24 + 16;
    v17 = v24;
LABEL_12:
    v21 = v16;
    goto LABEL_13;
  }
LABEL_18:
  if ( !v33 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5816), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5816));
    KeAbPostRelease(a1 + 5816);
    v22 = KeGetCurrentThread();
    v23 = v22->SpecialApcDisable + 1;
    v22->SpecialApcDisable = v23;
    if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      KiCheckForKernelApcDelivery();
  }
}
