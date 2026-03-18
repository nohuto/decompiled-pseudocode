/*
 * XREFs of PopPepIdleTimeoutRoutine @ 0x140135FA0
 * Callers:
 *     <none>
 * Callees:
 *     PopPepCountReadyActivities @ 0x140027E40 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x140027EF0 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140028058 (PopPepPromoteActivities.c)
 *     PopPepUpdateIdleState @ 0x140028640 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x140028758 (PopPepComponentGetResidencyIdleState.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PopPepIdleTimeoutRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct _KTHREAD *v10; // rdx
  __int16 v11; // ax
  volatile signed __int32 *v13; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v15; // ebp
  signed __int32 v16; // eax
  unsigned int ready; // r14d
  unsigned int i; // ebp
  __int64 v19; // r10
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int ResidencyIdleState; // eax
  __int64 v24; // r10
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v6, (ULONG_PTR)&PopPepDeviceListLock, v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = PopPepDeviceList;
  if ( (__int64 *)PopPepDeviceList != &PopPepDeviceList )
  {
    while ( (*(_BYTE *)(v8 + 16) & 1) != 0 )
    {
LABEL_7:
      v8 = *(_QWORD *)v8;
      if ( (__int64 *)v8 == &PopPepDeviceList )
        goto LABEL_8;
    }
    v13 = (volatile signed __int32 *)(v8 + 64);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8 + 64);
    }
    else
    {
      v15 = 0;
      if ( _interlockedbittestandset(v13, 0x1Fu) )
        v15 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v8 + 64));
      while ( 1 )
      {
        v16 = *v13;
        if ( (*v13 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v16 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v13, v16 | 0x40000000, v16);
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
    }
    if ( *(_BYTE *)(v8 + 136) )
    {
      ready = PopPepCountReadyActivities((unsigned int *)v8, 0LL, 3);
      for ( i = 0; i < *(_DWORD *)(v8 + 168); ++i )
      {
        v19 = 200LL * i + v8 + 176;
        if ( *(_DWORD *)(v19 + 176) != *(_DWORD *)(v19 + 188) - 1
          && !**(_DWORD **)(v19 + 72)
          && !**(_DWORD **)(v19 + 80) )
        {
          v21 = *(_QWORD *)(v19 + 136);
          if ( v4 > v21 )
          {
            v22 = v4 - v21;
            if ( (unsigned __int64)(v4 - v21) > *(_QWORD *)(v19 + 120) )
            {
              *(_QWORD *)(v19 + 120) = v22;
              ResidencyIdleState = PopPepComponentGetResidencyIdleState(v19, v22);
              if ( *(_DWORD *)(v24 + 160) != ResidencyIdleState )
              {
                *(_DWORD *)(v24 + 160) = ResidencyIdleState;
                PopPepUpdateIdleState(v8, v24, 1);
              }
            }
          }
        }
      }
      PopPepPromoteActivities(v8, 0LL, 3);
      v20 = PopPepCountReadyActivities((unsigned int *)v8, 0LL, 3);
      PopPepRequestWork(ready, v20);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
      {
        *v13 = 0;
LABEL_25:
        __writecr8(CurrentIrql);
        goto LABEL_7;
      }
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      *v13 = 0;
      goto LABEL_25;
    }
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8 + 64, retaddr);
    goto LABEL_25;
  }
LABEL_8:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  LOBYTE(v9) = 1;
  return PopPepArmIdleTimer(v9);
}
