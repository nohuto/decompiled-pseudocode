/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x1404EA6E0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140027160 (MiReturnFullProcessCharges.c)
 *     MmAssignProcessToJob @ 0x1400B71DC (MmAssignProcessToJob.c)
 *     MiDecommitRegion @ 0x14042F060 (MiDecommitRegion.c)
 *     PsChangeJobMemoryUsageByProcess @ 0x140680170 (PsChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PspSendJobNotification @ 0x1400AA5A8 (PspSendJobNotification.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x140463A00 (PspLockJobMemoryLimitsExclusive.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140463A60 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspScheduleEnforcementWorker @ 0x1404EAB28 (PspScheduleEnforcementWorker.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // rsi
  char v8; // r13
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  BOOL v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // r14
  __int64 v19; // rcx
  __int16 v20; // cx
  _BYTE *v22; // rax
  _BYTE *v23; // rsi
  unsigned __int64 v24; // rax
  __int16 v25; // dx
  unsigned __int64 v26; // r9
  int v27; // r8d
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  $2B8565053CDC740D4E4887693DD8AC9E *v31; // rcx
  __int64 i; // rdi
  int v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+28h] [rbp-50h]
  struct _KTHREAD *v35; // [rsp+30h] [rbp-48h]
  __int64 v36; // [rsp+38h] [rbp-40h]
  __int64 v37; // [rsp+38h] [rbp-40h]

  v4 = a4;
  if ( (a1 & 0x10) == 0 || !*(_QWORD *)(a3 + 944) )
    return 1;
  CurrentThread = KeGetCurrentThread();
  v33 = 0;
  v8 = 1;
  v35 = CurrentThread;
  v34 = 0LL;
  v36 = *(_QWORD *)(*(_QWORD *)(a3 + 904) + 1072LL);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v36 )
  {
    v9 = (_BYTE *)KeAbPreAcquire(v36 + 1016, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 1016), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v36 + 1016), v9, v36 + 1016);
    if ( v10 )
      v10[26] |= 1u;
  }
  v11 = v36;
  v37 = *(_QWORD *)(a3 + 904);
  v12 = v37;
  if ( v37 != v4 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      if ( v12 != v11 )
      {
        v22 = (_BYTE *)KeAbPreAcquire(v12 + 1016, 0LL, 0);
        v23 = v22;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 1016), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v12 + 1016), v22, v12 + 1016);
        v4 = a4;
        if ( v23 )
          v23[26] |= 1u;
      }
      v14 = *(_QWORD *)(v12 + 960);
      v15 = v14 + a2;
      if ( a2 <= 0 )
      {
        if ( v15 <= v14 )
        {
LABEL_14:
          v16 = 0;
          v17 = *(_DWORD *)(v12 + 256);
          v18 = v15 + *(_QWORD *)(v12 + 1320);
          if ( (v17 & 0x200000) != 0 && v18 > *(_QWORD *)(v12 + 592) )
            v16 = a2 > 0;
          if ( (v17 & 0x200) != 0 && v15 > *(_QWORD *)(v12 + 584) && a2 > 0 || v16 )
          {
            if ( (a1 & 4) != 0 )
            {
              *(_QWORD *)(v12 + 960) = v15;
            }
            else if ( v8 )
            {
              v34 = v12;
              v8 = 0;
            }
            if ( *(_QWORD *)(v12 + 456) && (*(_DWORD *)(v12 + 876) & 0x200) != 0 && (*(_DWORD *)(a3 + 768) & 0x24) == 4 )
            {
              _InterlockedOr((volatile signed __int32 *)(a3 + 768), 0x20u);
              PspSendJobNotification(v12, 10LL, *(_QWORD *)(a3 + 744), 1);
            }
LABEL_19:
            if ( v8 )
            {
              v19 = *(_QWORD *)(v12 + 968);
              if ( v19 )
              {
                v24 = *(_QWORD *)(v19 + 40);
                v25 = 0x8000;
                v26 = v15;
                if ( a2 > 0 )
                  v25 = 512;
                if ( (*(_DWORD *)v19 & 0x200000) != 0 )
                  v26 = v18;
                v27 = 0;
                if ( v24 && (v25 & 0x200) != 0 && v26 > v24 )
                  v27 = 512;
                v28 = *(_QWORD *)(v19 + 32);
                if ( v28 && v25 < 0 && v26 < v28 )
                  v27 |= 0x8000u;
                v33 |= v27;
              }
            }
          }
          else if ( v8 )
          {
            *(_QWORD *)(v12 + 960) = v15;
            goto LABEL_19;
          }
          if ( a2 > 0 )
          {
            if ( v15 > *(_QWORD *)(v12 + 608) )
              *(_QWORD *)(v12 + 608) = v15;
            v13 = *(_QWORD *)(a3 + 1264);
          }
          if ( v12 != v11 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1016), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 1016));
            KeAbPostRelease(v12 + 1016);
          }
          if ( v13 )
          {
            if ( v13 > *(_QWORD *)(v12 + 600) )
            {
              _m_prefetchw((const void *)(v12 + 600));
              v29 = *(_QWORD *)(v12 + 600);
              if ( v13 > v29 )
              {
                do
                {
                  v30 = v29;
                  v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 600), v13, v29);
                }
                while ( v29 != v30 && v13 > v29 );
              }
            }
          }
          v4 = a4;
          goto LABEL_29;
        }
        if ( v8 )
        {
LABEL_79:
          v34 = v12;
          v8 = 0;
        }
      }
      else
      {
        if ( v15 >= v14 )
          goto LABEL_14;
        if ( v8 )
          goto LABEL_79;
      }
      PspUnlockJobMemoryLimitsExclusive(v12, v11, 0LL);
LABEL_29:
      v12 = *(_QWORD *)(v12 + 1056);
      if ( v12 == v4 )
      {
        if ( v8 )
        {
          if ( v33 )
            PspScheduleEnforcementWorker(v11);
        }
        else
        {
          for ( i = v37; i != v34; i = *(_QWORD *)(i + 1056) )
          {
            PspLockJobMemoryLimitsExclusive(i, v11, 0LL);
            *(_QWORD *)(i + 960) -= a2;
            PspUnlockJobMemoryLimitsExclusive(i, v11, 0LL);
          }
        }
        CurrentThread = v35;
        break;
      }
    }
  }
  if ( v11 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 1016), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 1016));
    KeAbPostRelease(v11 + 1016);
  }
  if ( CurrentThread )
  {
    v20 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v20;
    if ( !v20 )
    {
      v31 = &CurrentThread->152;
      if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v31->ApcState.ApcListHead[0].Flink != v31 )
        KiCheckForKernelApcDelivery((__int64)v31);
    }
  }
  return v8;
}
