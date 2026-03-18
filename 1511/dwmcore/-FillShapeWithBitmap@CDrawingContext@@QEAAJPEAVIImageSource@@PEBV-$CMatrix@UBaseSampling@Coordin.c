/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18003FD48
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAVCOverlayContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180130C14 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIImageSource@@PEBUMilRectF@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800370B8 (-ImageSourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIImageSource@@PEBUMilRectF@@PEBV-$CMatrix@UBas.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x18003770C (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18003F4A4 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18003F628 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x180042B20 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        int (__fastcall ***a2)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **),
        CBaseMatrix *a3,
        CShape *a4,
        int a5,
        __int64 a6)
{
  CBitmapResource *v10; // rdx
  CDrawingContext *v11; // rcx
  __int64 v12; // r8
  struct CShape *v13; // r9
  int v14; // eax
  unsigned int v15; // edi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+30h] [rbp-41h]
  int v21[2]; // [rsp+50h] [rbp-21h] BYREF
  struct IBitmapSource *v22; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v23[16]; // [rsp+60h] [rbp-11h] BYREF

  v22 = 0LL;
  *(_QWORD *)v21 = 0LL;
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    v19 = CDrawingContext::FillShapeForBounds(v11, v13, v12);
    v15 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xE1Du);
  }
  else if ( (int)CDrawingContext::ImageSourceToD2DBitmap(v11, v10, v12, v12, a5, a6, (__int64)v21) >= 0
         && *(_QWORD *)v21 )
  {
    v14 = CDrawingContext::FillShapeWithD2DBitmap(this, *(__int64 *)v21, a3, a4, *((_DWORD *)this + 63));
    v15 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xE01u);
  }
  else
  {
    v17 = CDrawingContext::ImageSourceToBitmapSource(this, a2, a3, (struct MilRectF *)v23, &v22);
    v15 = v17;
    if ( v17 >= 0 )
    {
      if ( !v22 )
        goto LABEL_8;
      v18 = CDrawingContext::FillShapeWithBitmapSource(
              (struct CMILBrush **)this,
              (int)v22,
              (__int64)a3,
              (__int64)a4,
              a5,
              a6,
              v20,
              *((_DWORD *)this + 68),
              0);
      v15 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xE17u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xE0Du);
    }
  }
  if ( v22 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v22 + 16LL))(v22);
LABEL_8:
  if ( *(_QWORD *)v21 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v21 + 16LL))(*(_QWORD *)v21);
  return v15;
}
