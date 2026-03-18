/*
 * XREFs of ?IsDirectFlipAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x180007598
 * Callers:
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x180007444 (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall COverlayContext::IsDirectFlipAssigned(
        COverlayContext *this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3)
{
  __int64 v3; // rax
  char v4; // di

  v3 = *((_QWORD *)this + 89);
  v4 = 0;
  if ( v3 && *(const struct CVisual **)(v3 + 24) == a2 )
    return *(_QWORD *)(*((_QWORD *)this + 89) + 32LL) == (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a3 + 176LL))(a3);
  return v4;
}
