/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x140202DE0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14066FAA0 (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x14066FCE8 (PdcPoResiliencyClient.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopFxPauseDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  unsigned __int64 v2; // rsi
  ULONG_PTR i; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned int j; // ebp
  __int64 v8; // rdi
  KIRQL v9; // al
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v1, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  v2 = MEMORY[0xFFFFF78000000008];
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      if ( PopFxDeviceAccountingLevel < 0 )
      {
        v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 568));
        v5 = *(_QWORD *)(i + 608);
        v6 = *(_QWORD *)(i + 592);
        if ( *(_BYTE *)(i + 576) && v2 > v6 )
          v5 += v2 - v6;
        *(_QWORD *)(i + 600) += v5;
        KeReleaseSpinLock((PKSPIN_LOCK)(i + 568), v4);
      }
      for ( j = 0; j < *(_DWORD *)(i + 620); ++j )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(i + 624) + 8LL * j) + 200LL;
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8);
        v10 = *(_QWORD *)(v8 + 40);
        v11 = *(_QWORD *)(v8 + 24);
        if ( *(_BYTE *)(v8 + 8) && v2 > v11 )
          v10 += v2 - v11;
        *(_QWORD *)(v8 + 32) += v10;
        KeReleaseSpinLock((PKSPIN_LOCK)v8, v9);
      }
    }
  }
  PopFxDeviceAccountingPaused = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
}
