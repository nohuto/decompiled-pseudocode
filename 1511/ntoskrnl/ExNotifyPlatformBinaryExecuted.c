/*
 * XREFs of ExNotifyPlatformBinaryExecuted @ 0x140549C30
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void ExNotifyPlatformBinaryExecuted()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  PVOID v4; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&ExpPlatformBinaryLock, 0LL, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&ExpPlatformBinaryLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&ExpPlatformBinaryLock, v1, (ULONG_PTR)&ExpPlatformBinaryLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = ExpPlatformBinaryTableInformation;
  ExpPlatformBinaryTableInformation = (PVOID)-1LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
}
