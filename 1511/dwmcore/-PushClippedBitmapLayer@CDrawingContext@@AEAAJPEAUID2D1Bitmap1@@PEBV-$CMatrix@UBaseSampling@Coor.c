/*
 * XREFs of ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18010DDEC
 * Callers:
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18003F4A4 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003CBE8 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCClippedBitmapLayer@@UEAAPEAXI@Z @ 0x18010B020 (--_GCClippedBitmapLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@PEAPEAV1@@Z @ 0x1801150E0 (-Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV-$CMatrix@UB.c)
 */

__int64 __fastcall CDrawingContext::PushClippedBitmapLayer(CDrawingContext *this, int a2, int a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // edi
  CClippedBitmapLayer *v7; // rbx
  int v8; // eax
  CClippedBitmapLayer *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = CClippedBitmapLayer::Create(
         *((_QWORD *)this + 44),
         (unsigned int)*((_QWORD *)this + 3) + 252,
         a2,
         a3,
         a4,
         (__int64)&v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v10;
    v8 = CDrawingContext::PushLayer(this, 0LL, v10, 1, 0);
    v6 = v8;
    if ( v8 >= 0 )
      v7 = 0LL;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x169Eu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1696u);
    v7 = v10;
  }
  if ( v7 )
    CClippedBitmapLayer::`scalar deleting destructor'(v7, 1);
  return v6;
}
