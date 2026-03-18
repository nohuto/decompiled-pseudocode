/*
 * XREFs of ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AE0B0
 * Callers:
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800AE114 (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800AE51C (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AE584 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x1800F48E0 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180125B80 (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 *     ?UpdateTimingInfo@CFlipChain@@AEAAXXZ @ 0x180125DA4 (-UpdateTimingInfo@CFlipChain@@AEAAXXZ.c)
 * Callees:
 *     ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x1800AE3E4 (-ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ.c)
 */

CFlipChain::CSyncSharedDataGuard *__fastcall CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard(
        CFlipChain::CSyncSharedDataGuard *this,
        struct CFlipChain *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    CFlipChain::ReadSharedDataFromDwm(a2);
  return this;
}
