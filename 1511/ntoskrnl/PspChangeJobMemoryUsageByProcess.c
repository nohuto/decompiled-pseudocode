/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x140417EB0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x14001EBE4 (MiReturnFullProcessCharges.c)
 *     MmAssignProcessToJob @ 0x1403E8528 (MmAssignProcessToJob.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 *     MiDecommitRegion @ 0x14041AE10 (MiDecommitRegion.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PspSendJobNotification @ 0x140117780 (PspSendJobNotification.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140486708 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x140486750 (PspLockJobMemoryLimitsExclusive.c)
 *     PspScheduleEnforcementWorker @ 0x140642464 (PspScheduleEnforcementWorker.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  char v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  BOOL v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // rdx
  int v19; // ebp
  __int64 v20; // rax
  bool v21; // cc
  __int16 v22; // cx
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  $E81C3296F15336D9BF9B2D43BB137B25 *v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 i; // rdi
  int v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  struct _KTHREAD *v34; // [rsp+30h] [rbp-58h]
  __int64 v35; // [rsp+38h] [rbp-50h]
  unsigned __int64 v36; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+40h] [rbp-48h]

  v4 = a4;
  if ( (a1 & 0x10) == 0 || !*(_QWORD *)(a3 + 944) )
    return 1;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v35 = *(_QWORD *)(*(_QWORD *)(a3 + 904) + 1072LL);
  v34 = CurrentThread;
  v33 = 0LL;
  v32 = 0;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v35 )
  {
    v9 = KeAbPreAcquire(v35 + 1024, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 1024), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v35 + 1024), v9, v35 + 1024);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
  }
  v11 = v35;
  v37 = *(_QWORD *)(a3 + 904);
  v12 = v37;
  if ( v37 != v4 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      if ( v12 != v11 )
      {
        v24 = KeAbPreAcquire(v12 + 1024, 0LL, 0LL);
        v25 = v24;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 1024), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v12 + 1024), v24, v12 + 1024);
        v4 = a4;
        if ( v25 )
          *(_BYTE *)(v25 + 26) |= 1u;
      }
      v14 = *(_QWORD *)(v12 + 968);
      v15 = v14 + a2;
      if ( a2 <= 0 )
      {
        if ( v15 <= v14 )
        {
LABEL_14:
          v16 = 0;
          v17 = *(_DWORD *)(v12 + 256);
          v18 = v15 + *(_QWORD *)(v12 + 1312);
          v36 = v18;
          if ( (v17 & 0x200000) != 0 )
          {
            v19 = 1;
            if ( v18 > *(_QWORD *)(v12 + 592) )
              v16 = a2 > 0;
          }
          else
          {
            v19 = 0;
          }
          if ( ((v17 & 0x200) == 0 || v15 <= *(_QWORD *)(v12 + 584) || a2 <= 0) && !v16 )
          {
            if ( v8 )
            {
              *(_QWORD *)(v12 + 968) = v15;
              goto LABEL_20;
            }
            goto LABEL_22;
          }
          if ( (a1 & 4) != 0 )
          {
            *(_QWORD *)(v12 + 968) = v15;
          }
          else if ( v8 )
          {
            v33 = v12;
            v8 = 0;
          }
          if ( *(_QWORD *)(v12 + 456) && (*(_DWORD *)(v12 + 884) & 0x200) != 0 && (*(_DWORD *)(a3 + 768) & 0x24) == 4 )
          {
            _InterlockedOr((volatile signed __int32 *)(a3 + 768), 0x20u);
            PspSendJobNotification(v12, 10LL, *(_QWORD *)(a3 + 744), 1);
            v18 = v36;
          }
LABEL_20:
          if ( !v8 || (v20 = *(_QWORD *)(v12 + 976)) == 0 )
          {
LABEL_22:
            v21 = a2 <= 0;
            goto LABEL_23;
          }
          v29 = *(_QWORD *)(v20 + 40);
          if ( v29 && a2 > 0 )
          {
            if ( v19 )
            {
              if ( v18 <= v29 )
                goto LABEL_22;
            }
            else if ( v15 <= v29 )
            {
              goto LABEL_22;
            }
          }
          else
          {
            v30 = *(_QWORD *)(v20 + 32);
            if ( !v30 )
              goto LABEL_22;
            v21 = a2 <= 0;
            if ( a2 >= 0 )
            {
LABEL_23:
              if ( !v21 )
              {
                if ( v15 > *(_QWORD *)(v12 + 608) )
                  *(_QWORD *)(v12 + 608) = v15;
                v13 = *(_QWORD *)(a3 + 1264);
              }
              if ( v12 != v11 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 1024));
                KeAbPostRelease(v12 + 1024);
              }
              if ( v13 )
              {
                if ( v13 > *(_QWORD *)(v12 + 600) )
                {
                  _m_prefetchw((const void *)(v12 + 600));
                  v26 = *(_QWORD *)(v12 + 600);
                  if ( v13 > v26 )
                  {
                    do
                    {
                      v27 = v26;
                      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 600), v13, v26);
                    }
                    while ( v26 != v27 && v13 > v26 );
                  }
                }
              }
              v4 = a4;
              goto LABEL_31;
            }
            if ( v19 )
            {
              if ( v18 > v30 )
                goto LABEL_22;
            }
            else if ( v15 > v30 )
            {
              goto LABEL_22;
            }
          }
          ++v32;
          goto LABEL_22;
        }
        if ( v8 )
        {
LABEL_61:
          v33 = v12;
          v8 = 0;
        }
      }
      else
      {
        if ( v15 >= v14 )
          goto LABEL_14;
        if ( v8 )
          goto LABEL_61;
      }
      PspUnlockJobMemoryLimitsExclusive(v12, v11, 0LL);
LABEL_31:
      v12 = *(_QWORD *)(v12 + 1064);
      if ( v12 == v4 )
      {
        if ( v8 )
        {
          if ( v32 )
            PspScheduleEnforcementWorker(v11, v18, 1LL);
        }
        else
        {
          for ( i = v37; i != v33; i = *(_QWORD *)(i + 1064) )
          {
            PspLockJobMemoryLimitsExclusive(i, v11, 0LL);
            *(_QWORD *)(i + 968) -= a2;
            PspUnlockJobMemoryLimitsExclusive(i, v11, 0LL);
          }
        }
        CurrentThread = v34;
        break;
      }
    }
  }
  if ( v11 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 1024));
    KeAbPostRelease(v11 + 1024);
  }
  if ( CurrentThread )
  {
    v22 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v22;
    if ( !v22 )
    {
      v28 = &CurrentThread->152;
      if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v28->ApcState.ApcListHead[0].Flink != v28 )
        KiCheckForKernelApcDelivery((__int64)v28);
    }
  }
  return v8;
}
