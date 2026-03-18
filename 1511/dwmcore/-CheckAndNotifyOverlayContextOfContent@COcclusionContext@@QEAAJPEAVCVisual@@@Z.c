/*
 * XREFs of ?CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z @ 0x1800FD044
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800FDF30 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180014240 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EEE0 (-NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Top@CBaseClipStack@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A25A4 (-Top@CBaseClipStack@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A9264 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetComplex2DBounds@CVisual@@QEBAXPEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x1800F7AB0 (-GetComplex2DBounds@CVisual@@QEBAXPEAPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 */

__int64 __fastcall COcclusionContext::CheckAndNotifyOverlayContextOfContent(
        COcclusionContext *this,
        struct CVisual *a2)
{
  unsigned int v3; // r12d
  float v4; // xmm14_4
  float v5; // xmm13_4
  float v6; // xmm12_4
  float v7; // xmm11_4
  __int64 v8; // rax
  __m128i v9; // xmm0
  CVisual *v10; // r9
  float *v11; // r10
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // ebx
  bool IsExactlyPureTranslate; // al
  float v17; // xmm7_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  bool v20; // r14
  float v21; // xmm8_4
  __int64 v22; // rdx
  __int64 *v23; // rax
  unsigned int v24; // r8d
  char v25; // dl
  unsigned int k; // ecx
  float *v27; // rax
  __int64 v28; // rcx
  float v29; // xmm0_4
  int v30; // eax
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm3_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  float v44; // xmm3_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  float v50; // xmm5_4
  float v51; // xmm8_4
  float v52; // xmm12_4
  __int64 *v53; // rax
  unsigned int v54; // r8d
  float v55; // xmm4_4
  char v56; // dl
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm3_4
  unsigned int i; // ecx
  float *v61; // rax
  __int64 v62; // rdi
  float v63; // xmm0_4
  __int64 *v64; // rax
  float v65; // xmm0_4
  float v66; // xmm8_4
  unsigned int v67; // r8d
  char v68; // dl
  unsigned int j; // ecx
  float *v70; // rax
  float v71; // xmm5_4
  __int64 v72; // r15
  float v73; // xmm6_4
  float v74; // xmm0_4
  float v75; // xmm0_4
  __int64 v76; // r9
  int v77; // eax
  unsigned __int64 v79; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v80; // [rsp+40h] [rbp-C8h]
  __int64 v81; // [rsp+48h] [rbp-C0h]
  __int64 v82[3]; // [rsp+50h] [rbp-B8h] BYREF
  float v83; // [rsp+68h] [rbp-A0h]
  float v84; // [rsp+6Ch] [rbp-9Ch]
  __m128i v85; // [rsp+70h] [rbp-98h] BYREF
  float v86; // [rsp+88h] [rbp-80h] BYREF
  float v87; // [rsp+8Ch] [rbp-7Ch]
  float v88; // [rsp+90h] [rbp-78h]
  float v89; // [rsp+94h] [rbp-74h]
  float v90; // [rsp+98h] [rbp-70h]
  float v91; // [rsp+9Ch] [rbp-6Ch]
  float v92; // [rsp+A0h] [rbp-68h]
  float v93; // [rsp+A4h] [rbp-64h]
  float v94; // [rsp+A8h] [rbp-60h]
  float v95; // [rsp+ACh] [rbp-5Ch]
  float v96; // [rsp+B0h] [rbp-58h]
  float v97; // [rsp+B4h] [rbp-54h]
  float v98; // [rsp+B8h] [rbp-50h]
  float v99; // [rsp+BCh] [rbp-4Ch]
  float v100; // [rsp+C0h] [rbp-48h]
  float v101; // [rsp+C4h] [rbp-44h]
  _OWORD v102[6]; // [rsp+C8h] [rbp-40h] BYREF

