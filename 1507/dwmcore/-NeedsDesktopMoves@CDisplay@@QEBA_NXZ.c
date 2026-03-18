/*
 * XREFs of ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180090930
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18008F758 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x1800583CC (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 */

char __fastcall CDisplay::NeedsDesktopMoves(CDisplay *this)
{
  char v1; // dl

  if ( *((_BYTE *)this + 149) || *((_BYTE *)this + 148) || (unsigned __int8)CDisplay::IsOffscreenRenderTarget(this) )
    return 1;
  return v1;
}
