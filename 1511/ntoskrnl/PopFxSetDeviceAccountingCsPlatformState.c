/*
 * XREFs of PopFxSetDeviceAccountingCsPlatformState @ 0x1401EB1EC
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1401EA1CC (PopFxEnablePlatformStates.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14001AA18 (PopFxActivateDevice.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PoFxIdleDevice @ 0x1400DC378 (PoFxIdleDevice.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1401ED5CC (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1401ED680 (PopPepGetMinimumDevicePowerState.c)
 */

__int64 __fastcall PopFxSetDeviceAccountingCsPlatformState(unsigned int a1)
{
  __int64 result; // rax
  int v3; // r14d
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v5; // rbx
  ULONG_PTR v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  char MinimumDevicePowerState; // bl
  KIRQL v10; // al
  unsigned int i; // ebp
  __int64 v12; // rbx
  char MinimumComponentIdleState; // di
  KIRQL v14; // al
  int v15; // [rsp+68h] [rbp+10h] BYREF

  result = (unsigned int)_InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  v3 = result;
  if ( (int)result <= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v5, (ULONG_PTR)&PopFxDeviceListLock);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v6 = PopFxDeviceList;
    for ( PopFxDeviceAccountingVetoMask = 1 << a1; (ULONG_PTR *)v6 != &PopFxDeviceList; v6 = *(_QWORD *)v6 )
    {
      v7 = *(_QWORD *)(v6 + 48);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 32);
        PopFxActivateDevice(v8, 0);
        MinimumDevicePowerState = PopPepGetMinimumDevicePowerState(*(_QWORD *)(v6 + 56), a1, &v15);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 568));
        *(_QWORD *)(v6 + 600) = 0LL;
        *(_QWORD *)(v6 + 608) = 0LL;
        *(_DWORD *)(v6 + 584) = v3;
        if ( MinimumDevicePowerState && v15 > 1 )
        {
          *(_DWORD *)(v6 + 580) = v15;
          *(_BYTE *)(v6 + 576) = 1;
          *(_QWORD *)(v6 + 592) = MEMORY[0xFFFFF78000000008];
        }
        else
        {
          *(_BYTE *)(v6 + 576) = 0;
          *(_QWORD *)(v6 + 592) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 568), v10);
        for ( i = 0; i < *(_DWORD *)(v6 + 620); ++i )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v6 + 624) + 8LL * i) + 200LL;
          MinimumComponentIdleState = PopPepGetMinimumComponentIdleState(*(_QWORD *)(v6 + 56), i, a1, &v15);
          v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
          *(_QWORD *)(v12 + 32) = 0LL;
          *(_QWORD *)(v12 + 40) = 0LL;
          *(_DWORD *)(v12 + 16) = v3;
          if ( MinimumComponentIdleState && v15 )
          {
            *(_DWORD *)(v12 + 12) = v15;
            *(_BYTE *)(v12 + 8) = 1;
            *(_QWORD *)(v12 + 24) = MEMORY[0xFFFFF78000000008];
          }
          else
          {
            *(_BYTE *)(v12 + 8) = 0;
            *(_QWORD *)(v12 + 24) = 0LL;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v12, v14);
        }
        PoFxIdleDevice(v8);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
