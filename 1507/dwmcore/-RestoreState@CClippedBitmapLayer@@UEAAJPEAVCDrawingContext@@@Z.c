/*
 * XREFs of ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FB7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180001BF0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18002A884 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180031110 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FB5A8 (-RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CClippedBitmapLayer::RestoreState(CClippedBitmapLayer *this, struct CDrawingContext *a2)
{
  CDrawingContext *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax

  CDrawingContext::FillShapeWithD2DBitmap(a2, *((_QWORD *)this + 14), (_DWORD *)this + 30, *((CShape **)this + 23), 0);
  CDrawingContext::PopRenderOptionsInternal(a2, 0);
  CDrawingContext::PopTransformInternal(v4, 0);
  v5 = CExternalLayer::RestoreState(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = CClippedBitmapLayer::RenderLayer(this, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x9Du);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x9Bu);
  }
  return v6;
}
