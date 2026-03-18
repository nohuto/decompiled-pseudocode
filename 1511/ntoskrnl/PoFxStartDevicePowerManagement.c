/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x14013D034
 * Callers:
 *     PoFxEnableDStateReporting @ 0x140633EE4 (PoFxEnableDStateReporting.c)
 *     VerifierPoFxStartDevicePowerManagement @ 0x1406C0BA0 (VerifierPoFxStartDevicePowerManagement.c)
 *     PoFxRegisterDebugger @ 0x140766334 (PoFxRegisterDebugger.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     PopFxActivateDevice @ 0x14001AA18 (PopFxActivateDevice.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PoFxActivateComponent @ 0x1400DADFC (PoFxActivateComponent.c)
 *     PopFxIdleComponent @ 0x1400DC4DC (PopFxIdleComponent.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1401146A0 (PopFxIncrementDeviceSleepCount.c)
 *     PopPepInitializeVetoMasks @ 0x1401EDA28 (PopPepInitializeVetoMasks.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x14053F660 (PopDiagTraceFxDeviceStartPowerManagement.c)
 */

void __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r14
  __int64 v3; // rbp
  KIRQL v4; // al
  unsigned int v5; // edi
  __int64 v6; // r8
  KIRQL v7; // al
  unsigned int v8; // edx
  KIRQL v9; // r12
  unsigned int v10; // eax
  __int64 v11; // r14
  unsigned int i; // ebx
  struct _KTHREAD *v13; // rax
  __int64 v14; // rbx
  char v15; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 56);
  v3 = *(_QWORD *)(BugCheckParameter2 + 48);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 64));
  *(_DWORD *)(v1 + 160) = 1;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 64), v4);
  v5 = 0;
  if ( *(_BYTE *)(v1 + 124) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v17, (ULONG_PTR)&PopPepDeviceListLock);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    if ( PopPepPlatformState )
      PopPepInitializeVetoMasks(v1, *(unsigned int *)PpmPlatformStates);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v6 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v6 )
  {
    v19 = *(_QWORD *)(BugCheckParameter2 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(v6 + 96))(18LL, &v19);
  }
  if ( v3 )
  {
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88));
    v8 = *(_DWORD *)(v3 + 120);
    v9 = v7;
    if ( (*(_DWORD *)(BugCheckParameter2 + 616) & 1) != 0 )
    {
      if ( !v8 )
      {
LABEL_11:
        *(_DWORD *)(v3 + 296) |= 4u;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88), v9);
        PopDiagTraceFxDeviceStartPowerManagement(v3);
        goto LABEL_12;
      }
      v8 = 0;
      *(_DWORD *)(v3 + 120) = 0;
    }
    if ( v8 )
    {
      v10 = *(_DWORD *)(BugCheckParameter2 + 620);
      v11 = v8;
      do
      {
        for ( i = 0; i < v10; ++i )
        {
          PoFxActivateComponent(BugCheckParameter2, i, 2LL);
          v10 = *(_DWORD *)(BugCheckParameter2 + 620);
        }
        --v11;
      }
      while ( v11 );
    }
    goto LABEL_11;
  }
LABEL_12:
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v14, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = PopFxEnableShutdownActiveBias;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v15 )
  {
    v18 = *(_QWORD *)(v3 + 32);
    PopFxActivateDevice(v18, 0);
    PopFxIncrementDeviceSleepCount(v18);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 620) )
  {
    do
      PopFxIdleComponent(BugCheckParameter2, v5++, 1);
    while ( v5 < *(_DWORD *)(BugCheckParameter2 + 620) );
  }
}
