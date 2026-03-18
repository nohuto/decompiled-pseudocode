/*
 * XREFs of ?GetFrontBufferIndex@CSwapChainBase@@MEBAIXZ @ 0x18007A150
 * Callers:
 *     ?GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z @ 0x18007A160 (-GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainBase::GetFrontBufferIndex(CSwapChainBase *this)
{
  return (unsigned int)(*((_DWORD *)this + 42) - 1);
}
