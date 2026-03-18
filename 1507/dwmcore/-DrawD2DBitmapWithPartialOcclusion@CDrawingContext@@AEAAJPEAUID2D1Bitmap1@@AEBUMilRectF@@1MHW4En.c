/*
 * XREFs of ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002C9D0
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18002D438 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FB5A8 (-RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FC388 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18001FDAC (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180022410 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x18002C874 (-DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilComposi.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18004D720 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18005B580 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x18005C220 (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C2E8 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071DB0 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800786E0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@IEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x180097AB0 (-GetD2DInterpolationMode@CDrawingContext@@IEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawD2DBitmapWithPartialOcclusion(
        __int64 a1,
        struct ID2D1Bitmap1 *a2,
        unsigned int *a3,
        float *a4,
        float a5,
        int a6,
        int a7)
{
  float v7; // xmm9_4
  float v8; // xmm8_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  unsigned int v12; // xmm3_4
  unsigned int v13; // xmm4_4
  unsigned int v14; // xmm5_4
  unsigned int v15; // xmm10_4
  int v16; // eax
  float v17; // xmm12_4
  float v18; // xmm2_4
  int v19; // eax
  int v20; // eax
  CBaseMatrix *v21; // rcx
  int v22; // edx
  float *v23; // rcx
  float v24; // xmm1_4
  float v25; // xmm1_4
  int v26; // eax
  _DWORD *v27; // rax
  int v28; // xmm1_4
  int v29; // xmm0_4
  int v30; // xmm1_4
  int v31; // xmm0_4
  int v32; // xmm1_4
  int v33; // eax
  CBaseMatrix *v34; // rcx
  float *v35; // rcx
  float v36; // xmm1_4
  float v37; // xmm1_4
  int v38; // eax
  CBaseMatrix *v39; // rcx
  float *v40; // rcx
  float dx; // xmm9_4
  float m22; // xmm8_4
  float m21; // xmm7_4
  float dy; // xmm6_4
  int v45; // r8d
  int v46; // eax
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  __int64 v51; // rdi
  bool v52; // zf
  char v53; // r13
  bool v54; // r12
  __int64 v55; // rsi
  __int64 (__fastcall *v56)(_DWORD, _DWORD, int, bool, __int64, __int64, __int64); // r15
  int v57; // eax
  int v58; // esi
  unsigned int i; // eax
  int v60; // eax
  unsigned int v61; // esi
  unsigned int v63; // eax
  int v64; // eax
  CRegionShape *v65; // rdi
  int v66; // eax
  int v67; // eax
  enum D2D1_PRIMITIVE_BLEND v68; // esi
  enum D2D1_EXTEND_MODE v69; // r8d
  enum D2D1_INTERPOLATION_MODE v70; // r12d
  CD2DContext *v71; // r15
  enum D2D1_ANTIALIAS_MODE v72; // r14d
  __int64 (__usercall *v73)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct CShape *@<r8>, struct ID2D1Bitmap1 *@<r9>, const struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_EXTEND_MODE, enum D2D1_PRIMITIVE_BLEND); // r13
  int v74; // eax
  void *(__fastcall *v75)(CRegionShape *__hidden, unsigned int); // rbx
  unsigned int v76; // r11d
  int v77; // eax
  __int64 v78; // r14
  __int64 v79; // rsi
  BOOL v80; // r15d
  enum D2D1_INTERPOLATION_MODE D2DInterpolationMode; // eax
  __int64 v82; // r9
  int v83; // eax
  float v84; // xmm1_4
  float v85; // xmm1_4
  float v86; // xmm1_4
  float v87; // xmm1_4
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // r10
  int v91; // r11d
  int v92; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v93; // [rsp+5Ch] [rbp-ACh] BYREF
  _DWORD v94[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Bitmap1 *v95; // [rsp+68h] [rbp-A0h]
  CRegionShape *v96; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v97[6]; // [rsp+78h] [rbp-90h] BYREF
  __int128 *v98; // [rsp+90h] [rbp-78h]
  __int128 v99; // [rsp+98h] [rbp-70h] BYREF
  __int128 v100; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v101; // [rsp+B8h] [rbp-50h] BYREF
  struct D2D_MATRIX_3X2_F v102; // [rsp+C8h] [rbp-40h] BYREF
  struct D2D_MATRIX_3X2_F v103; // [rsp+E0h] [rbp-28h] BYREF
  float v104; // [rsp+F8h] [rbp-10h]
  float v105; // [rsp+FCh] [rbp-Ch]
  _QWORD v106[5]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v107[16]; // [rsp+128h] [rbp+20h] BYREF
  char v108; // [rsp+138h] [rbp+30h] BYREF
  char v109; // [rsp+148h] [rbp+40h] BYREF
  char v110; // [rsp+158h] [rbp+50h] BYREF

  v7 = *a4;
  v8 = a4[1];
  v10 = a4[2];
  v11 = a4[3];
  v12 = *a3;
  v13 = a3[1];
  v14 = a3[2];
  v15 = a3[3];
  v16 = *(_DWORD *)(a1 + 2584);
  *(float *)&v101 = *a4;
  *(_QWORD *)((char *)&v101 + 4) = __PAIR64__(LODWORD(v10), LODWORD(v8));
  *((float *)&v101 + 3) = v11;
  *(_QWORD *)&v102.m11 = __PAIR64__(v13, v12);
  *(_QWORD *)&v102.m[1][0] = __PAIR64__(v15, v14);
  v98 = (__int128 *)a3;
  v95 = a2;
  v96 = 0LL;
  if ( !v16 )
  {
    v61 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x778u);
    return v61;
  }
  v17 = a5;
  v18 = *(float *)(*(_QWORD *)(a1 + 2600) + 4LL * (unsigned int)(v16 - 1));
  v94[0] = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18 - 1.0)) & _xmm) >= 0.0000011920929 )
    v17 = a5 * v18;
  if ( a7 == 2 )
  {
    *(_QWORD *)&v101 = __PAIR64__(v13, v12);
    *((_QWORD *)&v101 + 1) = __PAIR64__(v15, v14);
    *(float *)v94 = v7;
    *(float *)&v94[1] = v8;
    v77 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
    v61 = v77;
    if ( v77 >= 0 )
    {
      v78 = a1 + 56;
      if ( !a1 )
        v78 = 0LL;
      v79 = *(_QWORD *)(a1 + 376);
      v80 = *(_DWORD *)(a1 + 248) != 0;
      D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode((CDrawingContext *)a1);
      v83 = (*(__int64 (__fastcall **)(__int64, __int64, struct ID2D1Bitmap1 *, __int128 *, _DWORD *, float, int, BOOL, enum D2D1_INTERPOLATION_MODE))(v82 + 104))(
              v79,
              v78,
              v95,
              &v101,
              v94,
              COERCE_FLOAT(LODWORD(v17)),
              12,
              v80,
              D2DInterpolationMode);
      v61 = v83;
      if ( v83 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0x799u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x790u);
    }
    return v61;
  }
  if ( *(_DWORD *)(a1 + 488) )
  {
    v19 = *(_DWORD *)(a1 + 488);
    if ( v19 )
    {
      if ( *(_BYTE *)((unsigned int)(v19 - 1) + *(_QWORD *)(a1 + 504)) )
        goto LABEL_58;
    }
  }
  v20 = *(_DWORD *)(a1 + 456);
  v21 = v20
      ? (CBaseMatrix *)(*(_QWORD *)(a1 + 472) + ((unsigned __int64)(unsigned int)(v20 - 1) << 6))
      : (CBaseMatrix *)&IdentityMatrix;
  if ( !(unsigned int)CBaseMatrix::Is2DAffine(v21, 1) )
    goto LABEL_58;
  v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v23[1]) & _xmm);
  if ( v24 >= 0.00012207031 || (v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v23[4]) & _xmm), v25 >= 0.00012207031) )
  {
    v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v23) & _xmm);
    if ( v84 >= 0.00012207031 )
      goto LABEL_58;
    v85 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v23[5]) & _xmm);
    if ( v85 >= 0.00012207031 )
      goto LABEL_58;
  }
  v26 = *(_DWORD *)(a1 + 456);
  v27 = v26 ? (_DWORD *)(*(_QWORD *)(a1 + 472) + ((unsigned __int64)(unsigned int)(v26 - 1) << 6)) : &IdentityMatrix;
  v28 = v27[1];
  v97[0] = *v27;
  v29 = v27[4];
  v97[1] = v28;
  v30 = v27[5];
  v97[2] = v29;
  v31 = v27[12];
  v97[3] = v30;
  v32 = v27[13];
  v106[0] = v107;
  v106[1] = &v108;
  v106[2] = &v109;
  v106[3] = &v110;
  v33 = *(_DWORD *)(a1 + 456);
  v97[4] = v31;
  v97[5] = v32;
  v93 = 0;
  v34 = v33
      ? (CBaseMatrix *)(*(_QWORD *)(a1 + 472) + ((unsigned __int64)(unsigned int)(v33 - 1) << 6))
      : (CBaseMatrix *)&IdentityMatrix;
  if ( !(unsigned int)CBaseMatrix::Is2DAffine(v34, v22) )
    goto LABEL_58;
  v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v35[1]) & _xmm);
  if ( v36 >= 0.00012207031 || (v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v35[4]) & _xmm), v37 >= 0.00012207031) )
  {
    v86 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v35) & _xmm);
    if ( v86 >= 0.00012207031 )
      goto LABEL_58;
    v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v35[5]) & _xmm);
    if ( v87 >= 0.00012207031 )
      goto LABEL_58;
  }
  v38 = *(_DWORD *)(a1 + 456);
  if ( v38 )
    v39 = (CBaseMatrix *)(*(_QWORD *)(a1 + 472) + ((unsigned __int64)(unsigned int)(v38 - 1) << 6));
  else
    v39 = (CBaseMatrix *)&IdentityMatrix;
  *(_QWORD *)&v99 = __PAIR64__(LODWORD(v8), LODWORD(v7));
  *((_QWORD *)&v99 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v10));
  if ( CBaseMatrix::IsExactlyPureTranslate(v39) )
  {
    dx = v7 + v40[12];
    m22 = v8 + v40[13];
    m21 = v10 + v40[12];
    dy = v11 + v40[13];
  }
  else
  {
    CBaseMatrix::Transform2DRectToPerspective(
      (CBaseMatrix *)v40,
      (const struct MilRectF *)&v99,
      (struct MilPoint2F *const)&v103);
    m21 = v103.m21;
    *(_QWORD *)&v99 = *(_QWORD *)&v103.m11;
    *(_QWORD *)&v100 = *(_QWORD *)&v103.m11;
    if ( v103.m11 > v103.m21 )
      dx = v103.m21;
    else
      LODWORD(dx) = v100;
    m22 = *((float *)&v100 + 1);
    if ( *((float *)&v100 + 1) > v103.m22 )
      m22 = v103.m22;
    if ( v103.m21 <= v103.m11 )
      LODWORD(m21) = v99;
    dy = *((float *)&v99 + 1);
    if ( v103.m22 > *((float *)&v99 + 1) )
      dy = v103.m22;
    if ( dx > v103.dx )
      dx = v103.dx;
    if ( m22 > v103.dy )
      m22 = v103.dy;
    if ( v103.dx > m21 )
      m21 = v103.dx;
    if ( v103.dy > dy )
      dy = v103.dy;
    if ( dx > v104 )
      dx = v104;
    if ( m22 > v105 )
      m22 = v105;
    if ( v104 > m21 )
      m21 = v104;
    if ( v105 > dy )
      dy = v105;
  }
  v45 = *(_DWORD *)(a1 + 704);
  *((_QWORD *)&v99 + 1) = __PAIR64__(LODWORD(dy), LODWORD(m21));
  *(_QWORD *)&v99 = __PAIR64__(LODWORD(m22), LODWORD(dx));
  if ( v45 && *(_DWORD *)(76LL * (unsigned int)(v45 - 1) + *(_QWORD *)(a1 + 680) + 4) && *(_DWORD *)(a1 + 2552) )
  {
    v46 = *(_DWORD *)(a1 + 2552);
    if ( v46 )
      v100 = *(_OWORD *)(*(_QWORD *)(a1 + 2568) + 16LL * (unsigned int)(v46 - 1));
    v47 = *((float *)&v100 + 3);
    v48 = *((float *)&v100 + 2);
    v49 = *((float *)&v100 + 1);
    v50 = *(float *)&v100;
  }
  else
  {
    v47 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v48 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v49 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v50 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v45 && *(_DWORD *)(76LL * (unsigned int)(v45 - 1) + *(_QWORD *)(a1 + 680) + 8) )
  {
    v88 = 104LL * (unsigned int)(*(_DWORD *)(a1 + 1496) - 1);
    v89 = *(_QWORD *)(a1 + 1472);
    if ( *(float *)(v88 + v89 + 80) > v50 )
      v50 = *(float *)(v88 + v89 + 80);
    if ( *(float *)(v88 + v89 + 84) > v49 )
      v49 = *(float *)(v88 + v89 + 84);
    if ( v48 > *(float *)(v88 + v89 + 88) )
      v48 = *(float *)(v88 + v89 + 88);
    if ( v47 > *(float *)(v88 + v89 + 92) )
      v47 = *(float *)(v88 + v89 + 92);
    if ( v48 <= v50 || v47 <= v49 )
    {
      v50 = 0.0;
      v47 = 0.0;
      v48 = 0.0;
      v49 = 0.0;
    }
  }
  if ( v50 > dx )
  {
    dx = v50;
    *(float *)&v99 = v50;
  }
  if ( v49 > m22 )
  {
    m22 = v49;
    *((float *)&v99 + 1) = v49;
  }
  if ( m21 > v48 )
  {
    m21 = v48;
    *((float *)&v99 + 2) = v48;
  }
  if ( dy > v47 )
  {
    dy = v47;
    *((float *)&v99 + 3) = v47;
  }
  if ( m21 <= dx || dy <= m22 )
    return 0;
  if ( !*(_BYTE *)(a1 + 5931) )
    goto LABEL_58;
  v51 = *(_QWORD *)(a1 + 5744);
  if ( !v51 )
    goto LABEL_58;
  v52 = *(_BYTE *)(a1 + 5608) == 0;
  LOBYTE(v92) = 0;
  v53 = v52;
  if ( *(_BYTE *)(v51 + 520) && v53 )
  {
    COcclusionContext::DeviceRectToPageInPixelsRect(v51, (const struct MilRectF *)&v99, &v100);
  }
  else
  {
    *(_QWORD *)&v100 = __PAIR64__(LODWORD(m22), LODWORD(dx));
    *((_QWORD *)&v100 + 1) = __PAIR64__(LODWORD(dy), LODWORD(m21));
  }
  v54 = (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)(v51 + 524))
     && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v51 + 524)) & _xmm) < 0.00012207031
     && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v51 + 544)) & _xmm) < 0.00012207031;
  v55 = *(_QWORD *)(v51 + 96);
  v56 = *(__int64 (__fastcall **)(_DWORD, _DWORD, int, bool, __int64, __int64, __int64))(*(_QWORD *)v55 + 48LL);
  if ( (char *)v56 == (char *)CArrayBasedCoverageSet::ComputeVisibleRegion )
    v57 = CArrayBasedCoverageSet::ComputeVisibleRegion(
            v55,
            (unsigned int)&v100,
            a6,
            v54,
            (__int64)&v92,
            (__int64)v106,
            (__int64)&v93);
  else
    v57 = v56(v55, &v100, a6, v54, (__int64)&v92, (__int64)v106, (__int64)&v93);
  v58 = v57;
  if ( v57 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x34Eu);
  }
  else if ( *(_BYTE *)(v51 + 520) && v53 )
  {
    v76 = 0;
    for ( i = v93; v76 < v93; i = v93 )
    {
      v99 = *(_OWORD *)v106[v76];
      CBaseMatrix::Transform2DBounds(
        (CBaseMatrix *)(v51 + 524),
        (const struct MilRectF *)&v99,
        (struct MilRectF *)&v103);
      v76 = v91 + 1;
      *(_OWORD *)v106[v90] = *(_OWORD *)&v103.m11;
    }
    goto LABEL_56;
  }
  i = v93;
LABEL_56:
  if ( v58 < 0 || !(_BYTE)v92 )
  {
LABEL_58:
    v60 = CDrawingContext::DrawD2DBitmapInternal(a1, v95, v98, &v101, v17, a7);
    v61 = v60;
    if ( v60 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x7FAu);
    return v61;
  }
  if ( i )
  {
    MILMatrix3x2::InferAffineMatrix(&v103, &v102, &v101);
    MILMatrix3x2::SetProduct(
      (MILMatrix3x2 *)&v102,
      (const struct MILMatrix3x2 *)&v103,
      (const struct MILMatrix3x2 *)v97);
    v64 = CShape::BuildFromRectFs(v107, v63, &v96);
    v65 = v96;
    v61 = v64;
    if ( v64 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0x7C9u);
    }
    else
    {
      v66 = CDrawingContext::PushTransformInternal(
              (CDrawingContext *)a1,
              0LL,
              (const struct CMILMatrix *)&IdentityMatrix,
              0,
              1);
      v61 = v66;
      if ( v66 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x7D2u);
      }
      else
      {
        v67 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
        v61 = v67;
        if ( v67 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x7D5u);
        }
        else
        {
          v68 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
          if ( a7 )
          {
            if ( a7 == 1 )
            {
              v68 = D2D1_PRIMITIVE_BLEND_COPY;
            }
            else if ( a7 == 4 )
            {
              v68 = D2D1_PRIMITIVE_BLEND_MIN;
            }
          }
          v70 = CDrawingContext::GetD2DInterpolationMode((CDrawingContext *)a1);
          v71 = *(CD2DContext **)(a1 + 376);
          v72 = D2D1_ANTIALIAS_MODE_ALIASED;
          if ( *(_DWORD *)(a1 + 248) == v69 )
            v72 = v69;
          v103 = v102;
          v73 = *(__int64 (__usercall **)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct CShape *@<r8>, struct ID2D1Bitmap1 *@<r9>, const struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_EXTEND_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v71 + 128LL);
          if ( v73 == CD2DContext::FillShapeWithBitmap )
            v74 = CD2DContext::FillShapeWithBitmap(
                    v71,
                    (const struct ID2DContextOwner *)(a1 + 56),
                    v65,
                    v95,
                    &v103,
                    v17,
                    v72,
                    v70,
                    v69,
                    v68);
          else
            v74 = ((__int64 (__fastcall *)(CD2DContext *, __int64, CRegionShape *, struct ID2D1Bitmap1 *, struct D2D_MATRIX_3X2_F *, _DWORD, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, _DWORD, enum D2D1_PRIMITIVE_BLEND))v73)(
                    v71,
                    a1 + 56,
                    v65,
                    v95,
                    &v103,
                    LODWORD(v17),
                    v72,
                    v70,
                    0,
                    v68);
          v61 = v74;
          if ( v74 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0x7E4u);
        }
        CDrawingContext::PopTransformInternal((CDrawingContext *)a1, 1);
      }
    }
    if ( v65 )
    {
      v75 = **(void *(__fastcall ***)(CRegionShape *__hidden, unsigned int))v65;
      if ( v75 == CRegionShape::`vector deleting destructor' )
        CRegionShape::`vector deleting destructor'(v65, 1u);
      else
        v75(v65, 1u);
    }
  }
  else
  {
    return v94[0];
  }
  return v61;
}
