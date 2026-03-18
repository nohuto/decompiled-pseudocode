/*
 * XREFs of ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140110060
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14010FF18 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010E160 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@@Z @ 0x14010FB48 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4)
{
  __int64 v7; // rcx
  unsigned int updated; // eax
  unsigned int v9; // ebx
  _QWORD v11[5]; // [rsp+30h] [rbp-D8h] BYREF
  char v12; // [rsp+58h] [rbp-B0h] BYREF

  memset(v11, 0, sizeof(v11));
  v11[3] = 0x800000000LL;
  v11[0] = &v12;
  StLockAcquireExclusive((__int64)&qword_140303E78);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
    (__int64 *)&unk_140303E80,
    *a2,
    (__int64)v11);
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(v7, a2, a3, a4, (__int64)v11);
  v9 = updated;
  if ( updated != 32 )
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)&SmGlobals + updated + 731);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140303E78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140303E78);
  KeAbPostRelease((ULONG_PTR)&qword_140303E78);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v9;
}
