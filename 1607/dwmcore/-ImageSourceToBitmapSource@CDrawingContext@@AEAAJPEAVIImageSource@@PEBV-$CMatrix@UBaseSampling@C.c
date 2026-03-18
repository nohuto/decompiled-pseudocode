/*
 * XREFs of ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180064584
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x180004A08 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x1800698B8 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006AFA0 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18006B140 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801227D0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000365C (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033840 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180033DD0 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180067A2C (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x18006BD38 (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     ?GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800AE9E0 (-GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetBounds@CBitmapResource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AEA60 (-GetBounds@CBitmapResource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToBitmapSource(
        CDrawingContext *this,
        CCachedVisualImage *a2,
        __int64 a3,
        _OWORD *a4,
        struct IBitmapSource **a5)
{
  __int128 v5; // xmm0
  unsigned int v6; // ebx
  __int64 v11; // rax
  const struct D2D_SIZE_F *CurrentLayoutSize; // r8
  __int64 (__fastcall *v13)(__int64, __int64, bool, __int64); // rax
  int Bounds; // eax
  __int64 (__fastcall *v15)(CCachedVisualImage *, struct IBitmapSource **, const struct BitmapSourceInfo *); // rax
  int BitmapSource; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  CCompositionSurfaceBitmap *v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+38h] [rbp-28h] BYREF
  int v23; // [rsp+48h] [rbp-18h]
  __int64 v24; // [rsp+50h] [rbp-10h]

  v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = 0;
  v21 = 0LL;
  *a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a5 = 0LL;
  v22 = v5;
  if ( a2 )
  {
    v11 = *((_QWORD *)this + 58);
    v23 = 0;
    v24 = 0LL;
    *(_QWORD *)&v22 = v11;
    DWORD2(v22) = *((_DWORD *)this + 118);
    HIDWORD(v22) = *((_DWORD *)this + 1622);
    if ( (**(int (__fastcall ***)(CCachedVisualImage *, GUID *, CCompositionSurfaceBitmap **))a2)(
           a2,
           &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
           &v21) >= 0 )
    {
      LOBYTE(v18) = CDrawingContext::IsNormalDesktopRender(this);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v19 + 160))(v20, 0LL, v18);
    }
    CurrentLayoutSize = CDrawingContext::GetCurrentLayoutSize(this);
    v13 = *(__int64 (__fastcall **)(__int64, __int64, bool, __int64))(*(_QWORD *)a2 + 112LL);
    if ( v13 == CCachedVisualImage::GetBounds )
    {
      Bounds = CCachedVisualImage::GetBounds((__int64)a2, 0LL, (bool)CurrentLayoutSize, (__int64)a4);
    }
    else if ( (char *)v13 == (char *)CBitmapResource::GetBounds )
    {
      Bounds = CBitmapResource::GetBounds(a2, 0LL, CurrentLayoutSize, a4);
    }
    else
    {
      Bounds = v13((__int64)a2, 0LL, (bool)CurrentLayoutSize, (__int64)a4);
    }
    v6 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x2419u);
    }
    else
    {
      v15 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)a2 + 64LL);
      if ( v15 == CCachedVisualImage::GetBitmapSource )
      {
        BitmapSource = CCachedVisualImage::GetBitmapSource(a2, a5, (const struct BitmapSourceInfo *)&v22);
      }
      else if ( v15 == CBitmapResource::GetBitmapSource )
      {
        BitmapSource = CBitmapResource::GetBitmapSource(a2, a5, (const struct BitmapSourceInfo *)&v22);
      }
      else
      {
        BitmapSource = v15(a2, a5, (const struct BitmapSourceInfo *)&v22);
      }
      v6 = BitmapSource;
      if ( BitmapSource < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0x241Bu);
      else
        CDrawingContext::RecordBitmapContentInfo(this, a2, v21, a3);
    }
    if ( v21 )
      (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v6;
}
