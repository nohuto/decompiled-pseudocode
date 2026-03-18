/*
 * XREFs of MiRemoveUnusedSegment @ 0x14003AB30
 * Callers:
 *     MiTrimSharedPage @ 0x1400081F8 (MiTrimSharedPage.c)
 *     MiPrepareSegmentForDeletion @ 0x14000C4EC (MiPrepareSegmentForDeletion.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14000C5B0 (MiReferenceControlAreaForCacheManager.c)
 *     MiReferencePfBackedSection @ 0x14000E638 (MiReferencePfBackedSection.c)
 *     MiReferenceControlArea @ 0x14003AD80 (MiReferenceControlArea.c)
 *     MiComputeDataFlushRange @ 0x1400A889C (MiComputeDataFlushRange.c)
 *     MiCheckForControlAreaDeletion @ 0x1400B54F4 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x1400E96DC (MiAttemptSectionDelete.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x1401D18A4 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  unsigned __int16 v2; // ax
  int *v3; // rdi
  __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx

  v2 = *(_WORD *)(a1 + 60) & 0x3FF;
  if ( v2 == 1023 )
    v3 = &MiSystemPartition;
  else
    v3 = *(int **)(qword_1402FEC28 + 8LL * v2);
  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v3 + 384);
    if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 )
      --v3[351];
    v4 = *(_QWORD *)(a1 + 8);
    v5 = (_QWORD *)(a1 + 8);
    v6 = *(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v4 + 8) != a1 + 8 || (_QWORD *)*v6 != v5 )
      __fastfail(3u);
    *v6 = v4;
    *(_QWORD *)(v4 + 8) = v6;
    *(_DWORD *)(a1 + 56) &= ~0x8000000u;
    *(_QWORD *)(a1 + 16) = a1 + 8;
    *v5 = v5;
    ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 384);
  }
}
