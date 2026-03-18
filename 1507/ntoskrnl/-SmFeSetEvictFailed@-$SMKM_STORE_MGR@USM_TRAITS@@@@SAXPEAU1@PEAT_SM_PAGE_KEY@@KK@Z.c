/*
 * XREFs of ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140251D6C
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14013CC18 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14013F4E8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14013F74C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r14d
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 v22; // [rsp+28h] [rbp-99h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-91h]
  _QWORD v24[5]; // [rsp+38h] [rbp-89h] BYREF
  char v25; // [rsp+60h] [rbp-61h] BYREF

  v4 = *a2;
  memset(v24, 0, sizeof(v24));
  v24[3] = 0x800000000LL;
  v24[0] = &v25;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&qword_140351BF8, 0LL, 0LL, v9);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140351BF8, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140351BF8, v10, (ULONG_PTR)&qword_140351BF8, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
    (__int64 *)&unk_140351C00,
    v4,
    (__int64)v24);
  v14 = dword_140351C10;
  if ( !_bittest(&v14, a4) )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
      v13,
      &v22,
      (__int64)v24);
    v15 = v23;
    v16 = v22;
    while ( 1 )
    {
      if ( v16 )
      {
        v15 += 8LL;
        v17 = (unsigned __int16)*(_DWORD *)v16 + 2LL;
        v23 = v15;
        if ( v15 < v16 + 8 * v17 )
          goto LABEL_12;
        v18 = *(_QWORD *)(v16 + 8);
        if ( v18 )
          break;
      }
      v19 = 0LL;
LABEL_13:
      *(_BYTE *)(v19 + 7) |= 1u;
      ++v8;
      *(_BYTE *)(v19 + 6) = 3;
      if ( v8 == a3 )
      {
        v22 = v16;
        goto LABEL_15;
      }
    }
    v15 = v18 + 16;
    v16 = *(_QWORD *)(v16 + 8);
    v23 = v18 + 16;
LABEL_12:
    v19 = v15;
    goto LABEL_13;
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140351BF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140351BF8);
  KeAbPostRelease((ULONG_PTR)&qword_140351BF8);
  v20 = KeGetCurrentThread();
  v21 = v20->SpecialApcDisable + 1;
  v20->SpecialApcDisable = v21;
  if ( !v21 && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery();
}
