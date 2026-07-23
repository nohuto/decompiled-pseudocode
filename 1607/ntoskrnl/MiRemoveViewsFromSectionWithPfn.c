/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x14002228C
 * Callers:
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiReleaseReadListResources @ 0x14042B620 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x140022364 (MiRemoveViewsFromSection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

void __fastcall MiRemoveViewsFromSectionWithPfn(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi

  v2 = *a1;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*a1 + 72));
  v6 = MiRemoveViewsFromSection(a1, a2, 0LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  __writecr8(v5);
  if ( v6 )
    MiReturnSubsectionCharges(v6);
}
