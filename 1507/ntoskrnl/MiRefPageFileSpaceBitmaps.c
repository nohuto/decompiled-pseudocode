/*
 * XREFs of MiRefPageFileSpaceBitmaps @ 0x140127E6C
 * Callers:
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     MiStoreEvictPageFile @ 0x140127CA4 (MiStoreEvictPageFile.c)
 *     MiFindPageFileWriteCluster @ 0x14013A5CC (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiRefPageFileSpaceBitmaps(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
  v4 = *(_QWORD *)(v3 + 128);
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
