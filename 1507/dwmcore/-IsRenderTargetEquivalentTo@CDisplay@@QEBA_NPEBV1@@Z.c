/*
 * XREFs of ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x180124B28
 * Callers:
 *     ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x18008CECC (-IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008DA98 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18008DFB0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsRenderTargetEquivalentTo(CDisplay *this, const struct CDisplay *a2)
{
  return *((_DWORD *)this + 208) == *((_DWORD *)a2 + 208)
      && *((_DWORD *)this + 209) == *((_DWORD *)a2 + 209)
      && *((_DWORD *)this + 213) == *((_DWORD *)a2 + 213);
}
