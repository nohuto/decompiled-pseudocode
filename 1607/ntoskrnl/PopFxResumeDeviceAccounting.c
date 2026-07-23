/*
 * XREFs of PopFxResumeDeviceAccounting @ 0x14020386C
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

__int64 PopFxResumeDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  ULONG_PTR i; // rbx
  KIRQL v4; // al
  unsigned int j; // esi
  __int64 v6; // rdi
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

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
        *(_QWORD *)(i + 608) = 0LL;
        if ( *(_BYTE *)(i + 576) )
          *(_QWORD *)(i + 592) = v2;
        KeReleaseSpinLock((PKSPIN_LOCK)(i + 568), v4);
      }
      for ( j = 0; j < *(_DWORD *)(i + 620); ++j )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(i + 624) + 8LL * j);
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
        *(_QWORD *)(v6 + 240) = 0LL;
        if ( *(_BYTE *)(v6 + 208) )
          *(_QWORD *)(v6 + 224) = v2;
        KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 200), v7);
      }
    }
  }
  PopFxDeviceAccountingPaused = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
}
