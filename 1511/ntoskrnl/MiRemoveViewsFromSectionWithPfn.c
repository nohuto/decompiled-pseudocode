/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x1400AA5CC
 * Callers:
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x14047B59C (MiReleaseReadListResources.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x1400A8B00 (MiRemoveViewsFromSection.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

void __fastcall MiRemoveViewsFromSectionWithPfn(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi

  v2 = *(_QWORD *)a1;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  v6 = MiRemoveViewsFromSection(a1, a2, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  __writecr8(v5);
  if ( v6 )
    MiReturnSubsectionCharges(v6);
}
