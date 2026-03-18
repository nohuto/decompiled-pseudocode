/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DAD78 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     SmSetThreadPagePriority @ 0x1400DB534 (SmSetThreadPagePriority.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DBB4C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14013ED50 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1401446A0 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1401458E0 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140256934 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 *a1)
{
  __int64 v1; // rbx
  int v3; // r12d
  __int64 v4; // rax
  unsigned int v5; // edx
  int v6; // edi
  bool v7; // zf
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // r9
  NTSTATUS v10; // eax
  __int64 v11; // r9
  NTSTATUS v12; // ecx
  struct _KTHREAD *v13; // rcx
  __int64 v14; // r9
  _DWORD *v15; // r14
  int v16; // edi
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  char v20; // al
  __int16 v21; // ax
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  struct _KTHREAD *v24; // rdi
  __int64 v25; // rcx
  __int16 v26; // ax
  __int64 result; // rax
  int v28; // edi
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER v35; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF
  int v37; // [rsp+B0h] [rbp+48h] BYREF
  int v38; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v39; // [rsp+C0h] [rbp+58h] BYREF
  LARGE_INTEGER v40; // [rsp+C8h] [rbp+60h] BYREF

  v1 = *a1;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  v4 = *(unsigned __int8 *)(v1 + 4486);
  if ( (_DWORD)v4 == 4 )
    v5 = *(_DWORD *)(v1 + 5160);
  else
    v5 = `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v4];
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), v5);
  v6 = 0;
  v7 = (*(_BYTE *)(v1 + 4485) & 4) == 0;
  v37 = 0;
  if ( !v7 )
  {
    v39 = 0LL;
    SmSetThreadPagePriority(&v39, 0LL);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(MiSystemPartition, 0x1AuLL, 1024LL, v9) )
    {
      _InterlockedExchangeAdd64(&qword_14034FA68, 0x1AuLL);
      --CurrentThread->SpecialApcDisable;
      BYTE4(CurrentThread[1].Queue) |= 4u;
      v3 = 1;
      v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
    v37 = v6;
  }
  *((_DWORD *)a1 + 8) = v6;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v6 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 4592);
    Object[1] = (PVOID)(v1 + 4616);
    while ( 1 )
    {
LABEL_9:
      while ( 1 )
      {
        v10 = KeWaitForMultipleObjects(
                2u,
                Object,
                WaitAny,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)((v1 + 5040) & -(__int64)(*(_QWORD *)(v1 + 5040) != 0LL)),
                0LL);
        v37 = v10;
        v12 = v10;
        if ( v10 >= 2 )
          break;
LABEL_10:
        if ( v12 )
        {
          if ( v12 == 1 )
            goto LABEL_36;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v15 = (_DWORD *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, &v38);
          if ( v15 )
          {
            while ( 1 )
            {
              if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
              {
                v16 = 20;
                Interval.QuadPart = -150000LL;
                while ( *(_DWORD *)(v1 + 5032) && v16 && *(_BYTE *)(v1 + 4486) >= 3u )
                {
                  KeDelayExecutionThread(0, 0, &Interval);
                  --v16;
                }
                v17 = KeGetCurrentThread();
                --v17->SpecialApcDisable;
                v18 = KeAbPreAcquire(v1 + 4488, 0LL, 0LL, v14);
                v19 = v18;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 4488), 0LL) )
                  ExfAcquirePushLockExclusiveEx(v1 + 4488, v18, v1 + 4488);
                if ( v19 )
                  *(_BYTE *)(v19 + 26) |= 1u;
                ++*(_DWORD *)(v1 + 4500);
                *(_DWORD *)(v1 + 4496) = 1;
              }
              v20 = *(_BYTE *)(v1 + 4485);
              if ( (v20 & 1) == 0 || v38 )
              {
                if ( (v20 & 2) != 0 && (*v15 & 7) == 0 )
                {
                  v37 = -1073741058;
LABEL_23:
                  if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v1 + 4488);
                    KeAbPostRelease(v1 + 4488);
                    v13 = KeGetCurrentThread();
                    v21 = v13->SpecialApcDisable + 1;
                    v13->SpecialApcDisable = v21;
                    if ( !v21 && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
                      KiCheckForKernelApcDelivery(v13);
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v13, v1, v15, &v37);
                  goto LABEL_28;
                }
                v37 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v15);
                if ( v37 != 259 )
                  goto LABEL_23;
              }
              else
              {
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v15);
              }
              if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v1 + 4488);
                KeAbPostRelease(v1 + 4488);
                v22 = KeGetCurrentThread();
                v23 = v22->SpecialApcDisable + 1;
                v22->SpecialApcDisable = v23;
                if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
                  KiCheckForKernelApcDelivery(v22);
              }
LABEL_28:
              v15 = (_DWORD *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, &v38);
              if ( !v15 )
                goto LABEL_9;
            }
          }
        }
      }
      if ( v10 == 258 )
      {
        if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
        {
          v28 = 20;
          v40.QuadPart = -150000LL;
          while ( *(_DWORD *)(v1 + 5032) && v28 && *(_BYTE *)(v1 + 4486) >= 3u )
          {
            KeDelayExecutionThread(0, 0, &v40);
            --v28;
          }
          v29 = KeGetCurrentThread();
          --v29->SpecialApcDisable;
          v30 = KeAbPreAcquire(v1 + 4488, 0LL, 0LL, v11);
          v31 = v30;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 4488), 0LL) )
            ExfAcquirePushLockExclusiveEx(v1 + 4488, v30, v1 + 4488);
          if ( v31 )
            *(_BYTE *)(v31 + 26) |= 1u;
          ++*(_DWORD *)(v1 + 4500);
          *(_DWORD *)(v1 + 4496) = 1;
        }
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        *(_QWORD *)(v1 + 4384) += *(_QWORD *)(v1 + 4376);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(
          v1 + 4224,
          MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
        if ( (*(_BYTE *)(v1 + 4485) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v1 + 4488);
          KeAbPostRelease(v1 + 4488);
          v32 = KeGetCurrentThread();
          v33 = v32->SpecialApcDisable + 1;
          v32->SpecialApcDisable = v33;
          if ( !v33 && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
            KiCheckForKernelApcDelivery(v32);
        }
        v12 = 0;
        v37 = 0;
        goto LABEL_10;
      }
    }
  }
LABEL_36:
  if ( v3 )
  {
    v24 = KeGetCurrentThread();
    MiReturnResidentAvailable(0x1AuLL);
    _InterlockedExchangeAdd64(&qword_14034FA70, 0x1AuLL);
    BYTE4(v24[1].Queue) &= ~4u;
    v26 = v24->SpecialApcDisable + 1;
    v24->SpecialApcDisable = v26;
    if ( !v26 && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
      KiCheckForKernelApcDelivery(v25);
  }
  v35.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 5164);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &v35);
  }
  return result;
}
