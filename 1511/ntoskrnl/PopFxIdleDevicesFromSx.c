/*
 * XREFs of PopFxIdleDevicesFromSx @ 0x14011A82C
 * Callers:
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PoFxIdleDevice @ 0x1400DC378 (PoFxIdleDevice.c)
 */

__int64 PopFxIdleDevicesFromSx()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  ULONG_PTR i; // rbx
  __int64 v3; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v1, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    v3 = *(_QWORD *)(i + 48);
    if ( v3 && (*(_DWORD *)(i + 616) & 1) == 0 && !*(_BYTE *)(v3 + 200) )
    {
      PoFxIdleDevice(*(_QWORD *)(v3 + 32));
      *(_DWORD *)(v3 + 296) &= ~0x1000u;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
