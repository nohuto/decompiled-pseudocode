/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F727C (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F6B00 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     SmSetThreadFaultState @ 0x1400F7A4C (SmSetThreadFaultState.c)
 *     SmSetThreadPagePriority @ 0x1400F7AD8 (SmSetThreadPagePriority.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14010D188 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140111F54 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14011283C (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402076D8 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 *a1)
{
  __int64 v1; // rbx
  int v3; // r14d
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // edi
  NTSTATUS v8; // eax
  NTSTATUS v9; // ecx
  __int64 v10; // rcx
  _DWORD *v11; // rsi
  int v12; // edi
  unsigned int v13; // eax
  char v14; // al
  __int64 result; // rax
  int v16; // edi
  unsigned int v17; // eax
  __int64 UnbiasedInterruptTime; // rax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER v20; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF
  int v22; // [rsp+A0h] [rbp+38h] BYREF
  int v23; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+48h] BYREF
  LARGE_INTEGER v25; // [rsp+B8h] [rbp+50h] BYREF

  v1 = *a1;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  v5 = *(unsigned __int8 *)(v1 + 4486);
  if ( (_DWORD)v5 == 4 )
    v6 = *(unsigned int *)(v1 + 5168);
  else
    v6 = `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v5];
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), v6, v4);
  v7 = 0;
  if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
  {
    v24 = 0LL;
    SmSetThreadPagePriority(&v24, 0LL);
    v7 = SmSetThreadFaultState(1LL);
    if ( v7 >= 0 )
      v3 = 1;
  }
  *((_DWORD *)a1 + 8) = v7;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v7 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 4592);
    Object[1] = (PVOID)(v1 + 4616);
    while ( 1 )
    {
LABEL_8:
      v8 = KeWaitForMultipleObjects(
             2u,
             Object,
             WaitAny,
             Executive,
             0,
             0,
             (PLARGE_INTEGER)((v1 + 5040) & -(__int64)(*(_QWORD *)(v1 + 5040) != 0LL)),
             0LL);
      v22 = v8;
      v9 = v8;
      if ( v8 < 2 )
        goto LABEL_9;
      if ( v8 == 258 )
      {
        if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
        {
          v16 = 20;
          v25.QuadPart = -150000LL;
          while ( *(_DWORD *)(v1 + 5032) && v16 && *(_BYTE *)(v1 + 4486) >= 3u )
          {
            KeDelayExecutionThread(0, 0, &v25);
            --v16;
          }
          v17 = StLockAcquireExclusive(v1 + 4488);
          ++*(_DWORD *)(v1 + 4500);
          *(_DWORD *)(v1 + 4496) = v17;
        }
        ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)v1);
        *(_QWORD *)(v1 + 4384) += *(_QWORD *)(v1 + 4376);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 4224, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 4488));
          KeAbPostRelease(v1 + 4488);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
        v9 = 0;
        v22 = 0;
LABEL_9:
        if ( !v9 )
        {
          KeResetEvent((PRKEVENT)Object[0]);
          while ( 1 )
          {
            v11 = (_DWORD *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, &v23);
            if ( !v11 )
              goto LABEL_8;
            if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
            {
              v12 = 20;
              Interval.QuadPart = -150000LL;
              while ( *(_DWORD *)(v1 + 5032) && v12 && *(_BYTE *)(v1 + 4486) >= 3u )
              {
                KeDelayExecutionThread(0, 0, &Interval);
                --v12;
              }
              v13 = StLockAcquireExclusive(v1 + 4488);
              ++*(_DWORD *)(v1 + 4500);
              *(_DWORD *)(v1 + 4496) = v13;
            }
            v14 = *(_BYTE *)(v1 + 4485);
            if ( (v14 & 1) != 0 && !v23 )
            {
              ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v11);
              goto LABEL_11;
            }
            if ( (v14 & 2) == 0 || (*v11 & 7) != 0 )
            {
              v22 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v11);
              if ( v22 != 259 )
                goto LABEL_23;
LABEL_11:
              if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 4488));
                KeAbPostRelease(v1 + 4488);
                KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
              }
            }
            else
            {
              v22 = -1073741058;
LABEL_23:
              if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 4488));
                KeAbPostRelease(v1 + 4488);
                KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
              }
              SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v10, v1, v11, &v22);
            }
          }
        }
        if ( v9 == 1 )
          break;
      }
    }
  }
  if ( v3 )
    SmSetThreadFaultState(0LL);
  v20.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 5172);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &v20);
  }
  return result;
}
