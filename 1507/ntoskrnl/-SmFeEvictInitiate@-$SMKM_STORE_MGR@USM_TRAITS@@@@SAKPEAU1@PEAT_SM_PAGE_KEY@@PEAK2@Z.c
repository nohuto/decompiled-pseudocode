/*
 * XREFs of ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14013C228
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14013CC18 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@@Z @ 0x14013C3B0 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14013F74C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(__int64 a1, unsigned int *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rdi
  int v13; // ecx
  unsigned int updated; // eax
  unsigned int v15; // edi
  struct _EX_RUNDOWN_REF *v16; // rdx
  unsigned __int64 v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  _QWORD v21[5]; // [rsp+40h] [rbp-F8h] BYREF
  char v22; // [rsp+68h] [rbp-D0h] BYREF

  memset(v21, 0, sizeof(v21));
  v21[0] = &v22;
  v21[3] = 0x800000000LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&qword_140351BF8, 0LL, 0LL, v8);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140351BF8, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&qword_140351BF8, v9, (ULONG_PTR)&qword_140351BF8, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeSearchKey(
    &unk_140351C00,
    *a2,
    v21);
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(v13, (_DWORD)a2, a3, a4, (__int64)v21);
  v15 = updated;
  if ( updated != 32 )
  {
    v16 = (struct _EX_RUNDOWN_REF *)((char *)&SmGlobals + 8 * updated);
    _m_prefetchw(&v16[731]);
    v17 = v16[731].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&v16[731], v17 + 2, v17) )
      ExfAcquireRundownProtection(v16 + 731);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140351BF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140351BF8);
  KeAbPostRelease((ULONG_PTR)&qword_140351BF8);
  v18 = KeGetCurrentThread();
  v19 = v18->SpecialApcDisable + 1;
  v18->SpecialApcDisable = v19;
  if ( !v19 && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery();
  return v15;
}
