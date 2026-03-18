/*
 * XREFs of PopPepRemoveDevice @ 0x1401EE138
 * Callers:
 *     PopPepUnregisterDevice @ 0x14063749C (PopPepUnregisterDevice.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PopPepRemoveDevice(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepVetoMaskReadyLock, v3, (ULONG_PTR)&PopPepVetoMaskReadyLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepDeviceListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PopPepDeviceListLock, v4, (ULONG_PTR)&PopPepDeviceListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( PopPepLastCheckedDevice == a1 )
    PopPepLastCheckedDevice = (__int64 *)*a1;
  v7 = *a1;
  v8 = (__int64 *)a1[1];
  if ( *(__int64 **)(*a1 + 8) != a1 || (__int64 *)*v8 != a1 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepVetoMaskReadyLock);
  KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
