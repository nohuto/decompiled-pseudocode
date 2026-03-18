/*
 * XREFs of ?NeedsPresent@CDirectFlipInfo@@QEAA_NXZ @ 0x180006994
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x180005C34 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x180012398 (-SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800E3798 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800068EC (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 */

char __fastcall CDirectFlipInfo::NeedsPresent(CDirectFlipInfo *this)
{
  bool v2; // al
  __int64 v3; // rcx
  CCompositionSurfaceInfo *v4; // rcx
  char v5; // bl
  struct CBitmapRealization *RenderingRealizationNoRef; // rax

  v2 = CDirectFlipInfo::RenderingRealizationChanged(this);
  v4 = *(CCompositionSurfaceInfo **)(v3 + 32);
  v5 = 0;
  *((_QWORD *)this + 8) = *((_QWORD *)v4 + 9);
  if ( v2
    && (!v4
     || (RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v4)) == 0LL
     || !*((_DWORD *)RenderingRealizationNoRef + 59)) )
  {
    v5 = 1;
  }
  *((_BYTE *)this + 72) = v5;
  return v5;
}
