/*
 * XREFs of PopPepRemoveDevice @ 0x140206AE8
 * Callers:
 *     PopPepUnregisterDevice @ 0x14066F9A4 (PopPepUnregisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PopPepRemoveDevice(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rsi
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepVetoMaskReadyLock, v3, (ULONG_PTR)&PopPepVetoMaskReadyLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepDeviceListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PopPepDeviceListLock, v4, (ULONG_PTR)&PopPepDeviceListLock);
  if ( v6 )
    v6[26] |= 1u;
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
}
