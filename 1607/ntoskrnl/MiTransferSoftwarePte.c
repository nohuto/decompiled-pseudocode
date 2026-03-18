/*
 * XREFs of MiTransferSoftwarePte @ 0x1401F299C
 * Callers:
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiConfirmPageIsZero @ 0x14001D990 (MiConfirmPageIsZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E990 (MiReservePageFileSpaceForPage.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiCreateSharedZeroPages @ 0x1400390B0 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteSubsectionPages @ 0x140061C70 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiFindFreePageFileSpace @ 0x1400B65FC (MiFindFreePageFileSpace.c)
 *     MiDeleteTransitionPte @ 0x1400B90F8 (MiDeleteTransitionPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B9DD0 (MiOutSwapWorkingSetCallback.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiDeletePteList @ 0x1400DFAC0 (MiDeletePteList.c)
 *     MiInitializePfn @ 0x1400E7280 (MiInitializePfn.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x140119AD8 (MiUpdatePfnBackingStore.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1401F2958 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x1401F297C (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiTransferSoftwarePte(__int64 a1, __int64 a2, unsigned int a3, char a4)
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
      return a1 | 2;
  }
  return a1;
}
