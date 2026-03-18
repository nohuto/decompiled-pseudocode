/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x14002270C
 * Callers:
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiReleaseReadListResources @ 0x14042C750 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 *     MiExtendSection @ 0x140521CB4 (MiExtendSection.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x1400227E4 (MiRemoveViewsFromSection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSubsectionCharges @ 0x1401F5310 (MiReturnSubsectionCharges.c)
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
