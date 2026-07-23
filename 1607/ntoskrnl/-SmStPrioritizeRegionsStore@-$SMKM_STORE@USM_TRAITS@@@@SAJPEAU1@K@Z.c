/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140001F74
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003174 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1403E47D4 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140002088 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14011EB50 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14011F090 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmSetPriorityVaRanges @ 0x140659D0C (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, int a2)
{
  bool v2; // zf
  BOOL v5; // r14d
  volatile signed __int64 *v6; // rdi
  int v7; // r9d
  unsigned int v8; // esi
  unsigned int i; // ebp
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  int v14; // [rsp+20h] [rbp-78h]
  _QWORD v15[2]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v16[48]; // [rsp+48h] [rbp-50h] BYREF

  v2 = (*(_BYTE *)(a1 + 5861) & 4) == 0;
  v15[1] = *(unsigned int *)(a1 + 6048);
  if ( v2 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v5 = a2 != 0;
    KiStackAttachProcess(*(_QWORD *)(a1 + 6424));
    v6 = (volatile signed __int64 *)(a1 + 5864);
    StLockAcquireShared((struct VLOCK *)(a1 + 5864));
    v8 = 0;
    *(_BYTE *)(a1 + 5863) = a2 != 0;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6436));
    for ( i = 0; i < *(_DWORD *)(a1 + 6052); ++i )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6056) + 8LL * i) & 0x7FFFFFFFFFFF0000LL) != 0 )
      {
        v15[0] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, i, 0, v7, 0);
        if ( v15[0] > 3uLL )
        {
          if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(a1 + 5864);
          KeAbPostRelease(a1 + 5864);
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
          MmSetPriorityVaRanges(v11, v15, (unsigned int)(v5 + 5));
          StLockAcquireShared((struct VLOCK *)(a1 + 5864));
          SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, i, v12, v13, v14, 0);
        }
      }
    }
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 5864);
    KeAbPostRelease(a1 + 5864);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 6436));
    KiUnstackDetachProcess(v16, 0LL);
  }
  return v8;
}
