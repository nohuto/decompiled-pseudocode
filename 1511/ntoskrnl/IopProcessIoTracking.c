/*
 * XREFs of IopProcessIoTracking @ 0x1401BCC68
 * Callers:
 *     IopPerfCompleteRequest @ 0x1401BC7C4 (IopPerfCompleteRequest.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x1400209C4 (ExfTryAcquirePushLockShared.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall IopProcessIoTracking(__int64 a1, int a2)
{
  char v2; // di
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rbx
  __int64 i; // rbx
  __int16 v6; // [rsp+28h] [rbp-50h] BYREF
  __int64 v7; // [rsp+30h] [rbp-48h]
  int v8; // [rsp+38h] [rbp-40h]

  v7 = a1;
  v2 = 0;
  v8 = a2;
  v6 = 24;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = 1;
  }
  v4 = KeAbPreAcquire((ULONG_PTR)&IopPerfIoTrackingLock, 0LL, 1LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)&IopPerfIoTrackingLock) )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    for ( i = IopPerfIoTrackingListHead; (__int64 *)i != &IopPerfIoTrackingListHead; i = *(_QWORD *)i )
      (*(void (__fastcall **)(__int16 *))(i + 16))(&v6);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  }
  else if ( v4 )
  {
    KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, v4);
  }
  if ( v2 == 1 )
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
