/*
 * XREFs of PopPepInsertDevice @ 0x14012FF58
 * Callers:
 *     PopPepRegisterDevice @ 0x14051C284 (PopPepRegisterDevice.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PopPepInsertDevice(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  __int64 **v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepVetoMaskReadyLock, v4, (ULONG_PTR)&PopPepVetoMaskReadyLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepDeviceListLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&PopPepDeviceListLock, v5, (ULONG_PTR)&PopPepDeviceListLock);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
    PopPepLastCheckedDevice = a2;
  v8 = (__int64 **)qword_1402DD998;
  *a2 = (__int64)&PopPepDeviceList;
  a2[1] = (__int64)v8;
  if ( *v8 != &PopPepDeviceList )
    __fastfail(3u);
  *v8 = a2;
  qword_1402DD998 = (__int64)a2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepVetoMaskReadyLock);
  KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
