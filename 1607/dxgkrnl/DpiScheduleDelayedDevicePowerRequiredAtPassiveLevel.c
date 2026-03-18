/*
 * XREFs of DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C0029F64
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00FBF50 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0029BF8 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(KSPIN_LOCK *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 483, &LockHandle);
  if ( *((_DWORD *)a1 + 982) != 4 && *((_DWORD *)a1 + 983) == 1 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
