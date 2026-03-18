/*
 * XREFs of PopFxInsertDevice @ 0x14012FD10
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x14051B710 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x14051B960 (PopFxRegisterDevice.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PopFxInsertDevice(__int64 a1, __int64 a2, ULONG_PTR *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  ULONG_PTR **v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v5, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = (ULONG_PTR **)qword_1402DEFF8;
  *a3 = (ULONG_PTR)&PopFxDeviceList;
  a3[1] = (ULONG_PTR)v8;
  if ( *v8 != &PopFxDeviceList )
    __fastfail(3u);
  *v8 = a3;
  qword_1402DEFF8 = (__int64)a3;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
