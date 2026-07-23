/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x140025B30
 * Callers:
 *     MiLockPagableImageSection @ 0x140014404 (MiLockPagableImageSection.c)
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiClearNonPagedPtes @ 0x1400240A0 (MiClearNonPagedPtes.c)
 *     MiGetPhysicalAddress @ 0x140024BB0 (MiGetPhysicalAddress.c)
 *     MiMappingHasIoTracker @ 0x140025988 (MiMappingHasIoTracker.c)
 *     MiFindActualFaultingPte @ 0x1400259F0 (MiFindActualFaultingPte.c)
 *     MiProbeLockFrame @ 0x14002F2B0 (MiProbeLockFrame.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x14009AE08 (MiZeroAndFlushPtes.c)
 *     MiMappingHasIoReferences @ 0x14009BF74 (MiMappingHasIoReferences.c)
 *     MmSetPageProtection @ 0x1400B0300 (MmSetPageProtection.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiUpdateForkMaps @ 0x140107B8C (MiUpdateForkMaps.c)
 *     MiDbgWriteCheck @ 0x14012CB4C (MiDbgWriteCheck.c)
 *     MiCountSystemImageCommitment @ 0x14012CFC0 (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x14013EC44 (MiPfnRangeIsZero.c)
 *     MmProtectMdlSystemAddress @ 0x1401E4310 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x1401E5DD4 (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x1401E7814 (MiAddTriageDumpPtes.c)
 *     MiLargePageFault @ 0x1401EF658 (MiLargePageFault.c)
 *     MiUnmapLargeUserPages @ 0x1401F590C (MiUnmapLargeUserPages.c)
 *     MiScrubLargeMappedPage @ 0x1401FE160 (MiScrubLargeMappedPage.c)
 *     MiFreeDriverInitialization @ 0x14047C25C (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x14047C33C (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x14047C4D0 (MiDisablePagingOfDriver.c)
 *     MmPageEntireDriver @ 0x14047C9C8 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x14047CAD0 (MiImagePagable.c)
 *     MiHandleDriverNonPagedSections @ 0x14047D840 (MiHandleDriverNonPagedSections.c)
 *     MmLockPagableDataSection @ 0x140481DFC (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140481ECC (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiUnlockDriverCode @ 0x140544D4C (MiUnlockDriverCode.c)
 *     MiBackSystemImageWithPagefile @ 0x140551060 (MiBackSystemImageWithPagefile.c)
 *     MiProtectSystemImage @ 0x140554204 (MiProtectSystemImage.c)
 *     MiInitializeShadowPageTable @ 0x14065BA6C (MiInitializeShadowPageTable.c)
 *     MiMarkBootImagesNonPaged @ 0x1407A5740 (MiMarkBootImagesNonPaged.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1407A5FDC (MiInitializeBootLoadedDriverPfns.c)
 *     MiCheckLargePageOk @ 0x1407B5CD4 (MiCheckLargePageOk.c)
 *     MmDiscardDriverSection @ 0x1407BC1C8 (MmDiscardDriverSection.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
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
