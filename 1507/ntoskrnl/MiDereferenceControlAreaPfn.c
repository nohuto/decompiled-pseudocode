/*
 * XREFs of MiDereferenceControlAreaPfn @ 0x1400E6738
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiReleaseInPageRefs @ 0x14012CE5C (MiReleaseInPageRefs.c)
 *     MiPurgeSubsection @ 0x140211C88 (MiPurgeSubsection.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRemoveUnusedSubsection @ 0x140082C00 (MiRemoveUnusedSubsection.c)
 *     MiCheckForControlAreaDeletion @ 0x1400E6854 (MiCheckForControlAreaDeletion.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

int __fastcall MiDereferenceControlAreaPfn(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r15
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v9; // ebp
  signed __int32 v10; // edx
  __int64 inserted; // rax
  unsigned int v13; // ebp
  signed __int32 v14; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
    v6 = 0LL;
  else
    v6 = a2;
  v7 = (volatile signed __int32 *)(a1 + 72);
  if ( (a3 & 2) != 0 )
  {
    CurrentIrql = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
    {
      v9 = 0;
      if ( _interlockedbittestandset(v7, 0x1Fu) )
        v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
      while ( 1 )
      {
        v10 = *v7;
        LODWORD(inserted) = *v7 & 0xBFFFFFFF;
        if ( (_DWORD)inserted == 0x80000000 )
          break;
        if ( (v10 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v7, v10 | 0x40000000, v10);
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      goto LABEL_9;
    }
LABEL_23:
    LODWORD(inserted) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
    goto LABEL_9;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    goto LABEL_23;
  v13 = 0;
  if ( _interlockedbittestandset(v7, 0x1Fu) )
    v13 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
  while ( 1 )
  {
    v14 = *v7;
    LODWORD(inserted) = *v7 & 0xBFFFFFFF;
    if ( (_DWORD)inserted == 0x80000000 )
      break;
    if ( (v14 & 0x40000000) == 0 )
      _InterlockedCompareExchange(v7, v14 | 0x40000000, v14);
    if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v13);
  }
LABEL_9:
  if ( v6 )
  {
    if ( (*(_QWORD *)(v6 + 104))-- == 1LL
      && !*(_QWORD *)(v6 + 96)
      && (*(_BYTE *)(a2 + 34) & 1) == 0
      && (*(_BYTE *)(v6 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v6);
      inserted = MiInsertUnusedSubsection(v6, 1LL);
      v3 = inserted;
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a3 & 1) != 0 )
    LODWORD(inserted) = MiCheckForControlAreaDeletion(a1);
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      LODWORD(inserted) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    else
      *v7 = 0;
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    else
      *v7 = 0;
    LODWORD(inserted) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( v3 )
    LODWORD(inserted) = MiReturnSubsectionCharges(v3);
  return inserted;
}
