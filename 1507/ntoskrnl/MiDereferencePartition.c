/*
 * XREFs of MiDereferencePartition @ 0x140100E94
 * Callers:
 *     MiGetNextPartition @ 0x1400FF6D4 (MiGetNextPartition.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140213164 (MmMarkPhysicalMemoryAsBad.c)
 *     MiRebalanceZeroFreeLists @ 0x14022E06C (MiRebalanceZeroFreeLists.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 *     MiRebuildLargePages @ 0x14051CFF0 (MiRebuildLargePages.c)
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 *     MmPartitionObjectDelete @ 0x1406A4570 (MmPartitionObjectDelete.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiFreePartitionId @ 0x1406A3C54 (MiFreePartitionId.c)
 */

void __fastcall MiDereferencePartition(_DWORD *P)
{
  __int64 v3; // rax
  void *v4; // rsi
  unsigned __int16 v5; // bx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14034F0A0, &LockHandle);
  if ( (*((_QWORD *)P + 1))-- == 1LL )
  {
    P[1] |= 1u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    MiDeletePartitionResources(P);
    v3 = *((_QWORD *)P + 2);
    v4 = 0LL;
    if ( v3 )
      v4 = *(void **)(v3 + 216);
    v5 = *(_WORD *)P;
    ExFreePoolWithTag(P, 0);
    MiFreePartitionId(v5);
    if ( v4 )
      ObDereferenceObjectDeferDeleteWithTag(v4, 0x746C6644u);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
