/*
 * XREFs of PopFxRemoveAcpiDevice @ 0x1401EAEB8
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x1401F4D74 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PopFxRemoveAcpiDevice(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  __int64 v7; // r8
  _QWORD *v8; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v4, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = *(_QWORD *)(a2 + 176);
  v8 = *(_QWORD **)(a2 + 184);
  if ( *(_QWORD *)(v7 + 8) != a2 + 176 || *v8 != a2 + 176 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
