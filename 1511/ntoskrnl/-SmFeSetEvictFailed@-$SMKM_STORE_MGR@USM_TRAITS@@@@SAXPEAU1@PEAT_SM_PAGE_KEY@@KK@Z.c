/*
 * XREFs of ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140202B90
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14010FF18 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010D88C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010E160 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v7; // esi
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-89h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-81h]
  _QWORD v18[5]; // [rsp+30h] [rbp-79h] BYREF
  char v19; // [rsp+58h] [rbp-51h] BYREF

  v4 = *a2;
  memset(v18, 0, sizeof(v18));
  v18[3] = 0x800000000LL;
  v18[0] = &v19;
  v7 = 0;
  StLockAcquireExclusive((__int64)&qword_140303E78);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
    (__int64 *)&unk_140303E80,
    v4,
    (__int64)v18);
  v9 = dword_140303E90;
  if ( !_bittest(&v9, a4) )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
      v8,
      &v16,
      (__int64)v18);
    v10 = v17;
    v11 = v16;
    while ( 1 )
    {
      if ( v11 )
      {
        v10 += 8LL;
        v12 = (unsigned __int16)*(_DWORD *)v11 + 2LL;
        v17 = v10;
        if ( v10 < v11 + 8 * v12 )
          goto LABEL_8;
        v13 = *(_QWORD *)(v11 + 8);
        if ( v13 )
          break;
      }
      v14 = 0LL;
LABEL_9:
      *(_BYTE *)(v14 + 7) |= 1u;
      ++v7;
      *(_BYTE *)(v14 + 6) = 3;
      if ( v7 == a3 )
      {
        v16 = v11;
        goto LABEL_11;
      }
    }
    v10 = v13 + 16;
    v11 = *(_QWORD *)(v11 + 8);
    v17 = v13 + 16;
LABEL_8:
    v14 = v10;
    goto LABEL_9;
  }
LABEL_11:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140303E78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140303E78);
  KeAbPostRelease((ULONG_PTR)&qword_140303E78);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
