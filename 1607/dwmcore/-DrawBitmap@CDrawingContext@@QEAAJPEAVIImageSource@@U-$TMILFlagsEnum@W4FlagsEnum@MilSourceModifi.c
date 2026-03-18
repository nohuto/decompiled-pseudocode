/*
 * XREFs of ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006AFA0
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180069410 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x180157EC0 (-DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180064584 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006979C (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006A680 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, CCachedVisualImage *a2, int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // eax
  unsigned __int32 v10; // [rsp+28h] [rbp-48h]
  int v11; // [rsp+30h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  struct IBitmapSource *v13; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v14[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  if ( (int)CDrawingContext::BitmapResourceToD2DBitmap(this, a2, 0LL, a3 & 1, 0LL, &v12) >= 0 && v12 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 40LL))(v12, v14);
    *(_QWORD *)&v15 = 0LL;
    v11 = *((_DWORD *)this + 83);
    v10 = *((_DWORD *)this + 1620);
    *((float *)&v15 + 2) = (float)v14[0];
    *((float *)&v15 + 3) = (float)v14[1];
    v9 = CDrawingContext::DrawD2DBitmapWithPartialOcclusion(
           (__int64)this,
           (struct ID2D1Bitmap1 *)v12,
           &v15,
           (int *)&v15,
           1.0,
           v10,
           v11);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6AFu);
  }
  else
  {
    v5 = CDrawingContext::ImageSourceToBitmapSource(this, a2, 0LL, &v15, &v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6B9u);
    }
    else if ( v13 )
    {
      v7 = CDrawingContext::DrawBitmapSource(
             this,
             (__int64)v13,
             (__int64)&v15,
             (float *)&v15,
             *((_DWORD *)this + 1620),
             a3,
             *((_DWORD *)this + 88),
             0LL);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x6C2u);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v13 + 16LL))(v13);
  return v6;
}
