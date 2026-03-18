/*
 * XREFs of MiMarkPxeAsShadowed @ 0x1401EF338
 * Callers:
 *     MiInitializeShadowPageTable @ 0x14065B988 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  _bittestandset((signed __int32 *)qword_140326CD4, ((a1 >> 3) & 0x1FF) - 256);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
