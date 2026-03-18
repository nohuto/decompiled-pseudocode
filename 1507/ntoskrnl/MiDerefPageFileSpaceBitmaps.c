/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x140127E08
 * Callers:
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     MiStoreEvictPageFile @ 0x140127CA4 (MiStoreEvictPageFile.c)
 *     MiFindPageFileWriteCluster @ 0x14013A5CC (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 *     MiExtendPagingFileMaximum @ 0x140221290 (MiExtendPagingFileMaximum.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
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
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
  v6 = --*v3;
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
    return v3;
  return (_DWORD *)v4;
}
