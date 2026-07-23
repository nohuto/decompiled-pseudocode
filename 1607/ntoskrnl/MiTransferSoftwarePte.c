/*
 * XREFs of MiTransferSoftwarePte @ 0x1401F27A4
 * Callers:
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiConfirmPageIsZero @ 0x14001D510 (MiConfirmPageIsZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiCreateSharedZeroPages @ 0x140038C30 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x14011A048 (MiUpdatePfnBackingStore.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1401F2784 (MiSwizzleInvalidPte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiTransferSoftwarePte(unsigned __int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 updated; // rax
  __int16 v5; // r8
  char v6; // r9

  if ( (a1 & 0x400) == 0 && (a4 & 4) == 0 )
    a1 &= 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( a1 )
      updated = MiUpdatePageFileHighInPte(a1, a3);
    else
      updated = MiSwizzleInvalidPte((unsigned __int64)a3 << 32);
    a1 = (unsigned __int16)(updated ^ (v5 << 12)) & 0xF000 ^ (unsigned __int64)updated;
    if ( (v6 & 1) != 0 )
      a1 |= 4uLL;
    if ( (v6 & 2) != 0 )
      a1 |= 2uLL;
  }
  return a1;
}
