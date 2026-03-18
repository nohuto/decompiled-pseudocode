/*
 * XREFs of ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x18013A064
 * Callers:
 *     ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x1800B5F38 (-IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800B62F8 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1800B64F0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsRenderTargetEquivalentTo(CDisplay *this, const struct CDisplay *a2)
{
  return *((_DWORD *)this + 58) == *((_DWORD *)a2 + 58)
      && *((_DWORD *)this + 59) == *((_DWORD *)a2 + 59)
      && *((_DWORD *)this + 62) == *((_DWORD *)a2 + 62);
}
