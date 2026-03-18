/*
 * XREFs of ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x180005140 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ImageSourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800057F0 (-ImageSourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x1800691B0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x1800698B8 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006AFA0 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000365C (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800142A8 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180015588 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180032F90 (-GetD2DBitmap@CCachedVisualImage@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRect@IUMil.c)
 *     ?GetSize@CCachedVisualImage@@UEBAXPEAI0@Z @ 0x180033090 (-GetSize@CCachedVisualImage@@UEBAXPEAI0@Z.c)
 *     ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800330B0 (-GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180033D40 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x180033DC0 (-IsProtectedContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?ValidateAdapterLuid@CDXGIEnumeration@@QEBAJU_LUID@@@Z @ 0x180036DA0 (-ValidateAdapterLuid@CDXGIEnumeration@@QEBAJU_LUID@@@Z.c)
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800386BC (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180081174 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x180081EF0 (-Release@CHwBitmapColorSource@@UEAAKXZ.c)
 *     ?GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ @ 0x180081F20 (-GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180085130 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180085190 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800851F0 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800AE9E0 (-GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z @ 0x1800BA1DC (-InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x1800BA360 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ @ 0x18010F230 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180175294 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CDrawingContext::BitmapResourceToD2DBitmap(
        CDrawingContext *this,
        CCachedVisualImage *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // r12
  __int64 result; // rax
  __int64 v9; // r15
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(CCachedVisualImage *, struct IBitmapRealization **); // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(CBitmapResource *__hidden, struct IBitmapSource **, const struct BitmapSourceInfo *); // rax
  int BitmapSource; // eax
  __int64 (__fastcall *v18)(CBitmap *__hidden, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  __int64 (*v20)(void); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  __int64 (*v22)(void); // rax
  enum DXGI_FORMAT ColorSpace; // eax
  __int64 v24; // r15
  CD3DTexture *v25; // rbx
  struct CD3DDeviceLevel1 *v26; // r14
  CBitmap *v27; // rax
  CDisplayManager *v28; // rcx
  int v29; // edi
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // rax
  int v33; // eax
  CHwBitmapColorSource *v34; // rbx
  struct CD3DTexture *(__fastcall *v35)(CHwBitmapColorSource *__hidden); // rax
  CD3DTexture *TextureNoRef; // rax
  char v37; // di
  int v38; // r12d
  __int64 v39; // r15
  char *v40; // rdi
  unsigned int (__fastcall *v41)(CHwBitmapColorSource *__hidden); // rax
  __int64 v42; // rdi
  bool (__fastcall *v43)(CCachedVisualImage *); // rax
  bool IsProtectedContent; // al
  char (__fastcall *v45)(CCachedVisualImage *); // rax
  char IsMonitorSpecificContent; // al
  int v47; // eax
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r9
  __int64 (__fastcall *v51)(struct IBitmapRealization *, __int64, __int64, __int64); // rax
  int D2DBitmap; // eax
  void (__fastcall *v53)(CCachedVisualImage *, unsigned int *, unsigned int *); // rax
  int v54; // eax
  unsigned __int8 IsNormalDesktopRender; // al
  __int64 v56; // r9
  __int64 v57; // r10
  int DXGIEnumeration; // eax
  CDXGIEnumeration *v59; // r12
  int v60; // eax
  unsigned int v61; // r12d
  struct _LUID v62; // rdx
  int v63; // eax
  void (__fastcall ***v64)(_QWORD, char *); // r8
  CMILMatrix *TopByReference; // rax
  unsigned int Rotation; // eax
  const struct CMILMatrix *v67; // rax
  __int64 v68; // rdx
  float v69; // xmm3_4
  float v70; // xmm0_4
  float v71; // xmm1_4
  float v72; // xmm2_4
  int v73; // [rsp+50h] [rbp-B0h] BYREF
  CBitmap *v74; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v75; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v76; // [rsp+68h] [rbp-98h]
  CD3DTexture *v77; // [rsp+70h] [rbp-90h]
  unsigned int v78; // [rsp+78h] [rbp-88h] BYREF
  struct IBitmapRealization *v79; // [rsp+80h] [rbp-80h] BYREF
  struct CD3DDeviceLevel1 *v80; // [rsp+88h] [rbp-78h] BYREF
  __int64 v81; // [rsp+90h] [rbp-70h] BYREF
  __int64 v82; // [rsp+98h] [rbp-68h] BYREF
  struct _LUID v83; // [rsp+A0h] [rbp-60h] BYREF
  int v84; // [rsp+A8h] [rbp-58h]
  int v85; // [rsp+ACh] [rbp-54h]
  int v86; // [rsp+B0h] [rbp-50h]
  __int64 v87; // [rsp+B8h] [rbp-48h]
  struct CDXGIEnumeration *v88; // [rsp+C0h] [rbp-40h] BYREF
  CHwBitmapColorSource *v89; // [rsp+C8h] [rbp-38h] BYREF
  enum DXGI_FORMAT v90[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v91; // [rsp+E0h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v92; // [rsp+E8h] [rbp-18h] BYREF
  CBitmap *v93; // [rsp+F0h] [rbp-10h]
  __int64 v94; // [rsp+F8h] [rbp-8h]
  _BYTE v95[64]; // [rsp+100h] [rbp+0h] BYREF
  int v96; // [rsp+140h] [rbp+40h]
  __int64 v97; // [rsp+150h] [rbp+50h] BYREF
  __int64 v98; // [rsp+158h] [rbp+58h]
  __int128 v99; // [rsp+160h] [rbp+60h] BYREF
  float v100; // [rsp+170h] [rbp+70h] BYREF
  float v101; // [rsp+174h] [rbp+74h]
  float v102; // [rsp+178h] [rbp+78h]
  float v103; // [rsp+17Ch] [rbp+7Ch]
  __int128 v104; // [rsp+180h] [rbp+80h] BYREF

  v6 = a6;
  result = 0LL;
  v94 = a3;
  v9 = a3;
  v76 = a6;
  *a6 = 0LL;
  v81 = 0LL;
  v12 = 0;
  v79 = 0LL;
  v74 = 0LL;
  if ( !a2 || *((_BYTE *)this + 3048) || *((_DWORD *)this + 1621) )
    return result;
  if ( (**(int (__fastcall ***)(CCachedVisualImage *, GUID *, __int64 *))a2)(
         a2,
         &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
         &v81) >= 0 )
  {
    IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(this);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v56 + 160))(v57, 0LL, IsNormalDesktopRender);
  }
  if ( !a5 )
  {
    v13 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct IBitmapRealization **))(*(_QWORD *)a2 + 72LL);
    v14 = v13 == CCachedVisualImage::GetCurrentRenderingRealization
        ? CCachedVisualImage::GetCurrentRenderingRealization(a2, &v79)
        : v13(a2, &v79);
    if ( v14 >= 0 )
    {
      v48 = *((unsigned int *)this + 118);
      v49 = *((_QWORD *)this + 58);
      v50 = *((unsigned int *)this + 1622);
      v51 = *(__int64 (__fastcall **)(struct IBitmapRealization *, __int64, __int64, __int64))(*(_QWORD *)v79 + 104LL);
      if ( (char *)v51 == (char *)CCachedVisualImage::GetD2DBitmap )
        D2DBitmap = CCachedVisualImage::GetD2DBitmap(
                      (__int64)v79,
                      v49,
                      v48,
                      v50,
                      0LL,
                      a4,
                      CCommonRegistryData::m_fEnableHighColor != 0,
                      a6);
      else
        D2DBitmap = v51(v79, v49, v48, v50);
      if ( D2DBitmap >= 0 )
      {
        v53 = *(void (__fastcall **)(CCachedVisualImage *, unsigned int *, unsigned int *))(*(_QWORD *)v79 + 24LL);
        if ( v53 == CCachedVisualImage::GetSize )
          CCachedVisualImage::GetSize(v79, &v78, &v75);
        else
          v53(v79, &v78, &v75);
        *(_QWORD *)&v99 = 0LL;
        *((float *)&v99 + 2) = (float)(int)v78;
        *((float *)&v99 + 3) = (float)(int)v75;
      }
      goto LABEL_58;
    }
  }
  v83 = (struct _LUID)*((_QWORD *)this + 58);
  v84 = *((_DWORD *)this + 118);
  v85 = *((_DWORD *)this + 1622);
  v86 = a4 != 0;
  if ( a5 )
    v86 = (a4 != 0) | 2;
  v15 = *(_QWORD *)a2;
  v87 = a5;
  v16 = *(__int64 (__fastcall **)(CBitmapResource *__hidden, struct IBitmapSource **, const struct BitmapSourceInfo *))(v15 + 64);
  if ( v16 == CBitmapResource::GetBitmapSource )
    BitmapSource = CBitmapResource::GetBitmapSource(a2, &v74, (const struct BitmapSourceInfo *)&v83);
  else
    BitmapSource = v16(a2, &v74, (const struct BitmapSourceInfo *)&v83);
  v12 = BitmapSource;
  if ( BitmapSource < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0x23BAu);
    goto LABEL_69;
  }
  if ( !v74 )
    goto LABEL_58;
  v18 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v74 + 24LL);
  if ( v18 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(v74, v90);
  else
    PixelFormat = v18(v74, v90);
  v12 = PixelFormat;
  if ( PixelFormat < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x23BEu);
    goto LABEL_69;
  }
  v20 = *(__int64 (**)(void))(*(_QWORD *)v74 + 32LL);
  if ( (char *)v20 == (char *)CBitmap::GetAlphaMode )
    AlphaMode = CBitmap::GetAlphaMode(v74);
  else
    AlphaMode = (unsigned int)v20();
  v90[1] = AlphaMode;
  v22 = *(__int64 (**)(void))(*(_QWORD *)v74 + 40LL);
  if ( (char *)v22 == (char *)CBitmap::GetColorSpace )
    ColorSpace = (unsigned int)CBitmap::GetColorSpace(v74);
  else
    ColorSpace = (unsigned int)v22();
  v24 = *((_QWORD *)this + 3);
  v25 = (CD3DTexture *)v83;
  v26 = 0LL;
  v90[2] = ColorSpace;
  v27 = v74;
  v91 = 0LL;
  v89 = 0LL;
  *a6 = 0LL;
  v80 = 0LL;
  v93 = v27;
  v77 = v25;
  EnterCriticalSection(&stru_1801F0028);
  v29 = 0;
  v30 = *(_QWORD *)(v24 + 252) - xmmword_1801F0114;
  if ( !v30 )
    v30 = *(_QWORD *)(v24 + 260) - *((_QWORD *)&xmmword_1801F0114 + 1);
  if ( !v30 )
    v29 = -2003304307;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v29, 0x33Bu);
    goto LABEL_37;
  }
  v29 = 0;
  v88 = 0LL;
  if ( !qword_1801F0058 )
  {
    DXGIEnumeration = CDisplayManager::GetDXGIEnumeration(v28, &v88);
    v59 = v88;
    v29 = DXGIEnumeration;
    if ( DXGIEnumeration < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIEnumeration, 0x164u);
    }
    else
    {
      v60 = CD3DRegistryDatabase::InitializeDriversFromRegistry(v88);
      v29 = v60;
      if ( v60 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0xD2u);
      if ( v29 >= 0 )
      {
        qword_1801F0058 = v59;
        byte_1801F0124 = 1;
        v92 = &stru_1801F0028;
        EnterCriticalSection(&stru_1801F0028);
        v61 = dword_1801F0110;
        if ( dword_1801F0110 )
        {
          do
          {
            v62 = *(struct _LUID *)(qword_1801F00A0 + 40LL * --v61 + 8);
            v82 = 5LL * v61;
            if ( (int)CDXGIEnumeration::ValidateAdapterLuid(qword_1801F0058, v62) < 0 )
              CD3DDeviceLevel1::ProcessUnusable(*(CD3DDeviceLevel1 **)(qword_1801F00A0 + 8 * v82));
          }
          while ( v61 );
        }
        CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v92);
LABEL_112:
        v6 = v76;
        goto LABEL_29;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x169u);
    }
    if ( v59 )
      (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v59 + 8LL))(v59);
    goto LABEL_112;
  }
LABEL_29:
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v29, 0x33Du);
  }
  else
  {
    v31 = 0LL;
    v29 = -2003304307;
    if ( dword_1801F0110 )
    {
      while ( 1 )
      {
        if ( __PAIR64__(HIDWORD(v77), (unsigned int)v25) == *(_QWORD *)(qword_1801F00A0 + 40 * v31 + 8) )
        {
          v32 = *(_QWORD *)(v24 + 252) - *(_QWORD *)(qword_1801F00A0 + 40 * v31 + 16);
          if ( !v32 )
            v32 = *(_QWORD *)(v24 + 260) - *(_QWORD *)(qword_1801F00A0 + 40 * v31 + 24);
          if ( !v32 )
            break;
        }
        v31 = (unsigned int)(v31 + 1);
        if ( (unsigned int)v31 >= dword_1801F0110 )
          goto LABEL_36;
      }
      v26 = *(struct CD3DDeviceLevel1 **)(qword_1801F00A0 + 40 * v31);
      _InterlockedIncrement((volatile signed __int32 *)v26 + 104);
      v80 = v26;
      v29 = 0;
    }
LABEL_36:
    if ( v29 < 0 )
    {
      v63 = CD3DDeviceManager::CreateNewDevice(
              (CDXGIEnumeration **)&g_D3DDeviceManager,
              (const struct _GUID *)(v24 + 252),
              (struct _LUID)v25,
              &v80);
      v29 = v63;
      if ( v63 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x6D4u);
      v26 = v80;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v29, 0x342u);
    }
  }
LABEL_37:
  LeaveCriticalSection(&stru_1801F0028);
  v73 = v29;
  if ( v29 >= 0 )
  {
    v33 = CHwTexturedColorSource::RealizeFromBitmapSource(v26, v93, v86, v87, (__int64)&v89);
    v34 = v89;
    v29 = v33;
    v73 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x37u);
LABEL_50:
      if ( v34 )
      {
        v41 = *(unsigned int (__fastcall **)(CHwBitmapColorSource *__hidden))(*(_QWORD *)v34 + 8LL);
        if ( v41 == CHwBitmapColorSource::Release )
          CHwBitmapColorSource::Release(v34);
        else
          v41(v34);
      }
      goto LABEL_53;
    }
    v35 = *(struct CD3DTexture *(__fastcall **)(CHwBitmapColorSource *__hidden))(*(_QWORD *)v89 + 56LL);
    if ( v35 == CHwBitmapColorSource::GetTextureNoRef )
      TextureNoRef = CHwBitmapColorSource::GetTextureNoRef(v89);
    else
      TextureNoRef = v35(v89);
    v77 = TextureNoRef;
    v37 = v86 & 1;
    v38 = 0;
    v39 = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)TextureNoRef + 24LL))(TextureNoRef) )
    {
      v38 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x211u);
      v29 = -2003292412;
      v73 = -2003292412;
LABEL_122:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x3Eu);
      v6 = v76;
      goto LABEL_50;
    }
    if ( v37 )
    {
      v40 = (char *)v77 + 248;
      if ( !*((_QWORD *)v77 + 31) )
      {
        v47 = CD3DTexture::CreateD2DBitmap(v77, 1, (struct ID2D1Bitmap1 **)v77 + 31);
        v38 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x218u);
          goto LABEL_45;
        }
      }
    }
    else
    {
      v40 = (char *)v77 + 240;
      if ( !*((_QWORD *)v77 + 30) )
      {
        v54 = CD3DTexture::CreateD2DBitmap(v77, 0, (struct ID2D1Bitmap1 **)v77 + 30);
        v38 = v54;
        if ( v54 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x222u);
LABEL_45:
          v73 = v38;
          v29 = v38;
          if ( v38 >= 0 )
          {
            if ( v39 )
            {
              if ( g_LockAndReadTexture )
                CD3DDeviceLevel1::ReadTexture(v26, *((struct ID3D11Texture2D **)v77 + 16));
              v6 = v76;
              *v76 = v39;
            }
            else
            {
              v29 = -2147024882;
              v73 = -2147024882;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Fu);
              v6 = v76;
            }
            goto LABEL_50;
          }
          goto LABEL_122;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v40 + 8LL))(*(_QWORD *)v40);
    v39 = *(_QWORD *)v40;
    goto LABEL_45;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x2Fu);
LABEL_53:
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26 + 104, 0xFFFFFFFF) == 1 )
    {
      v64 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)v26 + 53);
      if ( v64 )
        (**v64)(*((_QWORD *)v26 + 53), (char *)v26 + 408);
      else
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v26 + 51) + 16LL))((__int64)v26 + 408, 1LL);
    }
    v29 = v73;
  }
  TranslateDXGIorD3DErrorInContext((unsigned int)v29, 0LL, &v73);
  v12 = v73;
  if ( v73 >= 0 )
  {
    v9 = v94;
LABEL_58:
    if ( *v6 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v6 + 32LL))(*v6, &v82);
      v42 = v81;
      v43 = *(bool (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)a2 + 32LL);
      *((_QWORD *)&v99 + 1) = v82;
      *(_QWORD *)&v99 = 0LL;
      if ( v43 == CCachedVisualImage::IsProtectedContent )
        IsProtectedContent = CCachedVisualImage::IsProtectedContent(a2);
      else
        IsProtectedContent = v43(a2);
      if ( IsProtectedContent )
        *((_BYTE *)this + 6534) = 1;
      v45 = *(char (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)a2 + 24LL);
      if ( v45 == CCachedVisualImage::IsMonitorSpecificContent )
        IsMonitorSpecificContent = CCachedVisualImage::IsMonitorSpecificContent(a2);
      else
        IsMonitorSpecificContent = v45(a2);
      if ( IsMonitorSpecificContent )
        *((_BYTE *)this + 6536) = 1;
      if ( v42 && CDrawingContext::IsNormalDesktopRender(this) )
      {
        TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
        Rotation = CMILMatrix::GetRotation(TopByReference);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v42 + 168LL))(v42, Rotation);
      }
      if ( *((_BYTE *)this + 6533) )
      {
        if ( *((_DWORD *)this + 1622) == 1 )
        {
          if ( v42 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v42 + 88LL))(v42) )
            {
              v67 = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
              if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v67) )
              {
                v96 = 0;
                CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 536), (struct CMILMatrix *)v95);
                if ( v9 )
                  CMILMatrix::Transform2DBoundsHelper<0>(v9, (__int64)&v99, (float *)&v104);
                else
                  v104 = v99;
                CMILMatrix::Transform2DBoundsHelper<0>((__int64)v95, (__int64)&v104, (float *)&v97);
                LOBYTE(v68) = 1;
                CScopedClipStack::GetTopGpuClipInScope((char *)this + 912, v68, &v100);
                v69 = *(float *)&v97;
                if ( v100 > *(float *)&v97 )
                {
                  v69 = v100;
                  *(float *)&v97 = v100;
                }
                v70 = *((float *)&v97 + 1);
                if ( v101 > *((float *)&v97 + 1) )
                {
                  v70 = v101;
                  *((float *)&v97 + 1) = v101;
                }
                v71 = *(float *)&v98;
                if ( *(float *)&v98 > v102 )
                {
                  v71 = v102;
                  *(float *)&v98 = v102;
                }
                v72 = *((float *)&v98 + 1);
                if ( *((float *)&v98 + 1) > v103 )
                {
                  v72 = v103;
                  *((float *)&v98 + 1) = v103;
                }
                if ( v71 <= v69 || v72 <= v70 )
                {
                  v98 = 0LL;
                  v97 = 0LL;
                }
                if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v97) )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 1623, (float *)&v97);
              }
            }
          }
        }
      }
    }
    goto LABEL_69;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v73, 0x23CBu);
LABEL_69:
  if ( v74 )
    (*(void (__fastcall **)(CBitmap *))(*(_QWORD *)v74 + 16LL))(v74);
  if ( v79 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v79 + 16LL))(v79);
  if ( v81 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
  return v12;
}
