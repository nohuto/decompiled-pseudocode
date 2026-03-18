/*
 * XREFs of ?SmFeEmptyInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140251A74
 * Callers:
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140251834 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
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

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEmptyInitiate(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // r15
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // r14
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // edi
  int v14; // eax
  __int64 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _OWORD *v21; // rax
  struct _KTHREAD *v22; // rdx
  __int16 v23; // cx
  int v25; // [rsp+28h] [rbp-E0h]
  __int128 v27; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 *v29; // [rsp+50h] [rbp-B8h]
  volatile signed __int64 *v30; // [rsp+58h] [rbp-B0h]
  _QWORD v31[5]; // [rsp+68h] [rbp-A0h] BYREF
  char v32; // [rsp+90h] [rbp-78h] BYREF

  v28 = a1;
  memset(v31, 0, sizeof(v31));
  v31[3] = 0x800000000LL;
  v31[0] = &v32;
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int64 *)(a1 + 5816);
  v30 = (volatile signed __int64 *)(a1 + 5816);
  v6 = KeAbPreAcquire(a1 + 5816, 0LL, 0LL, v5);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 5816), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 5816), v6, a1 + 5816, v7);
  v9 = 1;
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = 0LL;
  v29 = (__int64 *)(a1 + 5824);
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 5824);
  v27 = 0uLL;
  if ( v12 )
  {
    while ( !*(_BYTE *)(v12 + 3) )
      v12 = *(_QWORD *)(v12 + 8);
    v11 = v12 + 8;
    *(_QWORD *)&v27 = v12;
    *((_QWORD *)&v27 + 1) = v12 + 8;
    v10 = v12;
  }
  if ( ((1 << a2) & *(_DWORD *)(v28 + 5840)) != 0 )
  {
    v9 = 0;
    goto LABEL_37;
  }
  v13 = 0;
  v14 = 0;
  v15 = v29;
  while ( 1 )
  {
    if ( v14 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
        v15,
        v13,
        (__int64)v31);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
        v16,
        &v27,
        (__int64)v31);
      v11 = *((_QWORD *)&v27 + 1);
      v10 = v27;
      v25 = 0;
    }
    if ( !v10 )
      break;
    v11 += 8LL;
    v17 = (unsigned __int16)*(_DWORD *)v10 + 2LL;
    *((_QWORD *)&v27 + 1) = v11;
    if ( v11 < v10 + 8 * v17 )
      goto LABEL_20;
    v18 = *(_QWORD *)(v10 + 8);
    if ( v18 )
    {
      v11 = v18 + 16;
      *(_QWORD *)&v27 = *(_QWORD *)(v10 + 8);
      *((_QWORD *)&v27 + 1) = v18 + 16;
      v10 = v18;
LABEL_20:
      v19 = v11;
      goto LABEL_21;
    }
    v19 = 0LL;
LABEL_21:
    if ( !v19 )
      break;
    v14 = v25;
    if ( *(unsigned __int16 *)(v19 + 4) == a2 )
    {
      v13 = *(_DWORD *)v19;
      *(_BYTE *)(v19 + 6) = 0;
      if ( LODWORD(v31[3]) == -1 || !LODWORD(v31[3]) )
        v20 = &v31[1];
      else
        v20 = (_QWORD *)(v31[0] + 16LL * (unsigned int)(LODWORD(v31[3]) - 1));
      if ( *v20 != v10 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchResultDeref(
          v19,
          (__int64)v31);
        if ( LODWORD(v31[3]) == -1 )
        {
          *v21 = v27;
          goto LABEL_35;
        }
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          v15,
          *(unsigned int *)(v10 + 16),
          (__int64)v31);
        if ( LODWORD(v31[3]) == -1 || !LODWORD(v31[3]) )
          v20 = &v31[1];
        else
          v20 = (_QWORD *)(v31[0] + 16LL * (unsigned int)(LODWORD(v31[3]) - 1));
      }
      v20[1] = v11;
LABEL_35:
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
        v15,
        (__int64)v31);
      v14 = 1;
      v25 = 1;
    }
  }
  v4 = v30;
  *(_DWORD *)(v28 + 5840) |= 1 << a2;
LABEL_37:
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v22 = KeGetCurrentThread();
  v23 = v22->SpecialApcDisable + 1;
  v22->SpecialApcDisable = v23;
  if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery();
  return v9;
}
