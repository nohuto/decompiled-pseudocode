/*
 * XREFs of ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C0028DFC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00DE0A0 (DpiPowerArbiterThread.c)
 * Callees:
 *     DpiSetDevicePowerTransitionState @ 0x1C00238B0 (DpiSetDevicePowerTransitionState.c)
 */

char __fastcall DpiStartSuspendingAdapter(KSPIN_LOCK *a1)
{
  char v2; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock(a1 + 334, &LockHandle);
  if ( *((_DWORD *)a1 + 678) == 1 )
  {
    DpiSetDevicePowerTransitionState((__int64)a1, 2);
    v2 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
