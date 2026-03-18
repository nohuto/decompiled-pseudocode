/*
 * XREFs of ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800110F0 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ImageSourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIImageSource@@PEBUMilRectF@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180022D68 (-ImageSourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIImageSource@@PEBUMilRectF@@PEBV-$CMatrix@UBas.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x180029C90 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18002D438 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x18001BD90 (-Release@CHwBitmapColorSource@@UEAAKXZ.c)
 *     ?GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ @ 0x18001BE50 (-GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180053700 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x180053780 (-IsProtectedContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180054B38 (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180080C90 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180080CF0 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180080D50 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180082760 (-GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180084824 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090D78 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?InitializeFromRegistry@CD3DRegistryDatabase@@SAJPEBVCDXGIEnumeration@@@Z @ 0x180096A4C (-InitializeFromRegistry@CD3DRegistryDatabase@@SAJPEBVCDXGIEnumeration@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180134640 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CDrawingContext::BitmapResourceToD2DBitmap(
        __int64 a1,
        CBitmapResource *a2,
        CBaseMatrix *a3,
        char a4,
        __int64 a5,
        _QWORD *a6)
{
  int v6; // r14d
  unsigned int v9; // esi
  __int64 v10; // rdx
  int v11; // eax
  bool v12; // r12
  __int64 v13; // rax
  __int64 (__fastcall *v14)(CCachedVisualImage *__hidden, struct IBitmapSource **, const struct BitmapSourceInfo *); // rbx
  int BitmapSource; // eax
  __int64 (__fastcall *v16)(CBitmap *__hidden, enum DXGI_FORMAT *); // rbx
  int PixelFormat; // eax
  enum DXGI_ALPHA_MODE (__fastcall *v18)(CBitmap *__hidden); // rdi
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  __int64 (__fastcall *v20)(CBitmap *); // rdi
  enum DXGI_FORMAT ColorSpace; // eax
  struct _LUID v22; // rbx
  __int64 v23; // r12
  volatile signed __int32 *v24; // rdi
  int v25; // esi
  __int64 v26; // rax
  unsigned int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  CHwBitmapColorSource *v31; // r12
  struct CD3DTexture *(__fastcall *v32)(CHwBitmapColorSource *); // rbx
  CD3DTexture *TextureNoRef; // rax
  char v34; // si
  __int64 v35; // rax
  char *v36; // rsi
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(CHwBitmapColorSource *); // rbx
  volatile signed __int32 *v39; // rdi
  __int64 v40; // rax
  bool (__fastcall *v41)(CCachedVisualImage *__hidden); // rbx
  bool IsProtectedContent; // al
  bool (__fastcall *v43)(CCachedVisualImage *__hidden); // rbx
  bool IsMonitorSpecificContent; // al
  int D2DBitmap; // eax
  int v47; // eax
  int DXGIEnumeration; // eax
  int v49; // eax
  int v50; // eax
  void (__fastcall ***v51)(_QWORD, volatile signed __int32 *); // rsi
  float v52; // xmm3_4
  float v53; // xmm0_4
  float v54; // xmm1_4
  float v55; // xmm2_4
  __int64 v57; // [rsp+50h] [rbp-B8h] BYREF
  CBitmap *v58; // [rsp+58h] [rbp-B0h] BYREF
  CD3DTexture *v59; // [rsp+60h] [rbp-A8h]
  struct CDXGIEnumeration *v60; // [rsp+68h] [rbp-A0h] BYREF
  CD3DDeviceLevel1 *v61; // [rsp+70h] [rbp-98h]
  __int64 v62; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v63; // [rsp+80h] [rbp-88h]
  __int64 v64; // [rsp+88h] [rbp-80h] BYREF
  struct _LUID v65; // [rsp+90h] [rbp-78h] BYREF
  struct CD3DDeviceLevel1 *v66; // [rsp+98h] [rbp-70h] BYREF
  int v67; // [rsp+A0h] [rbp-68h] BYREF
  struct _LUID v68; // [rsp+A8h] [rbp-60h] BYREF
  int v69; // [rsp+B0h] [rbp-58h]
  int v70; // [rsp+B4h] [rbp-54h]
  int v71; // [rsp+B8h] [rbp-50h]
  __int64 v72; // [rsp+C0h] [rbp-48h]
  CHwBitmapColorSource *v73; // [rsp+C8h] [rbp-40h] BYREF
  enum DXGI_FORMAT v74[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-28h]
  CBaseMatrix *v76; // [rsp+E8h] [rbp-20h]
  __int64 v77; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v78; // [rsp+F8h] [rbp-10h]
  __int128 v79; // [rsp+100h] [rbp-8h] BYREF
  float v80; // [rsp+110h] [rbp+8h] BYREF
  float v81; // [rsp+114h] [rbp+Ch]
  float v82; // [rsp+118h] [rbp+10h]
  float v83; // [rsp+11Ch] [rbp+14h]
  __int128 v84; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v85[64]; // [rsp+138h] [rbp+30h] BYREF

  v6 = 0;
  v76 = a3;
  v9 = 0;
  *a6 = 0LL;
  v63 = a6;
  v64 = 0LL;
  v58 = 0LL;
  if ( !a2 || *(_BYTE *)(a1 + 2616) || *(_DWORD *)(a1 + 5756) )
    return 0LL;
  v12 = 0;
  if ( *(_QWORD *)(a1 + 360) )
  {
    if ( *(_QWORD *)(a1 + 5784) )
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = *(_DWORD *)(v10 + 864);
      if ( !v11 || !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 880) + 8LL * (unsigned int)(v11 - 1)) + 4LL) )
        v12 = 1;
    }
  }
  (*(void (__fastcall **)(CBitmapResource *, _QWORD, bool))(*(_QWORD *)a2 + 120LL))(a2, 0LL, v12);
  if ( !a5 && (*(int (__fastcall **)(CBitmapResource *, __int64 *))(*(_QWORD *)a2 + 136LL))(a2, &v64) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, char, _BYTE, _QWORD *))(*(_QWORD *)v64 + 88LL))(
           v64,
           *(_QWORD *)(a1 + 384),
           *(unsigned int *)(a1 + 392),
           *(unsigned int *)(a1 + 5760),
           0LL,
           a4,
           0,
           v63) >= 0 )
    {
      (*(void (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v64 + 24LL))(v64, &v67, &v62);
      *(_QWORD *)&v79 = 0LL;
      *((float *)&v79 + 2) = (float)v67;
      *((float *)&v79 + 3) = (float)(int)v62;
    }
    goto LABEL_58;
  }
  v68 = *(struct _LUID *)(a1 + 384);
  v69 = *(_DWORD *)(a1 + 392);
  v70 = *(_DWORD *)(a1 + 5760);
  v71 = a4 != 0;
  if ( a5 )
    v71 = (a4 != 0) | 2;
  v13 = *(_QWORD *)a2;
  v72 = a5;
  v14 = *(__int64 (__fastcall **)(CCachedVisualImage *__hidden, struct IBitmapSource **, const struct BitmapSourceInfo *))(v13 + 128);
  if ( v14 == CBitmapResource::GetBitmapSource )
  {
    BitmapSource = CBitmapResource::GetBitmapSource(a2, &v58, (const struct BitmapSourceInfo *)&v68);
  }
  else if ( v14 == CCachedVisualImage::GetBitmapSource )
  {
    BitmapSource = CCachedVisualImage::GetBitmapSource(a2, &v58, (const struct BitmapSourceInfo *)&v68);
  }
  else
  {
    BitmapSource = v14(a2, &v58, (const struct BitmapSourceInfo *)&v68);
  }
  v9 = BitmapSource;
  if ( BitmapSource < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0x23E0u);
    goto LABEL_68;
  }
  if ( !v58 )
  {
LABEL_58:
    if ( *v63 )
    {
      (*(void (__fastcall **)(_QWORD, struct _LUID *))(*(_QWORD *)*v63 + 32LL))(*v63, &v65);
      v40 = *(_QWORD *)a2;
      *((struct _LUID *)&v79 + 1) = v65;
      v41 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(v40 + 48);
      *(_QWORD *)&v79 = 0LL;
      if ( v41 == CCachedVisualImage::IsProtectedContent )
        IsProtectedContent = CCachedVisualImage::IsProtectedContent(a2);
      else
        IsProtectedContent = v41(a2);
      if ( IsProtectedContent )
        *(_BYTE *)(a1 + 5938) = 1;
      v43 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)a2 + 40LL);
      if ( v43 == CCachedVisualImage::IsMonitorSpecificContent )
        IsMonitorSpecificContent = CCachedVisualImage::IsMonitorSpecificContent(a2);
      else
        IsMonitorSpecificContent = v43(a2);
      if ( IsMonitorSpecificContent )
        *(_BYTE *)(a1 + 5940) = 1;
      if ( (*(unsigned __int8 (__fastcall **)(CBitmapResource *))(*(_QWORD *)a2 + 32LL))(a2)
        && *(_BYTE *)(a1 + 5937)
        && *(_DWORD *)(a1 + 5760) == 1 )
      {
        CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 456), (struct CBaseMatrix *)v85);
        if ( v76 )
          CBaseMatrix::Transform2DBounds(v76, (const struct MilRectF *)&v79, (struct MilRectF *)&v84);
        else
          v84 = v79;
        CBaseMatrix::Transform2DBounds((CBaseMatrix *)v85, (const struct MilRectF *)&v84, (struct MilRectF *)&v77);
        CScopedClipStack::GetTopClipBoundsInScope(a1 + 680, &v80);
        v52 = *(float *)&v77;
        if ( v80 > *(float *)&v77 )
        {
          v52 = v80;
          *(float *)&v77 = v80;
        }
        v53 = *((float *)&v77 + 1);
        if ( v81 > *((float *)&v77 + 1) )
        {
          v53 = v81;
          *((float *)&v77 + 1) = v81;
        }
        v54 = *(float *)&v78;
        if ( *(float *)&v78 > v82 )
        {
          v54 = v82;
          *(float *)&v78 = v82;
        }
        v55 = *((float *)&v78 + 1);
        if ( *((float *)&v78 + 1) > v83 )
        {
          v55 = v83;
          *((float *)&v78 + 1) = v83;
        }
        if ( v54 <= v52 || v55 <= v53 )
        {
          v78 = 0LL;
          v77 = 0LL;
        }
        if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v77) )
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a1 + 5764, &v77);
      }
    }
    goto LABEL_68;
  }
  v16 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v58 + 24LL);
  if ( v16 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(v58, v74);
  else
    PixelFormat = v16(v58, v74);
  v9 = PixelFormat;
  if ( PixelFormat < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x23E4u);
    goto LABEL_68;
  }
  v18 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)v58 + 32LL);
  if ( v18 == CBitmap::GetAlphaMode )
    AlphaMode = CBitmap::GetAlphaMode(v58);
  else
    AlphaMode = v18(v58);
  v74[1] = AlphaMode;
  v20 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)v58 + 40LL);
  if ( (char *)v20 == (char *)CBitmap::GetColorSpace )
    ColorSpace = (unsigned int)CBitmap::GetColorSpace(v58);
  else
    ColorSpace = (unsigned int)v20(v58);
  v22 = v68;
  v23 = *(_QWORD *)(a1 + 24);
  v24 = 0LL;
  v74[2] = ColorSpace;
  v59 = v58;
  v75 = 0LL;
  v73 = 0LL;
  v65 = v68;
  *v63 = 0LL;
  v61 = 0LL;
  v66 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v25 = 0;
  v26 = *(_QWORD *)(v23 + 252) - xmmword_180195E0C;
  if ( !v26 )
    v26 = *(_QWORD *)(v23 + 260) - *((_QWORD *)&xmmword_180195E0C + 1);
  if ( !v26 )
    v25 = -2003304307;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v25, 0x2FAu);
    goto LABEL_38;
  }
  v25 = 0;
  v60 = 0LL;
  if ( !qword_180195DD0 )
  {
    DXGIEnumeration = CDisplayManager::GetDXGIEnumeration((CDisplayManager *)&g_DisplayManager, &v60);
    v25 = DXGIEnumeration;
    if ( DXGIEnumeration >= 0 )
    {
      v49 = CD3DRegistryDatabase::InitializeFromRegistry(v60);
      v25 = v49;
      if ( v49 >= 0 )
      {
        qword_180195DD0 = v60;
        v60 = 0LL;
        byte_180195DC8 = 1;
        goto LABEL_30;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x135u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIEnumeration, 0x130u);
    }
    if ( v60 )
    {
      (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v60 + 8LL))(v60);
      v24 = (volatile signed __int32 *)v61;
    }
  }
LABEL_30:
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v25, 0x2FCu);
  }
  else
  {
    v25 = -2003304307;
    v27 = 0;
    if ( dword_180195E08 )
    {
      while ( 1 )
      {
        v28 = qword_180195DE8 + 32LL * v27;
        if ( __PAIR64__(v65.HighPart, v22.LowPart) == *(_QWORD *)(v28 + 8) )
        {
          v29 = *(_QWORD *)(v23 + 252) - *(_QWORD *)(v28 + 16);
          if ( !v29 )
            v29 = *(_QWORD *)(v23 + 260) - *(_QWORD *)(v28 + 24);
          if ( !v29 )
            break;
        }
        if ( ++v27 >= dword_180195E08 )
          goto LABEL_37;
      }
      v24 = *(volatile signed __int32 **)v28;
      v61 = (CD3DDeviceLevel1 *)v24;
      _InterlockedIncrement(v24 + 100);
      v66 = (struct CD3DDeviceLevel1 *)v24;
      v25 = 0;
    }
LABEL_37:
    if ( v25 < 0 )
    {
      v50 = CD3DDeviceManager::CreateNewDevice(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              (const struct _GUID *)(v23 + 252),
              v22,
              &v66);
      v25 = v50;
      if ( v50 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x73Eu);
      v24 = (volatile signed __int32 *)v66;
      v61 = v66;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v25, 0x301u);
    }
  }
LABEL_38:
  LeaveCriticalSection(&CriticalSection);
  LODWORD(v57) = v25;
  if ( v25 >= 0 )
  {
    v30 = CHwTexturedColorSource::RealizeFromBitmapSource((struct CD3DDeviceLevel1 *)v24, v59, v71, v72, (__int64)&v73);
    v31 = v73;
    v25 = v30;
    LODWORD(v57) = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x39u);
      goto LABEL_51;
    }
    v32 = *(struct CD3DTexture *(__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v73 + 56LL);
    if ( v32 == CHwBitmapColorSource::GetTextureNoRef )
      TextureNoRef = CHwBitmapColorSource::GetTextureNoRef(v73);
    else
      TextureNoRef = v32(v73);
    v59 = TextureNoRef;
    v34 = v71 & 1;
    v35 = *(_QWORD *)TextureNoRef;
    v57 = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(CD3DTexture *))(v35 + 24))(v59) )
    {
      v6 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x203u);
      v25 = -2003292412;
      LODWORD(v57) = -2003292412;
LABEL_114:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x40u);
LABEL_51:
      if ( v31 )
      {
        v38 = *(__int64 (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v31 + 8LL);
        if ( v38 == CHwBitmapColorSource::Release )
          CHwBitmapColorSource::Release(v31);
        else
          v38(v31);
      }
      goto LABEL_54;
    }
    if ( v34 )
    {
      v36 = (char *)v59 + 240;
      if ( !*((_QWORD *)v59 + 30) )
      {
        D2DBitmap = CD3DTexture::CreateD2DBitmap(v59, 1, (struct ID2D1Bitmap1 **)v59 + 30);
        v6 = D2DBitmap;
        if ( D2DBitmap < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x20Au);
LABEL_115:
          v37 = v57;
LABEL_46:
          LODWORD(v57) = v6;
          v25 = v6;
          if ( v6 >= 0 )
          {
            if ( v37 )
            {
              if ( g_LockAndReadTexture )
                CD3DDeviceLevel1::ReadTexture((CD3DDeviceLevel1 *)v24, *((struct ID3D11Texture2D **)v59 + 16));
              *v63 = v37;
            }
            else
            {
              v25 = -2147024882;
              LODWORD(v57) = -2147024882;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
            }
            goto LABEL_51;
          }
          goto LABEL_114;
        }
      }
    }
    else
    {
      v36 = (char *)v59 + 232;
      if ( !*((_QWORD *)v59 + 29) )
      {
        v47 = CD3DTexture::CreateD2DBitmap(v59, 0, (struct ID2D1Bitmap1 **)v59 + 29);
        v6 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x214u);
          goto LABEL_115;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v36 + 8LL))(*(_QWORD *)v36);
    v24 = (volatile signed __int32 *)v61;
    v37 = *(_QWORD *)v36;
    goto LABEL_46;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x31u);
LABEL_54:
  if ( v24 )
  {
    v39 = v24 + 98;
    if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
    {
      v51 = (void (__fastcall ***)(_QWORD, volatile signed __int32 *))*((_QWORD *)v39 + 2);
      if ( v51 )
        (**v51)(*((_QWORD *)v39 + 2), v39);
      else
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v39 + 16LL))(v39, 1LL);
    }
    v25 = v57;
  }
  TranslateDXGIorD3DErrorInContext((unsigned int)v25, 0LL, &v57);
  v9 = v57;
  if ( (int)v57 >= 0 )
    goto LABEL_58;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x23F1u);
LABEL_68:
  if ( v58 )
    (*(void (__fastcall **)(CBitmap *))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v64 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  return v9;
}
