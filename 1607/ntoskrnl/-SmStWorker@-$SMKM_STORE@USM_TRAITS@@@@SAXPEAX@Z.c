/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140002E8C (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039A4 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039F0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmSetThreadFaultState @ 0x140003AC8 (SmSetThreadFaultState.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004844 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmSetThreadPagePriority @ 0x1400049CC (SmSetThreadPagePriority.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140115888 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14011AFE4 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140121744 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021FB54 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 *a1)
{
  __int64 v1; // rbx
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // edi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ecx
  _DWORD *v9; // rdi
  char v10; // al
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 UnbiasedInterruptTime; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  int v16; // [rsp+90h] [rbp+38h] BYREF
  int v17; // [rsp+98h] [rbp+40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+48h] BYREF
  LARGE_INTEGER Interval; // [rsp+A8h] [rbp+50h] BYREF

  v1 = *a1;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  v4 = *(unsigned __int8 *)(v1 + 5862);
  if ( (_DWORD)v4 == 4 )
    v5 = *(unsigned int *)(v1 + 6568);
  else
    v5 = (unsigned int)`SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v4];
  KeSetActualBasePriorityThread(CurrentThread, v5);
  v6 = 0;
  if ( (*(_BYTE *)(v1 + 5861) & 4) != 0 )
  {
    SmSetThreadPagePriority(&CurrentThread, 0LL);
    v6 = SmSetThreadFaultState(1LL);
    if ( v6 >= 0 )
      v3 = 1;
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  }
  *((_DWORD *)a1 + 8) = v6;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v6 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 5968);
    Object[1] = (PVOID)(v1 + 5992);
    while ( 1 )
    {
LABEL_9:
      v7 = KeWaitForMultipleObjects(
             2u,
             Object,
             WaitAny,
             Executive,
             0,
             0,
             (PLARGE_INTEGER)((v1 + 6440) & -(__int64)(*(_QWORD *)(v1 + 6440) != 0LL)),
             0LL);
      v8 = v7;
      if ( v7 < 2 )
        goto LABEL_10;
      if ( v7 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        LOBYTE(v13) = 1;
        *(_QWORD *)(v1 + 5768) += *(_QWORD *)(v1 + 5760);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v13);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5632, UnbiasedInterruptTime);
        SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(v1);
        v8 = 0;
LABEL_10:
        if ( !v8 )
        {
          KeResetEvent((PRKEVENT)Object[0]);
          while ( 1 )
          {
            while ( 1 )
            {
              v9 = (_DWORD *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, &v17);
              if ( !v9 )
                goto LABEL_9;
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
              v10 = *(_BYTE *)(v1 + 5861);
              if ( (v10 & 1) == 0 || v17 )
                break;
              ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v9);
LABEL_12:
              SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(v1);
            }
            if ( (v10 & 2) == 0 || (*v9 & 7) != 0 )
            {
              v16 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v9);
              if ( v16 == 259 )
                goto LABEL_12;
            }
            else
            {
              v16 = -1073741058;
            }
            SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(v1);
            SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v11, v1, v9, &v16);
          }
        }
        if ( v8 == 1 )
          break;
      }
    }
  }
  if ( v3 )
    SmSetThreadFaultState(0LL);
  Interval.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 6572);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
