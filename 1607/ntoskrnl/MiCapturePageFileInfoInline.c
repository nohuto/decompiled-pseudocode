/*
 * XREFs of MiCapturePageFileInfoInline @ 0x140097B20
 * Callers:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiLockPageTablePage @ 0x1400300B0 (MiLockPageTablePage.c)
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400425F0 (MiMoveDirtyBitsToPfns.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 *     MiDeleteBatch @ 0x140064690 (MiDeleteBatch.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiDeleteClusterPage @ 0x140091A00 (MiDeleteClusterPage.c)
 *     MiReleaseWsSwapReservationPfn @ 0x140094E68 (MiReleaseWsSwapReservationPfn.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiRevertValidPte @ 0x1400DF690 (MiRevertValidPte.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x140122A2C (MiStoreMarkLockedPagesModified.c)
 *     MiCapturePageFileInfo @ 0x140159940 (MiCapturePageFileInfo.c)
 *     MiSetPagesModified @ 0x1401E5490 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
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
