/*
 * XREFs of PopPepResetDeviceAccountingLevel @ 0x140206C2C
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1402063D4 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140007BFC (PopFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140007FA0 (PoFxIdleDevice.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopPepResetDeviceAccountingLevel()
{
  signed __int32 v0; // eax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v2; // r15d
  __int64 v3; // rbx
  __int64 i; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r14
  KIRQL v8; // al
  bool v9; // zf
  unsigned int j; // esi
  __int64 v11; // rbx
  KIRQL v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  v0 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  CurrentThread = KeGetCurrentThread();
  v2 = v0;
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v3, (ULONG_PTR)&PopPepDeviceListLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    v5 = *(_QWORD *)(i + 32);
    v6 = *(_QWORD *)(v5 + 48);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 32);
      PopFxActivateDevice(v7, 0);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 568));
      v9 = *(_DWORD *)(v5 + 580) == 5;
      *(_DWORD *)(v5 + 584) = v2;
      *(_QWORD *)(v5 + 600) = 0LL;
      *(_QWORD *)(v5 + 608) = 0LL;
      if ( v9 )
      {
        *(_BYTE *)(v5 + 576) = 0;
        *(_QWORD *)(v5 + 592) = 0LL;
      }
      else
      {
        *(_BYTE *)(v5 + 576) = 1;
        *(_QWORD *)(v5 + 592) = MEMORY[0xFFFFF78000000008];
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 568), v8);
      for ( j = 0; j < *(_DWORD *)(i + 168); ++j )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v5 + 624) + 8LL * j) + 200LL;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11);
        v9 = *(_DWORD *)(v11 + 12) == -1;
        *(_DWORD *)(v11 + 16) = v2;
        *(_QWORD *)(v11 + 32) = 0LL;
        *(_QWORD *)(v11 + 40) = 0LL;
        if ( v9 )
        {
          *(_BYTE *)(v11 + 8) = 0;
          *(_QWORD *)(v11 + 24) = 0LL;
        }
        else
        {
          *(_BYTE *)(v11 + 8) = 1;
          *(_QWORD *)(v11 + 24) = MEMORY[0xFFFFF78000000008];
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v11, v12);
      }
      PoFxIdleDevice(v7);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
}
