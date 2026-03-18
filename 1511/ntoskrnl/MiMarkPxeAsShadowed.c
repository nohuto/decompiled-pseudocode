/*
 * XREFs of MiMarkPxeAsShadowed @ 0x1401DE870
 * Callers:
 *     MiInitializeShadowPageTable @ 0x1406260E8 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  _bittestandset((signed __int32 *)qword_1402FE970, ((a1 >> 3) & 0x1FF) - 256);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
