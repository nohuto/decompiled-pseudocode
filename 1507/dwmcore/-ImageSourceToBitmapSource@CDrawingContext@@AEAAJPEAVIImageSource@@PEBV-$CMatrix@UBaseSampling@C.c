/*
 * XREFs of ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18002B104 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18002D438 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x18002D600 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1800F21D0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?IsScreenReadback@CDrawingContext@@QEAA_NXZ @ 0x180022DB8 (-IsScreenReadback@CDrawingContext@@QEAA_NXZ.c)
 *     ?CheckForDrawingWithStereoBitmap@CDrawingContext@@AEAA_NPEAVIBitmapContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180027C84 (-CheckForDrawingWithStereoBitmap@CDrawingContext@@AEAA_NPEAVIBitmapContent@@AEBV-$TMilRect_@MUMi.c)
 *     ?CheckForDrawingWithProtectedBitmap@CDrawingContext@@AEAA_NPEAVIBitmapContent@@@Z @ 0x180027CFC (-CheckForDrawingWithProtectedBitmap@CDrawingContext@@AEAA_NPEAVIBitmapContent@@@Z.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEAA_NXZ @ 0x1800296F4 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEAA_NXZ.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x18002E190 (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800532E0 (-GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180082760 (-GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetBounds@CBitmapResource@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180082820 (-GetBounds@CBitmapResource@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToBitmapSource(
        CDrawingContext *this,
        CBitmapResource *a2,
        __int64 a3,
        _OWORD *a4,
        struct IBitmapSource **a5)
{
  __int128 v5; // xmm0
  unsigned int v10; // ebx
  CDrawingContext *v11; // rcx
  __int64 v12; // r8
  char v13; // r11
  char v14; // r14
  const struct D2D_SIZE_F *CurrentLayoutSize; // r14
  __int64 (__fastcall *v16)(CBitmapResource *, _QWORD, const struct D2D_SIZE_F *, _OWORD *); // rbx
  int Bounds; // eax
  __int64 (__fastcall *v18)(CCachedVisualImage *__hidden, struct IBitmapSource **, const struct BitmapSourceInfo *); // rbx
  int BitmapSource; // eax
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+48h] [rbp-20h]

  v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v10 = 0;
  *a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a5 = 0LL;
  v21 = v5;
  if ( a2 )
  {
    *(_QWORD *)&v21 = *((_QWORD *)this + 48);
    DWORD2(v21) = *((_DWORD *)this + 98);
    HIDWORD(v21) = *((_DWORD *)this + 1440);
    v22 = 0;
    v23 = 0LL;
    if ( !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(this)
      || (v14 = 1, CDrawingContext::IsScreenReadback(v11)) )
    {
      v14 = v13;
    }
    LOBYTE(v12) = v14;
    (*(void (__fastcall **)(CBitmapResource *, _QWORD, __int64))(*(_QWORD *)a2 + 120LL))(a2, 0LL, v12);
    CurrentLayoutSize = CDrawingContext::GetCurrentLayoutSize(this);
    v16 = *(__int64 (__fastcall **)(CBitmapResource *, _QWORD, const struct D2D_SIZE_F *, _OWORD *))(*(_QWORD *)a2 + 184LL);
    if ( (char *)v16 == (char *)CBitmapResource::GetBounds )
    {
      Bounds = CBitmapResource::GetBounds(a2, 0LL, CurrentLayoutSize, a4);
    }
    else if ( (char *)v16 == (char *)CCachedVisualImage::GetBounds )
    {
      Bounds = CCachedVisualImage::GetBounds(a2, 0LL, CurrentLayoutSize, a4);
    }
    else
    {
      Bounds = v16(a2, 0LL, CurrentLayoutSize, a4);
    }
    v10 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x243Fu);
    }
    else
    {
      v18 = *(__int64 (__fastcall **)(CCachedVisualImage *__hidden, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)a2 + 128LL);
      if ( v18 == CBitmapResource::GetBitmapSource )
      {
        BitmapSource = CBitmapResource::GetBitmapSource(a2, a5, (const struct BitmapSourceInfo *)&v21);
      }
      else if ( v18 == CCachedVisualImage::GetBitmapSource )
      {
        BitmapSource = CCachedVisualImage::GetBitmapSource(a2, a5, (const struct BitmapSourceInfo *)&v21);
      }
      else
      {
        BitmapSource = v18(a2, a5, (const struct BitmapSourceInfo *)&v21);
      }
      v10 = BitmapSource;
      if ( BitmapSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0x2441u);
      }
      else
      {
        CDrawingContext::CheckForDrawingWithProtectedBitmap(this, a2);
        CDrawingContext::CheckForDrawingWithStereoBitmap(this, a2, a4, a3);
      }
    }
  }
  return v10;
}
