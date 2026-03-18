/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x14003C844
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiLockPagedAddress @ 0x140004FA4 (MiLockPagedAddress.c)
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiLockPageAndSetDirty @ 0x14003C7B8 (MiLockPageAndSetDirty.c)
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     MmPropagateDirtyBitsToPfn @ 0x140086C80 (MmPropagateDirtyBitsToPfn.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiTrimSystemImagePages @ 0x1400D41D4 (MiTrimSystemImagePages.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14016D590 (MmDbgMarkPfnModifiedWorker.c)
 *     MmReplaceImportEntry @ 0x14020E664 (MmReplaceImportEntry.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MmProtectSystemCacheView @ 0x140217958 (MmProtectSystemCacheView.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 *     MiCompleteSecureProcessFault @ 0x140223B8C (MiCompleteSecureProcessFault.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 *     MiScanPagefileSpace @ 0x1406A5284 (MiScanPagefileSpace.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

unsigned __int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 result; // rax
  char v3; // cl
  __int64 *v4; // r11
  __int64 v5; // r9
  __int64 PteShadow; // rax

  v1 = a1;
  result = 0LL;
  v3 = *(_BYTE *)(a1 + 34);
  if ( (v3 & 0x10) == 0 )
  {
    v4 = (__int64 *)(v1 + 16);
    if ( (*(_DWORD *)(v1 + 16) & 0x400LL) == 0 && (v3 & 8) == 0 )
    {
      v5 = *v4;
      if ( (*v4 & 4) != 0 )
      {
        PteShadow = *v4;
        if ( (unsigned __int64)(v1 + 0x90482413010LL) <= 0x7F8 )
          PteShadow = MiReadPteShadow(v1 + 16, v5);
        *v4 = v5 & 0xFFFFFFFFFFFFFFFBuLL;
        result = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
      }
    }
    *(_BYTE *)(v1 + 34) |= 0x10u;
  }
  return result;
}
