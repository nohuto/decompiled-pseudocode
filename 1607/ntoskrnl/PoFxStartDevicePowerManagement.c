/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x1401420A0
 * Callers:
 *     PoFxEnableDStateReporting @ 0x14066C3FC (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x1407B21AC (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140007BFC (PopFxActivateDevice.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PoFxActivateComponent @ 0x1400BEF70 (PoFxActivateComponent.c)
 *     PopFxIdleComponent @ 0x1400BF9A0 (PopFxIdleComponent.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1401237FC (PopFxIncrementDeviceSleepCount.c)
 *     PopPepInitializeVetoMasks @ 0x1402063D4 (PopPepInitializeVetoMasks.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140566E28 (PopDiagTraceFxDeviceStartPowerManagement.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // [rsp+90h] [rbp+8h] BYREF

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
    v20 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v20, (ULONG_PTR)&PopPepDeviceListLock);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    if ( PopPepPlatformState )
      PopPepInitializeVetoMasks(v1, *(unsigned int *)PpmPlatformStates);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
  }
  v6 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v6 )
  {
    v25 = *(_QWORD *)(BugCheckParameter2 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(v6 + 96))(18LL, &v25);
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
          PoFxActivateComponent(BugCheckParameter2, i, 2);
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
  v14 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v14, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = PopFxEnableShutdownActiveBias;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  if ( v15 )
  {
    v24 = *(_QWORD *)(v3 + 32);
    PopFxActivateDevice(v24, 0);
    PopFxIncrementDeviceSleepCount(v24);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 620) )
  {
    do
      PopFxIdleComponent(BugCheckParameter2, v5++, 1);
    while ( v5 < *(_DWORD *)(BugCheckParameter2 + 620) );
  }
}
