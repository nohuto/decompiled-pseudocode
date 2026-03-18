/*
 * XREFs of ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800378DC
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18000EB90 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ImageSourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIImageSource@@PEBUMilRectF@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800370B8 (-ImageSourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIImageSource@@PEBUMilRectF@@PEBV-$CMatrix@UBas.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x18003E8D0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18003FE38 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800427B4 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000DC48 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?GetRotation@CBaseMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800141C8 (-GetRotation@CBaseMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18005B7C0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x18005B840 (-IsProtectedContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005B850 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005C4A0 (-GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180070F30 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180088EC0 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180088F20 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180088F80 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::BitmapResourceToD2DBitmap(
        CDrawingContext *this,
        CBitmapResource *a2,
        CBaseMatrix *a3,
        char a4,
        __int64 a5,
        struct ID2D1Bitmap1 **a6)
{
  char v6; // si
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 (__fastcall *v11)(CCachedVisualImage *__hidden, struct IBitmapSource **, const struct BitmapSourceInfo *); // rbx
  int BitmapSource; // eax
  __int64 (__fastcall *v13)(CBitmap *__hidden, enum DXGI_FORMAT *); // rbx
  int PixelFormat; // eax
  enum DXGI_ALPHA_MODE (__fastcall *v15)(CBitmap *__hidden); // rdi
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  __int64 (__fastcall *v17)(struct IBitmapSource *); // rdi
  enum DXGI_FORMAT ColorSpace; // eax
  struct ID2D1Bitmap1 **v19; // r13
  const struct _GUID *v20; // r9
  int D2DBitmapFromBitmapSource; // eax
  __int64 v22; // rax
  bool (__fastcall *v23)(CCachedVisualImage *__hidden); // rbx
  __int64 *v24; // rsi
  bool IsProtectedContent; // al
  bool (__fastcall *v26)(CCachedVisualImage *__hidden); // rbx
  bool IsMonitorSpecificContent; // al
  __int64 *v29; // rsi
  char IsNormalDesktopRender; // al
  __int64 v31; // r8
  void (__fastcall *v32)(__int64 *, _QWORD, __int64); // rdi
  int v33; // r9d
  __int64 v34; // rdi
  CBaseMatrix *TopByReference; // rax
  __int64 Rotation; // rbx
  CBaseMatrix *v37; // rax
  CBaseMatrixStack *v38; // r8
  float v39; // xmm3_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  unsigned int v43; // [rsp+20h] [rbp-E0h]
  struct IBitmapSource *v45; // [rsp+48h] [rbp-B8h] BYREF
  struct ID2D1Bitmap1 **v46; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v48; // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+68h] [rbp-98h] BYREF
  CBaseMatrix *v50; // [rsp+70h] [rbp-90h] BYREF
  float v51; // [rsp+78h] [rbp-88h]
  float v52; // [rsp+7Ch] [rbp-84h]
  __int128 v53; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  enum DXGI_FORMAT v56[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h]
  _BYTE v58[64]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = a4;
  v50 = a3;
  *a6 = 0LL;
  v9 = 0;
  v46 = a6;
  v48 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  if ( !a2 || *((_BYTE *)this + 2616) || *((_DWORD *)this + 1447) )
    return v9;
  if ( (**(int (__fastcall ***)(CBitmapResource *, GUID *, __int64 *))a2)(
         a2,
         &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
         (__int64 *)&v48) >= 0 )
  {
    v29 = v48;
    IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(this);
    v32 = *(void (__fastcall **)(__int64 *, _QWORD, __int64))(v31 + 152);
    LOBYTE(v31) = IsNormalDesktopRender;
    v32(v29, 0LL, v31);
    v6 = a4;
  }
  if ( !a5 && (*(int (__fastcall **)(CBitmapResource *, __int64 *))(*(_QWORD *)a2 + 72LL))(a2, &v47) >= 0 )
  {
    v19 = v46;
    if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, char, _BYTE, struct ID2D1Bitmap1 **))(*(_QWORD *)v47 + 96LL))(
           v47,
           *((_QWORD *)this + 48),
           *((unsigned int *)this + 98),
           *((unsigned int *)this + 1448),
           0LL,
           v6,
           0,
           v46) >= 0 )
    {
      (*(void (__fastcall **)(__int64, int *, struct ID2D1Bitmap1 ***))(*(_QWORD *)v47 + 24LL))(v47, &v49, &v46);
      *(_QWORD *)&v53 = 0LL;
      *((float *)&v53 + 2) = (float)v49;
      *((float *)&v53 + 3) = (float)(int)v46;
    }
    goto LABEL_23;
  }
  *(_QWORD *)&v53 = *((_QWORD *)this + 48);
  DWORD2(v53) = *((_DWORD *)this + 98);
  HIDWORD(v53) = *((_DWORD *)this + 1448);
  v54 = v6 != 0;
  if ( a5 )
    v54 = (v6 != 0) | 2;
  v10 = *(_QWORD *)a2;
  v55 = a5;
  v11 = *(__int64 (__fastcall **)(CCachedVisualImage *__hidden, struct IBitmapSource **, const struct BitmapSourceInfo *))(v10 + 64);
  if ( v11 == CBitmapResource::GetBitmapSource )
  {
    BitmapSource = CBitmapResource::GetBitmapSource(a2, &v45, (const struct BitmapSourceInfo *)&v53);
  }
  else if ( v11 == CCachedVisualImage::GetBitmapSource )
  {
    BitmapSource = CCachedVisualImage::GetBitmapSource(a2, &v45, (const struct BitmapSourceInfo *)&v53);
  }
  else
  {
    BitmapSource = v11(a2, &v45, (const struct BitmapSourceInfo *)&v53);
  }
  v9 = BitmapSource;
  if ( BitmapSource < 0 )
  {
    v43 = 8983;
LABEL_52:
    v33 = v9;
    goto LABEL_54;
  }
  if ( !v45 )
  {
    v19 = v46;
    goto LABEL_23;
  }
  v13 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v45 + 24LL);
  if ( v13 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(v45, v56);
  else
    PixelFormat = v13(v45, v56);
  v9 = PixelFormat;
  if ( PixelFormat < 0 )
  {
    v43 = 8987;
    goto LABEL_52;
  }
  v15 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)v45 + 32LL);
  if ( v15 == CBitmap::GetAlphaMode )
    AlphaMode = CBitmap::GetAlphaMode(v45);
  else
    AlphaMode = v15(v45);
  v56[1] = AlphaMode;
  v17 = *(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v45 + 40LL);
  if ( (char *)v17 == (char *)CBitmap::GetColorSpace )
    ColorSpace = (unsigned int)CBitmap::GetColorSpace(v45);
  else
    ColorSpace = (unsigned int)v17(v45);
  v19 = v46;
  v20 = (const struct _GUID *)(*((_QWORD *)this + 3) + 252LL);
  v57 = 0LL;
  v56[2] = ColorSpace;
  D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                v45,
                                (const struct PixelFormatInfo *)v56,
                                (const struct BitmapSourceInfo *)&v53,
                                v20,
                                v46);
  v9 = D2DBitmapFromBitmapSource;
  if ( D2DBitmapFromBitmapSource >= 0 )
  {
LABEL_23:
    if ( *v19 )
    {
      (*(void (__fastcall **)(struct ID2D1Bitmap1 *, struct ID2D1Bitmap1 ***))(*(_QWORD *)*v19 + 32LL))(*v19, &v46);
      v22 = *(_QWORD *)a2;
      *(_QWORD *)&v53 = 0LL;
      v23 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(v22 + 32);
      v24 = v48;
      *((_QWORD *)&v53 + 1) = v46;
      if ( v23 == CCachedVisualImage::IsProtectedContent )
        IsProtectedContent = CCachedVisualImage::IsProtectedContent(a2);
      else
        IsProtectedContent = v23(a2);
      if ( IsProtectedContent )
        *((_BYTE *)this + 5970) = 1;
      v26 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)a2 + 24LL);
      if ( v26 == CCachedVisualImage::IsMonitorSpecificContent )
        IsMonitorSpecificContent = CCachedVisualImage::IsMonitorSpecificContent(a2);
      else
        IsMonitorSpecificContent = v26(a2);
      if ( IsMonitorSpecificContent )
        *((_BYTE *)this + 5972) = 1;
      if ( v24 && CDrawingContext::IsNormalDesktopRender(this) )
      {
        v34 = *v24;
        TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
        Rotation = (unsigned int)CBaseMatrix::GetRotation(TopByReference);
        (*(void (__fastcall **)(__int64 *, __int64))(v34 + 160))(v24, Rotation);
      }
      if ( *((_BYTE *)this + 5969) )
      {
        if ( *((_DWORD *)this + 1448) == 1 )
        {
          if ( v24 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v24 + 88))(v24) )
            {
              v37 = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
              if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(v37) )
              {
                CBaseMatrixStack::Top(v38, (struct CBaseMatrix *)v58);
                if ( v50 )
                  CBaseMatrix::Transform2DBounds(v50, (const struct MilRectF *)&v53, (struct MilRectF *)v56);
                else
                  *(_OWORD *)v56 = v53;
                CBaseMatrix::Transform2DBounds(
                  (CBaseMatrix *)v58,
                  (const struct MilRectF *)v56,
                  (struct MilRectF *)&v50);
                CScopedClipStack::GetTopClipBoundsInScope((char *)this + 680, &v53);
                v39 = *(float *)&v50;
                if ( *(float *)&v53 > *(float *)&v50 )
                {
                  v39 = *(float *)&v53;
                  LODWORD(v50) = v53;
                }
                v40 = *((float *)&v50 + 1);
                if ( *((float *)&v53 + 1) > *((float *)&v50 + 1) )
                {
                  v40 = *((float *)&v53 + 1);
                  HIDWORD(v50) = DWORD1(v53);
                }
                v41 = v51;
                if ( v51 > *((float *)&v53 + 2) )
                {
                  v41 = *((float *)&v53 + 2);
                  v51 = *((float *)&v53 + 2);
                }
                v42 = v52;
                if ( v52 > *((float *)&v53 + 3) )
                {
                  v42 = *((float *)&v53 + 3);
                  v52 = *((float *)&v53 + 3);
                }
                if ( v41 <= v39 || v42 <= v40 )
                {
                  v52 = 0.0;
                  v51 = 0.0;
                  v50 = 0LL;
                }
                if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v50) )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 1449, (float *)&v50);
              }
            }
          }
        }
      }
    }
    goto LABEL_34;
  }
  v43 = 9000;
  v33 = D2DBitmapFromBitmapSource;
LABEL_54:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, v43);
LABEL_34:
  if ( v45 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v45 + 16LL))(v45);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v48 )
    (*(void (__fastcall **)(__int64 *))(*v48 + 16))(v48);
  return v9;
}
