/*
 * XREFs of ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x1800F48E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AE0B0 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AE0D8 (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 *     ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x1800AE3E4 (-ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ.c)
 *     ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x180125D58 (-ResetSourceFrameCounters@CFlipChain@@IEAAXXZ.c)
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
