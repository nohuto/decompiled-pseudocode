/*
 * XREFs of IopProcessIoTracking @ 0x1401CAB20
 * Callers:
 *     IopPerfCompleteRequest @ 0x1401CA67C (IopPerfCompleteRequest.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400C5AB8 (ExfTryAcquirePushLockShared.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall IopProcessIoTracking(__int64 a1, int a2)
{
  char v2; // di
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v4; // rbx
  char result; // al
  __int64 i; // rbx
  __int16 v7; // [rsp+28h] [rbp-50h] BYREF
  __int64 v8; // [rsp+30h] [rbp-48h]
  int v9; // [rsp+38h] [rbp-40h]

  v8 = a1;
  v2 = 0;
  v9 = a2;
  v7 = 24;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = 1;
  }
  v4 = KeAbPreAcquire((ULONG_PTR)&IopPerfIoTrackingLock, 0LL, 1);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || (result = ExfTryAcquirePushLockShared((signed __int64 *)&IopPerfIoTrackingLock)) != 0 )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    for ( i = IopPerfIoTrackingListHead; (__int64 *)i != &IopPerfIoTrackingListHead; i = *(_QWORD *)i )
      (*(void (__fastcall **)(__int16 *))(i + 16))(&v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    result = KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  }
  else if ( v4 )
  {
    result = KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, v4);
  }
  if ( v2 == 1 )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return result;
}
