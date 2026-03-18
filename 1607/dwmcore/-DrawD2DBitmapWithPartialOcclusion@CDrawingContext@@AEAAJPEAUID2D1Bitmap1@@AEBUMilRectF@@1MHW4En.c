/*
 * XREFs of ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006A680
 * Callers:
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180012A44 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x1800698B8 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006AFA0 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18012EEB0 (-RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18004B090 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A580 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18005C80C (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x18006A530 (-DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilComposi.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D350 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x18009C828 (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18009C8F0 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1800A2C98 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF478 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawD2DBitmapWithPartialOcclusion(
        __int64 a1,
        struct ID2D1Bitmap1 *a2,
        _DWORD *a3,
        int *a4,
        float a5,
        unsigned __int32 a6,
        int a7)
{
  int v7; // xmm3_4
  int v8; // xmm4_4
  __int64 v9; // r15
  int v10; // xmm0_4
  int v12; // xmm1_4
  int v14; // xmm5_4
  int v15; // xmm6_4
  int v16; // xmm7_4
  int v17; // xmm8_4
  int v18; // eax
  unsigned int v19; // r12d
  float v20; // xmm10_4
  int v21; // eax
  int v22; // eax
  void *v23; // rcx
  char v24; // dl
  float *v25; // rcx
  float v26; // xmm1_4
  float v27; // xmm1_4
  int v28; // eax
  void *v29; // rax
  unsigned int v30; // xmm1_4
  FLOAT v31; // xmm1_4
  int v32; // eax
  void *v33; // rcx
  float *v34; // rcx
  float v35; // xmm1_4
  float v36; // xmm1_4
  int v37; // eax
  void *v38; // rcx
  __int64 v39; // r9
  int v40; // r8d
  int v41; // eax
  float v42; // xmm5_4
  float v43; // xmm4_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm3_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  __int64 v50; // rbx
  char v51; // cl
  char v52; // al
  __int64 v53; // rcx
  __int64 (__fastcall *v54)(__int64, float *, __int32, char, int *, __int64, unsigned int *); // rax
  int v55; // eax
  int v56; // esi
  unsigned int v57; // eax
  int v58; // eax
  unsigned int v60; // eax
  int v61; // eax
  CRegionShape *v62; // rbx
  int v63; // eax
  int v64; // eax
  __int64 v65; // rdx
  enum D2D1_PRIMITIVE_BLEND v66; // edx
  enum D2D1_INTERPOLATION_MODE v67; // r9d
  CD2DContext *v68; // rcx
  __int64 (__usercall *v69)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct CShape *@<r8>, struct ID2D1Bitmap1 *@<r9>, const struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_EXTEND_MODE, enum D2D1_PRIMITIVE_BLEND); // rax
  int v70; // eax
  CRegionShape *(__fastcall *v71)(CRegionShape *, char); // rax
  __int64 i; // r15
  char v73; // dl
  char v74; // al
  enum D2D1_ANTIALIAS_MODE v75; // r8d
  int v76; // eax
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rdx
  int v80; // eax
  float v81; // xmm1_4
  float v82; // xmm1_4
  float v83; // xmm1_4
  float v84; // xmm1_4
  __int64 v85; // rcx
  __int64 v86; // rax
  _OWORD *v87; // rax
  int v88; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v89; // [rsp+6Ch] [rbp-9Ch] BYREF
  _DWORD v90[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v91; // [rsp+78h] [rbp-90h]
  CRegionShape *v92; // [rsp+80h] [rbp-88h] BYREF
  __int128 v93; // [rsp+88h] [rbp-80h] BYREF
  float v94[6]; // [rsp+98h] [rbp-70h] BYREF
  int v95; // [rsp+B0h] [rbp-58h] BYREF
  int v96; // [rsp+B4h] [rbp-54h]
  int v97; // [rsp+B8h] [rbp-50h]
  int v98; // [rsp+BCh] [rbp-4Ch]
  struct D2D_MATRIX_3X2_F v99; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v100[4]; // [rsp+D8h] [rbp-30h] BYREF
  struct D2D_MATRIX_3X2_F v101; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v102[5]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v103[16]; // [rsp+128h] [rbp+20h] BYREF
  char v104; // [rsp+138h] [rbp+30h] BYREF
  char v105; // [rsp+148h] [rbp+40h] BYREF
  char v106; // [rsp+158h] [rbp+50h] BYREF

  v7 = *a4;
  v8 = a4[1];
  v9 = (__int64)a3;
  v10 = a4[2];
  v12 = a4[3];
  v14 = *a3;
  v15 = a3[1];
  v16 = a3[2];
  v17 = a3[3];
  v18 = *(_DWORD *)(a1 + 3016);
  v95 = *a4;
  v96 = v8;
  v97 = v10;
  v98 = v12;
  v100[0] = v14;
  v100[1] = v15;
  v100[2] = v16;
  v100[3] = v17;
  v91 = a3;
  v92 = 0LL;
  if ( !v18 )
  {
    v19 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x77Cu);
    return v19;
  }
  v19 = 0;
  v20 = a5;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(*(_QWORD *)(a1 + 3032)
                                                                   + 4LL * (unsigned int)(v18 - 1))
                                                        - 1.0)) & _xmm) >= 0.0000011920929 )
    v20 = a5 * *(float *)(*(_QWORD *)(a1 + 3032) + 4LL * (unsigned int)(v18 - 1));
  if ( a7 == 2 )
  {
    v95 = v14;
    v96 = v15;
    v97 = v16;
    v98 = v17;
    v90[0] = v7;
    v90[1] = v8;
    v76 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
    v19 = v76;
    if ( v76 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x794u);
    }
    else
    {
      v77 = a1 + 128;
      if ( !a1 )
        v77 = 0LL;
      v78 = D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 324), v77);
      v80 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID2D1Bitmap1 *, int *, _DWORD *, float, int, bool, int))(**(_QWORD **)(a1 + 456) + 104LL))(
              *(_QWORD *)(a1 + 456),
              v79,
              a2,
              &v95,
              v90,
              COERCE_FLOAT(LODWORD(v20)),
              12,
              *(_DWORD *)(a1 + 328) != 0,
              v78);
      v19 = v80;
      if ( v80 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v80, 0x79Du);
    }
    return v19;
  }
  if ( *(_DWORD *)(a1 + 568) )
  {
    v21 = *(_DWORD *)(a1 + 568);
    if ( v21 )
    {
      if ( *(_BYTE *)((unsigned int)(v21 - 1) + *(_QWORD *)(a1 + 584)) )
        goto LABEL_53;
    }
  }
  v22 = *(_DWORD *)(a1 + 536);
  v23 = v22 ? (void *)(*(_QWORD *)(a1 + 552) + 68LL * (unsigned int)(v22 - 1)) : &CMILMatrix::Identity;
  if ( !CMILMatrix::Is2DAffine<1>((__int64)v23, 1)
    || (v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25[1] - 0.0)) & _xmm), v26 >= 0.00012207031)
    || (v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25[4] - 0.0)) & _xmm), v27 >= 0.00012207031) )
  {
    v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v25 - 0.0)) & _xmm);
    if ( v81 >= 0.00012207031 )
      goto LABEL_53;
    v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25[5] - 0.0)) & _xmm);
    if ( v82 >= 0.00012207031 )
      goto LABEL_53;
  }
  v28 = *(_DWORD *)(a1 + 536);
  v29 = v28 ? (void *)(*(_QWORD *)(a1 + 552) + 68LL * (unsigned int)(v28 - 1)) : &CMILMatrix::Identity;
  v30 = *((_DWORD *)v29 + 1);
  v99.m11 = *(FLOAT *)v29;
  *(_QWORD *)&v99.m[0][1] = __PAIR64__(*((_DWORD *)v29 + 4), v30);
  *(_QWORD *)&v99.m[1][1] = __PAIR64__(*((_DWORD *)v29 + 12), *((_DWORD *)v29 + 5));
  v31 = *((float *)v29 + 13);
  v102[0] = v103;
  v102[1] = &v104;
  v102[2] = &v105;
  v102[3] = &v106;
  v32 = *(_DWORD *)(a1 + 536);
  v99.dy = v31;
  v89 = 0;
  v33 = v32 ? (void *)(*(_QWORD *)(a1 + 552) + 68LL * (unsigned int)(v32 - 1)) : &CMILMatrix::Identity;
  if ( !CMILMatrix::Is2DAffine<1>((__int64)v33, v24)
    || (v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v34[1] - 0.0)) & _xmm), v35 >= 0.00012207031)
    || (v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v34[4] - 0.0)) & _xmm), v36 >= 0.00012207031) )
  {
    v83 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v34 - 0.0)) & _xmm);
    if ( v83 >= 0.00012207031 )
      goto LABEL_53;
    v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v34[5] - 0.0)) & _xmm);
    if ( v84 >= 0.00012207031 )
      goto LABEL_53;
  }
  v37 = *(_DWORD *)(a1 + 536);
  if ( v37 )
    v38 = (void *)(*(_QWORD *)(a1 + 552) + 68LL * (unsigned int)(v37 - 1));
  else
    v38 = &CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v38, (__int64)&v95, (float *)&v93);
  v40 = *(_DWORD *)(a1 + 936);
  if ( v40 && *(_DWORD *)(80LL * (unsigned int)(v40 - 1) + *(_QWORD *)(a1 + 912) + 4) && *(_DWORD *)(a1 + 2984) )
  {
    v41 = *(_DWORD *)(a1 + 2984);
    if ( v41 )
      *(_OWORD *)v94 = *(_OWORD *)(16LL * (unsigned int)(v41 - 1) + *(_QWORD *)(a1 + 3000));
    v42 = v94[3];
    v43 = v94[2];
    v44 = v94[1];
    v45 = v94[0];
  }
  else
  {
    v42 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v43 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v44 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v45 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v40 && *(_DWORD *)(80LL * (unsigned int)(v40 - 1) + *(_QWORD *)(a1 + 912) + 8) )
  {
    v85 = 120LL * (unsigned int)(*(_DWORD *)(a1 + 1768) - 1);
    v86 = *(_QWORD *)(a1 + 1744);
    if ( *(float *)(v85 + v86 + 96) > v45 )
      v45 = *(float *)(v85 + v86 + 96);
    if ( *(float *)(v85 + v86 + 100) > v44 )
      v44 = *(float *)(v85 + v86 + 100);
    if ( v43 > *(float *)(v85 + v86 + 104) )
      v43 = *(float *)(v85 + v86 + 104);
    if ( v42 > *(float *)(v85 + v86 + 108) )
      v42 = *(float *)(v85 + v86 + 108);
    if ( v43 <= v45 || v42 <= v44 )
    {
      v42 = 0.0;
      v43 = 0.0;
      v44 = 0.0;
      v45 = 0.0;
    }
  }
  LODWORD(v46) = v93;
  if ( v45 > *(float *)&v93 )
  {
    v46 = v45;
    *(float *)&v93 = v45;
  }
  v47 = *((float *)&v93 + 1);
  if ( v44 > *((float *)&v93 + 1) )
  {
    v47 = v44;
    *((float *)&v93 + 1) = v44;
  }
  v48 = *((float *)&v93 + 2);
  if ( *((float *)&v93 + 2) > v43 )
  {
    v48 = v43;
    *((float *)&v93 + 2) = v43;
  }
  v49 = *((float *)&v93 + 3);
  if ( *((float *)&v93 + 3) > v42 )
  {
    v49 = v42;
    *((float *)&v93 + 3) = v42;
  }
  if ( v48 <= v46 || v49 <= v47 )
    return v19;
  if ( !*(_BYTE *)(a1 + 6531) || (v50 = *(_QWORD *)(a1 + 6464)) == 0 )
  {
LABEL_53:
    v58 = CDrawingContext::DrawD2DBitmapInternal(a1, a2, v9, (__int64)&v95, v20, a7);
    v19 = v58;
    if ( v58 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x7FAu);
    return v19;
  }
  LOBYTE(v88) = 0;
  if ( *(_BYTE *)(v50 + 672) )
  {
    COcclusionContext::DeviceRectToPageInPixelsRect(v50, &v93, v94);
  }
  else
  {
    *(_QWORD *)v94 = __PAIR64__(LODWORD(v47), LODWORD(v46));
    *(_QWORD *)&v94[2] = __PAIR64__(LODWORD(v49), LODWORD(v48));
  }
  v51 = *(_BYTE *)(v50 + 741);
  v52 = (char)(4 * v51) >> 6;
  if ( !v52 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v50 + 676) - 0.0)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v50 + 688) - 0.0)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v50 + 696) - 0.0)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v50 + 704) - 0.0)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v50 + 736) - 1.0)) & _xmm) >= 0.00012207031 )
    {
      v73 = 0;
      v74 = -1;
    }
    else
    {
      v73 = 1;
      v74 = 1;
    }
    *(_BYTE *)(v50 + 741) = v51 ^ (v51 ^ (16 * v74)) & 0x30;
    if ( !v73 )
      goto LABEL_46;
    *(_BYTE *)(v50 + 740) |= 0x3Fu;
LABEL_112:
    LOBYTE(v39) = 1;
    goto LABEL_47;
  }
  if ( v52 == 1 )
    goto LABEL_112;
LABEL_46:
  LOBYTE(v39) = 0;
LABEL_47:
  v53 = *(_QWORD *)(v50 + 248);
  v54 = *(__int64 (__fastcall **)(__int64, float *, __int32, char, int *, __int64, unsigned int *))(*(_QWORD *)v53 + 48LL);
  if ( (char *)v54 == (char *)CArrayBasedCoverageSet::ComputeVisibleRegion )
    v55 = CArrayBasedCoverageSet::ComputeVisibleRegion(v53, v94, a6, v39, &v88, (__int64)v102, &v89);
  else
    v55 = v54(v53, v94, a6, v39, &v88, (__int64)v102, &v89);
  v56 = v55;
  if ( v55 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x3A0u);
    v57 = v89;
  }
  else
  {
    v57 = v89;
    if ( *(_BYTE *)(v50 + 672) )
    {
      for ( i = 0LL; (unsigned int)i < v89; v57 = v89 )
      {
        v93 = *(_OWORD *)v102[i];
        CMILMatrix::Transform2DBoundsHelper<0>(v50 + 676, (__int64)&v93, &v101.m11);
        v87 = (_OWORD *)v102[i];
        i = (unsigned int)(i + 1);
        *v87 = *(_OWORD *)&v101.m11;
      }
      v9 = (__int64)v91;
    }
  }
  if ( v56 < 0 || !(_BYTE)v88 )
    goto LABEL_53;
  if ( v57 )
  {
    MILMatrix3x2::InferAffineMatrix(v94, v100, &v95);
    MILMatrix3x2::SetProduct((MILMatrix3x2 *)&v101, (const struct MILMatrix3x2 *)v94, (const struct MILMatrix3x2 *)&v99);
    v61 = CShape::BuildFromRectFs(v103, v60, &v92);
    v62 = v92;
    v19 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x7C9u);
    }
    else
    {
      v63 = CDrawingContext::PushTransformInternal(
              (CDrawingContext *)a1,
              0LL,
              (const struct CMILMatrix *)&CMILMatrix::Identity,
              0,
              1);
      v19 = v63;
      if ( v63 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x7D2u);
      }
      else
      {
        v64 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
        v19 = v64;
        if ( v64 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0x7D5u);
        }
        else
        {
          v65 = 0LL;
          if ( a7 )
          {
            if ( a7 == 1 )
            {
              v65 = 1LL;
            }
            else if ( a7 == 4 )
            {
              v65 = 2LL;
            }
          }
          v67 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 324), v65);
          v68 = *(CD2DContext **)(a1 + 456);
          v75 = *(_DWORD *)(a1 + 328) != 0;
          v99 = v101;
          v69 = *(__int64 (__usercall **)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct CShape *@<r8>, struct ID2D1Bitmap1 *@<r9>, const struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_EXTEND_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v68 + 120LL);
          if ( v69 == CD2DContext::FillShapeWithBitmap )
            v70 = CD2DContext::FillShapeWithBitmap(
                    v68,
                    (const struct ID2DContextOwner *)(a1 + 128),
                    v62,
                    a2,
                    &v99,
                    v20,
                    v75,
                    v67,
                    D2D1_EXTEND_MODE_CLAMP,
                    v66);
          else
            v70 = ((__int64 (__fastcall *)(CD2DContext *, __int64, CRegionShape *, struct ID2D1Bitmap1 *, struct D2D_MATRIX_3X2_F *))v69)(
                    v68,
                    a1 + 128,
                    v62,
                    a2,
                    &v99);
          v19 = v70;
          if ( v70 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, 0x7E4u);
        }
        CDrawingContext::PopTransformInternal((CDrawingContext *)a1, 1);
      }
    }
    if ( v62 )
    {
      v71 = **(CRegionShape *(__fastcall ***)(CRegionShape *, char))v62;
      if ( v71 == CRegionShape::`vector deleting destructor' )
        CRegionShape::`vector deleting destructor'(v62, 1);
      else
        v71(v62, 1);
    }
  }
  return v19;
}
