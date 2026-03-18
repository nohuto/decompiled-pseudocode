/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x140025FB0
 * Callers:
 *     MiLockPagableImageSection @ 0x140014884 (MiLockPagableImageSection.c)
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MiClearNonPagedPtes @ 0x140024520 (MiClearNonPagedPtes.c)
 *     MiGetPhysicalAddress @ 0x140025030 (MiGetPhysicalAddress.c)
 *     MiMappingHasIoTracker @ 0x140025E08 (MiMappingHasIoTracker.c)
 *     MiFindActualFaultingPte @ 0x140025E70 (MiFindActualFaultingPte.c)
 *     MiProbeLockFrame @ 0x14002F730 (MiProbeLockFrame.c)
 *     MmUnmapIoSpace @ 0x14009B4B0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x14009B608 (MiZeroAndFlushPtes.c)
 *     MiMappingHasIoReferences @ 0x14009C774 (MiMappingHasIoReferences.c)
 *     MmSetPageProtection @ 0x1400B23C0 (MmSetPageProtection.c)
 *     MiSetSystemCodeProtection @ 0x1400FE0F4 (MiSetSystemCodeProtection.c)
 *     MiUpdateForkMaps @ 0x140109E0C (MiUpdateForkMaps.c)
 *     MiDbgWriteCheck @ 0x14012C5DC (MiDbgWriteCheck.c)
 *     MiCountSystemImageCommitment @ 0x14012CA50 (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x14013E6D4 (MiPfnRangeIsZero.c)
 *     MmProtectMdlSystemAddress @ 0x1401E44E4 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x1401E5FA8 (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x1401E79E8 (MiAddTriageDumpPtes.c)
 *     MiLargePageFault @ 0x1401EF82C (MiLargePageFault.c)
 *     MiUnmapLargeUserPages @ 0x1401F5AE0 (MiUnmapLargeUserPages.c)
 *     MiScrubLargeMappedPage @ 0x1401FE334 (MiScrubLargeMappedPage.c)
 *     MiFreeDriverInitialization @ 0x14047D508 (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x14047D5E8 (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x14047D77C (MiDisablePagingOfDriver.c)
 *     MmPageEntireDriver @ 0x14047DC74 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x14047DD7C (MiImagePagable.c)
 *     MiHandleDriverNonPagedSections @ 0x14047EAEC (MiHandleDriverNonPagedSections.c)
 *     MmLockPagableDataSection @ 0x1404830A8 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140483178 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiUnlockDriverCode @ 0x14054480C (MiUnlockDriverCode.c)
 *     MiBackSystemImageWithPagefile @ 0x140550B20 (MiBackSystemImageWithPagefile.c)
 *     MiProtectSystemImage @ 0x140553CC4 (MiProtectSystemImage.c)
 *     MiInitializeShadowPageTable @ 0x14065B988 (MiInitializeShadowPageTable.c)
 *     MiMarkBootImagesNonPaged @ 0x1407A5740 (MiMarkBootImagesNonPaged.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1407A5FDC (MiInitializeBootLoadedDriverPfns.c)
 *     MiCheckLargePageOk @ 0x1407B5CD4 (MiCheckLargePageOk.c)
 *     MmDiscardDriverSection @ 0x1407BC1C8 (MmDiscardDriverSection.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  int v1; // r9d
  char v2; // al
  unsigned __int64 v4; // [rsp+20h] [rbp-28h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  v4 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v1 = 3;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v2 = MI_READ_PTE_LOCK_FREE(*(&v4 + (unsigned int)(v1 - 1)));
    if ( (v2 & 1) == 0 )
      return 0LL;
    if ( v2 < 0 )
      break;
    if ( !v1 )
      return 0LL;
  }
  return (unsigned int)(v1 + 1);
}
