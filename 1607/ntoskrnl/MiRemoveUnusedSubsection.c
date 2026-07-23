/*
 * XREFs of MiRemoveUnusedSubsection @ 0x14008FC04
 * Callers:
 *     MiReferenceSubsection @ 0x1400216EC (MiReferenceSubsection.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiReferenceActiveSubsection @ 0x14002CA00 (MiReferenceActiveSubsection.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiPrepareSegmentForDeletion @ 0x14008F8B4 (MiPrepareSegmentForDeletion.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReduceUnusedSubsectionCount @ 0x14008FC84 (MiReduceUnusedSubsectionCount.c)
 */

void __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  volatile LONG *v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF) + 416;
  ExAcquireSpinLockExclusiveAtDpcLevel(v2);
  v3 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD **)(a1 + 88);
  if ( *(_QWORD *)(v4 + 8) != a1 + 80 || (_QWORD *)*v5 != v3 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_WORD *)(a1 + 34) &= ~8u;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *v3 = v3;
  MiReduceUnusedSubsectionCount(a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
}
