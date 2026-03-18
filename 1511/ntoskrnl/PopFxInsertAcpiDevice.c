/*
 * XREFs of PopFxInsertAcpiDevice @ 0x1401EA308
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x1401F4C80 (PopFxAcpiRegisterDevice.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PopFxInsertAcpiDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  __int64 **v8; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v5, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = (__int64 **)qword_1402DEFE8;
  *(_QWORD *)(a3 + 184) = qword_1402DEFE8;
  *(_QWORD *)(a3 + 176) = &PopFxAcpiDeviceList;
  if ( *v8 != &PopFxAcpiDeviceList )
    __fastfail(3u);
  *v8 = (__int64 *)(a3 + 176);
  qword_1402DEFE8 = a3 + 176;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
