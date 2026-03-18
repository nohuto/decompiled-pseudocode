/*
 * XREFs of MiCapturePageFileInfoInline @ 0x140098320
 * Callers:
 *     MiCaptureDirtyBitToPfn @ 0x140015D60 (MiCaptureDirtyBitToPfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E990 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileSpace @ 0x140022238 (MiReleasePageFileSpace.c)
 *     MiLockPageTablePage @ 0x140030530 (MiLockPageTablePage.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x140042A70 (MiMoveDirtyBitsToPfns.c)
 *     MiWriteCompletePfn @ 0x14004E5A0 (MiWriteCompletePfn.c)
 *     MiDeleteBatch @ 0x140064B10 (MiDeleteBatch.c)
 *     MiDeletePteRun @ 0x140065140 (MiDeletePteRun.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MiDeleteClusterPage @ 0x1400922A0 (MiDeleteClusterPage.c)
 *     MiReleaseWsSwapReservationPfn @ 0x140095668 (MiReleaseWsSwapReservationPfn.c)
 *     MiDeleteTransitionPte @ 0x1400B90F8 (MiDeleteTransitionPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B9DD0 (MiOutSwapWorkingSetCallback.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiRevertValidPte @ 0x1400E17F0 (MiRevertValidPte.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x1401224BC (MiStoreMarkLockedPagesModified.c)
 *     MiCapturePageFileInfo @ 0x1401593D0 (MiCapturePageFileInfo.c)
 *     MiSetPagesModified @ 0x1401E5664 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCapturePageFileInfoInline(_QWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // r10d
  unsigned __int64 *v7; // r11

  if ( (*a1 & 4) != 0 )
  {
    result = MI_READ_PTE_LOCK_FREE(a1);
    if ( a2 )
      *v7 = v5 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( !v6 )
      return result & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else if ( a3 && (*a1 & 2) != 0 )
  {
    return MI_READ_PTE_LOCK_FREE(a1);
  }
  else
  {
    return 0LL;
  }
  return result;
}
