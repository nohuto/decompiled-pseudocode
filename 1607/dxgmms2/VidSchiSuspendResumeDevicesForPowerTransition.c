/*
 * XREFs of VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C000EF98
 * Callers:
 *     VidSchSuspendAdapter @ 0x1C00403B0 (VidSchSuspendAdapter.c)
 *     VidSchResumeAdapter @ 0x1C00677D0 (VidSchResumeAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C000F050 (VidSchiDecrementDeviceReference.c)
 *     VidSchSuspendResumeDevice @ 0x1C000F0F0 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VidSchiSuspendResumeDevicesForPowerTransition(_QWORD *a1, char a2)
{
  KSPIN_LOCK *v2; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1 + 232;
  KeAcquireInStackQueuedSpinLock(a1 + 232, &LockHandle);
  v5 = (_QWORD *)a1[30];
  while ( v5 != a1 + 30 )
  {
    v6 = v5 - 10;
    _InterlockedIncrement64(v5 - 7);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (*(_DWORD *)(v5 - 4) & 0x10) == 0 && (_QWORD *)a1[25] != v6 )
    {
      LOBYTE(v8) = 1;
      LOBYTE(v7) = a2;
      VidSchSuspendResumeDevice(v5 - 10, v7, v8, 0LL);
    }
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v5 = (_QWORD *)*v5;
    VidSchiDecrementDeviceReference(v6);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
