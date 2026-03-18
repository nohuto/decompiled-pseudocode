/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180049DC0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180014240 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18001A944 (-GetBounds@CFilterEffect@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DC10 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004E730 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180058270 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800677D4 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A9150 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(CVisual *this)
{
  __int64 v1; // rsi
  char *v2; // rbx
  __int64 v3; // xmm1_8
  unsigned int v4; // r15d
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  _QWORD *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rsi
  CTransform3D *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rsi
  CGeometry *v15; // rcx
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm6_4
  float v27; // xmm2_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm6_4
  float v31; // xmm4_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  __int64 (__fastcall *v34)(__int64, __int64); // r14
  __int64 (__fastcall *v36)(__int64, __int64); // r12
  char v37; // al
  __int64 (__fastcall *v38)(_QWORD, __int64); // r12
  char v39; // al
  __int64 (__fastcall *v40)(_QWORD, __int64); // r12
  __int64 v42; // rcx
  int Bounds; // eax
  int v44; // xmm1_4
  int v45; // xmm0_4
  int v46; // xmm1_4
  int ShapeDataNoRef; // eax
  __int64 (__fastcall *v48)(CRegionShape *); // r15
  int TightBounds; // eax
  unsigned int v50; // xmm3_4
  unsigned int v51; // xmm2_4
  unsigned int v52; // xmm1_4
  unsigned int v53; // xmm0_4
  float v54; // xmm4_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  const struct CMILMatrix *Matrix; // rax
  bool v59; // zf
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  float v63; // xmm2_4
  float v64; // xmm1_4
  float v65; // xmm1_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm1_4
  float v70; // xmm1_4
  float v71; // xmm1_4
  float v72; // xmm1_4
  float v73; // xmm4_4
  float v74; // xmm0_4
  float v75; // xmm3_4
  float v76; // xmm2_4
  float v77; // xmm1_4
  float *v78; // rax
  float v79; // xmm1_4
  float v80; // xmm4_4
  float v81; // xmm2_4
  float v82; // xmm5_4
  float v83; // xmm6_4
  float v84; // xmm3_4
  float v85; // xmm0_4
  float v86; // xmm3_4
  float v87; // xmm0_4
  float v88; // xmm0_4
  float v89; // xmm3_4
  float v90; // xmm0_4
  float v91; // xmm0_4
  float v92; // xmm3_4
  float v93; // xmm0_4
  float v94; // xmm0_4
  float v95; // xmm4_4
  float v96; // xmm3_4
  float v97; // xmm2_4
  float v98; // xmm1_4
  float v99; // xmm1_4
  float v100; // xmm1_4
  float v101; // xmm1_4
  float v102; // xmm2_4
  float v103; // xmm1_4
  float v104; // xmm1_4
  float *v105; // rax
  __int64 v106; // rcx
  float v107; // xmm2_4
  float v108; // xmm3_4
  float v109; // xmm4_4
  float v110; // xmm5_4
  float v111; // xmm11_4
  float v112; // xmm1_4
  float v113; // xmm0_4
  float v114; // xmm1_4
  float v115; // xmm0_4
  float v116; // xmm0_4
  float v117; // xmm1_4
  float v118; // xmm0_4
  float v119; // xmm0_4
  float v120; // xmm1_4
  float v121; // xmm0_4
  float v122; // xmm0_4
  float v123; // xmm1_4
  float v124; // xmm1_4
  float v125; // xmm1_4
  float v126; // xmm2_4
  float v127; // xmm1_4
  float v128; // xmm1_4
  float v129; // xmm1_4
  float v130; // xmm1_4
  char v131; // [rsp+38h] [rbp-D0h] BYREF
  CRectangleShape *v132[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v133; // [rsp+50h] [rbp-B8h]
  __int128 v134; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v135; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v136; // [rsp+78h] [rbp-90h]
  __int128 v137; // [rsp+88h] [rbp-80h]
  __int128 v138; // [rsp+98h] [rbp-70h]
  _BYTE v139[12]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v140; // [rsp+B4h] [rbp-54h]
  float v141; // [rsp+BCh] [rbp-4Ch]
  __int64 v142; // [rsp+C0h] [rbp-48h]
  __int64 v143; // [rsp+C8h] [rbp-40h]
  int v144; // [rsp+D0h] [rbp-38h]
  __int64 v145; // [rsp+D4h] [rbp-34h]
  __int64 v146; // [rsp+DCh] [rbp-2Ch]
  int v147; // [rsp+E4h] [rbp-24h]

  v1 = *((_QWORD *)this + 49);
  v2 = (char *)this + 140;
  v3 = *(_QWORD *)((char *)this + 180);
  v4 = 0;
  v6 = FLOAT_1_0;
  *(_OWORD *)((char *)this + 140) = *(_OWORD *)((char *)this + 164);
  *(_QWORD *)((char *)this + 156) = v3;
  if ( v1 )
  {
    v34 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL);
    if ( v34 == CEffectGroup::IsOfType ? CEffectGroup::IsOfType(v1, 8LL) : (unsigned __int8)v34(v1, 8LL) )
    {
      v6 = *(double *)(*((_QWORD *)this + 49) + 56LL);
      if ( v6 > 1.0 )
      {
        v6 = FLOAT_1_0;
      }
      else if ( v6 < 0.0 )
      {
        v6 = 0.0;
      }
    }
  }
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v7 < 0.0000011920929 )
    goto LABEL_179;
  v8 = *((float *)this + 96);
  if ( v8 > 1.0 )
  {
    v8 = FLOAT_1_0;
  }
  else if ( v8 < 0.0 )
  {
    v8 = 0.0;
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm) < 0.0000011920929 )
  {
LABEL_179:
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *(_QWORD *)v2 = 0LL;
  }
  else if ( (*((_BYTE *)this + 74) & 4) != 0 || (v9 = (_QWORD *)*((_QWORD *)this + 43)) != 0LL && *v9 )
  {
    *(_OWORD *)v2 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *((_QWORD *)v2 + 2) = qword_1801A05A0;
  }
  else
  {
    v10 = *((float *)v2 + 5) <= *((float *)v2 + 4);
    if ( *((float *)v2 + 2) <= *(float *)v2 )
      ++v10;
    if ( *((float *)v2 + 3) <= *((float *)v2 + 1) )
      ++v10;
    if ( v10 <= 1 )
    {
      v11 = *((_QWORD *)this + 49);
      v12 = 0LL;
      if ( v11 )
      {
        v36 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL);
        if ( v36 == CEffectGroup::IsOfType )
          v37 = CEffectGroup::IsOfType(v11, 24LL);
        else
          v37 = v36(v11, 24LL);
        if ( v37 )
        {
          v12 = (CTransform3D *)*((_QWORD *)this + 49);
        }
        else
        {
          v38 = *(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 49) + 48LL);
          if ( v38 == CEffectGroup::IsOfType )
            v39 = CEffectGroup::IsOfType(*((_QWORD *)this + 49), 8LL);
          else
            v39 = v38(*((_QWORD *)this + 49), 8LL);
          if ( v39 )
            v12 = *(CTransform3D **)(*((_QWORD *)this + 49) + 72LL);
        }
      }
      v13 = *((_QWORD *)this + 49);
      if ( v13 )
      {
        v40 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v13 + 48LL);
        if ( v40 == CEffectGroup::IsOfType
           ? CEffectGroup::IsOfType(*((_QWORD *)this + 49), 9LL)
           : (unsigned __int8)v40(*((_QWORD *)this + 49), 9LL) )
        {
          v42 = *((_QWORD *)this + 49);
          v134 = *(_OWORD *)((char *)this + 164);
          Bounds = CFilterEffect::GetBounds(v42, &v134, (__int64)v132);
          v4 = Bounds;
          if ( Bounds < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x3EDu);
            return v4;
          }
          v44 = HIDWORD(v132[0]);
          *(_DWORD *)v2 = v132[0];
          v45 = (int)v132[1];
          *((_DWORD *)this + 36) = v44;
          v46 = HIDWORD(v132[1]);
          *((_DWORD *)this + 37) = v45;
          *((_DWORD *)this + 38) = v46;
        }
      }
      v14 = 2LL;
      if ( v12 )
      {
        Matrix = CTransform3D::GetMatrix(v12, (const struct D2D_SIZE_F *)((char *)this + 132));
        v59 = *((_DWORD *)this + 21) == 0;
        v60 = *((_OWORD *)Matrix + 1);
        v135 = *(_OWORD *)Matrix;
        v61 = *((_OWORD *)Matrix + 2);
        v136 = v60;
        v62 = *((_OWORD *)Matrix + 3);
        v137 = v61;
        v138 = v62;
        if ( v59 )
        {
          v146 = 0LL;
          v145 = 0LL;
          v143 = 0LL;
          v142 = 0LL;
          v140 = 0LL;
          *(_QWORD *)&v139[4] = 0LL;
          v147 = 1065353216;
          v141 = 1.0;
          *(_DWORD *)v139 = 1065353216;
          v144 = 0;
          D2DMatrixMultiply((struct D2DMatrix *)&v135, (const struct D2DMatrix *)&v135, (const struct D2DMatrix *)v139);
        }
        v63 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v135 + 2)) & _xmm);
        if ( v63 >= 0.00012207031 )
          goto LABEL_289;
        v64 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v136 + 2)) & _xmm);
        if ( v64 >= 0.00012207031
          || (v65 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v138 + 2)) & _xmm), v65 >= 0.00012207031) )
        {
          if ( v63 >= 0.00012207031 )
            goto LABEL_289;
          v123 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v136 + 2)) & _xmm);
          if ( v123 >= 0.00012207031 )
            goto LABEL_289;
          v124 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v137) & _xmm);
          if ( v124 >= 0.00012207031 )
            goto LABEL_289;
          v125 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v137 + 1)) & _xmm);
          if ( v125 >= 0.00012207031 )
            goto LABEL_289;
          v126 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v137 + 2) - 1.0)) & _xmm);
          if ( v126 >= 0.00012207031 )
          {
            v129 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v137 + 2)) & _xmm);
            if ( v129 >= 0.00012207031 )
              goto LABEL_289;
          }
          v127 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v137 + 3)) & _xmm);
          if ( v127 >= 0.00012207031 )
            goto LABEL_289;
          v128 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v138 + 2)) & _xmm);
          if ( v128 >= 0.00012207031 )
            goto LABEL_289;
        }
        v66 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v135 + 3)) & _xmm);
        v67 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v136 + 3)) & _xmm) * 40960.0)
            + (float)(v66 * 40960.0);
        v68 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v138 + 3)) & _xmm);
        v69 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v67 + v68) - 1.0)) & _xmm);
        if ( v69 >= 0.00012207031
          || (v70 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v2 + 5)) & _xmm), v70 >= 0.00012207031)
          || (v71 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v2 + 4)) & _xmm), v71 >= 0.00012207031) )
        {
LABEL_289:
          if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v135) )
          {
            v96 = *(float *)&v138;
            v97 = *((float *)&v138 + 1);
            v98 = *((float *)&v138 + 1);
            *(float *)v2 = *(float *)&v138 + *(float *)v2;
            *((float *)v2 + 1) = v98 + *((float *)v2 + 1);
            *((float *)v2 + 4) = v95 + *((float *)v2 + 4);
            *((float *)v2 + 2) = v96 + *((float *)v2 + 2);
            *((float *)v2 + 3) = v97 + *((float *)v2 + 3);
            *((float *)v2 + 5) = v95 + *((float *)v2 + 5);
          }
          else
          {
            CBaseMatrix::Transform3DRectToPerspective((float *)&v135, (float *)v2, (float *)v139);
            v105 = (float *)&v139[4];
            v132[0] = (CRectangleShape *)0x7F7FFFFF7F7FFFFFLL;
            v106 = 2LL;
            v132[1] = (CRectangleShape *)0xFF7FFFFFFF7FFFFFLL;
            *(_OWORD *)v2 = *(_OWORD *)v132;
            *((_QWORD *)v2 + 2) = _mm_unpacklo_ps(
                                    (__m128)LODWORD(FLOAT_3_4028235e38),
                                    (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
            v107 = *((float *)v2 + 2);
            v108 = *((float *)v2 + 1);
            v109 = *((float *)v2 + 3);
            v110 = *((float *)v2 + 4);
            v111 = *((float *)v2 + 5);
            do
            {
              v112 = *(v105 - 1);
              if ( *(float *)v2 > v112 )
                *(float *)v2 = v112;
              if ( v112 > v107 )
                v107 = v112;
              if ( v108 > *v105 )
                v108 = *v105;
              if ( *v105 > v109 )
                v109 = *v105;
              v113 = v105[1];
              if ( v110 > v113 )
                v110 = v105[1];
              if ( v113 > v111 )
                v111 = v105[1];
              v114 = v105[2];
              if ( *(float *)v2 > v114 )
                *(float *)v2 = v114;
              if ( v114 > v107 )
                v107 = v114;
              v115 = v105[3];
              if ( v108 > v115 )
                v108 = v105[3];
              if ( v115 > v109 )
                v109 = v105[3];
              v116 = v105[4];
              if ( v110 > v116 )
                v110 = v105[4];
              if ( v116 > v111 )
                v111 = v105[4];
              v117 = v105[5];
              if ( *(float *)v2 > v117 )
                *(float *)v2 = v117;
              if ( v117 > v107 )
                v107 = v117;
              v118 = v105[6];
              if ( v108 > v118 )
                v108 = v105[6];
              if ( v118 > v109 )
                v109 = v105[6];
              v119 = v105[7];
              if ( v110 > v119 )
                v110 = v105[7];
              if ( v119 > v111 )
                v111 = v105[7];
              v120 = v105[8];
              if ( *(float *)v2 > v120 )
                *(float *)v2 = v120;
              if ( v120 > v107 )
                v107 = v120;
              v121 = v105[9];
              if ( v108 > v121 )
                v108 = v105[9];
              if ( v121 > v109 )
                v109 = v105[9];
              v122 = v105[10];
              if ( v110 > v122 )
                v110 = v105[10];
              if ( v122 > v111 )
                v111 = v105[10];
              v105 += 12;
              --v106;
            }
            while ( v106 );
            *((float *)v2 + 2) = v107;
            *((float *)v2 + 1) = v108;
            *((float *)v2 + 3) = v109;
            *((float *)v2 + 4) = v110;
            *((float *)v2 + 5) = v111;
          }
        }
        else
        {
          v72 = *(float *)v2;
          v73 = *((float *)v2 + 2);
          HIDWORD(v132[0]) = *((_DWORD *)v2 + 1);
          HIDWORD(v132[1]) = *((_DWORD *)v2 + 3);
          *(float *)v132 = v72;
          *(float *)&v132[1] = v73;
          if ( *(float *)&v135 == 1.0
            && *((float *)&v135 + 1) == 0.0
            && *((float *)&v135 + 2) == 0.0
            && *((float *)&v135 + 3) == 0.0
            && *(float *)&v136 == 0.0
            && *((float *)&v136 + 1) == 1.0
            && *((float *)&v136 + 2) == 0.0
            && *((float *)&v136 + 3) == 0.0
            && *(float *)&v137 == 0.0
            && *((float *)&v137 + 1) == 0.0
            && *((float *)&v137 + 2) == 1.0
            && *((float *)&v137 + 3) == 0.0 )
          {
            v74 = *(float *)&v138 + v73;
            v75 = *(float *)&v138 + v72;
            v76 = *((float *)&v138 + 1) + *((float *)v2 + 1);
            v77 = *((float *)&v138 + 1) + *((float *)v2 + 3);
          }
          else
          {
            CBaseMatrix::Transform2DRectToPerspective(
              (CBaseMatrix *)&v135,
              (const struct MilRectF *)v132,
              (struct MilPoint2F *const)v139);
            v132[0] = *(CRectangleShape **)v139;
            *(_QWORD *)&v134 = *(_QWORD *)v139;
            v74 = *(float *)&v139[8];
            if ( *(float *)v139 > *(float *)&v139[8] )
              v75 = *(float *)&v139[8];
            else
              LODWORD(v75) = v134;
            v76 = *((float *)&v134 + 1);
            if ( *((float *)&v134 + 1) > *(float *)&v140 )
              LODWORD(v76) = v140;
            if ( *(float *)&v139[8] <= *(float *)v139 )
              v74 = *(float *)v132;
            v77 = *((float *)v132 + 1);
            if ( *(float *)&v140 > *((float *)v132 + 1) )
              LODWORD(v77) = v140;
            if ( v75 > *((float *)&v140 + 1) )
              v75 = *((float *)&v140 + 1);
            if ( v76 > v141 )
              v76 = v141;
            if ( *((float *)&v140 + 1) > v74 )
              v74 = *((float *)&v140 + 1);
            if ( v141 > v77 )
              v77 = v141;
            if ( v75 > *(float *)&v142 )
              LODWORD(v75) = v142;
            if ( v76 > *((float *)&v142 + 1) )
              v76 = *((float *)&v142 + 1);
            if ( *(float *)&v142 > v74 )
              LODWORD(v74) = v142;
            if ( *((float *)&v142 + 1) > v77 )
              v77 = *((float *)&v142 + 1);
          }
          v132[0] = (CRectangleShape *)__PAIR64__(LODWORD(v76), LODWORD(v75));
          v132[1] = (CRectangleShape *)__PAIR64__(LODWORD(v77), LODWORD(v74));
          *(_OWORD *)v2 = *(_OWORD *)v132;
          *((_QWORD *)v2 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        }
      }
      v15 = (CGeometry *)*((_QWORD *)this + 44);
      if ( v15 && !*((_DWORD *)this + 21) )
      {
        v132[0] = 0LL;
        ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v15, (const struct D2D_SIZE_F *)((char *)this + 132), v132);
        v4 = ShapeDataNoRef;
        if ( ShapeDataNoRef < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x24u);
        }
        else
        {
          v48 = *(__int64 (__fastcall **)(CRegionShape *))(*(_QWORD *)v132[0] + 24LL);
          if ( v48 == CShape::GetTightBounds )
          {
            TightBounds = CShape::GetTightBounds(v132[0]);
          }
          else if ( v48 == CRectangleShape::GetTightBounds )
          {
            TightBounds = CRectangleShape::GetTightBounds(v132[0]);
          }
          else
          {
            TightBounds = ((__int64 (__fastcall *)(CRectangleShape *, __int128 *, _QWORD))v48)(v132[0], &v134, 0LL);
          }
          v4 = TightBounds;
          if ( TightBounds < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x26u);
        }
        if ( v4 == -2003304438 )
        {
          v53 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v4 = 0;
          v52 = DWORD1(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
          v51 = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
          v50 = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
          v134 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        else
        {
          v50 = HIDWORD(v134);
          v51 = DWORD2(v134);
          v52 = DWORD1(v134);
          v53 = v134;
        }
        if ( (v4 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x41Bu);
          return v4;
        }
        v132[0] = (CRectangleShape *)__PAIR64__(v52, v53);
        v133 = *((_QWORD *)v2 + 2);
        v132[1] = (CRectangleShape *)__PAIR64__(v50, v51);
        TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
          v2,
          v132);
      }
      v131 = 0;
      CVisual::CalcEffectiveTransform(this, 5LL, 0LL, &v131, v139, &v135);
      if ( v131 )
      {
        v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v135 + 2)) & _xmm);
        if ( v17 >= 0.00012207031 )
          goto LABEL_290;
        v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v136 + 2)) & _xmm);
        if ( v18 >= 0.00012207031
          || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v138 + 2)) & _xmm), v19 >= 0.00012207031) )
        {
          if ( v17 >= 0.00012207031 )
            goto LABEL_290;
          v99 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v136 + 2)) & _xmm);
          if ( v99 >= 0.00012207031 )
            goto LABEL_290;
          v100 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v137) & _xmm);
          if ( v100 >= 0.00012207031 )
            goto LABEL_290;
          v101 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v137 + 1)) & _xmm);
          if ( v101 >= 0.00012207031 )
            goto LABEL_290;
          v102 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v137 + 2) - 1.0)) & _xmm);
          if ( v102 >= 0.00012207031 )
          {
            v130 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v137 + 2)) & _xmm);
            if ( v130 >= 0.00012207031 )
              goto LABEL_290;
          }
          v103 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v137 + 3)) & _xmm);
          if ( v103 >= 0.00012207031 )
            goto LABEL_290;
          v104 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v138 + 2)) & _xmm);
          if ( v104 >= 0.00012207031 )
            goto LABEL_290;
        }
        v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v135 + 3)) & _xmm);
        v21 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v136 + 3)) & _xmm) * 40960.0)
            + (float)(v20 * 40960.0);
        v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v138 + 3)) & _xmm);
        v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v21 + v22) - 1.0)) & _xmm);
        if ( v23 >= 0.00012207031
          || (v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v2 + 5)) & _xmm), v24 >= 0.00012207031)
          || (v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v2 + 4)) & _xmm), v25 >= 0.00012207031) )
        {
LABEL_290:
          if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v135) )
          {
            v55 = *(float *)&v138;
            v56 = *((float *)&v138 + 1);
            v57 = *((float *)&v138 + 1);
            *(float *)v2 = *(float *)&v138 + *(float *)v2;
            *((float *)v2 + 1) = v57 + *((float *)v2 + 1);
            *((float *)v2 + 4) = v54 + *((float *)v2 + 4);
            *((float *)v2 + 2) = v55 + *((float *)v2 + 2);
            *((float *)v2 + 3) = v56 + *((float *)v2 + 3);
            *((float *)v2 + 5) = v54 + *((float *)v2 + 5);
          }
          else
          {
            CBaseMatrix::Transform3DRectToPerspective((float *)&v135, (float *)v2, (float *)v139);
            v78 = (float *)&v139[4];
            v132[0] = (CRectangleShape *)0x7F7FFFFF7F7FFFFFLL;
            v132[1] = (CRectangleShape *)0xFF7FFFFFFF7FFFFFLL;
            *(_OWORD *)v2 = *(_OWORD *)v132;
            *((_QWORD *)v2 + 2) = _mm_unpacklo_ps(
                                    (__m128)LODWORD(FLOAT_3_4028235e38),
                                    (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
            v79 = *((float *)v2 + 2);
            v80 = *((float *)v2 + 1);
            v81 = *((float *)v2 + 3);
            v82 = *((float *)v2 + 4);
            v83 = *((float *)v2 + 5);
            do
            {
              v84 = *(v78 - 1);
              if ( *(float *)v2 > v84 )
                *(float *)v2 = v84;
              if ( v84 > v79 )
                v79 = v84;
              if ( v80 > *v78 )
                v80 = *v78;
              if ( *v78 > v81 )
                v81 = *v78;
              v85 = v78[1];
              if ( v82 > v85 )
                v82 = v78[1];
              if ( v85 > v83 )
                v83 = v78[1];
              v86 = v78[2];
              if ( *(float *)v2 > v86 )
                *(float *)v2 = v86;
              if ( v86 > v79 )
                v79 = v86;
              v87 = v78[3];
              if ( v80 > v87 )
                v80 = v78[3];
              if ( v87 > v81 )
                v81 = v78[3];
              v88 = v78[4];
              if ( v82 > v88 )
                v82 = v78[4];
              if ( v88 > v83 )
                v83 = v78[4];
              v89 = v78[5];
              if ( *(float *)v2 > v89 )
                *(float *)v2 = v89;
              if ( v89 > v79 )
                v79 = v89;
              v90 = v78[6];
              if ( v80 > v90 )
                v80 = v78[6];
              if ( v90 > v81 )
                v81 = v78[6];
              v91 = v78[7];
              if ( v82 > v91 )
                v82 = v78[7];
              if ( v91 > v83 )
                v83 = v78[7];
              v92 = v78[8];
              if ( *(float *)v2 > v92 )
                *(float *)v2 = v92;
              if ( v92 > v79 )
                v79 = v92;
              v93 = v78[9];
              if ( v80 > v93 )
                v80 = v78[9];
              if ( v93 > v81 )
                v81 = v78[9];
              v94 = v78[10];
              if ( v82 > v94 )
                v82 = v78[10];
              if ( v94 > v83 )
                v83 = v78[10];
              v78 += 12;
              --v14;
            }
            while ( v14 );
            *((float *)v2 + 2) = v79;
            *((float *)v2 + 1) = v80;
            *((float *)v2 + 3) = v81;
            *((float *)v2 + 4) = v82;
            *((float *)v2 + 5) = v83;
          }
        }
        else
        {
          v26 = *(float *)v2;
          v27 = *((float *)v2 + 2);
          v28 = *((float *)v2 + 1);
          v29 = *((float *)v2 + 3);
          LODWORD(v132[0]) = *(_DWORD *)v2;
          *(CRectangleShape **)((char *)v132 + 4) = (CRectangleShape *)__PAIR64__(LODWORD(v27), LODWORD(v28));
          *((float *)&v132[1] + 1) = v29;
          if ( *(float *)&v135 == 1.0
            && *((float *)&v135 + 1) == 0.0
            && *((float *)&v135 + 2) == 0.0
            && *((float *)&v135 + 3) == 0.0
            && *(float *)&v136 == 0.0
            && *((float *)&v136 + 1) == 1.0
            && *((float *)&v136 + 2) == 0.0
            && *((float *)&v136 + 3) == 0.0
            && *(float *)&v137 == 0.0
            && *((float *)&v137 + 1) == 0.0
            && *((float *)&v137 + 2) == 1.0
            && *((float *)&v137 + 3) == 0.0 )
          {
            v30 = v26 + *(float *)&v138;
            v31 = v28 + *((float *)&v138 + 1);
            v32 = v27 + *(float *)&v138;
            v33 = v29 + *((float *)&v138 + 1);
          }
          else
          {
            CBaseMatrix::Transform2DRectToPerspective(
              (CBaseMatrix *)&v135,
              (const struct MilRectF *)v132,
              (struct MilPoint2F *const)v139);
            v32 = *(float *)&v139[8];
            *(_QWORD *)&v134 = *(_QWORD *)v139;
            v132[0] = *(CRectangleShape **)v139;
            if ( *(float *)v139 > *(float *)&v139[8] )
              v30 = *(float *)&v139[8];
            else
              v30 = *(float *)v132;
            v31 = *((float *)v132 + 1);
            if ( *((float *)v132 + 1) > *(float *)&v140 )
              LODWORD(v31) = v140;
            if ( *(float *)&v139[8] <= *(float *)v139 )
              LODWORD(v32) = v134;
            v33 = *((float *)&v134 + 1);
            if ( *(float *)&v140 > *((float *)&v134 + 1) )
              LODWORD(v33) = v140;
            if ( v30 > *((float *)&v140 + 1) )
              v30 = *((float *)&v140 + 1);
            if ( v31 > v141 )
              v31 = v141;
            if ( *((float *)&v140 + 1) > v32 )
              v32 = *((float *)&v140 + 1);
            if ( v141 > v33 )
              v33 = v141;
            if ( v30 > *(float *)&v142 )
              LODWORD(v30) = v142;
            if ( v31 > *((float *)&v142 + 1) )
              v31 = *((float *)&v142 + 1);
            if ( *(float *)&v142 > v32 )
              LODWORD(v32) = v142;
            if ( *((float *)&v142 + 1) > v33 )
              v33 = *((float *)&v142 + 1);
          }
          v132[0] = (CRectangleShape *)__PAIR64__(LODWORD(v31), LODWORD(v30));
          v132[1] = (CRectangleShape *)__PAIR64__(LODWORD(v33), LODWORD(v32));
          *(_OWORD *)v2 = *(_OWORD *)v132;
          *((_QWORD *)v2 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        }
      }
      if ( *((float *)v2 + 2) < *(float *)v2
        || *((float *)v2 + 3) < *((float *)v2 + 1)
        || *((float *)v2 + 5) < *((float *)v2 + 4) )
      {
        *(_OWORD *)v2 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *((_QWORD *)v2 + 2) = qword_1801A05A0;
      }
    }
  }
  return v4;
}