  v82[0] = (__int64)a2;
  v3 = 0;
  if ( TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a2 + 35) )
    return v3;
  CBaseClipStack::Top((__int64)this + 56, (__int128 *)&v82[1]);
  if ( *((_BYTE *)this + 520) )
  {
    CBaseMatrix::Transform2DBounds(
      (COcclusionContext *)((char *)this + 524),
      (const struct MilRectF *)&v82[1],
      (struct MilRectF *)&v85);
    v4 = *(float *)v85.m128i_i32;
    v5 = *(float *)&v85.m128i_i32[1];
    v6 = *(float *)&v85.m128i_i32[2];
    v7 = *(float *)&v85.m128i_i32[3];
    *(__m128i *)&v82[1] = v85;
  }
  else
  {
    v7 = *((float *)&v82[2] + 1);
    v6 = *(float *)&v82[2];
    v5 = *((float *)&v82[1] + 1);
    v4 = *(float *)&v82[1];
  }
  v8 = *((_QWORD *)this + 96);
  *(float *)&v80 = v5;
  *(float *)&v81 = v6;
  v9 = _mm_loadu_si128((const __m128i *)(v8 + 40));
  v79 = __PAIR64__(LODWORD(v4), LODWORD(v7));
  v85 = v9;
  if ( *(float *)v9.m128i_i32 > v4 )
  {
    v4 = *(float *)v9.m128i_i32;
    HIDWORD(v79) = v9.m128i_i32[0];
    LODWORD(v82[1]) = v9.m128i_i32[0];
  }
  if ( *(float *)&v85.m128i_i32[1] > v5 )
  {
    v5 = *(float *)&v85.m128i_i32[1];
    LODWORD(v80) = v85.m128i_i32[1];
    HIDWORD(v82[1]) = v85.m128i_i32[1];
  }
  if ( v6 > *(float *)&v85.m128i_i32[2] )
  {
    v6 = *(float *)&v85.m128i_i32[2];
    LODWORD(v81) = v85.m128i_i32[2];
    LODWORD(v82[2]) = v85.m128i_i32[2];
  }
  if ( v7 > *(float *)&v85.m128i_i32[3] )
  {
    v7 = *(float *)&v85.m128i_i32[3];
    LODWORD(v79) = v85.m128i_i32[3];
    HIDWORD(v82[2]) = v85.m128i_i32[3];
  }
  if ( v6 <= v4 || v7 <= v5 )
  {
    v7 = 0.0;
    v6 = 0.0;
    v5 = 0.0;
    v79 = 0LL;
    v4 = 0.0;
    LODWORD(v81) = 0;
    v82[2] = 0LL;
    LODWORD(v80) = 0;
    v82[1] = 0LL;
  }
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v82[1]) )
    return v3;
  CBaseMatrixStack::Top((COcclusionContext *)((char *)this + 16), (struct CBaseMatrix *)&v86);
  if ( *((_BYTE *)this + 520) )
  {
    v12 = *(_OWORD *)((char *)this + 540);
    v102[0] = *(_OWORD *)((char *)this + 524);
    v13 = *(_OWORD *)((char *)this + 556);
    v102[1] = v12;
    v14 = *(_OWORD *)((char *)this + 572);
    v102[2] = v13;
    v102[3] = v14;
    D2DMatrixMultiply((struct D2DMatrix *)&v86, (const struct D2DMatrix *)&v86, (const struct D2DMatrix *)v102);
  }
  if ( v11[5] != 0.0 || v11[4] != 0.0 )
  {
    v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v88) & _xmm);
    if ( v31 < 0.00012207031 )
    {
      v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v92) & _xmm);
      if ( v32 < 0.00012207031 )
      {
        v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v100) & _xmm);
        if ( v33 < 0.00012207031 )
        {
LABEL_68:
          v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v89) & _xmm);
          v44 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v93) & _xmm) * 40960.0) + (float)(v43 * 40960.0);
          v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v101) & _xmm);
          v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v44 + v45) - 1.0)) & _xmm);
          if ( v46 < 0.00012207031 )
          {
            v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11[5]) & _xmm);
            if ( v47 < 0.00012207031 )
            {
              v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11[4]) & _xmm);
              if ( v48 < 0.00012207031 )
              {
                v49 = *v11;
                v50 = v11[2];
                v51 = v11[1];
                v52 = v11[3];
                *(float *)&v82[1] = *v11;
                v82[2] = __PAIR64__(LODWORD(v52), LODWORD(v50));
                *((float *)&v82[1] + 1) = v51;
                if ( v86 == 1.0
                  && v87 == 0.0
                  && v88 == 0.0
                  && v89 == 0.0
                  && v90 == 0.0
                  && v91 == 1.0
                  && v92 == 0.0
                  && v93 == 0.0
                  && v94 == 0.0
                  && v95 == 0.0
                  && v96 == 1.0
                  && v97 == 0.0 )
                {
                  v53 = &v82[1];
                  v54 = 4;
                  v55 = v98 + v49;
                  v56 = 1;
                  v57 = v98 + v50;
                  v58 = v99 + v52;
                  v59 = v99 + v51;
                  *(float *)&v82[1] = v55;
                  *(float *)&v82[2] = v98 + v50;
                  *((float *)&v82[2] + 1) = v99 + v52;
                  *((float *)&v82[1] + 1) = v99 + v51;
                }
                else
                {
                  CBaseMatrix::Transform2DRectToPerspective(
                    (CBaseMatrix *)&v86,
                    (const struct MilRectF *)&v82[1],
                    (struct MilPoint2F *const)v102);
                  v58 = *((float *)&v82[2] + 1);
                  v53 = (__int64 *)v102;
                  v57 = *(float *)&v82[2];
                  v56 = 0;
                  v59 = *((float *)&v82[1] + 1);
                  v54 = 8;
                  v55 = *(float *)&v82[1];
                }
                for ( i = 0; i < v54; ++i )
                  v53 = (__int64 *)((char *)v53 + 4);
                if ( !v56 )
                {
                  v61 = (float *)v102 + 3;
                  v82[0] = *(_QWORD *)&v102[0];
                  v62 = 3LL;
                  v58 = *((float *)v102 + 1);
                  v57 = *(float *)v102;
                  v85.m128i_i64[0] = *(_QWORD *)&v102[0];
                  v59 = *((float *)v102 + 1);
                  v55 = *(float *)v102;
                  do
                  {
                    v63 = *(v61 - 1);
                    if ( v55 > v63 )
                      v55 = *(v61 - 1);
                    if ( v59 > *v61 )
                      v59 = *v61;
                    if ( v63 > v57 )
                      v57 = *(v61 - 1);
                    if ( *v61 > v58 )
                      v58 = *v61;
                    v61 += 2;
                    --v62;
                  }
                  while ( v62 );
                }
LABEL_133:
                v82[1] = __PAIR64__(LODWORD(v59), LODWORD(v55));
                v82[2] = __PAIR64__(LODWORD(v58), LODWORD(v57));
                if ( *((float *)&v79 + 1) > v55 )
                {
                  v55 = *((float *)&v79 + 1);
                  LODWORD(v82[1]) = HIDWORD(v79);
                }
                if ( *(float *)&v80 > v59 )
                {
                  LODWORD(v59) = v80;
                  HIDWORD(v82[1]) = v80;
                }
                if ( v57 > *(float *)&v81 )
                {
                  LODWORD(v57) = v81;
                  LODWORD(v82[2]) = v81;
                }
                if ( v58 > *(float *)&v79 )
                {
                  LODWORD(v58) = v79;
                  HIDWORD(v82[2]) = v79;
                }
                if ( v57 <= v55 || v58 <= v59 )
                {
                  v82[2] = 0LL;
                  v82[1] = 0LL;
                }
                if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v82[1]) )
                {
                  v77 = COverlayContext::NotifyVisitedContent(*((_QWORD *)this + 96), v76, (__int64)&v82[1]);
                  v3 = v77;
                  if ( v77 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x8E9u);
                }
                return v3;
              }
            }
          }
          goto LABEL_100;
        }
      }
      if ( v31 < 0.00012207031 )
      {
        v34 = v95;
        v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v92) & _xmm);
        if ( v35 >= 0.00012207031 )
          goto LABEL_101;
        v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v94) & _xmm);
        if ( v36 >= 0.00012207031 )
          goto LABEL_101;
        v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v95) & _xmm);
        if ( v37 >= 0.00012207031 )
          goto LABEL_101;
        v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v96 - 1.0)) & _xmm);
        if ( v38 < 0.00012207031 || (v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v96) & _xmm), v39 < 0.00012207031) )
        {
          v40 = v97;
          v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v97) & _xmm);
          if ( v41 >= 0.00012207031 || (v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v100) & _xmm), v42 >= 0.00012207031) )
          {
            v34 = v95;
LABEL_102:
            if ( v86 == 1.0
              && v87 == 0.0
              && v88 == 0.0
              && v89 == 0.0
              && v90 == 0.0
              && v91 == 1.0
              && v92 == 0.0
              && v93 == 0.0
              && v94 == 0.0
              && v34 == 0.0
              && v96 == 1.0
              && v40 == 0.0 )
            {
              v64 = &v82[1];
              v55 = v98 + *v11;
              v57 = v98 + v11[2];
              v59 = v99 + v11[1];
              v65 = v100 + v11[4];
              v58 = v99 + v11[3];
              v66 = v100 + v11[5];
              *(float *)&v82[1] = v55;
              v67 = 6;
              *((float *)&v82[1] + 1) = v59;
              v68 = 1;
              v83 = v65;
              v82[2] = __PAIR64__(LODWORD(v58), LODWORD(v57));
              v84 = v66;
            }
            else
            {
              CBaseMatrix::Transform3DRectToPerspective(&v86, v11, (float *)v102);
              v58 = *((float *)&v82[2] + 1);
              v64 = (__int64 *)v102;
              v57 = *(float *)&v82[2];
              v68 = 0;
              v59 = *((float *)&v82[1] + 1);
              v67 = 24;
              v55 = *(float *)&v82[1];
            }
            for ( j = 0; j < v67; ++j )
              v64 = (__int64 *)((char *)v64 + 4);
            if ( !v68 )
            {
              v70 = (float *)v102 + 1;
              v71 = FLOAT_3_4028235e38;
              v72 = 8LL;
              v73 = FLOAT_N3_4028235e38;
              *(_OWORD *)&v82[1] = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
              v58 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
              v57 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
              v59 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
              LODWORD(v55) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
              do
              {
                v74 = *(v70 - 1);
                if ( v55 > v74 )
                  v55 = *(v70 - 1);
                if ( v74 > v57 )
                  v57 = *(v70 - 1);
                if ( v59 > *v70 )
                  v59 = *v70;
                if ( *v70 > v58 )
                  v58 = *v70;
                v75 = v70[1];
                if ( v71 > v75 )
                  v71 = v70[1];
                if ( v75 > v73 )
                  v73 = v70[1];
                v70 += 3;
                --v72;
              }
              while ( v72 );
            }
            goto LABEL_133;
          }
          goto LABEL_68;
        }
      }
    }
