/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1400DA52C
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400DA028 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
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

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v3; // r13d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v5; // r15
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 *v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // edi
  int v14; // ebx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  struct _KTHREAD *v17; // rcx
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _OWORD *v22; // rax
  __int128 v23; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v24; // [rsp+40h] [rbp-91h]
  _QWORD v25[5]; // [rsp+48h] [rbp-89h] BYREF
  char v26; // [rsp+70h] [rbp-61h] BYREF

  LODWORD(v24) = a2;
  memset(v25, 0, sizeof(v25));
  v25[3] = 0x800000000LL;
  v25[0] = &v26;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 5816);
  v7 = KeAbPreAcquire(a1 + 5816, 0LL, 0LL, v6);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 5816), 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 5816, v7, a1 + 5816);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = 0LL;
  v10 = (__int64 *)(a1 + 5824);
  v23 = 0uLL;
  v11 = 0LL;
  v12 = *v10;
  if ( *v10 )
  {
    while ( !*(_BYTE *)(v12 + 3) )
      v12 = *(_QWORD *)(v12 + 8);
    v11 = v12 + 8;
    *(_QWORD *)&v23 = v12;
    *((_QWORD *)&v23 + 1) = v12 + 8;
    v9 = v12;
  }
  v13 = 0;
  v14 = v24;
  while ( 1 )
  {
    if ( v3 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
        v10,
        v13,
        v25);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
        v20,
        &v23,
        v25);
      v11 = *((_QWORD *)&v23 + 1);
      v9 = v23;
      v3 = 0;
    }
    if ( !v9 )
      break;
    v11 += 8LL;
    v15 = (unsigned __int16)*(_DWORD *)v9 + 2LL;
    *((_QWORD *)&v23 + 1) = v11;
    if ( v11 >= v9 + 8 * v15 )
    {
      v19 = *(_QWORD *)(v9 + 8);
      if ( !v19 )
      {
        v16 = 0LL;
        goto LABEL_12;
      }
      v11 = v19 + 16;
      *(_QWORD *)&v23 = *(_QWORD *)(v9 + 8);
      *((_QWORD *)&v23 + 1) = v19 + 16;
      v9 = v19;
    }
    v16 = v11;
LABEL_12:
    if ( !v16 )
      break;
    if ( *(unsigned __int16 *)(v16 + 4) == v14 )
    {
      v13 = *(_DWORD *)v16;
      *(_BYTE *)(v16 + 6) = 0;
      if ( LODWORD(v25[3]) == -1 || !LODWORD(v25[3]) )
        v21 = &v25[1];
      else
        v21 = (_QWORD *)(v25[0] + 16LL * (unsigned int)(LODWORD(v25[3]) - 1));
      if ( *v21 != v9 )
      {
        v22 = (_OWORD *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchResultDeref(
                          v16,
                          v25);
        if ( LODWORD(v25[3]) == -1 )
        {
          *v22 = v23;
          goto LABEL_38;
        }
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
          v10,
          *(unsigned int *)(v9 + 16),
          v25);
        if ( LODWORD(v25[3]) == -1 || !LODWORD(v25[3]) )
          v21 = &v25[1];
        else
          v21 = (_QWORD *)(v25[0] + 16LL * (unsigned int)(LODWORD(v25[3]) - 1));
      }
      v21[1] = v11;
LABEL_38:
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeDeleteEx(
        v10,
        v25);
      v3 = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v17 = KeGetCurrentThread();
  result = (unsigned int)++v17->SpecialApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&v17->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(v17);
  }
  return result;
}
