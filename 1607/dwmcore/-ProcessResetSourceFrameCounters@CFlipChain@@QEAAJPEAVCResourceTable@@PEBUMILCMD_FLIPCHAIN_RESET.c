/*
 * XREFs of ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x18010BE88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x1800AA600 (-ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ.c)
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AA874 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AA89C (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 *     ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x18014243C (-ResetSourceFrameCounters@CFlipChain@@IEAAXXZ.c)
 */

__int64 __fastcall CFlipChain::ProcessResetSourceFrameCounters(
        CFlipChain *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS *a3)
{
  CFlipChain *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v5, this);
  CFlipChain::ReadSharedDataFromDwm(this);
  CFlipChain::ResetSourceFrameCounters(this);
  CFlipChain::CSyncSharedDataGuard::~CSyncSharedDataGuard(&v5);
  return 0LL;
}
