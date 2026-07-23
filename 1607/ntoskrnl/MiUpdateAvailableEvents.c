/*
 * XREFs of MiUpdateAvailableEvents @ 0x14013CD68
 * Callers:
 *     MiIncreaseAvailablePages @ 0x14001B700 (MiIncreaseAvailablePages.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x14006FD40 (MiInsertProtectedStandbyPage.c)
 *     MiDecreaseAvailablePages @ 0x14008A420 (MiDecreaseAvailablePages.c)
 *     MiInitializeMemoryEvents @ 0x1407A4498 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 */

void __fastcall MiUpdateAvailableEvents(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  struct _KEVENT *v3; // rcx
  struct _KEVENT *v4; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 544, &LockHandle);
  v2 = a1[808];
  v3 = (struct _KEVENT *)a1[33];
  if ( v2 <= a1[557] )
    KeSetEvent(v3, 0, 0);
  else
    KeResetEvent(v3);
  v4 = (struct _KEVENT *)a1[34];
  if ( v2 <= a1[558] )
    KeResetEvent(v4);
  else
    KeSetEvent(v4, 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
