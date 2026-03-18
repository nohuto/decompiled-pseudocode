/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x14008FC70
 * Callers:
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiDeleteSubsectionPages @ 0x140061C70 (MiDeleteSubsectionPages.c)
 *     MiReleaseInPageRefs @ 0x1400B2A10 (MiReleaseInPageRefs.c)
 *     MiDeleteTransitionPte @ 0x1400B90F8 (MiDeleteTransitionPte.c)
 *     MiPurgeSubsection @ 0x1401DF074 (MiPurgeSubsection.c)
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MiSplitDirectMapPage @ 0x1401EDA58 (MiSplitDirectMapPage.c)
 *     MiDeleteFileOnlyPfns @ 0x14065AAE0 (MiDeleteFileOnlyPfns.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140026DCC (MiInsertUnusedSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiCheckForControlAreaDeletion @ 0x14008FD50 (MiCheckForControlAreaDeletion.c)
 *     MiRemoveUnusedSubsection @ 0x1400904A4 (MiRemoveUnusedSubsection.c)
 *     MiReturnSubsectionCharges @ 0x1401F5310 (MiReturnSubsectionCharges.c)
 */

void __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 inserted; // r14
  __int64 v9; // rbx
  volatile LONG *v10; // rsi
  volatile LONG *v11; // rcx
  KIRQL v12; // bp
  bool v13; // zf
  __int64 v14; // r8
  __int64 v15; // r9

  inserted = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
    v9 = 0LL;
  else
    v9 = a2;
  v10 = (volatile LONG *)(a1 + 72);
  v11 = (volatile LONG *)(a1 + 72);
  if ( (a4 & 2) != 0 )
  {
    v12 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v11);
  }
  else
  {
    v12 = ExAcquireSpinLockExclusive(v11);
  }
  if ( v9 )
  {
    v13 = *(_DWORD *)(v9 + 104) == (_DWORD)a3;
    *(_DWORD *)(v9 + 104) -= a3;
    if ( v13 && !*(_QWORD *)(v9 + 96) && (*(_BYTE *)(a2 + 34) & 1) == 0 && (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v9);
      inserted = MiInsertUnusedSubsection(v9, 1LL, v14, v15);
    }
  }
  *(_QWORD *)(a1 + 32) -= a3;
  if ( (a4 & 1) != 0 )
    MiCheckForControlAreaDeletion(a1);
  if ( v12 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockExclusive(v10, v12);
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
}
