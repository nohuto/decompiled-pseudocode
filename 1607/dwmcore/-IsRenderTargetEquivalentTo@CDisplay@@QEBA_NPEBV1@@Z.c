/*
 * XREFs of ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x180034634
 * Callers:
 *     ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x1800363E8 (-IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011E054 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1801617C0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsRenderTargetEquivalentTo(CDisplay *this, const struct CDisplay *a2)
{
  return *((_DWORD *)this + 58) == *((_DWORD *)a2 + 58)
      && *((_DWORD *)this + 59) == *((_DWORD *)a2 + 59)
      && *((_DWORD *)this + 62) == *((_DWORD *)a2 + 62);
}