LABEL_100:
    v34 = v95;
LABEL_101:
    v40 = v97;
    goto LABEL_102;
  }
  LODWORD(v79) = 0;
  CVisual::GetComplex2DBounds(v10, &v85, &v79);
  v15 = 0;
  if ( (_DWORD)v79 )
  {
    IsExactlyPureTranslate = CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v86);
    v17 = *((float *)&v82[2] + 1);
    v18 = *(float *)&v82[2];
    v19 = *((float *)&v82[1] + 1);
    v20 = IsExactlyPureTranslate;
    v21 = *(float *)&v82[1];
    do
    {
      v22 = v85.m128i_i64[0] + 16LL * v15;
      if ( v20 )
      {
        v23 = &v82[1];
        v21 = v98 + *(float *)v22;
        v24 = 4;
        v19 = v99 + *(float *)(v22 + 4);
        v18 = v98 + *(float *)(v22 + 8);
        v17 = v99 + *(float *)(v22 + 12);
        *(float *)&v82[1] = v21;
        v25 = 1;
        *((float *)&v82[1] + 1) = v19;
        v82[2] = __PAIR64__(LODWORD(v17), LODWORD(v18));
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)&v86,
          (const struct MilRectF *)v22,
          (struct MilPoint2F *const)v102);
        v25 = 0;
        v23 = (__int64 *)v102;
        v24 = 8;
      }
      for ( k = 0; k < v24; ++k )
        v23 = (__int64 *)((char *)v23 + 4);
      if ( !v25 )
      {
        v27 = (float *)v102 + 3;
        v81 = *(_QWORD *)&v102[0];
        v28 = 3LL;
        v17 = *((float *)v102 + 1);
        v18 = *(float *)v102;
        v80 = *(_QWORD *)&v102[0];
        v19 = *((float *)v102 + 1);
        v21 = *(float *)v102;
        do
        {
          v29 = *(v27 - 1);
          if ( v21 > v29 )
            v21 = *(v27 - 1);
          if ( v19 > *v27 )
            v19 = *v27;
          if ( v29 > v18 )
            v18 = *(v27 - 1);
          if ( *v27 > v17 )
            v17 = *v27;
          v27 += 2;
          --v28;
        }
        while ( v28 );
        v82[1] = __PAIR64__(LODWORD(v19), LODWORD(v21));
        v82[2] = __PAIR64__(LODWORD(v17), LODWORD(v18));
      }
      if ( v4 > v21 )
      {
        v21 = v4;
        *(float *)&v82[1] = v4;
      }
      if ( v5 > v19 )
      {
        v19 = v5;
        *((float *)&v82[1] + 1) = v5;
      }
      if ( v18 > v6 )
      {
        v18 = v6;
        *(float *)&v82[2] = v6;
      }
      if ( v17 > v7 )
      {
        v17 = v7;
        *((float *)&v82[2] + 1) = v7;
      }
      if ( v18 <= v21 || v17 <= v19 )
      {
        v17 = 0.0;
        v18 = 0.0;
        v19 = 0.0;
        v21 = 0.0;
        v82[2] = 0LL;
        v82[1] = 0LL;
      }
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v82[1]) )
      {
        v30 = COverlayContext::NotifyVisitedContent(*((_QWORD *)this + 96), v82[0], (__int64)&v82[1]);
        v3 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x8D3u);
          return v3;
        }
        v17 = *((float *)&v82[2] + 1);
        v18 = *(float *)&v82[2];
        v19 = *((float *)&v82[1] + 1);
        v21 = *(float *)&v82[1];
      }
      ++v15;
    }
    while ( v15 < (unsigned int)v79 );
  }
  return v3;
}
