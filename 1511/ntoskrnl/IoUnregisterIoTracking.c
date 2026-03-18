/*
 * XREFs of IoUnregisterIoTracking @ 0x1405FB4C0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     IopIrpExtensionControl @ 0x1401B7564 (IopIrpExtensionControl.c)
 *     IoPerfReset @ 0x1401BC674 (IoPerfReset.c)
 */

void __fastcall IoUnregisterIoTracking(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rax

  IoPerfReset(2);
  IopIrpExtensionControl(2, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&IopPerfIoTrackingLock, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock, v3, (ULONG_PTR)&IopPerfIoTrackingLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = *a1;
  v7 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v7 != a1 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(a1, 0x72546F49u);
}
