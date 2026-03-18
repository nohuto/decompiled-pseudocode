/*
 * XREFs of ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801260A0
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002E6E4 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
        CCompositionSurfaceBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  struct IBitmapRealization *v6; // rax

  v4 = 0;
  *a2 = 0LL;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 48), 0) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 50) + 8LL))(*((_QWORD *)this + 50));
    v5 = *((_QWORD *)this + 50);
    if ( v5 )
      v6 = (struct IBitmapRealization *)(v5 + 112);
    else
      v6 = 0LL;
    *a2 = v6;
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0xE3u);
  }
  return v4;
}
