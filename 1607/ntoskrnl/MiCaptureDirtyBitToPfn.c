/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x140015D60
 * Callers:
 *     MiLockPageAndSetDirty @ 0x140015578 (MiLockPageAndSetDirty.c)
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MmSetAddressRangeModified @ 0x140016FA0 (MmSetAddressRangeModified.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteValidSystemPage @ 0x14004B6A0 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MiTrimSystemImagePages @ 0x140084004 (MiTrimSystemImagePages.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiRelinkStandbyPage @ 0x1400BE514 (MiRelinkStandbyPage.c)
 *     MiDeletePteList @ 0x1400DFAC0 (MiDeletePteList.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiProtectPool @ 0x1400EA400 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FE0F4 (MiSetSystemCodeProtection.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiLockPagedAddress @ 0x14010B9BC (MiLockPagedAddress.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140148C04 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MmReplaceImportEntry @ 0x1401E5FA8 (MmReplaceImportEntry.c)
 *     MmProtectSystemCacheView @ 0x1401E6EC4 (MmProtectSystemCacheView.c)
 *     MiCompleteSecureProcessFault @ 0x1401EF744 (MiCompleteSecureProcessFault.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 *     MiScanPagefileSpace @ 0x14065B124 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140098320 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  unsigned __int8 v1; // r8
  __int64 result; // rax
  const signed __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 34);
  result = 0LL;
  if ( (v1 & 0x10) == 0 )
  {
    v4 = (const signed __int64 *)(a1 + 16);
    if ( (!_bittest64(v4, 0xAu) & (unsigned __int8)~(v1 >> 3)) != 0 )
      result = MiCapturePageFileInfoInline(v4, 1LL, 0LL);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  return result;
}
