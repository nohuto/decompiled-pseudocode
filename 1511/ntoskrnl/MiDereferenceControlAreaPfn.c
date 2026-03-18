/*
 * XREFs of MiDereferenceControlAreaPfn @ 0x1400B5418
 * Callers:
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiReleaseInPageRefs @ 0x1400F1950 (MiReleaseInPageRefs.c)
 *     MiPurgeSubsection @ 0x1401D1590 (MiPurgeSubsection.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x14003A500 (MiRemoveUnusedSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     MiCheckForControlAreaDeletion @ 0x1400B54F4 (MiCheckForControlAreaDeletion.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

void __fastcall MiDereferenceControlAreaPfn(__int64 a1, __int64 a2, char a3)
{
  __int64 inserted; // rbp
  __int64 v7; // rbx
  volatile LONG *v8; // rsi
  volatile LONG *v9; // rcx
  KIRQL v10; // r14

  inserted = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
    v7 = 0LL;
  else
    v7 = a2;
  v8 = (volatile LONG *)(a1 + 72);
  v9 = (volatile LONG *)(a1 + 72);
  if ( (a3 & 2) != 0 )
  {
    v10 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v9);
  }
  else
  {
    v10 = ExAcquireSpinLockExclusive(v9);
  }
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 104))-- == 1
      && !*(_QWORD *)(v7 + 96)
      && (*(_BYTE *)(a2 + 34) & 1) == 0
      && (*(_BYTE *)(v7 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v7);
      inserted = MiInsertUnusedSubsection(v7, 1);
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a3 & 1) != 0 )
    MiCheckForControlAreaDeletion(a1);
  if ( v10 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  else
    ExReleaseSpinLockExclusive(v8, v10);
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
}
