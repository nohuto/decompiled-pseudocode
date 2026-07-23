/*
 * XREFs of PopFxSetDeviceAccountingCsPlatformState @ 0x1402039EC
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402029D0 (PopFxEnablePlatformStates.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140007BFC (PopFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140007FA0 (PoFxIdleDevice.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopPepGetMinimumComponentIdleState @ 0x140205F78 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14020602C (PopPepGetMinimumDevicePowerState.c)
 */

__int64 __fastcall PopFxSetDeviceAccountingCsPlatformState(unsigned int a1)
{
  __int64 result; // rax
  int v3; // r14d
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v5; // rbx
  ULONG_PTR i; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  char MinimumDevicePowerState; // bl
  KIRQL v10; // al
  unsigned int j; // ebp
  __int64 v12; // rbx
  char MinimumComponentIdleState; // di
  KIRQL v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+68h] [rbp+10h] BYREF

  result = (unsigned int)_InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  v3 = result;
  if ( (int)result <= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v5, (ULONG_PTR)&PopFxDeviceListLock);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      v7 = *(_QWORD *)(i + 48);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 32);
        PopFxActivateDevice(v8, 0);
        MinimumDevicePowerState = PopPepGetMinimumDevicePowerState(*(_QWORD *)(i + 56), a1, &v18);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 568));
        *(_QWORD *)(i + 600) = 0LL;
        *(_QWORD *)(i + 608) = 0LL;
        *(_DWORD *)(i + 584) = v3;
        if ( MinimumDevicePowerState && v18 > 1 )
        {
          *(_DWORD *)(i + 580) = v18;
          *(_BYTE *)(i + 576) = 1;
          *(_QWORD *)(i + 592) = MEMORY[0xFFFFF78000000008];
        }
        else
        {
          *(_BYTE *)(i + 576) = 0;
          *(_QWORD *)(i + 592) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(i + 568), v10);
        for ( j = 0; j < *(_DWORD *)(i + 620); ++j )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(i + 624) + 8LL * j) + 200LL;
          MinimumComponentIdleState = PopPepGetMinimumComponentIdleState(*(_QWORD *)(i + 56), j, a1, &v18);
          v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
          *(_QWORD *)(v12 + 32) = 0LL;
          *(_QWORD *)(v12 + 40) = 0LL;
          *(_DWORD *)(v12 + 16) = v3;
          if ( MinimumComponentIdleState && v18 )
          {
            *(_DWORD *)(v12 + 12) = v18;
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
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
  }
  return result;
}
