/*
 * XREFs of ?Reset@CFlipChain@@IEAAXXZ @ 0x180125BC4
 * Callers:
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x1800F4704 (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x18012539C (--1CFlipChain@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180125C10 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 *     ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x180125D58 (-ResetSourceFrameCounters@CFlipChain@@IEAAXXZ.c)
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
