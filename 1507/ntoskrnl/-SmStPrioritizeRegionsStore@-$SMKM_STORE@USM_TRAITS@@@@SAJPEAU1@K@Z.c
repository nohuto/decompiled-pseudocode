/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1401286CC
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400D46DC (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140547048 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1401476BC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140147B04 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MmSetPriorityVaRanges @ 0x1406A2FB4 (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, int a2)
{
  bool v2; // zf
  BOOL v5; // r15d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned int i; // ebp
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  struct _KTHREAD *v18; // rax
  __int64 v19; // r9
  int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // r14
  int v23; // [rsp+20h] [rbp-88h]
  _QWORD v24[2]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v25[48]; // [rsp+48h] [rbp-60h] BYREF

  v2 = (*(_BYTE *)(a1 + 4485) & 4) == 0;
  v24[1] = *(unsigned int *)(a1 + 4672);
  if ( v2 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v5 = a2 != 0;
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v25);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (volatile signed __int64 *)(a1 + 4488);
    v9 = KeAbPreAcquire(a1 + 4488, 0LL, 0LL, v8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 4488), v9, a1 + 4488, v10);
    v11 = 0;
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    *(_BYTE *)(a1 + 4487) = a2 != 0;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5032));
    for ( i = 0; i < *(_DWORD *)(a1 + 4676); ++i )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 4680) + 8LL * i) & 0x7FFFFFFFFFFF0000LL) != 0 )
      {
        v24[0] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, i, 0, v10, 0);
        if ( v24[0] > 3uLL )
        {
          if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
          KeAbPostRelease(a1 + 4488);
          v16 = KeGetCurrentThread();
          v17 = v16->SpecialApcDisable + 1;
          v16->SpecialApcDisable = v17;
          if ( !v17 && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
            KiCheckForKernelApcDelivery();
          MmSetPriorityVaRanges(v16, v24, (unsigned int)(v5 + 5));
          v18 = KeGetCurrentThread();
          --v18->SpecialApcDisable;
          v22 = KeAbPreAcquire(a1 + 4488, 0LL, 0LL, v19);
          if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 4488), v22, a1 + 4488, v21);
          if ( v22 )
            *(_BYTE *)(v22 + 26) |= 1u;
          SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, i, v20, v21, v23, 0);
        }
      }
    }
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
    KeAbPostRelease(a1 + 4488);
    v13 = KeGetCurrentThread();
    v14 = v13->SpecialApcDisable + 1;
    v13->SpecialApcDisable = v14;
    if ( !v14 && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery();
    _InterlockedAdd((volatile signed __int32 *)(a1 + 5032), 0xFFFFFFFF);
    KiUnstackDetachProcess((struct _KTHREAD *)v25, 0);
  }
  return v11;
}
