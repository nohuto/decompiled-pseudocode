/*
 * XREFs of ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400038F4
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1400034CC (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14000387C (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14011785C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x140119F10 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14011AFD4 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14011E1F8 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14021C850 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14021C8CC (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140221628 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall StLockAcquireExclusive(struct VLOCK *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, v3, a1);
  result = 1LL;
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  return result;
}
