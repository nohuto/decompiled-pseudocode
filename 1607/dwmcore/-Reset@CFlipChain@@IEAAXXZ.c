/*
 * XREFs of ?Reset@CFlipChain@@IEAAXXZ @ 0x1801422A8
 * Callers:
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x18010BCB4 (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x180141BA0 (--1CFlipChain@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x1801422F4 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 *     ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x18014243C (-ResetSourceFrameCounters@CFlipChain@@IEAAXXZ.c)
 */

void __fastcall CFlipChain::Reset(CFlipChain *this)
{
  CFlipChain::ResetBuffers(this);
  *((_DWORD *)this + 58) = 0;
  CFlipChain::ResetSourceFrameCounters(this);
  *((_DWORD *)this + 78) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 0x58u);
  *((_BYTE *)this + 344) &= 0xFCu;
  CBitmapResource::Dispose(this);
}
