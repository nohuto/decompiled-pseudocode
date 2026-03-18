/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x140169748
 * Callers:
 *     PoFxEnableDStateReporting @ 0x1406B3568 (PoFxEnableDStateReporting.c)
 *     VerifierPoFxStartDevicePowerManagement @ 0x1407423E0 (VerifierPoFxStartDevicePowerManagement.c)
 *     PoFxRegisterDebugger @ 0x1407E8DD4 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140026F98 (PopFxActivateDevice.c)
 *     PopFxIdleComponent @ 0x1400274D0 (PopFxIdleComponent.c)
 *     PoFxActivateComponent @ 0x140027650 (PoFxActivateComponent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140149F64 (PopFxIncrementDeviceSleepCount.c)
 *     PopPepDeviceStarted @ 0x14016991C (PopPepDeviceStarted.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1405B2228 (PopDiagTraceFxDeviceStartPowerManagement.c)
 */

void __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbp
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned int v5; // edi
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v8; // r14d
  signed __int32 v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // r15
  unsigned int i; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rbx
  __int64 v16; // r9
  char v17; // bl
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  __int64 v20; // rbx
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  PopPepDeviceStarted(*(_QWORD *)(BugCheckParameter2 + 56));
  v4 = *(_QWORD *)(BugCheckParameter2 + 64);
  v5 = 0;
  if ( v4 )
  {
    v22 = *(_QWORD *)(BugCheckParameter2 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(v4 + 96))(18LL, &v22);
  }
  if ( v1 )
  {
    v6 = (volatile signed __int32 *)(v1 + 88);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v1 + 88);
    }
    else
    {
      v8 = 0;
      if ( _interlockedbittestandset(v6, 0x1Fu) )
        v8 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v1 + 88));
      while ( 1 )
      {
        v9 = *v6;
        if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v9 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v6, v9 | 0x40000000, v9);
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
    }
    v10 = *(_DWORD *)(v1 + 120);
    if ( (*(_DWORD *)(BugCheckParameter2 + 616) & 1) != 0 )
    {
      if ( !v10 )
      {
LABEL_14:
        *(_DWORD *)(v1 + 296) |= 4u;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v1 + 88, retaddr);
        else
          *v6 = 0;
        __writecr8(CurrentIrql);
        PopDiagTraceFxDeviceStartPowerManagement(v1);
        goto LABEL_17;
      }
      v10 = 0;
      *(_DWORD *)(v1 + 120) = 0;
    }
    if ( v10 )
    {
      v11 = *(_DWORD *)(BugCheckParameter2 + 620);
      v12 = v10;
      do
      {
        for ( i = 0; i < v11; ++i )
        {
          PoFxActivateComponent(BugCheckParameter2, i, 2LL);
          v11 = *(_DWORD *)(BugCheckParameter2 + 620);
        }
        --v12;
      }
      while ( v12 );
    }
    goto LABEL_14;
  }
LABEL_17:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, v3);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v15, (ULONG_PTR)&PopFxDeviceListLock, v16);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  v17 = PopFxEnableShutdownActiveBias;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v17 )
  {
    v20 = *(_QWORD *)(v1 + 32);
    PopFxActivateDevice(v20, 0);
    PopFxIncrementDeviceSleepCount(v20);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 620) )
  {
    do
      PopFxIdleComponent(BugCheckParameter2, v5++, 1);
    while ( v5 < *(_DWORD *)(BugCheckParameter2 + 620) );
  }
}
