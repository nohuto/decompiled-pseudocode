/*
 * XREFs of VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C001AFD0
 * Callers:
 *     VidSchResumeAdapter @ 0x1C00792D0 (VidSchResumeAdapter.c)
 *     VidSchSuspendAdapter @ 0x1C00795E0 (VidSchSuspendAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0001150 (VidSchiDecrementDeviceReference.c)
 *     VidSchSuspendResumeDevice @ 0x1C001D320 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VidSchiSuspendResumeDevicesForPowerTransition(_QWORD *a1, char a2)
{
  KSPIN_LOCK *v2; // rbp
  _QWORD *v5; // rdi
  char *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1 + 234;
  KeAcquireInStackQueuedSpinLock(a1 + 234, &LockHandle);
  v5 = (_QWORD *)a1[25];
  while ( v5 != a1 + 25 )
  {
    v6 = (char *)(v5 - 11);
    _InterlockedIncrement64(v5 - 8);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (*(_DWORD *)(v5 - 5) & 0x10) == 0 && (char *)a1[22] != v6 )
    {
      LOBYTE(v8) = 1;
      LOBYTE(v7) = a2;
      VidSchSuspendResumeDevice(v5 - 11, v7, v8);
    }
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v5 = (_QWORD *)*v5;
    VidSchiDecrementDeviceReference(v6, 1);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
