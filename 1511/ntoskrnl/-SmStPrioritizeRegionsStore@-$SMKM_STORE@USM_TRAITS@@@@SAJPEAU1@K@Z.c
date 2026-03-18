/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1400E7988
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F6210 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1404AD068 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1400E7A9C (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140110A14 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140110B74 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmSetPriorityVaRanges @ 0x140623DA0 (MmSetPriorityVaRanges.c)
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
  $D4FCF91253F76F57393CBFE908971F67 v16; // [rsp+48h] [rbp-50h] BYREF

  v2 = (*(_BYTE *)(a1 + 4485) & 4) == 0;
  v15[1] = *(unsigned int *)(a1 + 4672);
  if ( v2 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v5 = a2 != 0;
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)&v16);
    v6 = (volatile signed __int64 *)(a1 + 4488);
    StLockAcquireShared((struct VLOCK *)(a1 + 4488));
    v8 = 0;
    *(_BYTE *)(a1 + 4487) = a2 != 0;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5032));
    for ( i = 0; i < *(_DWORD *)(a1 + 4676); ++i )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 4680) + 8LL * i) & 0x7FFFFFFFFFFF0000LL) != 0 )
      {
        v15[0] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, i, 0, v7, 0);
        if ( v15[0] > 3uLL )
        {
          if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
          KeAbPostRelease(a1 + 4488);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          MmSetPriorityVaRanges(v11, v15, (unsigned int)(v5 + 5));
          StLockAcquireShared((struct VLOCK *)(a1 + 4488));
          SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, i, v12, v13, v14, 0);
        }
      }
    }
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
    KeAbPostRelease(a1 + 4488);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 5032));
    KiUnstackDetachProcess(&v16, 0LL);
  }
  return v8;
}
