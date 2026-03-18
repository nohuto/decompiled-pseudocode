/*
 * XREFs of MiCapturePageFileInfoInline @ 0x1400E1BBC
 * Callers:
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x14001F030 (MiOutSwapWorkingSetCallback.c)
 *     MiReservePageFileSpaceForPage @ 0x140036B60 (MiReservePageFileSpaceForPage.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiRevertValidPte @ 0x14005D150 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x14005E3A0 (MiMoveDirtyBitsToPfns.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockPageTablePage @ 0x1400A81C0 (MiLockPageTablePage.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400DEB64 (MiReleaseWsSwapReservationPfn.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x140113998 (MiStoreMarkLockedPagesModified.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCapturePageFileInfoInline(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v3 = *a1;
  if ( (*a1 & 0x2000) != 0 )
  {
    result = MI_READ_PTE_LOCK_FREE(a1);
    if ( a2 )
      *a1 = v3 & 0xFFFFFFFFFFFFDFFFuLL;
    if ( !a3 )
      return result & 0xFFFFFFFFFFFFEFFFuLL;
  }
  else if ( a3 && (v3 & 0x1000) != 0 )
  {
    return MI_READ_PTE_LOCK_FREE(a1);
  }
  else
  {
    return 0LL;
  }
  return result;
}
