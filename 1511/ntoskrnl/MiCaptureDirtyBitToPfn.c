/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x1400B8278
 * Callers:
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     MiTrimSystemImagePages @ 0x14001A618 (MiTrimSystemImagePages.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MmPropagateDirtyBitsToPfn @ 0x1400B22A0 (MmPropagateDirtyBitsToPfn.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiLockPageAndSetDirty @ 0x1400B820C (MiLockPageAndSetDirty.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14013FBF4 (MmDbgMarkPfnModifiedWorker.c)
 *     MmReplaceImportEntry @ 0x1401CF09C (MmReplaceImportEntry.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MmProtectSystemCacheView @ 0x1401D57E4 (MmProtectSystemCacheView.c)
 *     MiCompleteSecureProcessFault @ 0x1401DECFC (MiCompleteSecureProcessFault.c)
 *     MiScanPagefileSpace @ 0x140625888 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
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
