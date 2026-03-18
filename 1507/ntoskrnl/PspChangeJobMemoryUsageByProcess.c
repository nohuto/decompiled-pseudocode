/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x14041AEA0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1400095C8 (MiReturnFullProcessCharges.c)
 *     MmAssignProcessToJob @ 0x14041AD30 (MmAssignProcessToJob.c)
 *     NtFreeVirtualMemory @ 0x1404B9FC0 (NtFreeVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspSendJobNotification @ 0x14013A2C4 (PspSendJobNotification.c)
 *     PspScheduleEnforcementWorker @ 0x1406C4A10 (PspScheduleEnforcementWorker.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // r12
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
  int v18; // ebp
  __int64 v19; // rax
  bool v20; // cc
  __int16 v21; // cx
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  _QWORD *i; // rbp
  __int64 v30; // rax
  __int64 v31; // rdi
  int v32; // [rsp+20h] [rbp-68h]
  _QWORD *v33; // [rsp+28h] [rbp-60h]
  struct _KTHREAD *v34; // [rsp+30h] [rbp-58h]
  __int64 v35; // [rsp+38h] [rbp-50h]
  unsigned __int64 v36; // [rsp+38h] [rbp-50h]
  _QWORD *v37; // [rsp+40h] [rbp-48h]

  v4 = a4;
  v6 = a2;
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
    v9 = KeAbPreAcquire(v35 + 1024, 0LL, 0LL, a4);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 1024), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v35 + 1024), v9, v35 + 1024, a4);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
  }
  v11 = v35;
  v37 = *(_QWORD **)(a3 + 904);
  v12 = (__int64)v37;
  if ( v37 != (_QWORD *)v4 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      if ( v12 != v11 )
      {
        v23 = KeAbPreAcquire(v12 + 1024, 0LL, 0LL, a4);
        v24 = v23;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 1024), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v12 + 1024), v23, v12 + 1024, a4);
        v4 = a4;
        if ( v24 )
          *(_BYTE *)(v24 + 26) |= 1u;
      }
      v14 = *(_QWORD *)(v12 + 968);
      v15 = v14 + v6;
      if ( v6 <= 0 )
      {
        if ( v15 <= v14 )
        {
LABEL_14:
          v16 = 0;
          v17 = *(_DWORD *)(v12 + 256);
          a2 = v15 + *(_QWORD *)(v12 + 1312);
          v36 = a2;
          if ( (v17 & 0x200000) != 0 )
          {
            v18 = 1;
            if ( a2 > *(_QWORD *)(v12 + 592) )
              v16 = v6 > 0;
          }
          else
          {
            v18 = 0;
          }
          if ( ((v17 & 0x200) == 0 || v15 <= *(_QWORD *)(v12 + 584) || v6 <= 0) && !v16 )
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
            v33 = (_QWORD *)v12;
            v8 = 0;
          }
          if ( *(_QWORD *)(v12 + 456) && (*(_DWORD *)(v12 + 884) & 0x200) != 0 && (*(_DWORD *)(a3 + 768) & 0x24) == 4 )
          {
            _InterlockedOr((volatile signed __int32 *)(a3 + 768), 0x20u);
            PspSendJobNotification(v12, 10LL, *(_QWORD *)(a3 + 744), 1);
            a2 = v36;
          }
LABEL_20:
          if ( !v8 || (v19 = *(_QWORD *)(v12 + 976)) == 0 )
          {
LABEL_22:
            v20 = v6 <= 0;
            goto LABEL_23;
          }
          v27 = *(_QWORD *)(v19 + 40);
          if ( v27 && v6 > 0 )
          {
            if ( v18 )
            {
              if ( a2 <= v27 )
                goto LABEL_22;
            }
            else if ( v15 <= v27 )
            {
              goto LABEL_22;
            }
          }
          else
          {
            v28 = *(_QWORD *)(v19 + 32);
            if ( !v28 )
              goto LABEL_22;
            v20 = v6 <= 0;
            if ( v6 >= 0 )
            {
LABEL_23:
              if ( !v20 )
              {
                if ( v15 > *(_QWORD *)(v12 + 608) )
                  *(_QWORD *)(v12 + 608) = v15;
                v13 = *(_QWORD *)(a3 + 1256);
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
                  v25 = *(_QWORD *)(v12 + 600);
                  if ( v13 > v25 )
                  {
                    do
                    {
                      v26 = v25;
                      v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 600), v13, v25);
                    }
                    while ( v25 != v26 && v13 > v25 );
                  }
                }
              }
              v4 = a4;
              goto LABEL_31;
            }
            if ( v18 )
            {
              if ( a2 > v28 )
                goto LABEL_22;
            }
            else if ( v15 > v28 )
            {
              goto LABEL_22;
            }
          }
          ++v32;
          goto LABEL_22;
        }
        if ( v8 )
        {
          v33 = (_QWORD *)v12;
          v8 = 0;
        }
        if ( v12 == v11 )
          goto LABEL_31;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
LABEL_64:
          ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 1024));
      }
      else
      {
        if ( v15 >= v14 )
          goto LABEL_14;
        if ( v8 )
        {
          v33 = (_QWORD *)v12;
          v8 = 0;
        }
        if ( v12 == v11 )
          goto LABEL_31;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          goto LABEL_64;
      }
      KeAbPostRelease(v12 + 1024);
LABEL_31:
      v12 = *(_QWORD *)(v12 + 1064);
      if ( v12 == v4 )
      {
        if ( v8 )
        {
          if ( v32 )
            PspScheduleEnforcementWorker(v11, a2, 1LL);
        }
        else
        {
          for ( i = v37; i != v33; i = (_QWORD *)i[133] )
          {
            if ( i != (_QWORD *)v11 )
            {
              v30 = KeAbPreAcquire((ULONG_PTR)(i + 128), 0LL, 0LL, a4);
              v31 = v30;
              if ( _interlockedbittestandset64((volatile signed __int32 *)i + 256, 0LL) )
                ExfAcquirePushLockExclusiveEx(i + 128, v30, (ULONG_PTR)(i + 128), a4);
              if ( v31 )
                *(_BYTE *)(v31 + 26) |= 1u;
            }
            i[121] -= v6;
            if ( i != (_QWORD *)v11 )
            {
              if ( (_InterlockedExchangeAdd64(i + 128, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(i + 128);
              KeAbPostRelease((ULONG_PTR)(i + 128));
            }
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
    v21 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v8;
}
