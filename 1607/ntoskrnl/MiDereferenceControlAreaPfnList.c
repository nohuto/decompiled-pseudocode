/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x14008F3D0
 * Callers:
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MiReleaseInPageRefs @ 0x1400B0950 (MiReleaseInPageRefs.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiPurgeSubsection @ 0x1401DEEA0 (MiPurgeSubsection.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MiSplitDirectMapPage @ 0x1401ED884 (MiSplitDirectMapPage.c)
 *     MiDeleteFileOnlyPfns @ 0x14065ABC4 (MiDeleteFileOnlyPfns.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiCheckForControlAreaDeletion @ 0x14008F4B0 (MiCheckForControlAreaDeletion.c)
 *     MiRemoveUnusedSubsection @ 0x14008FC04 (MiRemoveUnusedSubsection.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
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
