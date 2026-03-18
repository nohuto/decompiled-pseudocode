/*
 * XREFs of MiUpdateAvailableEvents @ 0x14015FA18
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x140055700 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIncreaseAvailablePages @ 0x1400FFF20 (MiIncreaseAvailablePages.c)
 *     MiReplenishPageSlist @ 0x1401009F0 (MiReplenishPageSlist.c)
 *     MiDecreaseAvailablePages @ 0x1401026DC (MiDecreaseAvailablePages.c)
 *     MiInitializeMemoryEvents @ 0x1407CAE44 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

void __fastcall MiUpdateAvailableEvents(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  struct _KEVENT *v3; // rcx
  struct _KEVENT *v4; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 504, &LockHandle);
  v2 = a1[688];
  v3 = (struct _KEVENT *)a1[34];
  if ( v2 <= a1[513] )
    KeSetEvent(v3, 0, 0);
  else
    KeResetEvent(v3);
  v4 = (struct _KEVENT *)a1[35];
  if ( v2 <= a1[514] )
    KeResetEvent(v4);
  else
    KeSetEvent(v4, 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
