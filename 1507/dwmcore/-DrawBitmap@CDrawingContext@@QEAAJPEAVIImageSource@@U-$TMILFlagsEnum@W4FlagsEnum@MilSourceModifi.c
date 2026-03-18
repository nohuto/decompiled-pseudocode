/*
 * XREFs of ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18002D438
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180029FB0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawIntoBaseTile@CImageBrush@@MEAAJPEBUBrushContext@@PEAVCDrawingContext@@@Z @ 0x180120470 (-DrawIntoBaseTile@CImageBrush@@MEAAJPEBUBrushContext@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002AFC4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002C9D0 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, CBitmapResource *a2, int a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v9; // eax
  int v10; // [rsp+28h] [rbp-48h]
  int v11; // [rsp+30h] [rbp-40h]
  struct ID2D1Bitmap1 *v12; // [rsp+40h] [rbp-30h] BYREF
  struct IBitmapSource *v13; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v14[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  if ( (int)CDrawingContext::BitmapResourceToD2DBitmap((__int64)this, a2, 0LL, a3 & 1, 0LL, &v12) >= 0 && v12 )
  {
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *, _DWORD *))(*(_QWORD *)v12 + 40LL))(v12, v14);
    *(_QWORD *)&v15 = 0LL;
    v11 = *((_DWORD *)this + 63);
    v10 = *((_DWORD *)this + 1438);
    *((float *)&v15 + 2) = (float)v14[0];
    *((float *)&v15 + 3) = (float)v14[1];
    v9 = CDrawingContext::DrawD2DBitmapWithPartialOcclusion(
           (__int64)this,
           v12,
           (unsigned int *)&v15,
           (float *)&v15,
           1.0,
           v10,
           v11);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6AAu);
  }
  else
  {
    v5 = CDrawingContext::ImageSourceToBitmapSource(this, a2, 0LL, &v15, &v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6B4u);
    }
    else if ( v13 )
    {
      v7 = CDrawingContext::DrawBitmapSource(
             this,
             (__int64)v13,
             (__int64)&v15,
             (float *)&v15,
             *((_DWORD *)this + 1438),
             a3,
             *((_DWORD *)this + 68),
             0LL);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x6BDu);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v13 + 16LL))(v13);
  return v6;
}
