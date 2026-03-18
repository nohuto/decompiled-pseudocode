/*
 * XREFs of ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180076F50
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?Create@GeometrySink@CDrawListPrimitiveBuilder@@SAJPEAV2@PEAPEAV12@@Z @ 0x180008FF0 (-Create@GeometrySink@CDrawListPrimitiveBuilder@@SAJPEAV2@PEAPEAV12@@Z.c)
 *     ?AppendGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEAVCShape@@AEBUContentInfo@Mesh@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@_N5@Z @ 0x1800093AC (-AppendGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEAVCShape@@AEBUContentInfo@Mesh@@W.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ??_ECComplexShape@@UEAAPEAXI@Z @ 0x18005B970 (--_ECComplexShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180075B0C (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?CalcClippedRectEdgeFlags@CDrawListPrimitiveBuilder@@KA?AW4D2D1_EDGE_FLAGS@@W42@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x1800760FC (-CalcClippedRectEdgeFlags@CDrawListPrimitiveBuilder@@KA-AW4D2D1_EDGE_FLAGS@@W42@AEBV-$TMilRect_@.c)
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076174 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076CCC (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180076D04 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180076D68 (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x180077E28 (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180078DC0 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18012516C (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::AppendRect(
        __int64 a1,
        float *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        CShape *a9,
        char a10)
{
  unsigned int v15; // r15d
  __int64 v16; // xmm1_8
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  float dy; // xmm12_4
  float dx; // xmm13_4
  float v21; // xmm8_4
  float v22; // xmm10_4
  float v23; // xmm12_4
  float v24; // xmm6_4
  CMILMatrix *v25; // rax
  __int64 (__fastcall *v26)(CRectangleShape *); // rdi
  int TightBounds; // eax
  unsigned int v28; // edi
  float v29; // xmm11_4
  float v30; // xmm9_4
  float v31; // xmm13_4
  float v32; // xmm7_4
  void ***v33; // rdi
  __int128 v34; // xmm0
  char v35; // r12
  __int64 (__fastcall *v36)(CComplexShape *); // rbx
  float *v37; // r14
  unsigned int v38; // xmm1_4
  int v39; // eax
  __m128 v40; // xmm2
  int RectangleMesh; // eax
  int v42; // eax
  _QWORD *v43; // rbx
  int v44; // r11d
  __int64 v45; // r10
  unsigned int v46; // r15d
  float v47; // xmm11_4
  float m11; // xmm8_4
  float v49; // xmm12_4
  float v50; // xmm15_4
  float v51; // xmm14_4
  unsigned int v52; // r9d
  float v53; // xmm9_4
  float v54; // xmm10_4
  float v55; // xmm5_4
  float v56; // xmm6_4
  float v57; // xmm7_4
  float v58; // xmm8_4
  float *v59; // rcx
  float *v60; // rax
  __m128 v61; // xmm4
  __m128 v62; // xmm3
  float v63; // xmm1_4
  float v64; // xmm2_4
  float v65; // xmm5_4
  float v66; // xmm6_4
  __m128 m22_low; // xmm7
  __m128 m21_low; // xmm8
  float m12; // xmm9_4
  float v70; // xmm10_4
  __int64 v71; // rax
  __m128 v72; // xmm4
  __m128 v73; // xmm2
  unsigned __int64 v74; // rcx
  __m128 v75; // xmm1
  __m128 v76; // xmm0
  __m128 v77; // xmm4
  __int64 v78; // rax
  float *v80; // rdx
  float v81; // xmm2_4
  float v82; // xmm9_4
  float v83; // xmm10_4
  float v84; // xmm11_4
  float v85; // xmm12_4
  float v86; // xmm7_4
  float v87; // xmm8_4
  bool v88; // di
  unsigned int i; // r8d
  __int64 v90; // r9
  unsigned __int64 v91; // rax
  float v92; // xmm3_4
  float v93; // xmm1_4
  float v94; // xmm2_4
  float v95; // xmm2_4
  float v96; // xmm3_4
  float v97; // xmm5_4
  float v98; // xmm4_4
  float v99; // xmm1_4
  float v100; // xmm6_4
  float v101; // xmm0_4
  float v102; // xmm2_4
  __int64 v103; // rcx
  __int64 v104; // xmm1_8
  int v105; // eax
  __int64 v106; // rcx
  int appended; // eax
  CComplexShape *(__fastcall *v108)(CComplexShape *, char); // rbx
  float v109; // xmm5_4
  float v110; // xmm4_4
  float v111; // xmm11_4
  float v112; // xmm1_4
  unsigned int v113; // xmm9_4
  unsigned int v114; // xmm11_4
  FLOAT v115; // xmm7_4
  FLOAT v116; // xmm6_4
  unsigned int v117; // xmm10_4
  unsigned int v118; // xmm8_4
  int v119; // eax
  struct D2D_MATRIX_3X2_F *v120; // [rsp+28h] [rbp-E0h]
  struct D2D_MATRIX_3X2_F v121; // [rsp+48h] [rbp-C0h] BYREF
  float v122; // [rsp+60h] [rbp-A8h] BYREF
  float v123; // [rsp+64h] [rbp-A4h] BYREF
  D2D1_MATRIX_3X2_F v124; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v125; // [rsp+80h] [rbp-88h]
  float v126; // [rsp+84h] [rbp-84h]
  __int128 v127; // [rsp+88h] [rbp-80h] BYREF
  D2D1_MATRIX_3X2_F v128; // [rsp+98h] [rbp-70h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+B0h] [rbp-58h] BYREF
  CComplexShape *v130[2]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v131; // [rsp+D8h] [rbp-30h] BYREF
  float v132; // [rsp+E0h] [rbp-28h]
  float v133; // [rsp+E4h] [rbp-24h]
  void **v134; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v135; // [rsp+F0h] [rbp-18h]
  __int64 v136; // [rsp+100h] [rbp-8h]
  _OWORD v137[4]; // [rsp+108h] [rbp+0h] BYREF
  __m128i v138[8]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v139[64]; // [rsp+1C8h] [rbp+C0h] BYREF

  *(_QWORD *)&v121.m[1][0] = a8;
  v125 = *(_DWORD *)(a1 + 136);
  memset_0(v138, 0, 0x74uLL);
  v130[0] = 0LL;
  v134 = &CRectangleShape::`vftable';
  v136 = 0LL;
  v135 = 0LL;
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
      v28 = 0;
      goto LABEL_54;
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
    v109 = *a2;
    v110 = a2[1];
    v111 = a2[2] - *a2;
    v112 = a2[3] - v110;
    *(float *)&v113 = (float)(matrix.m11 * v111) + (float)(matrix.m21 * 0.0);
    *(float *)&v114 = (float)(v111 * matrix.m12) + (float)(matrix.m22 * 0.0);
    v115 = (float)(matrix.m21 * v112) + (float)(matrix.m11 * 0.0);
    v116 = (float)(matrix.m22 * v112) + (float)(matrix.m12 * 0.0);
    v127 = _xmm;
    *(float *)&v117 = (float)((float)(matrix.m11 * v109) + (float)(matrix.m21 * v110)) + dx;
    *(float *)&v118 = (float)((float)(matrix.m22 * v110) + (float)(matrix.m12 * v109)) + dy;
    CRectangleShape::Set((CRectangleShape *)&v134, (const struct MilRectF *)&v127);
    v23 = *((float *)&v127 + 2);
    v33 = &v134;
    v124.m22 = v116;
    v24 = *((float *)&v127 + 3);
    *(_QWORD *)&v124.m[2][0] = __PAIR64__(v118, v117);
    v22 = *((float *)&v127 + 1);
    LODWORD(v21) = v127;
    v130[0] = (CComplexShape *)&v134;
    *(_QWORD *)&v124.m11 = __PAIR64__(v114, v113);
    v124.m21 = v115;
LABEL_27:
    v35 = 0;
    goto LABEL_28;
  }
  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
          (D2DMatrixHelper *)&matrix,
          &v121,
          &v122,
          &v124.m11) )
    D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining((D2DMatrixHelper *)&matrix, &v121, &v122, &v124.m11, v120);
  v21 = v121.m11 * *a2;
  v22 = v122 * a2[1];
  v23 = v121.m11 * a2[2];
  v24 = v122 * a2[3];
  *(float *)&v127 = v21;
  *(_QWORD *)((char *)&v127 + 4) = __PAIR64__(LODWORD(v23), LODWORD(v22));
  *((float *)&v127 + 3) = v24;
  v128 = v124;
  D2D1InvertMatrix(&v128);
  v25 = CMILMatrix::CMILMatrix((CMILMatrix *)v139, &v128);
  v137[0] = *(_OWORD *)v25;
  v137[1] = *((_OWORD *)v25 + 1);
  v137[2] = *((_OWORD *)v25 + 2);
  v137[3] = *((_OWORD *)v25 + 3);
  if ( CShape::IsAxisAlignedRectangle(a9) && (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)v137) )
  {
    v26 = *(__int64 (__fastcall **)(CRectangleShape *))(*(_QWORD *)a9 + 24LL);
    if ( v26 == CRectangleShape::GetTightBounds )
      TightBounds = CRectangleShape::GetTightBounds(a9);
    else
      TightBounds = ((__int64 (__fastcall *)(CShape *, unsigned __int64 *, _OWORD *))v26)(a9, &v131, v137);
    v28 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0xFAu);
      goto LABEL_54;
    }
    LODWORD(v29) = v131;
    if ( (float)(*(float *)&v131 - v21) > 0.0000011920929 )
      *(_BYTE *)(a1 + 2185) = 1;
    else
      v29 = v21;
    v30 = *((float *)&v131 + 1);
    if ( (float)(*((float *)&v131 + 1) - v22) > 0.0000011920929 )
      *(_BYTE *)(a1 + 2185) = 1;
    else
      v30 = v22;
    v31 = v132;
    if ( (float)(v23 - v132) > 0.0000011920929 )
      *(_BYTE *)(a1 + 2185) = 1;
    else
      v31 = v23;
    v32 = v133;
    if ( (float)(v24 - v133) > 0.0000011920929 )
      *(_BYTE *)(a1 + 2185) = 1;
    else
      v32 = v24;
    if ( v136 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v136 + 16LL))(v136);
      v136 = 0LL;
    }
    v130[0] = (CComplexShape *)__PAIR64__(LODWORD(v30), LODWORD(v29));
    v33 = &v134;
    v130[1] = (CComplexShape *)__PAIR64__(LODWORD(v32), LODWORD(v31));
    v34 = *(_OWORD *)v130;
    v130[0] = (CComplexShape *)&v134;
    v135 = v34;
    v15 = CDrawListPrimitiveBuilder::CalcClippedRectEdgeFlags(v15, (float *)&v127, (float *)&v131, a10);
    if ( v15 != a4 )
      *(_BYTE *)(a1 + 2185) = 1;
    goto LABEL_27;
  }
  CRectangleShape::Set((CRectangleShape *)&v134, (const struct MilRectF *)&v127);
  v105 = CShape::Combine((__int64)&v134, 0LL, (__int64)a9, (__int64)v137, 1, v130);
  v28 = v105;
  if ( v105 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0x147u);
    goto LABEL_54;
  }
  v33 = (void ***)v130[0];
  v24 = *((float *)&v127 + 3);
  v35 = 1;
  v23 = *((float *)&v127 + 2);
  v22 = *((float *)&v127 + 1);
  LODWORD(v21) = v127;
  *(_BYTE *)(a1 + 2185) = 1;
  v130[0] = (CComplexShape *)v33;
LABEL_28:
  v36 = (__int64 (__fastcall *)(CComplexShape *))(*v33)[3];
  if ( v36 == CRectangleShape::GetTightBounds )
  {
    CRectangleShape::GetTightBounds((CRectangleShape *)v33);
  }
  else if ( v36 == CShape::GetTightBounds )
  {
    CShape::GetTightBounds((CComplexShape *)v33);
  }
  else
  {
    ((void (__fastcall *)(void ***, __int128 *, _QWORD))v36)(v33, &v127, 0LL);
  }
  if ( IsRectEmptyOrInvalid((float *)&v127) )
  {
LABEL_52:
    v28 = 0;
    goto LABEL_53;
  }
  v37 = *(float **)&v121.m[1][0];
  if ( *(_QWORD *)&v121.m[1][0] )
  {
    v121.dy = *(FLOAT *)(*(_QWORD *)&v121.m[1][0] + 12LL);
    *(float *)&v38 = v121.dy * *(float *)(*(_QWORD *)&v121.m[1][0] + 4LL);
    v121.m21 = v121.dy * **(float **)&v121.m[1][0];
    *(_QWORD *)&v121.m[1][1] = __PAIR64__(v121.dy * v37[2], v38);
    v138[0] = *(__m128i *)&v121.m[1][0];
  }
  else
  {
    v138[0] = (__m128i)_xmm;
  }
  v39 = ((__int64 (__fastcall *)(void ***))(*v33)[1])(v33);
  if ( v39 )
  {
    if ( v39 == 3 )
    {
      if ( !*(_QWORD *)(a1 + 2160) )
      {
        v119 = CDrawListPrimitiveBuilder::GeometrySink::Create(
                 (struct CDrawListPrimitiveBuilder *)a1,
                 (struct CDrawListPrimitiveBuilder::GeometrySink **)(a1 + 2160));
        v28 = v119;
        if ( v119 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v119, 0x1A2u);
          goto LABEL_53;
        }
        v33 = (void ***)v130[0];
      }
      v106 = *(_QWORD *)(a1 + 2160);
      *(_QWORD *)&v121.m[1][0] = __PAIR64__(LODWORD(v22), LODWORD(v21));
      *(_QWORD *)&v121.m[2][0] = __PAIR64__(LODWORD(v24), LODWORD(v23));
      appended = CDrawListPrimitiveBuilder::GeometrySink::AppendGeometry(
                   v106,
                   (CComplexShape *)v33,
                   (__int64)v138,
                   a5,
                   v15,
                   (__int128 *)v121.m[1],
                   a6,
                   a7);
      v28 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x1A5u);
        goto LABEL_53;
      }
    }
LABEL_37:
    if ( v37 )
    {
      v128 = matrix;
      D2D1InvertMatrix(&v128);
      v43 = (_QWORD *)(a1 + 2168);
      v44 = 0;
      v45 = 0LL;
      v46 = v125;
      v47 = (float)(v128.m21 * v124.m12) + (float)(v128.m11 * v124.m11);
      m11 = (float)(v128.m22 * v124.m12) + (float)(v124.m11 * v128.m12);
      v123 = v47;
      v49 = (float)(v124.m22 * v128.m22) + (float)(v124.m21 * v128.m12);
      v121.m11 = m11;
      v126 = (float)(v124.m22 * v128.m21) + (float)(v128.m11 * v124.m21);
      v122 = v49;
      v50 = (float)((float)(v124.dy * v128.m21) + (float)(v128.m11 * v124.dx)) + v128.dx;
      v51 = (float)((float)(v124.dy * v128.m22) + (float)(v124.dx * v128.m12)) + v128.dy;
      do
      {
        if ( *v43 )
        {
          if ( v44 )
            v80 = v37 + 14;
          else
            v80 = v37 + 4;
          v81 = v80[1];
          v82 = (float)(v80[2] * m11) + (float)(v47 * *v80);
          v83 = (float)(v80[3] * v121.m11) + (float)(v47 * v81);
          v84 = (float)(*v80 * v126) + (float)(v80[2] * v49);
          v85 = (float)(v80[3] * v122) + (float)(v81 * v126);
          v86 = (float)((float)(*v80 * v50) + (float)(v80[2] * v51)) + v80[4];
          v87 = (float)((float)(v80[3] * v51) + (float)(v81 * v50)) + v80[5];
          v88 = v80[6] != 0.0 || v80[7] != 0.0 || v80[8] != 1.0 || v80[9] != 1.0;
          for ( i = v46; i < *(_DWORD *)(a1 + 136); *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v103 + 48) = v104 )
          {
            v90 = *(_QWORD *)(a1 + 112);
            v91 = (unsigned __int64)i << 6;
            *(_QWORD *)&v121.m[1][0] = *(_QWORD *)(v91 + v90);
            v92 = v121.m22 * v85;
            v93 = v121.m21 * v83;
            v94 = (float)(v121.m21 * v82) + (float)(v121.m22 * v84);
            *(_QWORD *)&v121.m[1][0] = *(_QWORD *)(v90 + v91 + 32);
            v95 = v94 + v86;
            v96 = (float)(v92 + v93) + v87;
            v131 = __PAIR64__(LODWORD(v96), LODWORD(v95));
            v97 = (float)((float)(v121.m21 * v82) + (float)(v84 * v121.m22)) + v86;
            v98 = (float)((float)(v121.m21 * v83) + (float)(v85 * v121.m22)) + v87;
            *(float *)&v127 = v97;
            *((float *)&v127 + 1) = v98;
            if ( v88 )
            {
              v99 = v80[8];
              v100 = v80[6];
              if ( v95 > v99 )
              {
                v95 = v80[8];
              }
              else if ( v95 < v100 )
              {
                v95 = v80[6];
              }
              v101 = v80[9];
              *(float *)&v131 = v95;
              v102 = v80[7];
              if ( v96 > v101 )
              {
                v96 = v101;
              }
              else if ( v96 < v102 )
              {
                v96 = v80[7];
              }
              *((float *)&v131 + 1) = v96;
              if ( v97 <= v99 )
              {
                if ( v97 < v100 )
                  v99 = v100;
                else
                  v99 = (float)((float)(v121.m21 * v82) + (float)(v84 * v121.m22)) + v86;
              }
              *(float *)&v127 = v99;
              if ( v98 <= v101 )
              {
                if ( v98 < v102 )
                  v101 = v102;
                else
                  v101 = (float)((float)(v121.m21 * v83) + (float)(v85 * v121.m22)) + v87;
              }
              *((float *)&v127 + 1) = v101;
            }
            v103 = v45 + 8LL * i;
            v104 = v127;
            ++i;
            *(_QWORD *)(v90 + 8 * v103 + 16) = v131;
          }
          m11 = v121.m11;
          v47 = v123;
          v49 = v122;
        }
        ++v44;
        ++v45;
        ++v43;
      }
      while ( (unsigned __int64)v44 < 2 );
    }
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v124) )
    {
      if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
              (D2DMatrixHelper *)&v124,
              (const struct D2D_MATRIX_3X2_F *)&v123,
              &v121.m11,
              &v128.m11) )
        D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
          (D2DMatrixHelper *)&v124,
          (const struct D2D_MATRIX_3X2_F *)&v123,
          &v121.m11,
          &v128.m11,
          v120);
      v52 = v125;
      v18 = v125;
      if ( v125 < *(_DWORD *)(a1 + 136) )
      {
        v53 = v123;
        v54 = v121.m11;
        v55 = 1.0 / v123;
        v56 = 1.0 / v121.m11;
        v57 = 1.0 - (float)(1.0 / v123);
        v58 = 1.0 - (float)(1.0 / v121.m11);
        do
        {
          v17 = (unsigned __int64)(unsigned int)v18 << 6;
          v59 = (float *)(v17 + *(_QWORD *)(a1 + 112));
          if ( v59 )
            v60 = v59 + 8;
          else
            v60 = 0LL;
          v61 = (__m128)*(unsigned int *)v60;
          v18 = (unsigned int)(v18 + 1);
          v62 = (__m128)*((unsigned int *)v60 + 1);
          v63 = *v59 - v61.m128_f32[0];
          v64 = v59[1] - v62.m128_f32[0];
          v61.m128_f32[0] = v61.m128_f32[0] * v53;
          v62.m128_f32[0] = v62.m128_f32[0] * v54;
          *v59 = v61.m128_f32[0] + v63;
          v59[1] = v64 + v62.m128_f32[0];
          v59[4] = (float)((float)(1.0 - v55) * v60[4]) + (float)(v55 * v59[4]);
          v59[5] = (float)((float)(1.0 - v56) * v60[5]) + (float)(v56 * v59[5]);
          v59[6] = (float)(v55 * v59[6]) + (float)(v57 * v60[6]);
          v59[7] = (float)(v58 * v60[7]) + (float)(v56 * v59[7]);
          *(_QWORD *)(v17 + *(_QWORD *)(a1 + 112) + 32) = _mm_unpacklo_ps(v61, v62).m128_u64[0];
        }
        while ( (unsigned int)v18 < *(_DWORD *)(a1 + 136) );
        if ( v52 < *(_DWORD *)(a1 + 136) )
        {
          v65 = v128.dy;
          v66 = v128.dx;
          m22_low = (__m128)LODWORD(v128.m22);
          m21_low = (__m128)LODWORD(v128.m21);
          m12 = v128.m12;
          v70 = v128.m11;
          do
          {
            v71 = *(_QWORD *)(a1 + 112);
            v72 = m21_low;
            v73 = m22_low;
            v74 = (unsigned __int64)v52 << 6;
            v75 = m22_low;
            ++v52;
            *(_QWORD *)&v121.m[1][0] = *(_QWORD *)(v74 + v71);
            v72.m128_f32[0] = (float)((float)(m21_low.m128_f32[0] * v121.m22) + (float)(v70 * v121.m21)) + v66;
            v73.m128_f32[0] = (float)((float)(m22_low.m128_f32[0] * v121.m22) + (float)(m12 * v121.m21)) + v65;
            v76 = v72;
            v77 = m21_low;
            *(_QWORD *)(v74 + v71) = _mm_unpacklo_ps(v76, v73).m128_u64[0];
            v78 = *(_QWORD *)(a1 + 112);
            *(_QWORD *)&v121.m[1][0] = *(_QWORD *)(v74 + v78 + 32);
            v77.m128_f32[0] = (float)((float)(m21_low.m128_f32[0] * v121.m22) + (float)(v121.m21 * v70)) + v66;
            v75.m128_f32[0] = (float)((float)(m22_low.m128_f32[0] * v121.m22) + (float)(m12 * v121.m21)) + v65;
            *(_QWORD *)(v74 + v78 + 32) = _mm_unpacklo_ps(v77, v75).m128_u64[0];
          }
          while ( v52 < *(_DWORD *)(a1 + 136) );
        }
      }
    }
    goto LABEL_52;
  }
  v40 = *(__m128 *)(v33 + 1);
  *(_QWORD *)&v121.m[1][0] = __PAIR64__(*((_DWORD *)v33 + 3), v40.m128_u32[0]);
  v121.dy = *((FLOAT *)v33 + 5);
  LODWORD(v121.dx) = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
  RectangleMesh = Mesh::CreateRectangleMesh((Mesh *)a1, v138, (const struct D2D_RECT_F *)v121.m[1], v15);
  v28 = RectangleMesh;
  if ( RectangleMesh < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RectangleMesh, 0x194u);
  }
  else
  {
    if ( RectangleMesh )
      goto LABEL_37;
    v42 = CDrawListPrimitiveBuilder::AppendGeometry((CDrawListPrimitiveBuilder *)a1, a6, a7);
    v28 = v42;
    if ( v42 >= 0 )
      goto LABEL_37;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x199u);
  }
LABEL_53:
  if ( v35 )
  {
    v108 = **(CComplexShape *(__fastcall ***)(CComplexShape *, char))v130[0];
    if ( v108 == CComplexShape::`vector deleting destructor' )
      CComplexShape::`vector deleting destructor'(v130[0], 1);
    else
      ((void (__fastcall *)(CComplexShape *, __int64, __int64))v108)(v130[0], 1LL, v18);
  }
LABEL_54:
  v134 = &CRectangleShape::`vftable';
  if ( v136 )
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v136 + 16LL))(v136, v17, v18);
  return v28;
}
