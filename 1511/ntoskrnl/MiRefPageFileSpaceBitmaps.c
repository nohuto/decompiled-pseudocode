/*
 * XREFs of MiRefPageFileSpaceBitmaps @ 0x140109BC8
 * Callers:
 *     MiStoreEvictPageFile @ 0x1400ECEEC (MiStoreEvictPageFile.c)
 *     MiFindPageFileWriteCluster @ 0x1401084F0 (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiRefPageFileSpaceBitmaps(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v4 = *(_QWORD *)(v3 + 112);
  ++*(_DWORD *)v4;
  *(_OWORD *)a2 = *(_OWORD *)v4;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v4 + 32);
  LODWORD(v3) = *(_DWORD *)v3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_DWORD *)(a2 + 8) = v3;
  *(_DWORD *)(a2 + 24) = v3;
  *(_QWORD *)a2 = v4;
}
