/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x1400C0F9C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     PopFxIdleComponent @ 0x1400C1B10 (PopFxIdleComponent.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 */

__int64 PopFxResidentTimeoutRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  __int64 InterruptTimePrecise; // rax
  ULONG_PTR v3; // rbx
  __int64 v4; // rsi
  unsigned int i; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  char v12; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v1, &PopFxDeviceListLock);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  if ( (ULONG_PTR *)PopFxDeviceList != &PopFxDeviceList )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v12);
    v3 = PopFxDeviceList;
    v4 = InterruptTimePrecise;
    while ( (ULONG_PTR *)v3 != &PopFxDeviceList )
    {
      for ( i = 0; i < *(_DWORD *)(v3 + 620); ++i )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v3 + 624) + 8LL * i);
        if ( *(int *)(v6 + 96) > 0
          && v4 - *(_QWORD *)(v6 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v6 + 96), 0xFFFFFFFF);
          _InterlockedAdd(&PopFxResidentComponentCount, 0xFFFFFFFF);
          PopFxIdleComponent(v3, i);
        }
      }
      v3 = *(_QWORD *)v3;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  LOBYTE(v10) = 1;
  return PopFxArmResidentTimer(v10);
}
