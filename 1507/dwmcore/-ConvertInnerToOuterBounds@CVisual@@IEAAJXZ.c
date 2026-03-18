/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CFilterEffect@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18000272C (-GetBounds@CFilterEffect@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180003A74 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180017898 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800364E0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180056960 (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800569B4 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x18005CB08 (-IsCloseRealZero@@YAHMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsWellOrdered@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180097B10 (-IsWellOrdered@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1800DCCD4 (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 *     ?GetVisualAlpha@CVisual@@QEBAMXZ @ 0x1800DCD68 (-GetVisualAlpha@CVisual@@QEBAMXZ.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(CVisual *this)
{
  char *v1; // rdi
  __int64 v3; // xmm1_8
  unsigned int v4; // r12d
  float EffectAlpha; // xmm0_4
  float VisualAlpha; // xmm0_4
  float v7; // xmm4_4
  _QWORD *v8; // rax
  struct CTransform3D *Transform3DEffectNoRef; // rax
  __int64 v10; // r14
  CTransform3D *v11; // r15
  __int64 v12; // rcx
  int Bounds; // eax
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  __int64 v17; // rbx
  __int64 v18; // r14
  const struct CMILMatrix *Matrix; // rax
  bool v20; // zf
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  unsigned int v40; // xmm5_4
  int v41; // xmm4_4
  float v42; // xmm8_4
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm3_4
  float v46; // xmm5_4
  float v47; // xmm8_4
  float v48; // xmm4_4
  float *v49; // rax
  __int64 v50; // rcx
  float v51; // xmm0_4
  float v52; // xmm4_4
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm1_4
  float *v56; // rax
  __int64 v57; // rcx
  float v58; // xmm2_4
  float v59; // xmm3_4
  float v60; // xmm4_4
  float v61; // xmm5_4
  float v62; // xmm8_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  CGeometry *v65; // rcx
  int BoundsSafe; // eax
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm1_4
  float v70; // xmm1_4
  float v71; // xmm1_4
  float v72; // xmm1_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm1_4
  float v76; // xmm1_4
  float v77; // xmm0_4
  float v78; // xmm1_4
  float v79; // xmm1_4
  float v80; // xmm1_4
  float v81; // xmm1_4
  float v82; // xmm3_4
  unsigned int v83; // xmm5_4
  int v84; // xmm4_4
  float v85; // xmm6_4
  float v86; // xmm4_4
  float v87; // xmm5_4
  float v88; // xmm3_4
  float v89; // xmm5_4
  float v90; // xmm6_4
  float v91; // xmm4_4
  float *v92; // rax
  float v93; // xmm0_4
  float v94; // xmm4_4
  float v95; // xmm3_4
  float v96; // xmm2_4
  float v97; // xmm1_4
  float *v98; // rax
  float v99; // xmm2_4
  float v100; // xmm3_4
  float v101; // xmm4_4
  float v102; // xmm5_4
  float v103; // xmm6_4
  float v104; // xmm1_4
  float v105; // xmm0_4
  _BYTE v107[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v108; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v109; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v110; // [rsp+60h] [rbp-A0h]
  __int128 v111; // [rsp+70h] [rbp-90h]
  __int128 v112; // [rsp+80h] [rbp-80h]
  __int128 v113; // [rsp+90h] [rbp-70h] BYREF
  __int64 v114; // [rsp+A0h] [rbp-60h] BYREF
  int v115; // [rsp+A8h] [rbp-58h]
  _DWORD v116[21]; // [rsp+ACh] [rbp-54h] BYREF

  v1 = (char *)this + 156;
  v3 = *(_QWORD *)((char *)this + 196);
  v4 = 0;
  *(_OWORD *)((char *)this + 156) = *(_OWORD *)((char *)this + 180);
  *(_QWORD *)((char *)this + 172) = v3;
  EffectAlpha = CVisual::GetEffectAlpha(this);
  if ( (unsigned int)IsCloseRealZero(EffectAlpha, 0.0000011920929)
    || (VisualAlpha = CVisual::GetVisualAlpha(this), (unsigned int)IsCloseRealZero(VisualAlpha, v7)) )
  {
    *((_DWORD *)v1 + 4) = 0;
    *((_DWORD *)v1 + 5) = 0;
    *((_DWORD *)v1 + 3) = 0;
    *((_DWORD *)v1 + 2) = 0;
    *((_DWORD *)v1 + 1) = 0;
    *(_DWORD *)v1 = 0;
    return v4;
  }
  if ( (*((_BYTE *)this + 90) & 0x10) != 0 )
    goto LABEL_111;
  v8 = (_QWORD *)*((_QWORD *)this + 45);
  if ( v8 )
  {
    if ( *v8 )
      goto LABEL_111;
  }
  if ( !(unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v1) )
  {
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(this);
    v10 = *((_QWORD *)this + 51);
    v11 = Transform3DEffectNoRef;
    if ( v10
      && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 48LL))(*((_QWORD *)this + 51), 9LL) )
    {
      v12 = *((_QWORD *)this + 51);
      v113 = *(_OWORD *)((char *)this + 180);
      Bounds = CFilterEffect::GetBounds(v12, &v113, (__int64)&v108);
      v4 = Bounds;
      if ( Bounds < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x432u);
        return v4;
      }
      v14 = DWORD1(v108);
      *(_DWORD *)v1 = v108;
      v15 = DWORD2(v108);
      *((_DWORD *)this + 40) = v14;
      v16 = HIDWORD(v108);
      *((_DWORD *)this + 41) = v15;
      *((_DWORD *)this + 42) = v16;
    }
    v17 = 3LL;
    v18 = 8LL;
    if ( v11 )
    {
      Matrix = CTransform3D::GetMatrix(v11);
      v20 = *((_DWORD *)this + 25) == 0;
      v21 = *((_OWORD *)Matrix + 1);
      v109 = *(_OWORD *)Matrix;
      v22 = *((_OWORD *)Matrix + 2);
      v110 = v21;
      v23 = *((_OWORD *)Matrix + 3);
      v111 = v22;
      v112 = v23;
      if ( v20 )
      {
        memset(&v116[3], 0, 36);
        v116[1] = 0;
        v116[0] = 0;
        v115 = 0;
        v116[12] = 1065353216;
        v116[2] = 1065353216;
        v114 = 1065353216LL;
        D2DMatrixMultiply((struct D2DMatrix *)&v109, (const struct D2DMatrix *)&v109, (const struct D2DMatrix *)&v114);
      }
      v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v109 + 2)) & _xmm);
      if ( v24 >= 0.00012207031 )
        goto LABEL_116;
      v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v110 + 2)) & _xmm);
      if ( v25 >= 0.00012207031
        || (v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v112 + 2)) & _xmm), v26 >= 0.00012207031) )
      {
        if ( v24 >= 0.00012207031 )
          goto LABEL_116;
        v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v110 + 2)) & _xmm);
        if ( v27 >= 0.00012207031 )
          goto LABEL_116;
        v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v111) & _xmm);
        if ( v28 >= 0.00012207031 )
          goto LABEL_116;
        v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v111 + 1)) & _xmm);
        if ( v29 >= 0.00012207031 )
          goto LABEL_116;
        v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v111 + 2) - 1.0)) & _xmm);
        if ( v30 >= 0.00012207031 )
        {
          v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v111 + 2)) & _xmm);
          if ( v31 >= 0.00012207031 )
            goto LABEL_116;
        }
        v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v111 + 3)) & _xmm);
        if ( v32 >= 0.00012207031 )
          goto LABEL_116;
        v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v112 + 2)) & _xmm);
        if ( v33 >= 0.00012207031 )
          goto LABEL_116;
      }
      v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v109 + 3)) & _xmm);
      v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v112 + 3)) & _xmm);
      v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v110 + 3)) & _xmm)
                                                                              * 40960.0)
                                                                      + (float)(v34 * 40960.0))
                                                              + v35)
                                                      - 1.0)) & _xmm);
      if ( v36 >= 0.00012207031
        || (v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v1 + 5)) & _xmm), v37 >= 0.00012207031)
        || (v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v1 + 4)) & _xmm), v38 >= 0.00012207031) )
      {
LABEL_116:
        if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v109) )
        {
          v53 = *(float *)&v112;
          v54 = *((float *)&v112 + 1);
          v55 = *((float *)&v112 + 1);
          *(float *)v1 = *(float *)&v112 + *(float *)v1;
          *((float *)v1 + 1) = v55 + *((float *)v1 + 1);
          *((float *)v1 + 4) = v52 + *((float *)v1 + 4);
          *((float *)v1 + 2) = v53 + *((float *)v1 + 2);
          *((float *)v1 + 3) = v54 + *((float *)v1 + 3);
          *((float *)v1 + 5) = v52 + *((float *)v1 + 5);
        }
        else
        {
          CBaseMatrix::Transform3DRectToPerspective((float *)&v109, (float *)v1, (float *)&v114);
          v56 = (float *)&v114 + 1;
          *(_QWORD *)&v108 = 0x7F7FFFFF7F7FFFFFLL;
          v57 = 8LL;
          *((_QWORD *)&v108 + 1) = 0xFF7FFFFFFF7FFFFFuLL;
          *(_OWORD *)v1 = v108;
          *((_QWORD *)v1 + 2) = _mm_unpacklo_ps(
                                  (__m128)LODWORD(FLOAT_3_4028235e38),
                                  (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
          v58 = *((float *)v1 + 1);
          v59 = *((float *)v1 + 4);
          v60 = *((float *)v1 + 2);
          v61 = *((float *)v1 + 3);
          v62 = *((float *)v1 + 5);
          do
          {
            v63 = *(v56 - 1);
            if ( *(float *)v1 > v63 )
              *(float *)v1 = v63;
            if ( v63 > v60 )
              v60 = v63;
            if ( v58 > *v56 )
              v58 = *v56;
            if ( *v56 > v61 )
              v61 = *v56;
            v64 = v56[1];
            if ( v59 > v64 )
              v59 = v56[1];
            if ( v64 > v62 )
              v62 = v56[1];
            v56 += 3;
            --v57;
          }
          while ( v57 );
          *((float *)v1 + 1) = v58;
          *((float *)v1 + 4) = v59;
          *((float *)v1 + 2) = v60;
          *((float *)v1 + 3) = v61;
          *((float *)v1 + 5) = v62;
        }
      }
      else
      {
        v39 = *(float *)v1;
        v40 = *((_DWORD *)v1 + 1);
        v41 = *((_DWORD *)v1 + 3);
        v42 = *((float *)v1 + 2);
        LODWORD(v108) = *(_DWORD *)v1;
        *(_QWORD *)((char *)&v108 + 4) = __PAIR64__(LODWORD(v42), v40);
        HIDWORD(v108) = v41;
        if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v109) )
        {
          v45 = v39 + *(float *)&v112;
          v46 = v44 + *((float *)&v112 + 1);
          v47 = v42 + *(float *)&v112;
          v48 = v43 + *((float *)&v112 + 1);
        }
        else
        {
          CBaseMatrix::Transform2DRectToPerspective(
            (CBaseMatrix *)&v109,
            (const struct MilRectF *)&v108,
            (struct MilPoint2F *const)&v114);
          v49 = (float *)v116;
          *(_QWORD *)&v113 = v114;
          v50 = 3LL;
          v48 = *((float *)&v114 + 1);
          LODWORD(v47) = v114;
          *(_QWORD *)&v108 = v114;
          v46 = *((float *)&v114 + 1);
          LODWORD(v45) = v114;
          do
          {
            v51 = *(v49 - 1);
            if ( v45 > v51 )
              v45 = *(v49 - 1);
            if ( v46 > *v49 )
              v46 = *v49;
            if ( v51 > v47 )
              v47 = *(v49 - 1);
            if ( *v49 > v48 )
              v48 = *v49;
            v49 += 2;
            --v50;
          }
          while ( v50 );
        }
        *(_QWORD *)&v108 = __PAIR64__(LODWORD(v46), LODWORD(v45));
        *((_QWORD *)&v108 + 1) = __PAIR64__(LODWORD(v48), LODWORD(v47));
        *(_OWORD *)v1 = v108;
        *((_QWORD *)v1 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      }
    }
    v65 = (CGeometry *)*((_QWORD *)this + 46);
    if ( v65 && !*((_DWORD *)this + 25) )
    {
      BoundsSafe = CGeometry::GetBoundsSafe(v65, (const struct D2D_SIZE_F *)((char *)this + 148), &v108);
      v4 = BoundsSafe;
      if ( BoundsSafe < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsSafe, 0x460u);
        return v4;
      }
      TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
        v1,
        &v108);
    }
    v107[0] = 0;
    CVisual::CalcEffectiveTransform((__int64)this, 4, 0LL, v107, (struct D2DMatrix *)&v114, (__int64)&v109);
    if ( v107[0] )
    {
      v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v109 + 2)) & _xmm);
      if ( v67 >= 0.00012207031 )
        goto LABEL_117;
      v68 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v110 + 2)) & _xmm);
      if ( v68 >= 0.00012207031
        || (v69 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v112 + 2)) & _xmm), v69 >= 0.00012207031) )
      {
        if ( v67 >= 0.00012207031 )
          goto LABEL_117;
        v70 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v110 + 2)) & _xmm);
        if ( v70 >= 0.00012207031 )
          goto LABEL_117;
        v71 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v111) & _xmm);
        if ( v71 >= 0.00012207031 )
          goto LABEL_117;
        v72 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v111 + 1)) & _xmm);
        if ( v72 >= 0.00012207031 )
          goto LABEL_117;
        v73 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v111 + 2) - 1.0)) & _xmm);
        if ( v73 >= 0.00012207031 )
        {
          v74 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v111 + 2)) & _xmm);
          if ( v74 >= 0.00012207031 )
            goto LABEL_117;
        }
        v75 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v111 + 3)) & _xmm);
        if ( v75 >= 0.00012207031 )
          goto LABEL_117;
        v76 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v112 + 2)) & _xmm);
        if ( v76 >= 0.00012207031 )
          goto LABEL_117;
      }
      v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v109 + 3)) & _xmm);
      v78 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v112 + 3)) & _xmm);
      v79 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v110 + 3)) & _xmm)
                                                                              * 40960.0)
                                                                      + (float)(v77 * 40960.0))
                                                              + v78)
                                                      - 1.0)) & _xmm);
      if ( v79 >= 0.00012207031
        || (v80 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v1 + 5)) & _xmm), v80 >= 0.00012207031)
        || (v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v1 + 4)) & _xmm), v81 >= 0.00012207031) )
      {
LABEL_117:
        if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v109) )
        {
          v95 = *(float *)&v112;
          v96 = *((float *)&v112 + 1);
          v97 = *((float *)&v112 + 1);
          *(float *)v1 = *(float *)&v112 + *(float *)v1;
          *((float *)v1 + 1) = v97 + *((float *)v1 + 1);
          *((float *)v1 + 4) = v94 + *((float *)v1 + 4);
          *((float *)v1 + 2) = v95 + *((float *)v1 + 2);
          *((float *)v1 + 3) = v96 + *((float *)v1 + 3);
          *((float *)v1 + 5) = v94 + *((float *)v1 + 5);
        }
        else
        {
          CBaseMatrix::Transform3DRectToPerspective((float *)&v109, (float *)v1, (float *)&v114);
          v98 = (float *)&v114 + 1;
          *(_QWORD *)&v108 = 0x7F7FFFFF7F7FFFFFLL;
          *((_QWORD *)&v108 + 1) = 0xFF7FFFFFFF7FFFFFuLL;
          *(_OWORD *)v1 = v108;
          *((_QWORD *)v1 + 2) = _mm_unpacklo_ps(
                                  (__m128)LODWORD(FLOAT_3_4028235e38),
                                  (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
          v99 = *((float *)v1 + 1);
          v100 = *((float *)v1 + 4);
          v101 = *((float *)v1 + 2);
          v102 = *((float *)v1 + 3);
          v103 = *((float *)v1 + 5);
          do
          {
            v104 = *(v98 - 1);
            if ( *(float *)v1 > v104 )
              *(float *)v1 = v104;
            if ( v104 > v101 )
              v101 = v104;
            if ( v99 > *v98 )
              v99 = *v98;
            if ( *v98 > v102 )
              v102 = *v98;
            v105 = v98[1];
            if ( v100 > v105 )
              v100 = v98[1];
            if ( v105 > v103 )
              v103 = v98[1];
            v98 += 3;
            --v18;
          }
          while ( v18 );
          *((float *)v1 + 1) = v99;
          *((float *)v1 + 4) = v100;
          *((float *)v1 + 2) = v101;
          *((float *)v1 + 3) = v102;
          *((float *)v1 + 5) = v103;
        }
      }
      else
      {
        v82 = *(float *)v1;
        v83 = *((_DWORD *)v1 + 1);
        v84 = *((_DWORD *)v1 + 3);
        v85 = *((float *)v1 + 2);
        LODWORD(v108) = *(_DWORD *)v1;
        *(_QWORD *)((char *)&v108 + 4) = __PAIR64__(LODWORD(v85), v83);
        HIDWORD(v108) = v84;
        if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v109) )
        {
          v88 = v82 + *(float *)&v112;
          v89 = v87 + *((float *)&v112 + 1);
          v90 = v85 + *(float *)&v112;
          v91 = v86 + *((float *)&v112 + 1);
        }
        else
        {
          CBaseMatrix::Transform2DRectToPerspective(
            (CBaseMatrix *)&v109,
            (const struct MilRectF *)&v108,
            (struct MilPoint2F *const)&v114);
          v92 = (float *)v116;
          *(_QWORD *)&v108 = v114;
          v91 = *((float *)&v114 + 1);
          LODWORD(v90) = v114;
          *(_QWORD *)&v113 = v114;
          v89 = *((float *)&v114 + 1);
          LODWORD(v88) = v114;
          do
          {
            v93 = *(v92 - 1);
            if ( v88 > v93 )
              v88 = *(v92 - 1);
            if ( v89 > *v92 )
              v89 = *v92;
            if ( v93 > v90 )
              v90 = *(v92 - 1);
            if ( *v92 > v91 )
              v91 = *v92;
            v92 += 2;
            --v17;
          }
          while ( v17 );
        }
        *(_QWORD *)&v108 = __PAIR64__(LODWORD(v89), LODWORD(v88));
        *((_QWORD *)&v108 + 1) = __PAIR64__(LODWORD(v91), LODWORD(v90));
        *(_OWORD *)v1 = v108;
        *((_QWORD *)v1 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      }
    }
    if ( !(unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v1) )
    {
LABEL_111:
      *(_OWORD *)v1 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *((_QWORD *)v1 + 2) = qword_180190C98;
    }
  }
  return v4;
}
