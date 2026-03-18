/*
 * XREFs of MiUpdatePartitionMemory @ 0x1401F2480
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1406607FC (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiDereferencePageRuns @ 0x140107058 (MiDereferencePageRuns.c)
 *     MiComputeNodeMemory @ 0x14057ADAC (MiComputeNodeMemory.c)
 */

void __fastcall MiUpdatePartitionMemory(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rdi
  KIRQL v5; // al
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // rbp

  v2 = (volatile LONG *)(a1 + 232);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 136) = v7;
  ExReleaseSpinLockExclusive(v2, v5);
  MiComputeNodeMemory(a1);
  if ( v6 )
    MiDereferencePageRuns(v6);
  if ( v8 )
    MiDereferencePageRuns(v8);
}
