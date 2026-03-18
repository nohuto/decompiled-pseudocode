/*
 * XREFs of ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x18003770C
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18003FD48 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18003FE38 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800427B4 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x180042970 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18010CCE0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000DC48 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18003C568 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x180043664 (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005B3C0 (-GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005B850 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005C4A0 (-GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetBounds@CBitmapResource@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005C570 (-GetBounds@CBitmapResource@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToBitmapSource(
        CDrawingContext *this,
        int (__fastcall ***a2)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **),
        CBaseMatrix *a3,
        struct MilRectF *a4,
        struct IBitmapSource **a5)
{
  __int128 v5; // xmm0
  CBaseMatrix *v8; // rsi
  unsigned int v10; // edi
  int (__fastcall **v11)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rax
  const struct D2D_SIZE_F *CurrentLayoutSize; // rdi
  int (__fastcall *v13)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rbx
  int Bounds; // eax
  __int64 (__fastcall *v15)(CCachedVisualImage *__hidden, struct IBitmapSource **, const struct BitmapSourceInfo *); // rbx
  int BitmapSource; // eax
  CCompositionSurfaceBitmap *v18; // rsi
  char IsNormalDesktopRender; // al
  __int64 v20; // r8
  void (__fastcall *v21)(CCompositionSurfaceBitmap *, _QWORD, __int64); // rdi
  CCompositionSurfaceBitmap *v22; // [rsp+30h] [rbp-48h] BYREF
  CBaseMatrix *v23; // [rsp+38h] [rbp-40h]
  __int128 v24; // [rsp+40h] [rbp-38h] BYREF
  int v25; // [rsp+50h] [rbp-28h]
  __int64 v26; // [rsp+58h] [rbp-20h]

  v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v23 = a3;
  v22 = 0LL;
  v8 = a3;
  v10 = 0;
  *(_OWORD *)a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a5 = 0LL;
  v24 = v5;
  if ( a2 )
  {
    *(_QWORD *)&v24 = *((_QWORD *)this + 48);
    DWORD2(v24) = *((_DWORD *)this + 98);
    HIDWORD(v24) = *((_DWORD *)this + 1448);
    v11 = *a2;
    v25 = 0;
    v26 = 0LL;
    if ( (*v11)((CBitmapResource *)a2, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v22) >= 0 )
    {
      v18 = v22;
      IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(this);
      v21 = *(void (__fastcall **)(CCompositionSurfaceBitmap *, _QWORD, __int64))(v20 + 152);
      LOBYTE(v20) = IsNormalDesktopRender;
      v21(v18, 0LL, v20);
      v8 = v23;
    }
    CurrentLayoutSize = CDrawingContext::GetCurrentLayoutSize(this);
    v13 = (*a2)[14];
    if ( (char *)v13 == (char *)CCachedVisualImage::GetBounds )
    {
      Bounds = CCachedVisualImage::GetBounds(a2, 0LL, CurrentLayoutSize, a4);
    }
    else if ( (char *)v13 == (char *)CBitmapResource::GetBounds )
    {
      Bounds = CBitmapResource::GetBounds(a2, 0LL, CurrentLayoutSize, a4);
    }
    else
    {
      Bounds = ((__int64 (__fastcall *)(int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **), _QWORD, const struct D2D_SIZE_F *, struct MilRectF *))v13)(
                 a2,
                 0LL,
                 CurrentLayoutSize,
                 a4);
    }
    v10 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x2376u);
    }
    else
    {
      v15 = (__int64 (__fastcall *)(CCachedVisualImage *__hidden, struct IBitmapSource **, const struct BitmapSourceInfo *))(*a2)[8];
      if ( v15 == CCachedVisualImage::GetBitmapSource )
      {
        BitmapSource = CCachedVisualImage::GetBitmapSource(
                         (CCachedVisualImage *)a2,
                         a5,
                         (const struct BitmapSourceInfo *)&v24);
      }
      else if ( v15 == CBitmapResource::GetBitmapSource )
      {
        BitmapSource = CBitmapResource::GetBitmapSource(
                         (CBitmapResource *)a2,
                         a5,
                         (const struct BitmapSourceInfo *)&v24);
      }
      else
      {
        BitmapSource = v15((CCachedVisualImage *)a2, a5, (const struct BitmapSourceInfo *)&v24);
      }
      v10 = BitmapSource;
      if ( BitmapSource < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0x2378u);
      else
        CDrawingContext::RecordBitmapContentInfo(this, (CCachedVisualImage *)a2, v22, a4, v8);
    }
    if ( v22 )
      (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v10;
}
