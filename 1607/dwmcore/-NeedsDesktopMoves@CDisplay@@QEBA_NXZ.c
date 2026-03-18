/*
 * XREFs of ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800347F8
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180034D5C (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 */

char __fastcall CDisplay::NeedsDesktopMoves(CDisplay *this)
{
  char v1; // dl

  if ( *((_BYTE *)this + 304) || *((_BYTE *)this + 303) || CDisplay::IsOffscreenRenderTarget(this) )
    return 1;
  return v1;
}
