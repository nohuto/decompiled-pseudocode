/*
 * XREFs of VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0011044
 * Callers:
 *     VidSchSuspendAdapter @ 0x1C005FD40 (VidSchSuspendAdapter.c)
 *     VidSchResumeAdapter @ 0x1C005FDD0 (VidSchResumeAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C00110F8 (VidSchiDecrementDeviceReference.c)
 *     VidSchSuspendResumeDevice @ 0x1C0011190 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VidSchiSuspendResumeDevicesForPowerTransition(_QWORD *a1, char a2)
{
  KSPIN_LOCK *v2; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1 + 228;
  KeAcquireInStackQueuedSpinLock(a1 + 228, &LockHandle);
  v5 = (_QWORD *)a1[26];
  while ( v5 != a1 + 26 )
  {
    v6 = v5 - 11;
    _InterlockedIncrement64(v5 - 8);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (*(_DWORD *)(v5 - 5) & 0x10) == 0 && (_QWORD *)a1[23] != v6 )
    {
      LOBYTE(v8) = 1;
      LOBYTE(v7) = a2;
      VidSchSuspendResumeDevice(v5 - 11, v7, v8);
    }
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v5 = (_QWORD *)*v5;
    VidSchiDecrementDeviceReference(v6);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
