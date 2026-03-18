/*
 * XREFs of MiUpdateAvailableEvents @ 0x14013C7F8
 * Callers:
 *     MiIncreaseAvailablePages @ 0x14001BB80 (MiIncreaseAvailablePages.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066D00 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400695D0 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1400701C0 (MiInsertProtectedStandbyPage.c)
 *     MiDecreaseAvailablePages @ 0x14008AD20 (MiDecreaseAvailablePages.c)
 *     MiInitializeMemoryEvents @ 0x1407A4498 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
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
