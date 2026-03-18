/*
 * XREFs of ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x180081B58
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x1800820A4 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 * Callees:
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetColorSpace@CHwDisplayRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x180044590 (-GetColorSpace@CHwDisplayRenderTarget@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071910 (-FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 *     ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800719D0 (-FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18007824C (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800785F0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z @ 0x180080DC4 (-GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV2@@Z @ 0x1800816B0 (-IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV-$TMilRect_@HUtagRECT@@UMilPo.c)
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x180083294 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ?SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800833D8 (-SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?GetD2DBrush@CHwSolidBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800840C0 (-GetD2DBrush@CHwSolidBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x1800842F0 (-Release@CHwBitmapBrush@@UEAAKXZ.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180084350 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ?CleanupReferences@CHwBitmapBrush@@UEAAXXZ @ 0x1800845C0 (-CleanupReferences@CHwBitmapBrush@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     floor_0 @ 0x180099B72 (floor_0.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::FillPathWithBrush(
        __int64 a1,
        CD2DContext *a2,
        struct ID2DContextOwner *a3,
        float *a4,
        CShape *a5,
        CBaseMatrix *a6,
        float *a7,
        struct CMILBrush *a8,
        __int64 a9,
        float *a10,
        int a11)
{
  float v11; // xmm0_4
  unsigned int v15; // edi
  struct IBitmapSource *v16; // r14
  int v17; // eax
  float v18; // xmm0_4
  int v19; // eax
  float v20; // xmm0_4
  int v21; // eax
  float v22; // xmm0_4
  const struct MilRectF *v23; // rcx
  __int64 v24; // rax
  float *v25; // rax
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  int v28; // eax
  __int64 (__fastcall *v29)(__int64); // rbx
  unsigned int ColorSpace; // eax
  __int64 v31; // rdx
  __int64 (__fastcall *v32)(CHwBitmapBrush *, __int64, _QWORD, struct ID2D1Brush **); // rbx
  int D2DBrush; // eax
  struct ID2DContextOwner *v34; // r13
  __int64 (__fastcall *v35)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rbx
  int D2DGeometry; // eax
  enum D2D1_PRIMITIVE_BLEND v37; // ebx
  enum D2D1_ANTIALIAS_MODE v38; // edi
  __int64 (__fastcall *v39)(CD2DContext *, const struct ID2DContextOwner *, const struct ID2D1Geometry *, struct ID2D1Brush *, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND); // r12
  int v40; // eax
  CHwBitmapBrush *v41; // rbx
  void (__fastcall *v42)(CHwBitmapBrush *__hidden); // rsi
  unsigned int (__fastcall *v43)(CHwBitmapBrush *__hidden); // rsi
  int Bitmap; // eax
  enum D2D1_PRIMITIVE_BLEND v46; // ebx
  enum D2D1_ANTIALIAS_MODE v47; // edi
  __int64 (__fastcall *v48)(CD2DContext *, struct ID2DContextOwner *, __int64, unsigned int, __int64, __int64, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND); // r12
  int v49; // eax
  int v50; // r9d
  unsigned int v51; // [rsp+28h] [rbp-E0h]
  struct ID2D1Brush *v52; // [rsp+48h] [rbp-C0h] BYREF
  CHwBitmapBrush *v53; // [rsp+50h] [rbp-B8h] BYREF
  struct IBitmapSource *v54; // [rsp+58h] [rbp-B0h] BYREF
  CBaseMatrix *v55; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v56; // [rsp+68h] [rbp-A0h] BYREF
  float *v57; // [rsp+70h] [rbp-98h]
  __int64 v58; // [rsp+78h] [rbp-90h] BYREF
  struct ID2DContextOwner *v59; // [rsp+80h] [rbp-88h]
  __int128 v60; // [rsp+88h] [rbp-80h] BYREF
  __int128 v61; // [rsp+98h] [rbp-70h] BYREF
  int v62[4]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v63[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v64; // [rsp+C8h] [rbp-40h]
  __int64 v65; // [rsp+D8h] [rbp-30h]
  int v66; // [rsp+E0h] [rbp-28h]
  int v67; // [rsp+E4h] [rbp-24h]
  __int64 v68; // [rsp+F8h] [rbp-10h]

  v11 = a4[18];
  v55 = a6;
  *(_QWORD *)&v60 = a7;
  v57 = a4;
  v15 = 0;
  v59 = a3;
  v16 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  v17 = (int)floor_0((float)(v11 * 16.0) + 0.5);
  v18 = a4[19];
  LODWORD(v61) = (v17 + 7) >> 4;
  v19 = (int)floor_0((float)(v18 * 16.0) + 0.5);
  v20 = a4[20];
  DWORD1(v61) = (v19 + 7) >> 4;
  v21 = (int)floor_0((float)(v20 * 16.0) + 0.5);
  v22 = a4[21];
  DWORD2(v61) = (v21 + 7) >> 4;
  HIDWORD(v61) = ((int)floor_0((float)(v22 * 16.0) + 0.5) + 7) >> 4;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a7) )
  {
    v60 = 0uLL;
  }
  else if ( v55 )
  {
    CBaseMatrix::Transform2DBounds(v55, v23, (struct MilRectF *)&v60);
  }
  else
  {
    v60 = *(_OWORD *)v23;
  }
  if ( !IntersectAliasedBoundsRectFWithSurfaceRect((float *)&v60, &v61, v62) )
    goto LABEL_26;
  v24 = *(_QWORD *)a8;
  *(_QWORD *)&v60 = 0LL;
  v55 = (CBaseMatrix *)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  if ( (*(unsigned int (__fastcall **)(struct CMILBrush *))(v24 + 24))(a8) != 3 )
    goto LABEL_6;
  Bitmap = CMILBrushBitmap::GetBitmap((struct CMILBrush *)((char *)a8 - 24), &v54);
  v15 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Bitmap, 0x12Eu);
    v16 = v54;
    goto LABEL_26;
  }
  v16 = v54;
  if ( *((_DWORD *)v57 + 43) == 6 )
  {
    *(_QWORD *)&v60 = &v55;
    v28 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, struct IBitmapSource **))(*(_QWORD *)v54 + 56LL))(
            v54,
            &v58,
            &v54);
    v15 = v28;
    if ( v28 < 0 )
    {
      v51 = 317;
LABEL_58:
      v50 = v28;
LABEL_75:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, v51);
      goto LABEL_26;
    }
    v25 = a10;
    *(float *)&v55 = 1.0 / (float)((float)(int)v58 * *a10);
    *((float *)&v55 + 1) = 1.0 / (float)((float)(int)v54 * a10[5]);
  }
  else
  {
LABEL_6:
    v25 = a10;
  }
  v26 = *(_OWORD *)((char *)a8 + 8);
  v63[1] = v25;
  v27 = *((_QWORD *)a8 + 3);
  v66 = *(_DWORD *)(a1 + 112);
  v63[0] = v57;
  v68 = v60;
  v64 = v26;
  v65 = v27;
  v67 = 1;
  CHwBrushContext::SetDeviceRenderingAndSamplingBounds(v63, v62);
  v28 = CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
          (CHwSurfaceRenderTargetSharedData *)(*(_QWORD *)(a1 + 160) + 416LL),
          a8,
          (const struct CHwBrushContext *)v63,
          &v53);
  v15 = v28;
  if ( v28 < 0 )
  {
    v51 = 352;
    goto LABEL_58;
  }
  v29 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
  if ( v29 == CHwDisplayRenderTarget::GetColorSpace )
    ColorSpace = CHwDisplayRenderTarget::GetColorSpace(a1);
  else
    ColorSpace = v29(a1);
  v32 = *(__int64 (__fastcall **)(CHwBitmapBrush *, __int64, _QWORD, struct ID2D1Brush **))(*(_QWORD *)v53 + 16LL);
  if ( (char *)v32 == (char *)CHwSolidBrush::GetD2DBrush )
  {
    D2DBrush = CHwSolidBrush::GetD2DBrush(v53, v31, ColorSpace, &v52);
  }
  else if ( (char *)v32 == (char *)CHwBitmapBrush::GetD2DBrush )
  {
    D2DBrush = CHwBitmapBrush::GetD2DBrush(v53, v31, ColorSpace, &v52);
  }
  else
  {
    D2DBrush = v32(v53, v31, ColorSpace, &v52);
  }
  v15 = D2DBrush;
  if ( D2DBrush < 0 )
  {
    v51 = 354;
    goto LABEL_74;
  }
  if ( CShape::IsEmpty(a5) )
    goto LABEL_26;
  v34 = v59;
  if ( g_LockAndReadFillPathSurface )
    (*(void (__fastcall **)(__int64, CD2DContext *, struct ID2DContextOwner *))(*(_QWORD *)a1 + 168LL))(a1, a2, v59);
  if ( !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a5 + 8LL))(a5) )
  {
    v46 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
    v61 = *(_OWORD *)((char *)a5 + 8);
    if ( a11 )
    {
      if ( a11 == 1 )
      {
        v46 = D2D1_PRIMITIVE_BLEND_COPY;
      }
      else if ( a11 == 4 )
      {
        v46 = D2D1_PRIMITIVE_BLEND_MIN;
      }
    }
    v47 = *((_DWORD *)v57 + 44) != 0;
    v48 = *(__int64 (__fastcall **)(CD2DContext *, struct ID2DContextOwner *, __int64, unsigned int, __int64, __int64, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)a2 + 144LL);
    if ( v48 == CD2DContext::FillRectangles )
      v49 = CD2DContext::FillRectangles(a2, v34, (__int64)&v61, 1u, (__int64)v52, (__int64)v62, v47, v46);
    else
      v49 = v48(a2, v34, (__int64)&v61, 1u, (__int64)v52, (__int64)v62, v47, v46);
    v15 = v49;
    if ( v49 >= 0 )
      goto LABEL_24;
    v51 = 383;
LABEL_74:
    v50 = v15;
    goto LABEL_75;
  }
  v35 = *(__int64 (__fastcall **)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a5 + 16LL);
  if ( v35 == CRegionShape::GetD2DGeometry )
    D2DGeometry = CRegionShape::GetD2DGeometry(a5, 0LL, &v56);
  else
    D2DGeometry = v35(a5, 0LL, &v56);
  v15 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v51 = 387;
    goto LABEL_74;
  }
  v37 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  if ( a11 )
  {
    if ( a11 == 1 )
    {
      v37 = D2D1_PRIMITIVE_BLEND_COPY;
    }
    else if ( a11 == 4 )
    {
      v37 = D2D1_PRIMITIVE_BLEND_MIN;
    }
  }
  v38 = *((_DWORD *)v57 + 44) != 0;
  v39 = *(__int64 (__fastcall **)(CD2DContext *, const struct ID2DContextOwner *, const struct ID2D1Geometry *, struct ID2D1Brush *, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)a2 + 136LL);
  if ( v39 == CD2DContext::FillShape )
    v40 = CD2DContext::FillShape(a2, v34, v56, v52, v38, v37);
  else
    v40 = v39(a2, v34, v56, v52, v38, v37);
  v15 = v40;
  if ( v40 < 0 )
  {
    v51 = 393;
    goto LABEL_74;
  }
LABEL_24:
  if ( g_LockAndReadFillPathSurface )
    (*(void (__fastcall **)(__int64, CD2DContext *, struct ID2DContextOwner *))(*(_QWORD *)a1 + 168LL))(a1, a2, v34);
LABEL_26:
  v41 = v53;
  if ( v53 )
  {
    v42 = *(void (__fastcall **)(CHwBitmapBrush *__hidden))(*(_QWORD *)v53 + 24LL);
    if ( v42 == CHwBitmapBrush::CleanupReferences )
      CHwBitmapBrush::CleanupReferences(v53);
    else
      v42(v53);
    v41 = v53;
  }
  if ( v56 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v56 + 16LL))(v56);
    v41 = v53;
  }
  if ( v41 )
  {
    v43 = *(unsigned int (__fastcall **)(CHwBitmapBrush *__hidden))(*(_QWORD *)v41 + 8LL);
    if ( v43 == CHwBitmapBrush::Release )
      CHwBitmapBrush::Release(v41);
    else
      v43(v41);
  }
  if ( v16 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v16 + 16LL))(v16);
  return v15;
}
