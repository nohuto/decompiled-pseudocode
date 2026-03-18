/*
 * XREFs of ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180056500
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800064E8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x1800090C4 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180014240 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x18001A384 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?AllocateOcclusionInfo@CVisual@@MEAAPEAVCOcclusionInfo@@XZ @ 0x180048770 (-AllocateOcclusionInfo@CVisual@@MEAAPEAVCOcclusionInfo@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x18004E7C0 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?AllocateOcclusionInfo@CWindowNode@@MEAAPEAVCOcclusionInfo@@XZ @ 0x18005EC00 (-AllocateOcclusionInfo@CWindowNode@@MEAAPEAVCOcclusionInfo@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180094860 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1800A2670 (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800AAA98 (-ULongLongToUInt@@YAJ_KPEAI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18013FB00 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall COcclusionContext::PreSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rax
  bool v4; // zf
  const struct CVisualTree *v5; // r9
  COcclusionContext *v6; // r15
  size_t v7; // r10
  __int64 v9; // rcx
  int v10; // r13d
  char v11; // r8
  _QWORD *v12; // r14
  const struct CVisualTree *v13; // rax
  _QWORD *v14; // rbx
  CVisual *v15; // rdi
  struct COcclusionInfo *(__fastcall *v16)(CVisual *); // rsi
  struct COcclusionInfo *OcclusionInfo; // rax
  _QWORD *v18; // rax
  __int64 result; // rax
  __int64 v20; // r9
  __int64 v21; // rbx
  bool (__fastcall *v22)(__int64, int); // rdi
  bool v23; // al
  CFilterEffect *v24; // rcx
  int v25; // eax
  unsigned int v26; // ebx
  float *v27; // rdx
  unsigned int v28; // eax
  float v29; // xmm8_4
  int v30; // eax
  __m128 v31; // xmm4
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // rcx
  __int64 v36; // rax
  float v37; // xmm11_4
  float v38; // xmm4_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm5_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  float *v50; // rax
  float v51; // xmm6_4
  float v52; // xmm5_4
  float v53; // xmm0_4
  float v54; // xmm3_4
  float v55; // xmm8_4
  unsigned int v56; // edx
  char v57; // r8
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm1_4
  float v61; // xmm1_4
  float v62; // xmm6_4
  float v63; // xmm2_4
  float v64; // xmm5_4
  float v65; // xmm3_4
  __int128 *v66; // rax
  unsigned int v67; // edx
  char v68; // r8
  unsigned int j; // ecx
  unsigned int i; // ecx
  float *v71; // rax
  float v72; // xmm1_4
  __int64 v73; // rcx
  float v74; // xmm4_4
  float v75; // xmm0_4
  float v76; // xmm0_4
  float v77; // xmm0_4
  float v78; // xmm0_4
  float v79; // xmm0_4
  float v80; // xmm0_4
  float v81; // xmm0_4
  float v82; // xmm0_4
  float v83; // xmm0_4
  float v84; // xmm0_4
  float v85; // xmm0_4
  __int128 v86; // xmm0
  int v87; // eax
  unsigned int v88; // r8d
  unsigned int v89; // xmm3_4
  unsigned int v90; // xmm4_4
  unsigned int v91; // xmm5_4
  unsigned int v92; // xmm6_4
  int v93; // r11d
  __int64 v94; // rdi
  char v95; // al
  float v96; // xmm7_4
  float v97; // xmm0_4
  float v98; // xmm0_4
  bool v99; // al
  __int64 v100; // rax
  __m128 *v101; // r12
  size_t v102; // r8
  int v103; // ebx
  __int64 v104; // rsi
  _QWORD *v105; // r14
  struct CWeakReferenceBase *v106; // rdx
  char v107; // r15
  __int64 **TreeData; // rdi
  char IsPreserve3D; // al
  __int64 v110; // r9
  CVisual *v111; // r10
  char v112; // r11
  CVisual *v113; // rdx
  CVisual *v114; // rcx
  __int64 v115; // rax
  _QWORD *v116; // rax
  char v117; // al
  size_t v118; // rdx
  __int64 v119; // rdx
  _QWORD *v120; // rdx
  _QWORD *v121; // rax
  unsigned __int64 v122; // rax
  _OWORD *v123; // rbx
  float *v124; // rax
  bool v125; // r15
  float *v126; // rdi
  int v127; // eax
  char v128; // cl
  __int128 v129; // xmm1
  bool v130; // cl
  __int128 v131; // xmm1
  __m128 *v132; // rax
  __m128 v133; // xmm1
  __m128 v134; // xmm0
  __m128 v135; // xmm1
  float v136; // xmm2_4
  float v137; // xmm1_4
  float v138; // xmm1_4
  float v139; // xmm1_4
  float v140; // xmm1_4
  float v141; // xmm1_4
  float v142; // xmm2_4
  float v143; // xmm1_4
  float v144; // xmm1_4
  float v145; // xmm1_4
  float v146; // xmm0_4
  float v147; // xmm1_4
  float v148; // xmm1_4
  float v149; // xmm1_4
  float v150; // xmm1_4
  __int64 *v151; // rsi
  void *v152; // r12
  size_t v153; // r15
  _QWORD *v154; // r14
  __int64 v155; // rax
  size_t v156; // rdi
  int v157; // eax
  void (__fastcall ***v158)(__int64, __int64); // r12
  void **v159; // rdi
  const struct D2DMatrix *v160; // rcx
  __int64 v161; // rcx
  int v162; // eax
  void *v163; // rax
  __int64 v164; // rdi
  __int64 v165; // rsi
  size_t v166; // rdi
  int v167; // eax
  void (__fastcall ***v168)(_QWORD, __int64); // r14
  __int64 *v169; // rdi
  const struct D2DMatrix *v170; // rcx
  int v171; // edx
  __int64 v172; // rcx
  int v173; // eax
  __int64 v174; // rax
  int v175; // eax
  float v176; // xmm1_4
  float v177; // xmm3_4
  float v178; // xmm2_4
  float v179; // xmm0_4
  COcclusionContext *v180; // r15
  int v181; // eax
  unsigned int v182; // eax
  void *v183; // rsi
  int v184; // eax
  WPF *v185; // rcx
  unsigned int v186; // r14d
  int v187; // eax
  int v188; // eax
  void *v189; // rsi
  unsigned int v190; // eax
  unsigned int v191; // ecx
  __int64 v192; // rbx
  int v193; // eax
  unsigned int v194; // eax
  int v195; // eax
  WPF *v196; // rcx
  unsigned int v197; // r14d
  int v198; // eax
  int v199; // eax
  void *v200; // rsi
  unsigned int v201; // eax
  unsigned int v202; // ecx
  void **v203; // [rsp+28h] [rbp-E0h]
  char v204; // [rsp+38h] [rbp-D0h]
  bool v205; // [rsp+39h] [rbp-CFh] BYREF
  size_t Size; // [rsp+40h] [rbp-C8h] BYREF
  size_t v207; // [rsp+48h] [rbp-C0h] BYREF
  COcclusionContext *v208; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v209; // [rsp+58h] [rbp-B0h]
  __int64 v210; // [rsp+60h] [rbp-A8h]
  __int128 v211; // [rsp+68h] [rbp-A0h] BYREF
  float v212; // [rsp+78h] [rbp-90h]
  float v213; // [rsp+7Ch] [rbp-8Ch]
  void *v214[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v215; // [rsp+90h] [rbp-78h] BYREF
  __m128 v216; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v217; // [rsp+B8h] [rbp-50h]
  __int128 v218; // [rsp+C8h] [rbp-40h]
  __int128 v219; // [rsp+D8h] [rbp-30h]
  __m128 v220; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v221; // [rsp+F8h] [rbp-10h]
  __int128 v222; // [rsp+108h] [rbp+0h]
  __int128 v223; // [rsp+118h] [rbp+10h]
  __int128 v224; // [rsp+128h] [rbp+20h] BYREF
  __int128 v225; // [rsp+138h] [rbp+30h]
  __int128 v226; // [rsp+148h] [rbp+40h]
  __int128 v227; // [rsp+158h] [rbp+50h]
  _BYTE Buf2[64]; // [rsp+168h] [rbp+60h] BYREF
  float v229; // [rsp+1A8h] [rbp+A0h] BYREF
  char v230; // [rsp+1ACh] [rbp+A4h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = *((_DWORD *)this + 164) == 0;
  v5 = a2;
  v207 = (size_t)a2;
  v6 = this;
  v208 = this;
  LOBYTE(a2) = v4;
  v7 = *(_QWORD *)(v3 + 8);
  v9 = *(_QWORD *)(v3 + 16);
  v10 = 0;
  Size = v7;
  *(_QWORD *)&v215 = v9;
  if ( (*(_BYTE *)(v7 + 74) & 0x10) != 0 )
  {
    *a3 = 0;
    goto LABEL_274;
  }
  v11 = *((_BYTE *)v5 + 32);
  v12 = 0LL;
  if ( v11 )
  {
    v12 = (_QWORD *)(v7 + 432);
  }
  else
  {
    a2 = (const struct CVisualTree *)(v7 + 416);
    v13 = *(const struct CVisualTree **)(v7 + 416);
    if ( v13 != (const struct CVisualTree *)(v7 + 416) )
    {
      while ( *((const struct CVisualTree **)v13 + 4) != v5 )
      {
        v13 = *(const struct CVisualTree **)v13;
        if ( v13 == a2 )
          goto LABEL_10;
      }
      v12 = (_QWORD *)((char *)v13 - 264);
    }
  }
LABEL_10:
  if ( v11 )
  {
    v14 = (_QWORD *)(v7 + 432);
  }
  else
  {
    v18 = *(_QWORD **)(v7 + 416);
    if ( v18 == (_QWORD *)(v7 + 416) )
    {
LABEL_19:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x15Eu);
      return 2147942414LL;
    }
    while ( 1 )
    {
      v14 = v18 - 33;
      if ( (const struct CVisualTree *)v18[4] == v5 )
        break;
      v18 = (_QWORD *)*v18;
      if ( v18 == (_QWORD *)(v7 + 416) )
        goto LABEL_19;
    }
  }
  if ( !v14 )
    goto LABEL_19;
  if ( !v14[4] )
  {
    v15 = (CVisual *)v14[3];
    v16 = *(struct COcclusionInfo *(__fastcall **)(CVisual *))(*(_QWORD *)v15 + 248LL);
    if ( v16 == CVisual::AllocateOcclusionInfo )
    {
      OcclusionInfo = CVisual::AllocateOcclusionInfo(v15);
    }
    else if ( v16 == CWindowNode::AllocateOcclusionInfo )
    {
      OcclusionInfo = CWindowNode::AllocateOcclusionInfo(v15);
    }
    else
    {
      OcclusionInfo = (struct COcclusionInfo *)((__int64 (__fastcall *)(_QWORD, const struct CVisualTree *))v16)(
                                                 v14[3],
                                                 a2);
    }
    v7 = Size;
    v14[4] = OcclusionInfo;
  }
  v20 = v14[4];
  v210 = v20;
  if ( !v20 )
    goto LABEL_19;
  *(_BYTE *)(v20 + 8) &= 0xF9u;
  *(_DWORD *)(v20 + 12) = *((_DWORD *)v6 + 163);
  *a3 = 1;
  v21 = *(_QWORD *)(v7 + 392);
  v204 = *((_DWORD *)v6 + 164) == 0;
  if ( v21 )
  {
    v22 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v21 + 48LL);
    if ( v22 != CEffectGroup::IsOfType )
    {
      v23 = v22(v21, 9);
      v7 = Size;
      if ( v23 )
      {
        v24 = *(CFilterEffect **)(Size + 392);
        if ( v24 )
        {
          if ( !CFilterEffect::IsOpaque(v24, (const struct CVisual *)Size) )
            goto LABEL_438;
          v7 = Size;
        }
      }
      v20 = v210;
    }
  }
  if ( !v204 )
    goto LABEL_438;
  v25 = *((_DWORD *)v6 + 174);
  v26 = -1;
  LODWORD(v209) = -1;
  if ( v25 )
  {
    v26 = *(_DWORD *)(*((_QWORD *)v6 + 89) + 4LL * (unsigned int)(v25 - 1));
    LODWORD(v209) = v26;
  }
  *(_BYTE *)(v20 + 8) &= ~1u;
  v27 = (float *)(v7 + 140);
  v28 = *(float *)(v7 + 160) <= *(float *)(v7 + 156);
  if ( *(float *)(v7 + 148) <= *(float *)(v7 + 140) )
    ++v28;
  if ( *(float *)(v7 + 152) <= *(float *)(v7 + 144) )
    ++v28;
  if ( v28 > 1 )
  {
LABEL_438:
    ++*((_DWORD *)v6 + 164);
    return (unsigned int)v10;
  }
  v29 = FLOAT_40960_0;
  if ( v12[1] == *(_QWORD *)(*((_QWORD *)v6 + 42) + 352LL) )
    goto LABEL_184;
  v30 = *((_DWORD *)v6 + 4);
  if ( v30 )
  {
    v35 = (unsigned int)(v30 - 1);
    v36 = *((_QWORD *)v6 + 4);
    v35 <<= 6;
    v31 = *(__m128 *)(v35 + v36);
    v32 = *(_OWORD *)(v35 + v36 + 16);
    v33 = *(_OWORD *)(v35 + v36 + 32);
    v34 = *(_OWORD *)(v35 + v36 + 48);
  }
  else
  {
    v31 = (__m128)IdentityMatrix;
    v32 = xmmword_18019E9C0;
    v33 = xmmword_18019E9D0;
    v34 = xmmword_18019E9E0;
  }
  v217 = v32;
  v218 = v33;
  v37 = *(float *)&v33;
  v221 = v32;
  v216 = v31;
  v219 = v34;
  v220 = v31;
  v38 = _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
  v223 = v34;
  v222 = v33;
  v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v38) & _xmm);
  if ( v39 >= 0.00012207031 )
    goto LABEL_55;
  v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v32 + 2)) & _xmm);
  if ( v40 < 0.00012207031
    && (v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v34 + 2)) & _xmm), v41 < 0.00012207031) )
  {
    v45 = FLOAT_1_0;
  }
  else
  {
    if ( v39 >= 0.00012207031 )
      goto LABEL_55;
    v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v32 + 2)) & _xmm);
    if ( v42 >= 0.00012207031 )
      goto LABEL_55;
    v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37) & _xmm);
    if ( v43 >= 0.00012207031 )
      goto LABEL_55;
    v44 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v33 + 1)) & _xmm);
    if ( v44 >= 0.00012207031 )
      goto LABEL_55;
    v45 = FLOAT_1_0;
    v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v33 + 2) - 1.0)) & _xmm);
    if ( v46 >= 0.00012207031 )
    {
      v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v33 + 2)) & _xmm);
      if ( v47 >= 0.00012207031 )
        goto LABEL_55;
    }
    v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v33 + 3)) & _xmm);
    if ( v48 >= 0.00012207031 )
      goto LABEL_55;
    v49 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v34 + 2)) & _xmm);
    if ( v49 >= 0.00012207031 )
      goto LABEL_55;
  }
  v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v32 + 3)) & _xmm);
  v59 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v219 + 3)) & _xmm);
  v60 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31.m128_f32[3]) & _xmm)
                                                                          * 40960.0)
                                                                  + (float)(v58 * 40960.0))
                                                          + v59)
                                                  - v45)) & _xmm);
  if ( v60 >= 0.00012207031
    || (v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v7 + 160)) & _xmm), v61 >= 0.00012207031)
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v7 + 156)) & _xmm) >= 0.00012207031 )
  {
LABEL_55:
    if ( v216.m128_f32[0] == 1.0
      && v216.m128_f32[1] == 0.0
      && v38 == 0.0
      && v31.m128_f32[3] == 0.0
      && *(float *)&v217 == 0.0
      && *((float *)&v217 + 1) == 1.0
      && *((float *)&v32 + 2) == 0.0
      && *((float *)&v32 + 3) == 0.0
      && v37 == 0.0
      && *((float *)&v33 + 1) == 0.0
      && *((float *)&v33 + 2) == 1.0
      && *((float *)&v33 + 3) == 0.0 )
    {
      v50 = (float *)&v211;
      v51 = *(float *)&v219 + *v27;
      *(float *)&v34 = *(float *)&v219 + *(float *)(v7 + 148);
      v52 = *((float *)&v219 + 1) + *(float *)(v7 + 144);
      v53 = *((float *)&v34 + 2) + *(float *)(v7 + 156);
      v54 = *((float *)&v219 + 1) + *(float *)(v7 + 152);
      v55 = *((float *)&v34 + 2) + *(float *)(v7 + 160);
      *(float *)&v211 = v51;
      v56 = 6;
      *(_QWORD *)((char *)&v211 + 4) = __PAIR64__(v34, LODWORD(v52));
      v57 = 1;
      v212 = v53;
      *((float *)&v211 + 3) = v54;
      v213 = v55;
    }
    else
    {
      CBaseMatrix::Transform3DRectToPerspective(v220.m128_f32, v27, &v229);
      v54 = *((float *)&v211 + 3);
      v50 = &v229;
      LODWORD(v34) = DWORD2(v211);
      v56 = 24;
      v52 = *((float *)&v211 + 1);
      v57 = 0;
      LODWORD(v51) = v211;
    }
    for ( i = 0; i < v56; ++i )
      ++v50;
    if ( !v57 )
    {
      v71 = (float *)&v230;
      v72 = FLOAT_3_4028235e38;
      v73 = 2LL;
      v74 = FLOAT_N3_4028235e38;
      v211 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
      v54 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
      LODWORD(v34) = DWORD2(_xmm_ff7fffffff7fffff7f7fffff7f7fffff);
      v52 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
      LODWORD(v51) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
      do
      {
        v75 = *(v71 - 1);
        if ( v51 > v75 )
          v51 = *(v71 - 1);
        if ( v75 > *(float *)&v34 )
          *(float *)&v34 = *(v71 - 1);
        if ( v52 > *v71 )
          v52 = *v71;
        if ( *v71 > v54 )
          v54 = *v71;
        v76 = v71[1];
        if ( v72 > v76 )
          v72 = v71[1];
        if ( v76 > v74 )
          v74 = v71[1];
        v77 = v71[2];
        if ( v51 > v77 )
          v51 = v71[2];
        if ( v77 > *(float *)&v34 )
          *(float *)&v34 = v71[2];
        v78 = v71[3];
        if ( v52 > v78 )
          v52 = v71[3];
        if ( v78 > v54 )
          v54 = v71[3];
        v79 = v71[4];
        if ( v72 > v79 )
          v72 = v71[4];
        if ( v79 > v74 )
          v74 = v71[4];
        v80 = v71[5];
        if ( v51 > v80 )
          v51 = v71[5];
        if ( v80 > *(float *)&v34 )
          *(float *)&v34 = v71[5];
        v81 = v71[6];
        if ( v52 > v81 )
          v52 = v71[6];
        if ( v81 > v54 )
          v54 = v71[6];
        v82 = v71[7];
        if ( v72 > v82 )
          v72 = v71[7];
        if ( v82 > v74 )
          v74 = v71[7];
        v83 = v71[8];
        if ( v51 > v83 )
          v51 = v71[8];
        if ( v83 > *(float *)&v34 )
          *(float *)&v34 = v71[8];
        v84 = v71[9];
        if ( v52 > v84 )
          v52 = v71[9];
        if ( v84 > v54 )
          v54 = v71[9];
        v85 = v71[10];
        if ( v72 > v85 )
          v72 = v71[10];
        if ( v85 > v74 )
          v74 = v71[10];
        v71 += 12;
        --v73;
      }
      while ( v73 );
    }
    goto LABEL_168;
  }
  v62 = *v27;
  v63 = *(float *)(v7 + 148);
  v64 = *(float *)(v7 + 144);
  v65 = *(float *)(v7 + 152);
  *(float *)&v211 = *v27;
  *(_QWORD *)((char *)&v211 + 4) = __PAIR64__(LODWORD(v63), LODWORD(v64));
  *((float *)&v211 + 3) = v65;
  if ( v216.m128_f32[0] == 1.0
    && v216.m128_f32[1] == 0.0
    && v38 == 0.0
    && v31.m128_f32[3] == 0.0
    && *(float *)&v217 == 0.0
    && *((float *)&v217 + 1) == 1.0
    && *((float *)&v32 + 2) == 0.0
    && *((float *)&v32 + 3) == 0.0
    && v37 == 0.0
    && *((float *)&v33 + 1) == 0.0
    && *((float *)&v33 + 2) == 1.0
    && *((float *)&v33 + 3) == 0.0 )
  {
    v51 = v62 + *(float *)&v219;
    v52 = v64 + *((float *)&v219 + 1);
    *(float *)&v34 = v63 + *(float *)&v219;
    v54 = v65 + *((float *)&v219 + 1);
    v66 = &v211;
    v67 = 4;
    *(_QWORD *)&v211 = __PAIR64__(LODWORD(v52), LODWORD(v51));
    v68 = 1;
    *((_QWORD *)&v211 + 1) = __PAIR64__(LODWORD(v54), v34);
  }
  else
  {
    CBaseMatrix::Transform2DRectToPerspective(
      (CBaseMatrix *)&v220,
      (const struct MilRectF *)&v211,
      (struct MilPoint2F *const)&v216);
    v54 = *((float *)&v211 + 3);
    v66 = (__int128 *)&v216;
    LODWORD(v34) = DWORD2(v211);
    v68 = 0;
    v52 = *((float *)&v211 + 1);
    v67 = 8;
    LODWORD(v51) = v211;
  }
  for ( j = 0; j < v67; ++j )
    v66 = (__int128 *)((char *)v66 + 4);
  if ( !v68 )
  {
    LODWORD(v34) = v216.m128_i32[2];
    v214[0] = (void *)v216.m128_u64[0];
    *(_QWORD *)&v211 = v216.m128_u64[0];
    if ( v216.m128_f32[0] <= v216.m128_f32[2] )
      LODWORD(v51) = v211;
    else
      v51 = v216.m128_f32[2];
    v52 = *((float *)&v211 + 1);
    if ( *((float *)&v211 + 1) > v216.m128_f32[3] )
      v52 = v216.m128_f32[3];
    if ( v216.m128_f32[2] <= v216.m128_f32[0] )
      LODWORD(v34) = v214[0];
    v54 = *((float *)v214 + 1);
    if ( v216.m128_f32[3] > *((float *)v214 + 1) )
      v54 = v216.m128_f32[3];
    if ( v51 > *(float *)&v217 )
      LODWORD(v51) = v217;
    if ( v52 > *((float *)&v217 + 1) )
      v52 = *((float *)&v217 + 1);
    if ( *(float *)&v217 > *(float *)&v34 )
      LODWORD(v34) = v217;
    if ( *((float *)&v217 + 1) > v54 )
      v54 = *((float *)&v217 + 1);
    if ( v51 > *((float *)&v217 + 2) )
      v51 = *((float *)&v217 + 2);
    if ( v52 > *((float *)&v217 + 3) )
      v52 = *((float *)&v217 + 3);
    if ( *((float *)&v217 + 2) > *(float *)&v34 )
      LODWORD(v34) = DWORD2(v217);
    if ( *((float *)&v217 + 3) > v54 )
      v54 = *((float *)&v217 + 3);
  }
LABEL_168:
  *(_QWORD *)&v211 = __PAIR64__(LODWORD(v52), LODWORD(v51));
  *((_QWORD *)&v211 + 1) = __PAIR64__(LODWORD(v54), v34);
  if ( *(float *)&v34 <= v51 || v54 <= v52 )
    goto LABEL_182;
  LODWORD(v209) = v26;
  if ( *((_DWORD *)v6 + 16) )
  {
    v87 = *((_DWORD *)v6 + 16);
    if ( !v87 )
      goto LABEL_175;
    v86 = *(_OWORD *)(*((_QWORD *)v6 + 10) + 16LL * (unsigned int)(v87 - 1));
  }
  else
  {
    v86 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  *(_OWORD *)v214 = v86;
LABEL_175:
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v211, (__int64)v214);
  v88 = 0;
  if ( !*((_DWORD *)v6 + 86) )
  {
LABEL_182:
    *a3 = 0;
    result = 0LL;
    *(_BYTE *)(v20 + 8) |= 1u;
    ++*((_DWORD *)v6 + 164);
    return result;
  }
  v89 = HIDWORD(v211);
  v90 = DWORD2(v211);
  v91 = DWORD1(v211);
  v92 = v211;
  while ( ((v26 >> v88) & 1) == 0 )
  {
LABEL_181:
    if ( ++v88 >= *((_DWORD *)v6 + 86) )
      goto LABEL_182;
  }
  *(_QWORD *)&v211 = __PAIR64__(v91, v92);
  *((_QWORD *)&v211 + 1) = __PAIR64__(v89, v90);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v211, (__int64)v6 + 16 * v88 + 348);
  if ( *((float *)&v211 + 2) <= *(float *)&v211 || *((float *)&v211 + 3) <= *((float *)&v211 + 1) )
  {
    v26 &= ~(v93 << v88);
    LODWORD(v209) = v26;
    goto LABEL_181;
  }
  v29 = FLOAT_40960_0;
LABEL_184:
  v94 = *(_QWORD *)(v7 + 392);
  if ( !v94 )
  {
    v96 = FLOAT_1_0;
    goto LABEL_191;
  }
  v95 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v94 + 48LL))(*(_QWORD *)(v7 + 392), 8LL);
  v7 = Size;
  v96 = FLOAT_1_0;
  if ( v95 )
  {
    v97 = *(double *)(*(_QWORD *)(Size + 392) + 56LL);
    if ( v97 <= 1.0 && (v97 < 0.0 || v97 < 1.0) )
      goto LABEL_438;
  }
LABEL_191:
  v98 = *(float *)(v7 + 384);
  if ( v98 <= v96 && (v98 < 0.0 || v96 > v98)
    || (*(_BYTE *)(v7 + 73) & 0x40) != 0
    || ((*(_DWORD *)(v7 + 192) - 2) & 0xFFFFFFFD) == 0 )
  {
    goto LABEL_438;
  }
  v99 = (_QWORD)v215 && *(_DWORD *)(v215 + 84) == 1;
  if ( *(_DWORD *)(v7 + 84) == 1 && !v99 )
  {
    v100 = *(_QWORD *)(v7 + 56);
    if ( (v100 & 2) != 0 )
      v100 = *(_QWORD *)(v100 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v100) = v100 & 1;
    if ( (_DWORD)v100 )
      goto LABEL_438;
  }
  v101 = &v220;
  v102 = v207;
  v103 = -2003292412;
  if ( !*(_QWORD *)(v7 + 352) )
    v101 = 0LL;
  v104 = *(_QWORD *)(*((_QWORD *)v6 + 6) + 8LL);
  if ( *(_BYTE *)(v207 + 32) )
  {
    v105 = (_QWORD *)(v104 + 432);
    goto LABEL_210;
  }
  v116 = *(_QWORD **)(v104 + 416);
  if ( v116 == (_QWORD *)(v104 + 416) )
    goto LABEL_269;
  while ( 1 )
  {
    v105 = v116 - 33;
    if ( v116[4] == v207 )
      break;
    v116 = (_QWORD *)*v116;
    if ( v116 == (_QWORD *)(v104 + 416) )
      goto LABEL_269;
  }
LABEL_210:
  if ( !v105 )
    goto LABEL_269;
  v106 = *(struct CWeakReferenceBase **)(v104 + 344);
  v107 = 0;
  TreeData = 0LL;
  if ( v106 )
  {
    if ( *(_QWORD *)v106 )
    {
      if ( v104 != *(_QWORD *)v106 )
      {
        IsPreserve3D = CVisual::IsPreserve3D((CVisual *)v104, *(const struct CVisual **)(v104 + 64));
        v102 = v207;
        v112 = IsPreserve3D;
        v113 = *(CVisual **)(v207 + 24);
        if ( (CVisual *)v104 != v113 )
        {
          do
          {
            v117 = 1;
            v114 = *(CVisual **)(v110 + 64);
            if ( !v114 || *((_DWORD *)v114 + 21) != 1 )
            {
              if ( *(_DWORD *)(v110 + 84) != 1
                || ((v115 = *(_QWORD *)(v110 + 56), (v115 & 2) == 0)
                  ? (LODWORD(v115) = v115 & 1)
                  : (v115 = *(_QWORD *)(v115 & 0xFFFFFFFFFFFFFFFCuLL)),
                    !(_DWORD)v115) )
              {
                v117 = 0;
              }
            }
            if ( v112 != v117 )
              break;
            if ( v114 == v111 )
            {
              v107 = 1;
              TreeData = CVisual::FindTreeData(v111, (const struct CVisualTree *)v207);
              if ( TreeData )
                goto LABEL_244;
              v102 = v118;
              break;
            }
            v110 = *(_QWORD *)(v110 + 64);
          }
          while ( v114 != v113 );
        }
      }
    }
    else
    {
      CComposition::ReleaseWeakReference(*(CComposition **)(v104 + 16), v106);
      v102 = v207;
      *(_QWORD *)(v104 + 344) = 0LL;
    }
  }
  if ( v104 != *(_QWORD *)(v102 + 24) )
  {
    v119 = *(_QWORD *)(v104 + 64);
    TreeData = 0LL;
    if ( *(_BYTE *)(v102 + 32) )
    {
      TreeData = (__int64 **)(v119 + 432);
    }
    else
    {
      v120 = (_QWORD *)(v119 + 416);
      v121 = (_QWORD *)*v120;
      if ( (_QWORD *)*v120 != v120 )
      {
        while ( v121[4] != v102 )
        {
          v121 = (_QWORD *)*v121;
          if ( v121 == v120 )
            goto LABEL_243;
        }
        TreeData = (__int64 **)(v121 - 33);
      }
    }
  }
LABEL_243:
  if ( TreeData )
LABEL_244:
    v122 = (unsigned __int64)TreeData[14];
  else
    v122 = 1LL;
  if ( v105[14] < v122 )
  {
    v123 = 0LL;
    if ( TreeData )
      v123 = TreeData + 5;
    v124 = &v229;
    if ( !*(_QWORD *)(v104 + 352) )
      v124 = 0LL;
    CVisual::CalcEffectiveTransform(v104, 5, v123, &v205, (struct D2DMatrix *)Buf2, (__int64)v124);
    v125 = v107 || v104 == *(_QWORD *)(v207 + 24) || v205 && memcmp_0(v123, Buf2, 0x40uLL) != 0;
    v126 = &v229;
    if ( !*(_QWORD *)(v104 + 352) )
      v126 = 0LL;
    v127 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, bool, float *))(*v105 + 48LL))(v105, Buf2, v125, v126);
    v103 = v127;
    if ( v127 >= 0 )
    {
      if ( *(_QWORD *)(v104 + 400) && (*(_BYTE *)(v104 + 74) & 2) != 0 )
      {
        v207 = 0LL;
        Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v207);
        if ( (int)CComposition::GetManipulationManager(
                    *(CComposition **)(v104 + 16),
                    (struct CManipulationManager **)&v207) >= 0 )
          CManipulationManager::NotifyVisualPropertyChange(
            (CManipulationManager *)v207,
            (struct CVisual *)v104,
            (const struct CMILMatrix *)Buf2);
        Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v207);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v127, 0x567u);
    }
    if ( v103 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v103, 0x477u);
      goto LABEL_268;
    }
  }
  v103 = 0;
  if ( !v105[14] )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x70u);
    v103 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x47Eu);
    v10 = -2003292412;
    goto LABEL_270;
  }
  v128 = *((_BYTE *)v105 + 16);
  v129 = *(_OWORD *)(v105 + 7);
  v224 = *(_OWORD *)(v105 + 5);
  v130 = (v128 & 2) != 0;
  v225 = v129;
  v131 = *(_OWORD *)(v105 + 11);
  v226 = *(_OWORD *)(v105 + 9);
  v227 = v131;
  if ( v101 )
  {
    v132 = (__m128 *)v105[13];
    v133 = v132[1];
    *v101 = *v132;
    v134 = v132[2];
    v101[1] = v133;
    v135 = v132[3];
    v101[2] = v134;
    v101[3] = v135;
  }
  v205 = v130;
LABEL_268:
  v6 = v208;
  v7 = Size;
LABEL_269:
  v10 = v103;
  if ( v103 < 0 )
  {
LABEL_270:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v103, 0x1F4u);
    goto LABEL_271;
  }
  v136 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v224 + 2)) & _xmm);
  if ( v136 >= 0.00012207031 )
    goto LABEL_437;
  v137 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v225 + 2)) & _xmm);
  if ( v137 >= 0.00012207031
    || (v138 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v227 + 2)) & _xmm), v138 >= 0.00012207031) )
  {
    if ( v136 >= 0.00012207031 )
      goto LABEL_437;
    v139 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v225 + 2)) & _xmm);
    if ( v139 >= 0.00012207031 )
      goto LABEL_437;
    v140 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v226) & _xmm);
    if ( v140 >= 0.00012207031 )
      goto LABEL_437;
    v141 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v226 + 1)) & _xmm);
    if ( v141 >= 0.00012207031 )
      goto LABEL_437;
    v142 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v226 + 2) - v96)) & _xmm);
    if ( v142 >= 0.00012207031 )
    {
      v143 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v226 + 2)) & _xmm);
      if ( v143 >= 0.00012207031 )
        goto LABEL_437;
    }
    v144 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v226 + 3)) & _xmm);
    if ( v144 >= 0.00012207031 )
      goto LABEL_437;
    v145 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v227 + 2)) & _xmm);
    if ( v145 >= 0.00012207031 )
      goto LABEL_437;
  }
  v146 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v224 + 3)) & _xmm);
  v147 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v227 + 3)) & _xmm);
  v148 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v225 + 3)) & _xmm)
                                                                           * v29)
                                                                   + (float)(v146 * v29))
                                                           + v147)
                                                   - v96)) & _xmm);
  if ( v148 >= 0.00012207031
    || ((v149 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v224 + 1)) & _xmm), v149 >= 0.00012207031)
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v225) & _xmm) >= 0.00012207031)
    && ((v150 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v224) & _xmm), v150 >= 0.00012207031)
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v225 + 1)) & _xmm) >= 0.00012207031) )
  {
LABEL_437:
    v10 = 0;
    goto LABEL_438;
  }
  v151 = *(__int64 **)(v7 + 352);
  v152 = 0LL;
  v204 = 1;
  v10 = 0;
  if ( !v151 )
  {
    v192 = v210;
    goto LABEL_418;
  }
  v153 = v7 + 132;
  v154 = 0LL;
  if ( (v151[4] & 1) != 0
    || *((_BYTE *)v151 + 88)
    && (*((float *)v151 + 20) != *(float *)v153 || *((float *)v151 + 21) != *(float *)(v7 + 136)) )
  {
    v155 = *v151;
    v156 = 0LL;
    v4 = *((_BYTE *)v151 + 88) == 0;
    v214[0] = 0LL;
    if ( !v4 )
      v156 = v7 + 132;
    v157 = (*(__int64 (__fastcall **)(__int64 *, size_t, void **))(v155 + 112))(v151, v156, v214);
    v10 = v157;
    if ( v157 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v157, 0x49u);
      goto LABEL_318;
    }
    v158 = (void (__fastcall ***)(__int64, __int64))v151[8];
    v159 = (void **)(v151 + 8);
    if ( v158 )
      (**v158)(v151[8], 1LL);
    v160 = (const struct D2DMatrix *)v151[9];
    v152 = 0LL;
    *v159 = 0LL;
    if ( !v160 || D2DMatrixIsIdentity(v160) )
    {
      v163 = v214[0];
    }
    else
    {
      v162 = CShape::Combine((__int64)v214[0], v161, 0LL, 0LL, 0, v151 + 8);
      v10 = v162;
      if ( v162 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v162, 0x56u);
        goto LABEL_318;
      }
      v163 = *v159;
    }
    v151[7] = (__int64)v163;
    if ( v153 )
      v151[10] = *(_QWORD *)v153;
    *((_DWORD *)v151 + 8) &= ~1u;
  }
  v154 = (_QWORD *)v151[7];
LABEL_318:
  if ( v10 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int128 *, _QWORD))(*v154 + 24LL))(v154, &v215, 0LL);
    LOBYTE(a2) = *((float *)&v215 + 2) > *(float *)&v215
              && *((float *)&v215 + 3) > *((float *)&v215 + 1)
              && (!(*(unsigned int (__fastcall **)(_QWORD *))(*v154 + 8LL))(v154)
               || (*(unsigned int (__fastcall **)(_QWORD *))(*v154 + 8LL))(v154) == 2
               && (v164 = v154[1]) != 0
               && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v164 + 136LL))(v154[1]) == 1);
    v204 = (char)a2;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x68Bu);
    LOBYTE(a2) = 1;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x202u);
    goto LABEL_271;
  }
  if ( !(_BYTE)a2 )
  {
LABEL_272:
    v6 = v208;
    goto LABEL_273;
  }
  v10 = 0;
  v165 = *(_QWORD *)(Size + 352);
  if ( (*(_BYTE *)(v165 + 32) & 1) != 0
    || *(_BYTE *)(v165 + 88)
    && (*(float *)(v165 + 80) != *(float *)v153 || *(float *)(v165 + 84) != *(float *)(v153 + 4)) )
  {
    v4 = *(_BYTE *)(v165 + 88) == 0;
    v166 = 0LL;
    *(_QWORD *)&v211 = 0LL;
    if ( !v4 )
      v166 = v153;
    v167 = (*(__int64 (__fastcall **)(__int64, size_t, __int128 *))(*(_QWORD *)v165 + 112LL))(v165, v166, &v211);
    v10 = v167;
    if ( v167 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v167, 0x49u);
      goto LABEL_352;
    }
    v168 = *(void (__fastcall ****)(_QWORD, __int64))(v165 + 64);
    v169 = (__int64 *)(v165 + 64);
    if ( v168 )
      (**v168)(*(_QWORD *)(v165 + 64), 1LL);
    v170 = *(const struct D2DMatrix **)(v165 + 72);
    *v169 = 0LL;
    if ( !v170 || D2DMatrixIsIdentity(v170) )
    {
      v174 = v211;
    }
    else
    {
      v173 = CShape::Combine(v211, v172, 0LL, 0LL, v171, (_QWORD *)(v165 + 64));
      v10 = v173;
      if ( v173 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v173, 0x56u);
        goto LABEL_352;
      }
      v174 = *v169;
    }
    *(_QWORD *)(v165 + 56) = v174;
    if ( v153 )
      *(_QWORD *)(v165 + 80) = *(_QWORD *)v153;
    *(_DWORD *)(v165 + 32) &= ~1u;
  }
  v152 = *(void **)(v165 + 56);
LABEL_352:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x6A7u);
    goto LABEL_397;
  }
  v175 = (*(__int64 (__fastcall **)(void *, __int128 *, _QWORD))(*(_QWORD *)v152 + 24LL))(v152, &v215, 0LL);
  v10 = v175;
  if ( v175 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v175, 0x6B3u);
    goto LABEL_397;
  }
  *(_OWORD *)v214 = v215;
  if ( v220.m128_f32[0] == v96
    && v220.m128_f32[1] == 0.0
    && v220.m128_f32[2] == 0.0
    && v220.m128_f32[3] == 0.0
    && *(float *)&v221 == 0.0
    && *((float *)&v221 + 1) == v96
    && *((float *)&v221 + 2) == 0.0
    && *((float *)&v221 + 3) == 0.0
    && *(float *)&v222 == 0.0
    && *((float *)&v222 + 1) == 0.0
    && *((float *)&v222 + 2) == v96
    && *((float *)&v222 + 3) == 0.0 )
  {
    *(float *)&v215 = *(float *)&v215 + *(float *)&v223;
    *((float *)&v215 + 1) = *((float *)&v215 + 1) + *((float *)&v223 + 1);
    *((float *)&v215 + 2) = *((float *)&v215 + 2) + *(float *)&v223;
    *((float *)&v215 + 3) = *((float *)&v215 + 3) + *((float *)&v223 + 1);
  }
  else
  {
    CBaseMatrix::Transform2DRectToPerspective(
      (CBaseMatrix *)&v220,
      (const struct MilRectF *)v214,
      (struct MilPoint2F *const)&v216);
    v176 = v216.m128_f32[2];
    Size = v216.m128_u64[0];
    v214[0] = (void *)v216.m128_u64[0];
    if ( v216.m128_f32[0] <= v216.m128_f32[2] )
      v177 = *(float *)v214;
    else
      v177 = v216.m128_f32[2];
    v178 = *((float *)v214 + 1);
    if ( *((float *)v214 + 1) > v216.m128_f32[3] )
      v178 = v216.m128_f32[3];
    if ( v216.m128_f32[2] <= v216.m128_f32[0] )
      LODWORD(v176) = Size;
    v179 = *((float *)&Size + 1);
    if ( v216.m128_f32[3] > *((float *)&Size + 1) )
      v179 = v216.m128_f32[3];
    if ( v177 > *(float *)&v217 )
      LODWORD(v177) = v217;
    if ( v178 > *((float *)&v217 + 1) )
      v178 = *((float *)&v217 + 1);
    if ( *(float *)&v217 > v176 )
      LODWORD(v176) = v217;
    if ( *((float *)&v217 + 1) > v179 )
      v179 = *((float *)&v217 + 1);
    if ( v177 > *((float *)&v217 + 2) )
      v177 = *((float *)&v217 + 2);
    if ( v178 > *((float *)&v217 + 3) )
      v178 = *((float *)&v217 + 3);
    if ( *((float *)&v217 + 2) > v176 )
      v176 = *((float *)&v217 + 2);
    if ( *((float *)&v217 + 3) > v179 )
      v179 = *((float *)&v217 + 3);
    *(_QWORD *)&v215 = __PAIR64__(LODWORD(v178), LODWORD(v177));
    *((_QWORD *)&v215 + 1) = __PAIR64__(LODWORD(v179), LODWORD(v176));
  }
  v180 = v208;
  v181 = CBaseClipStack::Push((COcclusionContext *)((char *)v208 + 56), (const struct MilRectF *)&v215);
  v10 = v181;
  if ( v181 >= 0 )
  {
    v182 = *((_DWORD *)v180 + 167);
    v152 = 0LL;
    v10 = 0;
    v183 = 0LL;
    v214[0] = 0LL;
    if ( *((_DWORD *)v180 + 166) == v182 )
    {
      LODWORD(v207) = 0;
      LODWORD(Size) = 0;
      v184 = ULongLongToUInt(2LL * v182, (unsigned int *)&v207);
      v10 = v184;
      if ( v184 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v184, 0x4Cu);
        goto LABEL_412;
      }
      v186 = v207;
      if ( (unsigned int)v207 <= 0x40 )
        v186 = 64;
      v187 = WPF::HrMalloc(v185, 4LL, v186, (unsigned __int64)v214, v203);
      v10 = v187;
      if ( v187 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v187, 0x54u);
LABEL_407:
        v183 = v214[0];
        goto LABEL_412;
      }
      v188 = ULongLongToUInt(4LL * *((unsigned int *)v180 + 166), (unsigned int *)&Size);
      v10 = v188;
      if ( v188 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v188, 0x56u);
        goto LABEL_407;
      }
      v189 = v214[0];
      memcpy_0(v214[0], *((const void **)v180 + 85), (unsigned int)Size);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)v180 + 85));
      *((_QWORD *)v180 + 85) = v189;
      v183 = 0LL;
      *((_DWORD *)v180 + 167) = v186;
    }
    *(_DWORD *)(*((_QWORD *)v180 + 85) + 4LL * *((unsigned int *)v180 + 166)) = 0;
    v190 = *((_DWORD *)v180 + 172);
    v191 = ++*((_DWORD *)v180 + 166);
    if ( v190 > v191 )
      v191 = v190;
    *((_DWORD *)v180 + 172) = v191;
LABEL_412:
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v183);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x6B7u);
      goto LABEL_414;
    }
    goto LABEL_416;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v181, 0x6B6u);
LABEL_397:
  v152 = 0LL;
LABEL_414:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x209u);
LABEL_271:
    LOBYTE(a2) = v204;
    goto LABEL_272;
  }
LABEL_416:
  v192 = v210;
  *(_BYTE *)(v210 + 8) |= 2u;
LABEL_418:
  v6 = v208;
  if ( v205 )
  {
    v193 = CBaseMatrixStack::Push((COcclusionContext *)((char *)v208 + 16), (const struct CMILMatrix *)&v224, 0);
    v10 = v193;
    if ( v193 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v193, 0x20Fu);
      LOBYTE(a2) = v204;
      goto LABEL_273;
    }
    *(_BYTE *)(v192 + 8) |= 4u;
  }
  v194 = *((_DWORD *)v6 + 175);
  v214[0] = 0LL;
  if ( *((_DWORD *)v6 + 174) != v194 )
    goto LABEL_433;
  LODWORD(Size) = 0;
  LODWORD(v207) = 0;
  v195 = ULongLongToUInt(2LL * v194, (unsigned int *)&Size);
  if ( v195 >= 0 )
  {
    v197 = Size;
    if ( (unsigned int)Size <= 0x40 )
      v197 = 64;
    v198 = WPF::HrMalloc(v196, 4LL, v197, (unsigned __int64)v214, v203);
    if ( v198 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v198, 0x54u);
LABEL_431:
      v152 = v214[0];
      goto LABEL_436;
    }
    v199 = ULongLongToUInt(4LL * *((unsigned int *)v6 + 174), (unsigned int *)&v207);
    if ( v199 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v199, 0x56u);
      goto LABEL_431;
    }
    v200 = v214[0];
    memcpy_0(v214[0], *((const void **)v6 + 89), (unsigned int)v207);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)v6 + 89));
    *((_QWORD *)v6 + 89) = v200;
    *((_DWORD *)v6 + 175) = v197;
LABEL_433:
    *(_DWORD *)(*((_QWORD *)v6 + 89) + 4LL * *((unsigned int *)v6 + 174)) = v209;
    v201 = *((_DWORD *)v6 + 180);
    v202 = ++*((_DWORD *)v6 + 174);
    if ( v201 > v202 )
      v202 = v201;
    *((_DWORD *)v6 + 180) = v202;
    goto LABEL_436;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v195, 0x4Cu);
LABEL_436:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v152);
  LOBYTE(a2) = v204;
LABEL_273:
  if ( v10 >= 0 )
  {
LABEL_274:
    if ( (_BYTE)a2 )
      return (unsigned int)v10;
    goto LABEL_438;
  }
  return (unsigned int)v10;
}
