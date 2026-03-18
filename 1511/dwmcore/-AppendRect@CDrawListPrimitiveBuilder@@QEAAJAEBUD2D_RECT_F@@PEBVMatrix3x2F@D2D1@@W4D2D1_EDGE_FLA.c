/*
 * XREFs of ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180033340
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Create@GeometrySink@CDrawListPrimitiveBuilder@@SAJPEAV2@PEAPEAV12@@Z @ 0x18001727C (-Create@GeometrySink@CDrawListPrimitiveBuilder@@SAJPEAV2@PEAPEAV12@@Z.c)
 *     ?AppendGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEAVCShape@@AEBUContentInfo@Mesh@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@_N5@Z @ 0x1800178EC (-AppendGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEAVCShape@@AEBUContentInfo@Mesh@@W.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18001FD70 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?CalcClippedRectEdgeFlags@CDrawListPrimitiveBuilder@@KA?AW4D2D1_EDGE_FLAGS@@W42@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x18002F620 (-CalcClippedRectEdgeFlags@CDrawListPrimitiveBuilder@@KA-AW4D2D1_EDGE_FLAGS@@W42@AEBV-$TMilRect_@.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180030D64 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180030DC8 (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x18003431C (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180047400 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18004E114 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180058270 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18013A564 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::AppendRect(
        __int64 a1,
        float *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        char a6,
        char a7,
        float *a8,
        CRegionShape *a9,
        char a10)
{
  unsigned int v15; // r15d
  __int64 v16; // xmm1_8
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  float dy; // xmm12_4
  float dx; // xmm13_4
  float v21; // xmm11_4
  float v22; // xmm12_4
  float v23; // xmm9_4
  float v24; // xmm13_4
  __int64 v25; // rax
  unsigned int (__fastcall *v26)(CRegionShape *); // rbx
  float v27; // xmm1_4
  __int64 (__fastcall *v28)(CRectangleShape *); // rbx
  int TightBounds; // eax
  unsigned int v30; // esi
  float v31; // xmm8_4
  float v32; // xmm7_4
  float v33; // xmm6_4
  float v34; // xmm10_4
  void ***v35; // r14
  char v36; // r12
  __int64 (__fastcall *v37)(CRectangleShape *); // rbx
  float *v38; // r13
  unsigned int v39; // xmm1_4
  int v40; // eax
  __m128 v41; // xmm2
  int RectangleMesh; // eax
  int v43; // eax
  _QWORD *v44; // rbx
  unsigned int v45; // esi
  int v46; // r11d
  __int64 v47; // r10
  unsigned int v48; // xmm12_4
  float v49; // xmm6_4
  unsigned int v50; // xmm13_4
  float v51; // xmm7_4
  float v52; // xmm15_4
  float v53; // xmm5_4
  float *v54; // rdx
  float v55; // xmm10_4
  float v56; // xmm11_4
  float v57; // xmm12_4
  float v58; // xmm13_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  bool v61; // r15
  unsigned int v62; // r8d
  __int64 v63; // r9
  unsigned __int64 v64; // rax
  float v65; // xmm3_4
  float v66; // xmm4_4
  float v67; // xmm3_4
  float v68; // xmm4_4
  float v69; // xmm5_4
  float v70; // xmm6_4
  float v71; // xmm1_4
  float v72; // xmm7_4
  float v73; // xmm0_4
  float v74; // xmm2_4
  __int64 v75; // rcx
  void ***v76; // xmm1_8
  unsigned int v77; // r9d
  __m128 v78; // xmm10
  __m128 v79; // xmm11
  float v80; // xmm6_4
  float v81; // xmm7_4
  float v82; // xmm8_4
  float v83; // xmm9_4
  float *v84; // rcx
  float *v85; // rax
  __m128 v86; // xmm4
  __m128 v87; // xmm5
  float v88; // xmm3_4
  float v89; // xmm5_4
  float v90; // xmm6_4
  __m128 m22_low; // xmm7
  float m21; // xmm8_4
  float m12; // xmm9_4
  __m128 m11_low; // xmm10
  __int64 v95; // rax
  __m128 v96; // xmm4
  __m128 v97; // xmm2
  unsigned __int64 v98; // rcx
  unsigned __int64 v99; // xmm0_8
  __m128 v100; // xmm2
  __int64 v101; // rax
  __m128 v102; // xmm4
  float v104; // xmm5_4
  float v105; // xmm4_4
  float v106; // xmm11_4
  float v107; // xmm1_4
  unsigned int v108; // xmm9_4
  unsigned int v109; // xmm11_4
  unsigned int v110; // xmm7_4
  unsigned int v111; // xmm6_4
  unsigned int v112; // xmm10_4
  unsigned int v113; // xmm8_4
  int v114; // eax
  __int64 v115; // rcx
  int appended; // eax
  int v117; // eax
  struct D2D_MATRIX_3X2_F *v118; // [rsp+28h] [rbp-E0h]
  unsigned int v119; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v120; // [rsp+4Ch] [rbp-BCh] BYREF
  float *v121; // [rsp+50h] [rbp-B8h]
  D2D1_MATRIX_3X2_F v122; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v123; // [rsp+70h] [rbp-98h]
  float v124; // [rsp+74h] [rbp-94h]
  float v125; // [rsp+78h] [rbp-90h]
  float v126; // [rsp+7Ch] [rbp-8Ch]
  D2D1_MATRIX_3X2_F v127; // [rsp+80h] [rbp-88h] BYREF
  void ***v128; // [rsp+98h] [rbp-70h] BYREF
  float v129; // [rsp+A0h] [rbp-68h]
  float v130; // [rsp+A4h] [rbp-64h]
  __int128 v131; // [rsp+A8h] [rbp-60h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+B8h] [rbp-50h] BYREF
  void **v133; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v134; // [rsp+D8h] [rbp-30h]
  __int64 v135; // [rsp+E8h] [rbp-20h]
  __int128 v136; // [rsp+F8h] [rbp-10h]
  __int128 v137; // [rsp+108h] [rbp+0h]
  __int128 v138; // [rsp+128h] [rbp+20h]
  __int128 v139; // [rsp+138h] [rbp+30h] BYREF
  __int128 v140; // [rsp+148h] [rbp+40h]
  __int128 v141; // [rsp+158h] [rbp+50h]
  __int128 v142; // [rsp+168h] [rbp+60h]
  _OWORD v143[8]; // [rsp+178h] [rbp+70h] BYREF

  v121 = a8;
  v123 = *(_DWORD *)(a1 + 136);
  memset_0(v143, 0, 0x74uLL);
  v128 = 0LL;
  v133 = &CRectangleShape::`vftable';
  v135 = 0LL;
  v134 = 0LL;
  if ( a5 == 1 )
  {
    v15 = 0;
    a10 = 0;
  }
  else
  {
    v15 = a4;
  }
  if ( a3 )
  {
    v16 = *(_QWORD *)(a3 + 16);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)a3;
    *(_QWORD *)&matrix.m[2][0] = v16;
    if ( !D2D1IsMatrixInvertible(&matrix) )
    {
      v30 = 0;
      goto LABEL_80;
    }
    dy = matrix.dy;
    dx = matrix.dx;
  }
  else
  {
    dx = 0.0;
    dy = 0.0;
    *(_QWORD *)&matrix.m[2][0] = 0LL;
    *(_OWORD *)&matrix.m11 = _xmm;
  }
  if ( !*(_BYTE *)(a1 + 2184) || !a9 )
  {
    v104 = *a2;
    v105 = a2[1];
    v106 = a2[2] - *a2;
    v107 = a2[3] - v105;
    *(float *)&v108 = (float)(matrix.m11 * v106) + (float)(matrix.m21 * 0.0);
    *(float *)&v109 = (float)(v106 * matrix.m12) + (float)(matrix.m22 * 0.0);
    *(float *)&v110 = (float)(matrix.m21 * v107) + (float)(matrix.m11 * 0.0);
    *(float *)&v111 = (float)(matrix.m22 * v107) + (float)(matrix.m12 * 0.0);
    v131 = _xmm;
    *(float *)&v112 = (float)((float)(matrix.m11 * v104) + (float)(matrix.m21 * v105)) + dx;
    *(float *)&v113 = (float)((float)(matrix.m22 * v105) + (float)(matrix.m12 * v104)) + dy;
    CRectangleShape::Set((CRectangleShape *)&v133, (const struct MilRectF *)&v131);
    v24 = *((float *)&v131 + 3);
    v35 = &v133;
    v22 = *((float *)&v131 + 1);
    *(_QWORD *)&v122.m11 = __PAIR64__(v109, v108);
    v23 = *((float *)&v131 + 2);
    LODWORD(v21) = v131;
    *(_QWORD *)&v122.m[1][0] = __PAIR64__(v111, v110);
    *(_QWORD *)&v122.m[2][0] = __PAIR64__(v113, v112);
LABEL_29:
    v36 = 0;
    goto LABEL_30;
  }
  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
          (D2DMatrixHelper *)&matrix,
          (const struct D2D_MATRIX_3X2_F *)&v119,
          (float *)&v120,
          &v122.m11) )
    D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
      (D2DMatrixHelper *)&matrix,
      (const struct D2D_MATRIX_3X2_F *)&v119,
      (float *)&v120,
      &v122.m11,
      v118);
  v21 = *(float *)&v119 * *a2;
  v22 = *(float *)&v120 * a2[1];
  v23 = *(float *)&v119 * a2[2];
  v24 = *(float *)&v120 * a2[3];
  *(float *)&v131 = v21;
  *(_QWORD *)((char *)&v131 + 4) = __PAIR64__(LODWORD(v23), LODWORD(v22));
  *((float *)&v131 + 3) = v24;
  v127 = v122;
  D2D1InvertMatrix(&v127);
  v25 = *(_QWORD *)a9;
  v136 = *(unsigned __int64 *)&v127.m11;
  v26 = *(unsigned int (__fastcall **)(CRegionShape *))(v25 + 8);
  v137 = *(unsigned __int64 *)&v127.m[1][0];
  *(_QWORD *)&v138 = *(_QWORD *)&v127.m[2][0];
  v139 = *(unsigned __int64 *)&v127.m11;
  *((_QWORD *)&v138 + 1) = 0x3F80000000000000LL;
  v142 = v138;
  v140 = *(unsigned __int64 *)&v127.m[1][0];
  v141 = _xmm;
  if ( !v26(a9)
    || (*(unsigned int (__fastcall **)(CRegionShape *))(*(_QWORD *)a9 + 8LL))(a9) == 2
    && CRegionShape::GetRectCount(a9) == 1 )
  {
    if ( (unsigned int)CBaseMatrix::Is2DAffine((CBaseMatrix *)&v139, 1) )
    {
      if ( (v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v139 + 1)) & _xmm), v27 < 0.00012207031)
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v140) & _xmm) < 0.00012207031
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v139) & _xmm) < 0.00012207031
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v140 + 1)) & _xmm) < 0.00012207031 )
      {
        v28 = *(__int64 (__fastcall **)(CRectangleShape *))(*(_QWORD *)a9 + 24LL);
        if ( v28 == CRectangleShape::GetTightBounds )
          TightBounds = CRectangleShape::GetTightBounds(a9);
        else
          TightBounds = ((__int64 (__fastcall *)(CRegionShape *, void ****, __int128 *))v28)(a9, &v128, &v139);
        v30 = TightBounds;
        if ( TightBounds < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0xFAu);
          goto LABEL_80;
        }
        LODWORD(v31) = (_DWORD)v128;
        if ( (float)(*(float *)&v128 - v21) > 0.0000011920929 )
          *(_BYTE *)(a1 + 2185) = 1;
        else
          v31 = v21;
        v32 = *((float *)&v128 + 1);
        if ( (float)(*((float *)&v128 + 1) - v22) > 0.0000011920929 )
          *(_BYTE *)(a1 + 2185) = 1;
        else
          v32 = v22;
        v33 = v129;
        if ( (float)(v23 - v129) > 0.0000011920929 )
          *(_BYTE *)(a1 + 2185) = 1;
        else
          v33 = v23;
        v34 = v130;
        if ( (float)(v24 - v130) > 0.0000011920929 )
          *(_BYTE *)(a1 + 2185) = 1;
        else
          v34 = v24;
        if ( v135 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v135 + 16LL))(v135);
          v135 = 0LL;
        }
        *(_QWORD *)&v127.m11 = __PAIR64__(LODWORD(v32), LODWORD(v31));
        *(_QWORD *)&v127.m[1][0] = __PAIR64__(LODWORD(v34), LODWORD(v33));
        v35 = &v133;
        v134 = *(_OWORD *)&v127.m11;
        v15 = CDrawListPrimitiveBuilder::CalcClippedRectEdgeFlags(v15, (float *)&v131, (float *)&v128, a10);
        if ( v15 != a4 )
          *(_BYTE *)(a1 + 2185) = 1;
        goto LABEL_29;
      }
    }
  }
  CRectangleShape::Set((CRectangleShape *)&v133, (const struct MilRectF *)&v131);
  v114 = CShape::Combine((__int64)&v133, 0LL, (__int64)a9, (__int64)&v139, 1, &v128);
  v30 = v114;
  if ( v114 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v114, 0x147u);
    goto LABEL_80;
  }
  v35 = v128;
  v36 = 1;
  v24 = *((float *)&v131 + 3);
  v23 = *((float *)&v131 + 2);
  v22 = *((float *)&v131 + 1);
  LODWORD(v21) = v131;
  *(_BYTE *)(a1 + 2185) = 1;
LABEL_30:
  v37 = (__int64 (__fastcall *)(CRectangleShape *))(*v35)[3];
  if ( v37 == CRectangleShape::GetTightBounds )
    CRectangleShape::GetTightBounds((CRectangleShape *)v35);
  else
    ((void (__fastcall *)(void ***, void ****, _QWORD))v37)(v35, &v128, 0LL);
  if ( v129 <= *(float *)&v128 || v130 <= *((float *)&v128 + 1) )
  {
LABEL_77:
    v30 = 0;
    goto LABEL_78;
  }
  v38 = v121;
  if ( v121 )
  {
    v127.m22 = v121[3];
    *(float *)&v39 = v127.m22 * v121[1];
    v127.m11 = v127.m22 * *v121;
    *(_QWORD *)&v127.m[0][1] = __PAIR64__(v127.m22 * v121[2], v39);
    v143[0] = *(_OWORD *)&v127.m11;
  }
  else
  {
    v143[0] = _xmm;
  }
  v40 = ((__int64 (__fastcall *)(void ***))(*v35)[1])(v35);
  if ( v40 )
  {
    if ( v40 == 3 )
    {
      if ( !*(_QWORD *)(a1 + 2160) )
      {
        v117 = CDrawListPrimitiveBuilder::GeometrySink::Create(
                 (struct CDrawListPrimitiveBuilder *)a1,
                 (struct CDrawListPrimitiveBuilder::GeometrySink **)(a1 + 2160));
        v30 = v117;
        if ( v117 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v117, 0x1A2u);
          goto LABEL_78;
        }
      }
      v115 = *(_QWORD *)(a1 + 2160);
      *(_QWORD *)&v127.m11 = __PAIR64__(LODWORD(v22), LODWORD(v21));
      *(_QWORD *)&v127.m[1][0] = __PAIR64__(LODWORD(v24), LODWORD(v23));
      appended = CDrawListPrimitiveBuilder::GeometrySink::AppendGeometry(
                   v115,
                   (__int64 *)v35,
                   (__int64)v143,
                   a5,
                   v15,
                   (__int128 *)&v127,
                   a6,
                   a7);
      v30 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x1A5u);
        goto LABEL_78;
      }
    }
LABEL_40:
    if ( v38 )
    {
      v127 = matrix;
      D2D1InvertMatrix(&v127);
      v44 = (_QWORD *)(a1 + 2168);
      v45 = v123;
      v46 = 0;
      v47 = 0LL;
      *(float *)&v48 = (float)(v127.m11 * v122.m11) + (float)(v127.m21 * v122.m12);
      v120 = v48;
      v49 = (float)(v122.m11 * v127.m12) + (float)(v127.m22 * v122.m12);
      *(float *)&v50 = (float)(v127.m11 * v122.m21) + (float)(v122.m22 * v127.m21);
      v124 = v49;
      v51 = (float)(v122.m22 * v127.m22) + (float)(v122.m21 * v127.m12);
      v119 = v50;
      v125 = v51;
      v52 = (float)((float)(v127.m11 * v122.dx) + (float)(v122.dy * v127.m21)) + v127.dx;
      v53 = (float)((float)(v122.dy * v127.m22) + (float)(v122.dx * v127.m12)) + v127.dy;
      v126 = v53;
      do
      {
        if ( *v44 )
        {
          if ( v46 )
            v54 = v38 + 14;
          else
            v54 = v38 + 4;
          v55 = (float)(*(float *)&v48 * *v54) + (float)(v54[2] * v49);
          v56 = (float)(v54[1] * *(float *)&v48) + (float)(v54[3] * v49);
          v57 = (float)(*v54 * *(float *)&v50) + (float)(v54[2] * v51);
          v58 = (float)(v54[1] * *(float *)&v119) + (float)(v54[3] * v51);
          v59 = (float)((float)(*v54 * v52) + (float)(v54[2] * v53)) + v54[4];
          v60 = (float)((float)(v54[1] * v52) + (float)(v54[3] * v53)) + v54[5];
          v61 = v54[6] != 0.0 || v54[7] != 0.0 || v54[8] != 1.0 || v54[9] != 1.0;
          v62 = v45;
          if ( v45 < *(_DWORD *)(a1 + 136) )
          {
            do
            {
              v63 = *(_QWORD *)(a1 + 112);
              v64 = (unsigned __int64)v62 << 6;
              v121 = *(float **)(v63 + v64);
              v65 = (float)(*(float *)&v121 * v55) + (float)(v57 * *((float *)&v121 + 1));
              v66 = (float)(*(float *)&v121 * v56) + (float)(v58 * *((float *)&v121 + 1));
              v121 = *(float **)(v64 + v63 + 32);
              v67 = v65 + v59;
              v68 = v66 + v60;
              *(_QWORD *)&v131 = __PAIR64__(LODWORD(v68), LODWORD(v67));
              v69 = (float)((float)(v57 * *((float *)&v121 + 1)) + (float)(v55 * *(float *)&v121)) + v59;
              *(float *)&v128 = v69;
              v70 = (float)((float)(v58 * *((float *)&v121 + 1)) + (float)(v56 * *(float *)&v121)) + v60;
              *((float *)&v128 + 1) = v70;
              if ( v61 )
              {
                v71 = v54[8];
                v72 = v54[6];
                if ( v67 > v71 )
                {
                  v67 = v54[8];
                }
                else if ( v67 < v72 )
                {
                  v67 = v54[6];
                }
                v73 = v54[9];
                v74 = v54[7];
                *(float *)&v131 = v67;
                if ( v68 > v73 )
                {
                  v68 = v73;
                }
                else if ( v68 < v74 )
                {
                  v68 = v74;
                }
                *((float *)&v131 + 1) = v68;
                if ( v69 <= v71 )
                {
                  if ( v69 < v72 )
                    v71 = v72;
                  else
                    v71 = (float)((float)(v57 * *((float *)&v121 + 1)) + (float)(v55 * *(float *)&v121)) + v59;
                }
                *(float *)&v128 = v71;
                if ( v70 <= v73 )
                {
                  if ( v70 < v74 )
                    v73 = v74;
                  else
                    v73 = (float)((float)(v58 * *((float *)&v121 + 1)) + (float)(v56 * *(float *)&v121)) + v60;
                }
                *((float *)&v128 + 1) = v73;
              }
              v75 = v47 + 8LL * v62;
              v76 = v128;
              ++v62;
              *(_QWORD *)(v63 + 8 * v75 + 16) = v131;
              *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v75 + 48) = v76;
            }
            while ( v62 < *(_DWORD *)(a1 + 136) );
            v53 = v126;
            v49 = v124;
            v51 = v125;
          }
          v50 = v119;
          v48 = v120;
        }
        ++v46;
        ++v47;
        ++v44;
      }
      while ( (unsigned __int64)v46 < 2 );
    }
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v122) )
    {
      if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
              (D2DMatrixHelper *)&v122,
              (const struct D2D_MATRIX_3X2_F *)&v120,
              (float *)&v119,
              &v127.m11) )
        D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
          (D2DMatrixHelper *)&v122,
          (const struct D2D_MATRIX_3X2_F *)&v120,
          (float *)&v119,
          &v127.m11,
          v118);
      v77 = v123;
      v18 = v123;
      if ( v123 < *(_DWORD *)(a1 + 136) )
      {
        v78 = (__m128)v120;
        v79 = (__m128)v119;
        v80 = 1.0 / *(float *)&v120;
        v81 = 1.0 / *(float *)&v119;
        v82 = 1.0 - (float)(1.0 / *(float *)&v120);
        v83 = 1.0 - (float)(1.0 / *(float *)&v119);
        do
        {
          v17 = (unsigned __int64)(unsigned int)v18 << 6;
          v84 = (float *)(v17 + *(_QWORD *)(a1 + 112));
          if ( v84 )
            v85 = v84 + 8;
          else
            v85 = 0LL;
          v86 = v78;
          v86.m128_f32[0] = v78.m128_f32[0] * *v85;
          v18 = (unsigned int)(v18 + 1);
          v87 = v79;
          v87.m128_f32[0] = v79.m128_f32[0] * v85[1];
          v88 = (float)(v84[1] - v85[1]) + v87.m128_f32[0];
          *v84 = v86.m128_f32[0] + (float)(*v84 - *v85);
          v84[1] = v88;
          v84[4] = (float)((float)(1.0 - v80) * v85[4]) + (float)(v80 * v84[4]);
          v84[5] = (float)((float)(1.0 - v81) * v85[5]) + (float)(v81 * v84[5]);
          v84[6] = (float)(v80 * v84[6]) + (float)(v82 * v85[6]);
          v84[7] = (float)(v81 * v84[7]) + (float)(v83 * v85[7]);
          *(_QWORD *)(*(_QWORD *)(a1 + 112) + v17 + 32) = _mm_unpacklo_ps(v86, v87).m128_u64[0];
        }
        while ( (unsigned int)v18 < *(_DWORD *)(a1 + 136) );
        if ( v77 < *(_DWORD *)(a1 + 136) )
        {
          v89 = v127.dy;
          v90 = v127.dx;
          m22_low = (__m128)LODWORD(v127.m22);
          m21 = v127.m21;
          m12 = v127.m12;
          m11_low = (__m128)LODWORD(v127.m11);
          do
          {
            v95 = *(_QWORD *)(a1 + 112);
            v96 = m11_low;
            v97 = m22_low;
            v98 = (unsigned __int64)v77++ << 6;
            v121 = *(float **)(v98 + v95);
            v96.m128_f32[0] = (float)((float)(m11_low.m128_f32[0] * *(float *)&v121)
                                    + (float)(m21 * *((float *)&v121 + 1)))
                            + v90;
            v97.m128_f32[0] = (float)((float)(m22_low.m128_f32[0] * *((float *)&v121 + 1))
                                    + (float)(m12 * *(float *)&v121))
                            + v89;
            v99 = _mm_unpacklo_ps(v96, v97).m128_u64[0];
            v100 = m22_low;
            *(_QWORD *)(v98 + v95) = v99;
            v101 = *(_QWORD *)(a1 + 112);
            v121 = *(float **)(v98 + v101 + 32);
            v102 = (__m128)(unsigned int)v121;
            v102.m128_f32[0] = (float)((float)(*(float *)&v121 * m11_low.m128_f32[0])
                                     + (float)(m21 * *((float *)&v121 + 1)))
                             + v90;
            v100.m128_f32[0] = (float)((float)(m22_low.m128_f32[0] * *((float *)&v121 + 1))
                                     + (float)(m12 * *(float *)&v121))
                             + v89;
            *(_QWORD *)(v98 + v101 + 32) = _mm_unpacklo_ps(v102, v100).m128_u64[0];
          }
          while ( v77 < *(_DWORD *)(a1 + 136) );
        }
      }
    }
    goto LABEL_77;
  }
  v41 = *(__m128 *)(v35 + 1);
  *(_QWORD *)&v127.m11 = __PAIR64__(*((_DWORD *)v35 + 3), v41.m128_u32[0]);
  v127.m22 = *((FLOAT *)v35 + 5);
  LODWORD(v127.m21) = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
  RectangleMesh = Mesh::CreateRectangleMesh(
                    (Mesh *)a1,
                    (const struct Mesh::ContentInfo *)v143,
                    (const __m128i *)&v127,
                    v15);
  v30 = RectangleMesh;
  if ( RectangleMesh < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RectangleMesh, 0x194u);
  }
  else
  {
    if ( RectangleMesh )
      goto LABEL_40;
    v43 = CDrawListPrimitiveBuilder::AppendGeometry((CDrawListPrimitiveBuilder *)a1, a6, a7);
    v30 = v43;
    if ( v43 >= 0 )
      goto LABEL_40;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x199u);
  }
LABEL_78:
  if ( v36 )
    ((void (__fastcall *)(void ***, __int64, __int64))**v35)(v35, 1LL, v18);
LABEL_80:
  v133 = &CRectangleShape::`vftable';
  if ( v135 )
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v135 + 16LL))(v135, v17, v18);
  return v30;
}
