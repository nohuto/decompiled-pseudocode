/*
 * XREFs of ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18012425C
 * Callers:
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x180004604 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180003AE4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCClippedBitmapLayer@@UEAAPEAXI@Z @ 0x1801214A0 (--_GCClippedBitmapLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@PEAPEAV1@@Z @ 0x18012EC18 (-Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV-$CMatrix@UB.c)
 */

__int64 __fastcall CDrawingContext::PushClippedBitmapLayer(CDrawingContext *this, int a2, int a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  CClippedBitmapLayer *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = CClippedBitmapLayer::Create(
         *((_QWORD *)this + 54),
         (unsigned int)*((_QWORD *)this + 3) + 252,
         a2,
         a3,
         a4,
         (__int64)&v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1686u);
  }
  else
  {
    v7 = CDrawingContext::PushLayer(this, 0LL, v9, 1, 0);
    v6 = v7;
    if ( v7 >= 0 )
      return v6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x168Eu);
  }
  if ( v9 )
    CClippedBitmapLayer::`scalar deleting destructor'(v9, 1);
  return v6;
}
