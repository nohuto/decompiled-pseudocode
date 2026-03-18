/*
 * XREFs of ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401104A0
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7294 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011057C (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1400E7A9C (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010F998 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011044C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@@Z @ 0x1402037D0 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 5032));
  *(_DWORD *)(a3 + 56) = StLockAcquireShared((struct VLOCK *)(a1 + 4488));
  v6 = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a3, a2);
  ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1 + 80, a1 + 4392);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
  KeAbPostRelease(a1 + 4488);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 5032));
  result = v6;
  if ( v6 == -2147483634 )
    return 3221225626LL;
  return result;
}
