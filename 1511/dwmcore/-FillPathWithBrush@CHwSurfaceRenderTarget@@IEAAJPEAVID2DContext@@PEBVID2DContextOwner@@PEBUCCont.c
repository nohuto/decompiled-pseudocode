/*
 * XREFs of ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008CA30
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008D1B4 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180020D20 (-FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 *     ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180020DE0 (-FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?GetD2DBrush@CHwSolidBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180027490 (-GetD2DBrush@CHwSolidBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18002BBB8 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x18002BF10 (-Release@CHwBitmapBrush@@UEAAKXZ.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18002BF80 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ?CleanupReferences@CHwBitmapBrush@@UEAAXXZ @ 0x18002C1F0 (-CleanupReferences@CHwBitmapBrush@@UEAAXXZ.c)
 *     ?GetColorSpace@CHwTextureRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x18002C630 (-GetColorSpace@CHwTextureRenderTarget@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18004DE74 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18004E2D0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetColorSpace@CHwDisplayRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x180080110 (-GetColorSpace@CHwDisplayRenderTarget@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z @ 0x180089B94 (-GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV2@@Z @ 0x18008D6E8 (-IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV-$TMilRect_@HUtagRECT@@UMilPo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800AD5B0 (-SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     floor_0 @ 0x1800BC872 (floor_0.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::FillPathWithBrush(
        __int64 a1,
        struct ID2D1PrivateCompositorRenderer **a2,
        struct ID2DContextOwner *a3,
        __int64 a4,
        CShape *a5,
        float *a6,
        __int128 *a7,
        struct CMILBrush *a8,
        FLOAT a9,
        float *a10,
        int a11)
{
  float v11; // xmm0_4
  unsigned int v14; // edi
  struct IBitmapSource *v15; // r14
  int v16; // eax
  float v17; // xmm0_4
  unsigned int v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  CBaseMatrix *v21; // rcx
  float v22; // xmm4_4
  float v23; // xmm5_4
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm3_4
  float v26; // xmm2_4
  struct CMILBrush *v27; // r13
  int Bitmap; // eax
  float *v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  int v32; // eax
  __int64 (__fastcall *v33)(__int64); // rbx
  unsigned int ColorSpace; // eax
  __int64 v35; // rdx
  __int64 (__fastcall *v36)(CHwBitmapBrush *, __int64, _QWORD, struct ID2D1Brush **); // rdi
  int D2DBrush; // eax
  struct ID2DContextOwner *v38; // r13
  enum D2D1_PRIMITIVE_BLEND v39; // ebx
  enum D2D1_ANTIALIAS_MODE v40; // edi
  __int64 (__fastcall *v41)(struct ID2D1PrivateCompositorRenderer **, struct ID2DContextOwner *, __int64, unsigned int, __int64, __int64, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND); // r12
  int v42; // eax
  CHwBitmapBrush *v43; // rbx
  void (__fastcall *v44)(CHwBitmapBrush *); // rsi
  __int64 (__fastcall *v45)(CHwBitmapBrush *); // rsi
  __int64 (__fastcall *v47)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rbx
  int D2DGeometry; // eax
  enum D2D1_PRIMITIVE_BLEND v49; // ebx
  enum D2D1_ANTIALIAS_MODE v50; // edi
  __int64 (__fastcall *v51)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, const struct ID2D1Geometry *, struct ID2D1Brush *, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND); // r12
  int v52; // eax
  float *v53; // rax
  __int64 v54; // rcx
  float v55; // xmm4_4
  float v56; // xmm5_4
  float v57; // xmm3_4
  float v58; // xmm0_4
  int v59; // r9d
  unsigned int v60; // [rsp+20h] [rbp-E0h]
  struct ID2D1Brush *v61; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+50h] [rbp-B0h] BYREF
  struct IBitmapSource *v64; // [rsp+58h] [rbp-A8h] BYREF
  CHwBitmapBrush *v65; // [rsp+60h] [rbp-A0h] BYREF
  struct ID2D1Geometry *v66; // [rsp+68h] [rbp-98h] BYREF
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  struct ID2DContextOwner *v68; // [rsp+78h] [rbp-88h]
  struct CMILBrush *v69; // [rsp+80h] [rbp-80h]
  __int128 v70; // [rsp+88h] [rbp-78h] BYREF
  __int128 v71; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v72[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v73; // [rsp+C0h] [rbp-40h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  int v75; // [rsp+D8h] [rbp-28h]
  int v76; // [rsp+DCh] [rbp-24h]
  __int64 v77; // [rsp+F0h] [rbp-10h]
  __int64 v78; // [rsp+100h] [rbp+0h] BYREF
  char v79; // [rsp+10Ch] [rbp+Ch] BYREF

  v11 = *(float *)(a4 + 72);
  v69 = a8;
  v62 = a4;
  v14 = 0;
  v68 = a3;
  v15 = 0LL;
  v61 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v66 = 0LL;
  v16 = (int)floor_0((float)(v11 * 16.0) + 0.5);
  v17 = *(float *)(v62 + 76);
  LODWORD(v71) = (v16 + 7) >> 4;
  DWORD1(v71) = ((int)floor_0((float)(v17 * 16.0) + 0.5) + 7) >> 4;
  DWORD2(v71) = ((int)floor_0((float)(*(float *)(v62 + 80) * 16.0) + 0.5) + 7) >> 4;
  HIDWORD(v71) = ((int)floor_0((float)(*(float *)(v62 + 84) * 16.0) + 0.5) + 7) >> 4;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a7) )
  {
    v70 = 0uLL;
  }
  else if ( a6 )
  {
    v18 = *((_DWORD *)a7 + 1);
    v19 = *((float *)a7 + 2);
    v20 = *((float *)a7 + 3);
    LODWORD(v70) = *(_DWORD *)a7;
    *(_QWORD *)((char *)&v70 + 4) = __PAIR64__(LODWORD(v19), v18);
    *((float *)&v70 + 3) = v20;
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)a6) )
    {
      *(float *)&v24 = a6[13] + v23;
      *(float *)&v25 = a6[12] + v19;
      v26 = a6[13] + v20;
      *(float *)&v70 = a6[12] + v22;
      *(_QWORD *)((char *)&v70 + 4) = __PAIR64__(v25, v24);
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(v21, (const struct MilRectF *)&v70, (struct MilPoint2F *const)&v78);
      v53 = (float *)&v79;
      v63 = v78;
      v54 = 3LL;
      v26 = *((float *)&v78 + 1);
      v55 = *(float *)&v78;
      v67 = v78;
      v56 = *((float *)&v78 + 1);
      LODWORD(v57) = v78;
      do
      {
        v58 = *(v53 - 1);
        if ( v57 > v58 )
          v57 = *(v53 - 1);
        if ( v56 > *v53 )
          v56 = *v53;
        if ( v58 > v55 )
          v55 = *(v53 - 1);
        if ( *v53 > v26 )
          v26 = *v53;
        v53 += 2;
        --v54;
      }
      while ( v54 );
      *(_QWORD *)&v70 = __PAIR64__(LODWORD(v56), LODWORD(v57));
      *((float *)&v70 + 2) = v55;
    }
    *((float *)&v70 + 3) = v26;
  }
  else
  {
    v70 = *a7;
  }
  if ( (unsigned __int8)IntersectAliasedBoundsRectFWithSurfaceRect(&v70, &v71, &v78) )
  {
    v27 = v69;
    *(_QWORD *)&v70 = 0LL;
    v63 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    if ( (*(unsigned int (__fastcall **)(struct CMILBrush *))(*(_QWORD *)v69 + 24LL))(v69) != 3 )
      goto LABEL_10;
    Bitmap = CMILBrushBitmap::GetBitmap((struct CMILBrush *)((char *)v69 - 24), &v64);
    v14 = Bitmap;
    if ( Bitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bitmap, 0x12Eu);
      v15 = v64;
      goto LABEL_27;
    }
    v15 = v64;
    if ( *(_DWORD *)(v62 + 172) == 6 )
    {
      *(_QWORD *)&v70 = &v63;
      v32 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, struct IBitmapSource **))(*(_QWORD *)v64 + 56LL))(
              v64,
              &v67,
              &v64);
      v14 = v32;
      if ( v32 < 0 )
      {
        v60 = 317;
        goto LABEL_76;
      }
      v29 = a10;
      *(float *)&v63 = 1.0 / (float)((float)(int)v67 * *a10);
      *((float *)&v63 + 1) = 1.0 / (float)((float)(int)v64 * a10[5]);
    }
    else
    {
LABEL_10:
      v29 = a10;
    }
    v30 = *(_OWORD *)((char *)v27 + 8);
    v72[1] = v29;
    v31 = *((_QWORD *)v27 + 3);
    v75 = *(_DWORD *)(a1 + 112);
    v72[0] = v62;
    v77 = v70;
    v73 = v30;
    v74 = v31;
    v76 = 1;
    CHwBrushContext::SetDeviceRenderingAndSamplingBounds(v72, &v78);
    v32 = CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
            (CHwSurfaceRenderTargetSharedData *)(*(_QWORD *)(a1 + 160) + 408LL),
            v27,
            (const struct CHwBrushContext *)v72,
            &v65);
    v14 = v32;
    if ( v32 >= 0 )
    {
      v33 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
      if ( v33 == CHwDisplayRenderTarget::GetColorSpace )
      {
        ColorSpace = CHwDisplayRenderTarget::GetColorSpace(a1);
      }
      else if ( v33 == CHwTextureRenderTarget::GetColorSpace )
      {
        ColorSpace = CHwTextureRenderTarget::GetColorSpace(a1);
      }
      else
      {
        ColorSpace = v33(a1);
      }
      v36 = *(__int64 (__fastcall **)(CHwBitmapBrush *, __int64, _QWORD, struct ID2D1Brush **))(*(_QWORD *)v65 + 16LL);
      if ( (char *)v36 == (char *)CHwBitmapBrush::GetD2DBrush )
      {
        D2DBrush = CHwBitmapBrush::GetD2DBrush((CD2DContext **)v65, a9, ColorSpace, &v61);
      }
      else if ( (char *)v36 == (char *)CHwSolidBrush::GetD2DBrush )
      {
        D2DBrush = CHwSolidBrush::GetD2DBrush((const __m128i *)v65, a9, ColorSpace, &v61);
      }
      else
      {
        D2DBrush = v36(v65, v35, ColorSpace, &v61);
      }
      v14 = D2DBrush;
      if ( D2DBrush < 0 )
      {
        v60 = 354;
      }
      else
      {
        if ( (unsigned __int8)CShape::IsEmpty(a5) )
          goto LABEL_27;
        v38 = v68;
        if ( g_LockAndReadFillPathSurface )
          (*(void (__fastcall **)(__int64, struct ID2D1PrivateCompositorRenderer **, struct ID2DContextOwner *))(*(_QWORD *)a1 + 168LL))(
            a1,
            a2,
            v68);
        if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a5 + 8LL))(a5) )
        {
          v47 = *(__int64 (__fastcall **)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a5 + 16LL);
          if ( v47 == CRegionShape::GetD2DGeometry )
            D2DGeometry = CRegionShape::GetD2DGeometry(a5, 0LL, &v66);
          else
            D2DGeometry = v47(a5, 0LL, &v66);
          v14 = D2DGeometry;
          if ( D2DGeometry < 0 )
          {
            v60 = 387;
          }
          else
          {
            v49 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
            if ( a11 )
            {
              if ( a11 == 1 )
              {
                v49 = D2D1_PRIMITIVE_BLEND_COPY;
              }
              else if ( a11 == 4 )
              {
                v49 = D2D1_PRIMITIVE_BLEND_MIN;
              }
            }
            v50 = *(_DWORD *)(v62 + 176) != 0;
            v51 = (__int64 (__fastcall *)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, const struct ID2D1Geometry *, struct ID2D1Brush *, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND))*((_QWORD *)*a2 + 17);
            if ( v51 == CD2DContext::FillShape )
              v52 = CD2DContext::FillShape(a2, v38, v66, v61, v50, v49);
            else
              v52 = v51(a2, v38, v66, v61, v50, v49);
            v14 = v52;
            if ( v52 >= 0 )
              goto LABEL_25;
            v60 = 393;
          }
        }
        else
        {
          v39 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
          v71 = *(_OWORD *)((char *)a5 + 8);
          if ( a11 )
          {
            if ( a11 == 1 )
            {
              v39 = D2D1_PRIMITIVE_BLEND_COPY;
            }
            else if ( a11 == 4 )
            {
              v39 = D2D1_PRIMITIVE_BLEND_MIN;
            }
          }
          v40 = *(_DWORD *)(v62 + 176) != 0;
          v41 = (__int64 (__fastcall *)(struct ID2D1PrivateCompositorRenderer **, struct ID2DContextOwner *, __int64, unsigned int, __int64, __int64, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND))*((_QWORD *)*a2 + 18);
          if ( v41 == CD2DContext::FillRectangles )
            v42 = CD2DContext::FillRectangles(a2, v38, (__int64)&v71, 1u, (__int64)v61, (__int64)&v78, v40, v39);
          else
            v42 = v41(a2, v38, (__int64)&v71, 1u, (__int64)v61, (__int64)&v78, v40, v39);
          v14 = v42;
          if ( v42 >= 0 )
          {
LABEL_25:
            if ( g_LockAndReadFillPathSurface )
              (*(void (__fastcall **)(__int64, struct ID2D1PrivateCompositorRenderer **, struct ID2DContextOwner *))(*(_QWORD *)a1 + 168LL))(
                a1,
                a2,
                v38);
            goto LABEL_27;
          }
          v60 = 383;
        }
      }
      v59 = v14;
LABEL_89:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, v60);
      goto LABEL_27;
    }
    v60 = 352;
LABEL_76:
    v59 = v32;
    goto LABEL_89;
  }
LABEL_27:
  v43 = v65;
  if ( v65 )
  {
    v44 = *(void (__fastcall **)(CHwBitmapBrush *))(*(_QWORD *)v65 + 24LL);
    if ( v44 == CHwBitmapBrush::CleanupReferences )
      CHwBitmapBrush::CleanupReferences(v65);
    else
      v44(v65);
    v43 = v65;
  }
  if ( v66 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v66 + 16LL))(v66);
    v43 = v65;
  }
  if ( v43 )
  {
    v45 = *(__int64 (__fastcall **)(CHwBitmapBrush *))(*(_QWORD *)v43 + 8LL);
    if ( v45 == CHwBitmapBrush::Release )
      CHwBitmapBrush::Release(v43);
    else
      v45(v43);
  }
  if ( v15 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v15 + 16LL))(v15);
  return v14;
}
