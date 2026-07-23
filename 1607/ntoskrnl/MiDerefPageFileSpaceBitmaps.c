/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x1401174C4
 * Callers:
 *     MiStoreEvictPageFile @ 0x1400AE60C (MiStoreEvictPageFile.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     MiFindPageFileWriteCluster @ 0x140125FB0 (MiFindPageFileWriteCluster.c)
 *     MiExtendPagingFileMaximum @ 0x1401EE15C (MiExtendPagingFileMaximum.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
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
