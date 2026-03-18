/*
 * XREFs of ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x180041C60
 * Callers:
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180010A14 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18003FE38 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800427B4 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18011537C (-RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180021270 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x180025F24 (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180025FEC (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x180041AC4 (-DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilComposi.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18004E3D0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180055C30 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1800659B0 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AC040 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::DrawD2DBitmapWithPartialOcclusion(
        __int64 a1,
        struct ID2D1Bitmap1 *a2,
        unsigned int *a3,
        float *a4,
        float a5,
        unsigned int a6,
        int a7)
{
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  unsigned int v12; // xmm3_4
  unsigned int v13; // xmm4_4
  unsigned int v14; // xmm5_4
  unsigned int v15; // xmm6_4
  int v16; // eax
  unsigned int v17; // r14d
  float v18; // xmm11_4
  int v19; // eax
  __int64 v20; // r14
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  CBaseMatrix *v25; // rcx
  unsigned __int64 v26; // rdx
  int v27; // eax
  _DWORD *v28; // rax
  int v29; // xmm1_4
  int v30; // xmm0_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // eax
  CBaseMatrix *v35; // rcx
  CBaseMatrix *v36; // rdx
  int v37; // eax
  CBaseMatrix *v38; // rcx
  float *v39; // rcx
  unsigned int v40; // xmm1_4
  unsigned int v41; // xmm3_4
  float v42; // xmm2_4
  float m21; // xmm1_4
  float dx; // xmm3_4
  float m22; // xmm2_4
  float dy; // xmm0_4
  int v47; // r8d
  int v48; // eax
  __int128 v49; // xmm0
  __int64 v50; // r15
  bool v51; // zf
  bool v52; // r13
  int v53; // eax
  int v54; // ebx
  unsigned int v55; // r10d
  unsigned int v56; // r10d
  int v57; // eax
  CRegionShape *v58; // rbx
  unsigned int i; // r11d
  __int64 v60; // r10
  int v61; // r11d
  int v62; // eax
  int v63; // eax
  enum D2D1_PRIMITIVE_BLEND v64; // edi
  enum D2D1_INTERPOLATION_MODE v65; // eax
  enum D2D1_EXTEND_MODE v66; // edx
  struct ID2D1PrivateCompositorRenderer **v67; // r12
  enum D2D1_ANTIALIAS_MODE v68; // r14d
  __int64 (__fastcall *v69)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, const struct CShape *, struct ID2D1Bitmap1 *, const struct D2D_MATRIX_3X2_F *, FLOAT, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_EXTEND_MODE, enum D2D1_PRIMITIVE_BLEND); // r13
  int v70; // eax
  void *(__fastcall *v71)(CRegionShape *__hidden, unsigned int); // rdi
  int v72; // eax
  char v74; // [rsp+58h] [rbp-B0h] BYREF
  bool v75; // [rsp+59h] [rbp-AFh]
  unsigned int v76; // [rsp+5Ch] [rbp-ACh] BYREF
  struct ID2D1Bitmap1 *v77; // [rsp+60h] [rbp-A8h]
  CRegionShape *v78; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v79[6]; // [rsp+70h] [rbp-98h] BYREF
  __int128 *v80; // [rsp+88h] [rbp-80h]
  __int128 v81; // [rsp+90h] [rbp-78h] BYREF
  __int128 v82; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v83; // [rsp+B0h] [rbp-58h] BYREF
  struct D2D_MATRIX_3X2_F v84; // [rsp+C0h] [rbp-48h] BYREF
  struct D2D_MATRIX_3X2_F v85; // [rsp+D8h] [rbp-30h] BYREF
  float v86; // [rsp+F0h] [rbp-18h]
  float v87; // [rsp+F4h] [rbp-14h]
  _QWORD v88[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v89[16]; // [rsp+118h] [rbp+10h] BYREF
  char v90; // [rsp+128h] [rbp+20h] BYREF
  char v91; // [rsp+138h] [rbp+30h] BYREF
  char v92; // [rsp+148h] [rbp+40h] BYREF

  v7 = *a4;
  v8 = a4[1];
  v10 = a4[2];
  v11 = a4[3];
  v12 = *a3;
  v13 = a3[1];
  v14 = a3[2];
  v15 = a3[3];
  v16 = *(_DWORD *)(a1 + 2584);
  *(float *)&v83 = *a4;
  *(_QWORD *)((char *)&v83 + 4) = __PAIR64__(LODWORD(v10), LODWORD(v8));
  *((float *)&v83 + 3) = v11;
  *(_QWORD *)&v84.m11 = __PAIR64__(v13, v12);
  *(_QWORD *)&v84.m[1][0] = __PAIR64__(v15, v14);
  v80 = (__int128 *)a3;
  v77 = a2;
  v78 = 0LL;
  if ( !v16 )
  {
    v17 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x77Fu);
    return v17;
  }
  v17 = 0;
  v18 = a5;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(*(_QWORD *)(a1 + 2600)
                                                                   + 4LL * (unsigned int)(v16 - 1))
                                                        - 1.0)) & _xmm) >= 0.0000011920929 )
    v18 = a5 * *(float *)(*(_QWORD *)(a1 + 2600) + 4LL * (unsigned int)(v16 - 1));
  if ( a7 == 2 )
  {
    *(_QWORD *)&v83 = __PAIR64__(v13, v12);
    *((_QWORD *)&v83 + 1) = __PAIR64__(v15, v14);
    *(_QWORD *)&v82 = __PAIR64__(LODWORD(v8), LODWORD(v7));
    v19 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
    v17 = v19;
    if ( v19 >= 0 )
    {
      v20 = a1 + 56;
      if ( !a1 )
        v20 = 0LL;
      v21 = D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 244));
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID2D1Bitmap1 *, __int128 *, __int128 *, float, int, bool, int))(**(_QWORD **)(a1 + 376) + 104LL))(
              *(_QWORD *)(a1 + 376),
              v20,
              v77,
              &v83,
              &v82,
              COERCE_FLOAT(LODWORD(v18)),
              12,
              *(_DWORD *)(a1 + 248) != 0,
              v21);
      v17 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x7A0u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x797u);
    }
    return v17;
  }
  if ( *(_DWORD *)(a1 + 488) )
  {
    v23 = *(_DWORD *)(a1 + 488);
    if ( v23 )
    {
      if ( *(_BYTE *)((unsigned int)(v23 - 1) + *(_QWORD *)(a1 + 504)) )
        goto LABEL_114;
    }
  }
  v24 = *(_DWORD *)(a1 + 456);
  v25 = v24
      ? (CBaseMatrix *)(*(_QWORD *)(a1 + 472) + ((unsigned __int64)(unsigned int)(v24 - 1) << 6))
      : (CBaseMatrix *)&IdentityMatrix;
  if ( !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(v25) )
    goto LABEL_114;
  v27 = *(_DWORD *)(a1 + 456);
  v28 = (_DWORD *)(v27 ? *(_QWORD *)(a1 + 472) + ((unsigned __int64)(unsigned int)(v27 - 1) << 6) : v26);
  v29 = v28[1];
  v79[0] = *v28;
  v30 = v28[4];
  v79[1] = v29;
  v31 = v28[5];
  v79[2] = v30;
  v32 = v28[12];
  v79[3] = v31;
  v33 = v28[13];
  v88[0] = v89;
  v88[1] = &v90;
  v88[2] = &v91;
  v88[3] = &v92;
  v34 = *(_DWORD *)(a1 + 456);
  v79[4] = v32;
  v79[5] = v33;
  v76 = 0;
  v35 = (CBaseMatrix *)(v34 ? *(_QWORD *)(a1 + 472) + ((unsigned __int64)(unsigned int)(v34 - 1) << 6) : v26);
  if ( !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(v35) )
    goto LABEL_114;
  v37 = *(_DWORD *)(a1 + 456);
  if ( v37 )
    v38 = (CBaseMatrix *)(*(_QWORD *)(a1 + 472) + ((unsigned __int64)(unsigned int)(v37 - 1) << 6));
  else
    v38 = v36;
  *(_QWORD *)&v81 = __PAIR64__(LODWORD(v8), LODWORD(v7));
  *((_QWORD *)&v81 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v10));
  if ( CBaseMatrix::IsExactlyPureTranslate(v38) )
  {
    *(float *)&v40 = v39[13] + v8;
    *(float *)&v41 = v39[12] + v10;
    v42 = v39[13] + v11;
    *(float *)&v81 = v39[12] + v7;
    *(_QWORD *)((char *)&v81 + 4) = __PAIR64__(v41, v40);
    *((float *)&v81 + 3) = v42;
  }
  else
  {
    CBaseMatrix::Transform2DRectToPerspective(
      (CBaseMatrix *)v39,
      (const struct MilRectF *)&v81,
      (struct MilPoint2F *const)&v85);
    m21 = v85.m21;
    *(_QWORD *)&v81 = *(_QWORD *)&v85.m11;
    *(_QWORD *)&v82 = *(_QWORD *)&v85.m11;
    if ( v85.m11 <= v85.m21 )
      LODWORD(dx) = v82;
    else
      dx = v85.m21;
    m22 = *((float *)&v82 + 1);
    if ( *((float *)&v82 + 1) > v85.m22 )
      m22 = v85.m22;
    if ( v85.m21 <= v85.m11 )
      LODWORD(m21) = v81;
    dy = *((float *)&v81 + 1);
    if ( v85.m22 > *((float *)&v81 + 1) )
      dy = v85.m22;
    if ( dx > v85.dx )
      dx = v85.dx;
    if ( m22 > v85.dy )
      m22 = v85.dy;
    if ( v85.dx > m21 )
      m21 = v85.dx;
    if ( v85.dy > dy )
      dy = v85.dy;
    if ( dx > v86 )
      dx = v86;
    if ( m22 > v87 )
      m22 = v87;
    if ( v86 > m21 )
      m21 = v86;
    if ( v87 > dy )
      dy = v87;
    *(_QWORD *)&v81 = __PAIR64__(LODWORD(m22), LODWORD(dx));
    *((_QWORD *)&v81 + 1) = __PAIR64__(LODWORD(dy), LODWORD(m21));
  }
  v47 = *(_DWORD *)(a1 + 704);
  if ( !v47 || !*(_DWORD *)(76LL * (unsigned int)(v47 - 1) + *(_QWORD *)(a1 + 680) + 4) || !*(_DWORD *)(a1 + 2552) )
  {
    v49 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    goto LABEL_63;
  }
  v48 = *(_DWORD *)(a1 + 2552);
  if ( v48 )
  {
    v49 = *(_OWORD *)(*(_QWORD *)(a1 + 2568) + 16LL * (unsigned int)(v48 - 1));
LABEL_63:
    v82 = v49;
  }
  if ( v47 && *(_DWORD *)(76LL * (unsigned int)(v47 - 1) + *(_QWORD *)(a1 + 680) + 8) )
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
      (__int64)&v82,
      104LL * (unsigned int)(*(_DWORD *)(a1 + 1496) - 1) + *(_QWORD *)(a1 + 1472) + 80LL);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v81, (__int64)&v82);
  if ( *((float *)&v81 + 2) > *(float *)&v81 && *((float *)&v81 + 3) > *((float *)&v81 + 1) )
  {
    if ( *(_BYTE *)(a1 + 5967) )
    {
      v50 = *(_QWORD *)(a1 + 5776);
      if ( v50 )
      {
        v51 = *(_BYTE *)(a1 + 5640) == 0;
        v74 = 0;
        v75 = v51;
        if ( *(_BYTE *)(v50 + 520) && v51 )
          COcclusionContext::DeviceRectToPageInPixelsRect(v50, &v81, &v82);
        else
          v82 = v81;
        v52 = (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)(v50 + 524))
           && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v50 + 524)) & _xmm) < 0.00012207031
           && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v50 + 544)) & _xmm) < 0.00012207031;
        v53 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, bool, char *, _QWORD *, unsigned int *))(**(_QWORD **)(v50 + 96) + 48LL))(
                *(_QWORD *)(v50 + 96),
                &v82,
                a6,
                v52,
                &v74,
                v88,
                &v76);
        v54 = v53;
        if ( v53 >= 0 )
        {
          if ( *(_BYTE *)(v50 + 520) && v75 )
          {
            v55 = v76;
            for ( i = 0; i < v76; v55 = v76 )
            {
              v81 = *(_OWORD *)v88[i];
              CBaseMatrix::Transform2DBounds(
                (CBaseMatrix *)(v50 + 524),
                (const struct MilRectF *)&v81,
                (struct MilRectF *)&v85);
              i = v61 + 1;
              *(_OWORD *)v88[v60] = *(_OWORD *)&v85.m11;
            }
LABEL_83:
            if ( v54 >= 0 && v74 )
            {
              if ( v55 )
              {
                MILMatrix3x2::InferAffineMatrix((__int64)&v85, &v84.m11, (float *)&v83);
                MILMatrix3x2::SetProduct(
                  (MILMatrix3x2 *)&v84,
                  (const struct MILMatrix3x2 *)&v85,
                  (const struct MILMatrix3x2 *)v79);
                v57 = CShape::BuildFromRectFs(v89, v56, &v78);
                v58 = v78;
                v17 = v57;
                if ( v57 >= 0 )
                {
                  v62 = CDrawingContext::PushTransformInternal(
                          (CDrawingContext *)a1,
                          0LL,
                          (const struct CMILMatrix *)&IdentityMatrix,
                          0,
                          1);
                  v17 = v62;
                  if ( v62 >= 0 )
                  {
                    v63 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
                    v17 = v63;
                    if ( v63 >= 0 )
                    {
                      v64 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
                      if ( a7 )
                      {
                        if ( a7 == 1 )
                        {
                          v64 = D2D1_PRIMITIVE_BLEND_COPY;
                        }
                        else if ( a7 == 4 )
                        {
                          v64 = D2D1_PRIMITIVE_BLEND_MIN;
                        }
                      }
                      v65 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 244));
                      v67 = *(struct ID2D1PrivateCompositorRenderer ***)(a1 + 376);
                      v68 = D2D1_ANTIALIAS_MODE_ALIASED;
                      if ( *(_DWORD *)(a1 + 248) == v66 )
                        v68 = v66;
                      v85 = v84;
                      LODWORD(v82) = v65;
                      v69 = (__int64 (__fastcall *)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, const struct CShape *, struct ID2D1Bitmap1 *, const struct D2D_MATRIX_3X2_F *, FLOAT, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_EXTEND_MODE, enum D2D1_PRIMITIVE_BLEND))*((_QWORD *)*v67 + 16);
                      if ( v69 == CD2DContext::FillShapeWithBitmap )
                        v70 = CD2DContext::FillShapeWithBitmap(
                                v67,
                                (const struct ID2DContextOwner *)(a1 + 56),
                                v58,
                                v77,
                                &v85,
                                v18,
                                v68,
                                v65,
                                v66,
                                v64);
                      else
                        v70 = ((__int64 (__fastcall *)(struct ID2D1PrivateCompositorRenderer **, __int64, CRegionShape *, struct ID2D1Bitmap1 *, struct D2D_MATRIX_3X2_F *, _DWORD, enum D2D1_ANTIALIAS_MODE, _DWORD, _DWORD, enum D2D1_PRIMITIVE_BLEND))v69)(
                                v67,
                                a1 + 56,
                                v58,
                                v77,
                                &v85,
                                LODWORD(v18),
                                v68,
                                v82,
                                0,
                                v64);
                      v17 = v70;
                      if ( v70 < 0 )
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, 0x7EBu);
                    }
                    else
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x7DCu);
                    }
                    CDrawingContext::PopTransformInternal((CDrawingContext *)a1, 1);
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x7D9u);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x7D0u);
                }
                if ( v58 )
                {
                  v71 = **(void *(__fastcall ***)(CRegionShape *__hidden, unsigned int))v58;
                  if ( v71 == CRegionShape::`vector deleting destructor' )
                    CRegionShape::`vector deleting destructor'(v58, 1u);
                  else
                    v71(v58, 1u);
                }
              }
              return v17;
            }
            goto LABEL_114;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x362u);
        }
        v55 = v76;
        goto LABEL_83;
      }
    }
LABEL_114:
    v72 = CDrawingContext::DrawD2DBitmapInternal(a1, v77, v80, &v83, v18, a7);
    v17 = v72;
    if ( v72 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0x801u);
  }
  return v17;
}
