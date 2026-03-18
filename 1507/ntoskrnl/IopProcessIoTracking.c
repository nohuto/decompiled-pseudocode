/*
 * XREFs of IopProcessIoTracking @ 0x1401F85A0
 * Callers:
 *     IopPerfCompleteRequest @ 0x1401F80E4 (IopPerfCompleteRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400F78D4 (ExfTryAcquirePushLockShared.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall IopProcessIoTracking(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  __int64 i; // rbx
  __int16 v10; // ax
  __int16 v11; // [rsp+28h] [rbp-50h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+38h] [rbp-40h]

  v12 = a1;
  v4 = 0;
  v13 = a2;
  v11 = 24;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v4 = 1;
  }
  v6 = KeAbPreAcquire((ULONG_PTR)&IopPerfIoTrackingLock, 0LL, 1LL, a4);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)&IopPerfIoTrackingLock) )
  {
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    for ( i = IopPerfIoTrackingListHead; (__int64 *)i != &IopPerfIoTrackingListHead; i = *(_QWORD *)i )
      (*(void (__fastcall **)(__int16 *))(i + 16))(&v11);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
    if ( v4 == 1 )
    {
      v7 = KeGetCurrentThread();
      v10 = v7->SpecialApcDisable + 1;
      v7->SpecialApcDisable = v10;
      if ( !v10 )
        goto LABEL_19;
    }
  }
  else
  {
    if ( v6 )
      KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, v6);
    if ( v4 == 1 )
    {
      v7 = KeGetCurrentThread();
      v8 = v7->SpecialApcDisable + 1;
      v7->SpecialApcDisable = v8;
      if ( !v8 )
      {
LABEL_19:
        if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
          KiCheckForKernelApcDelivery();
      }
    }
  }
}
