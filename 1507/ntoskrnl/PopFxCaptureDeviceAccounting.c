/*
 * XREFs of PopFxCaptureDeviceAccounting @ 0x1402373D8
 * Callers:
 *     PopForceCompleteSleepStudySession @ 0x1401481F8 (PopForceCompleteSleepStudySession.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14023DF3C (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x1406B9188 (PopDiagTraceFxComponentAccounting.c)
 */

void __fastcall PopFxCaptureDeviceAccounting(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 v7; // r14
  ULONG_PTR i; // rdi
  __int64 v9; // r15
  volatile signed __int32 *v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned int j; // ebp
  __int64 v15; // r13
  volatile signed __int32 *v16; // rbx
  unsigned __int8 v17; // r12
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v5, (ULONG_PTR)&PopFxDeviceListLock, v6);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v7 = MEMORY[0xFFFFF78000000008];
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      v9 = *(_QWORD *)(i + 48);
      if ( v9 )
      {
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v10 = (volatile signed __int32 *)(i + 568);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented((volatile signed __int32 *)(i + 568));
          }
          else if ( _interlockedbittestandset64(v10, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(i + 568));
          }
          v12 = *(_QWORD *)(i + 600);
          if ( (PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused )
          {
            v12 += *(_QWORD *)(i + 608);
            v13 = *(_QWORD *)(i + 592);
            if ( *(_BYTE *)(i + 576) )
            {
              if ( v7 > v13 )
                v12 += v7 - v13;
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented((volatile signed __int64 *)(i + 568), retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
          __writecr8(CurrentIrql);
          PopDiagTraceFxDeviceAccounting(v9, v12);
        }
        for ( j = 0; j < *(_DWORD *)(i + 620); ++j )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(i + 624) + 8LL * j);
          v16 = (volatile signed __int32 *)(v15 + 200);
          v17 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v15 + 200));
          }
          else if ( _interlockedbittestandset64(v16, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v15 + 200));
          }
          v18 = *(_QWORD *)(v15 + 232);
          if ( (PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused )
          {
            v18 += *(_QWORD *)(v15 + 240);
            v19 = *(_QWORD *)(v15 + 224);
            if ( *(_BYTE *)(v15 + 208) )
            {
              if ( v7 > v19 )
                v18 += v7 - v19;
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v15 + 200), retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
          __writecr8(v17);
          PopDiagTraceFxComponentAccounting(v9, *(unsigned int *)(v15 + 16), v18);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
