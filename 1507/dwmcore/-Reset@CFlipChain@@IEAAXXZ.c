/*
 * XREFs of ?Reset@CFlipChain@@IEAAXXZ @ 0x180109AC8
 * Callers:
 *     ??1CFlipChain@@MEAA@XZ @ 0x18010857C (--1CFlipChain@@MEAA@XZ.c)
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x180109590 (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180109B14 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 *     ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x180109C5C (-ResetSourceFrameCounters@CFlipChain@@IEAAXXZ.c)
 */

void __fastcall CFlipChain::Reset(CFlipChain *this)
{
  CFlipChain::ResetBuffers(this);
  *((_DWORD *)this + 40) = 0;
  CFlipChain::ResetSourceFrameCounters(this);
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 27, 0x58u);
  *((_BYTE *)this + 272) &= 0xFCu;
  CBitmapResource::Dispose(this);
}
