/*
 * XREFs of IoRegisterIoTracking @ 0x1405FB380
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     IopIrpExtensionControl @ 0x1401B7564 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x1401BC5FC (IoPerfInit.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoRegisterIoTracking(__int64 a1, __int64 **a2)
{
  __int64 *PoolWithTag; // rax
  __int64 *v5; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rsi
  __int64 **v11; // rax

  *a2 = 0LL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72546F49u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[2] = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&IopPerfIoTrackingLock, 0LL, 0LL);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock, v8, (ULONG_PTR)&IopPerfIoTrackingLock);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = (__int64 **)qword_1402FB408;
  *v5 = (__int64)&IopPerfIoTrackingListHead;
  v5[1] = (__int64)v11;
  if ( *v11 != &IopPerfIoTrackingListHead )
    __fastfail(3u);
  *v11 = v5;
  qword_1402FB408 = (__int64)v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  IopIrpExtensionControl(2, 1);
  IoPerfInit(2);
  result = 0LL;
  *a2 = v5;
  return result;
}
