/*
 * XREFs of MiDecrementShareCount @ 0x1400E2F40
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiConfirmPageIsZero @ 0x14001D510 (MiConfirmPageIsZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031410 (MiMakeSystemCacheRangeValid.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiOutPageSingleKernelStack @ 0x1400757B4 (MiOutPageSingleKernelStack.c)
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiTrimSystemImagePages @ 0x140082164 (MiTrimSystemImagePages.c)
 *     MmOutSwapProcess @ 0x1400909CC (MmOutSwapProcess.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiFreeUnmappedPageTables @ 0x1400E1870 (MiFreeUnmappedPageTables.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiDeletePageTableHierarchy @ 0x1400E2BE0 (MiDeletePageTableHierarchy.c)
 *     MiFinishLastForkPageTable @ 0x140108B7C (MiFinishLastForkPageTable.c)
 *     MiFreeContiguousPages @ 0x140111E80 (MiFreeContiguousPages.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiPurgeSubsection @ 0x1401DEEA0 (MiPurgeSubsection.c)
 *     MiDeleteTopLevelPage @ 0x1401DF7E0 (MiDeleteTopLevelPage.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     MiInitializeProtoPfn @ 0x1401F4FAC (MiInitializeProtoPfn.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
