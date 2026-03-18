/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x140116F54
 * Callers:
 *     MiStoreEvictPageFile @ 0x1400B0530 (MiStoreEvictPageFile.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     MiFindPageFileWriteCluster @ 0x140125A40 (MiFindPageFileWriteCluster.c)
 *     MiExtendPagingFileMaximum @ 0x1401EE330 (MiExtendPagingFileMaximum.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 */

_DWORD *__fastcall MiDerefPageFileSpaceBitmaps(__int64 a1, _DWORD **a2, int a3)
{
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  int v6; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  v4 = 0LL;
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v6 = --*v3;
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
    return v3;
  return (_DWORD *)v4;
}
