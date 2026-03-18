/*
 * XREFs of MiRemoveUnusedSubsection @ 0x14003A500
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14000C4EC (MiPrepareSegmentForDeletion.c)
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiReferenceSubsection @ 0x1400A8AA8 (MiReferenceSubsection.c)
 *     MiReferenceActiveSubsection @ 0x1400A8C00 (MiReferenceActiveSubsection.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 * Callees:
 *     MI_UNUSED_SUBSECTIONS_COUNT_REMOVE @ 0x14003A580 (MI_UNUSED_SUBSECTIONS_COUNT_REMOVE.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 */

void __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  volatile LONG *v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = (volatile LONG *)(MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF) + 1536);
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
  MI_UNUSED_SUBSECTIONS_COUNT_REMOVE(a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
}
