/*
 * XREFs of MiDecrementShareCount @ 0x1400E50A0
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiConfirmPageIsZero @ 0x14001D990 (MiConfirmPageIsZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031890 (MiMakeSystemCacheRangeValid.c)
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MiOutPageSingleKernelStack @ 0x140075734 (MiOutPageSingleKernelStack.c)
 *     MiDeleteFinalPageTables @ 0x140075A98 (MiDeleteFinalPageTables.c)
 *     MiLockAndDecrementShareCount @ 0x140075DFC (MiLockAndDecrementShareCount.c)
 *     MiTrimSystemImagePages @ 0x140084004 (MiTrimSystemImagePages.c)
 *     MmOutSwapProcess @ 0x14009126C (MmOutSwapProcess.c)
 *     MiDeleteTransitionPte @ 0x1400B90F8 (MiDeleteTransitionPte.c)
 *     MiDeletePteList @ 0x1400DFAC0 (MiDeletePteList.c)
 *     MiFreeUnmappedPageTables @ 0x1400E39D0 (MiFreeUnmappedPageTables.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiDeletePageTableHierarchy @ 0x1400E4D40 (MiDeletePageTableHierarchy.c)
 *     MiFinishLastForkPageTable @ 0x14010ADFC (MiFinishLastForkPageTable.c)
 *     MiFreeContiguousPages @ 0x14011191C (MiFreeContiguousPages.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 *     MiPurgeSubsection @ 0x1401DF074 (MiPurgeSubsection.c)
 *     MiDeleteTopLevelPage @ 0x1401DF9B4 (MiDeleteTopLevelPage.c)
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MmFreeSpecialPool @ 0x1401EC0A4 (MmFreeSpecialPool.c)
 *     MiInitializeProtoPfn @ 0x1401F5180 (MiInitializeProtoPfn.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementShareCount(__int64 a1)
{
  char v1; // dl
  __int64 v2; // rdx

  v1 = *(_BYTE *)(a1 + 34);
  if ( (v1 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (a1 + 0x58000000000LL) / 48, v1 & 7, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v2 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v2 ^ (((v2 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v2) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v2 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiPfnShareCountIsZero(a1, 0LL);
  else
    return 2LL;
}
