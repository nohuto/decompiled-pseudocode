/*
 * XREFs of ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AA89C
 * Callers:
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800AA714 (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800AA77C (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA7E4 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x18010BE88 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180142264 (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 *     ?UpdateTimingInfo@CFlipChain@@AEAAXXZ @ 0x180142490 (-UpdateTimingInfo@CFlipChain@@AEAAXXZ.c)
 * Callees:
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800AA678 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 */

void __fastcall CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard(CFlipChain **this)
{
  CFlipChain *v1; // rcx

  v1 = *this;
  if ( v1 )
    CFlipChain::WriteSharedDataToDwm(v1);
}
