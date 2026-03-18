/*
 * XREFs of ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14011E070
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003E08 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E178 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140001F14 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011D010 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011E01C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x14021D4F8 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 6432));
  *(_DWORD *)(a3 + 56) = StLockAcquireShared((struct VLOCK *)(a1 + 5864));
  v6 = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a3, a2);
  ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1 + 80, a1 + 5776);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5864), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 5864));
  KeAbPostRelease(a1 + 5864);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 6432));
  result = v6;
  if ( v6 == -2147483634 )
    return 3221225626LL;
  return result;
}
