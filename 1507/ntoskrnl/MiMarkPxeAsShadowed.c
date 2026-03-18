/*
 * XREFs of MiMarkPxeAsShadowed @ 0x1402254C8
 * Callers:
 *     MiInitializeShadowPageTable @ 0x1406A7E80 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  _bittestandset((signed __int32 *)qword_14034EE30, ((a1 >> 3) & 0x1FF) - 256);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
