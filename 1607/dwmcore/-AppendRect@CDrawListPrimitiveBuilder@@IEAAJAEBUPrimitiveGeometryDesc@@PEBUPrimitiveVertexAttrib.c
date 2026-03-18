/*
 * XREFs of ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18011115C (-Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?Create@GeometrySink@CDrawListPrimitiveBuilder@@SAJPEAV2@PEAPEAV12@@Z @ 0x1800014C8 (-Create@GeometrySink@CDrawListPrimitiveBuilder@@SAJPEAV2@PEAPEAV12@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??_ECComplexShape@@UEAAPEAXI@Z @ 0x1800028B0 (--_ECComplexShape@@UEAAPEAXI@Z.c)
 *     ?AppendGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@_N5@Z @ 0x180002C9C (-AppendGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@@W.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002C340 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180057E88 (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A580 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800921B0 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x18009644C (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800976A0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180097A10 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097A50 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CalcClippedRectEdgeFlags@CDrawListPrimitiveBuilder@@KA?AW4D2D1_EDGE_FLAGS@@W42@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x180097FD4 (-CalcClippedRectEdgeFlags@CDrawListPrimitiveBuilder@@KA-AW4D2D1_EDGE_FLAGS@@W42@AEBV-$TMilRect_@.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180098050 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800980EC (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009A468 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180133910 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?Copy@CoordMap@@QEAAJAEBV1@@Z @ 0x180135F50 (-Copy@CoordMap@@QEAAJAEBV1@@Z.c)
 *     ?ScalePositions@CoordMap@@QEAAXMM@Z @ 0x1801363FC (-ScalePositions@CoordMap@@QEAAXMM@Z.c)
 *     ?TranslatePositions@CoordMap@@QEAAXMM@Z @ 0x18013659C (-TranslatePositions@CoordMap@@QEAAXMM@Z.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1801643E0 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::AppendRect(
        CDrawListPrimitiveBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D1::Matrix3x2F *a4)
{
  unsigned int v8; // r15d
  struct CoordMap *v9; // rsi
  bool v10; // zf
  unsigned int v11; // r12d
  __int64 v12; // xmm1_8
  CoordMap *v13; // rcx
  int v14; // r10d
  float m11; // xmm6_4
  float m12; // xmm7_4
  float v17; // xmm11_4
  float v18; // xmm12_4
  float v19; // xmm13_4
  float v20; // xmm14_4
  CRectanglesShape *v21; // rcx
  float v22; // xmm15_4
  bool (__fastcall *v23)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  float v25; // xmm0_4
  __int64 v26; // rcx
  __int64 (__fastcall *v27)(__int64, float *, __int128 *); // rax
  int TightBounds; // eax
  unsigned int v29; // edi
  float v30; // xmm9_4
  char v31; // di
  float v32; // xmm8_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  __int64 v35; // r9
  CComplexShape *v36; // rsi
  __int64 (__fastcall *v37)(CRegionShape *, __int64, __int64); // rax
  char v38; // al
  __int128 v39; // xmm0
  __int64 v40; // rax
  bool (__fastcall *v41)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool v42; // al
  void (__fastcall *v43)(CComplexShape *, struct D2D_RECT_F *, __int64); // rax
  int v44; // eax
  int appended; // eax
  unsigned int v46; // r8d
  __m128 dx_low; // xmm10
  __m128 dy_low; // xmm11
  float v49; // xmm6_4
  float v50; // xmm7_4
  float v51; // xmm8_4
  float v52; // xmm9_4
  unsigned __int64 v53; // rdx
  float *v54; // rcx
  float *v55; // rax
  __m128 v56; // xmm4
  __m128 v57; // xmm5
  float v58; // xmm3_4
  float v59; // xmm5_4
  float v60; // xmm6_4
  __m128 v61; // xmm7
  __m128 v62; // xmm8
  float v63; // xmm9_4
  float v64; // xmm10_4
  __int64 v65; // rax
  __m128 v66; // xmm4
  __m128 v67; // xmm2
  unsigned __int64 v68; // rcx
  __m128 v69; // xmm1
  __m128 v70; // xmm0
  __m128 v71; // xmm4
  __int64 v72; // rax
  __int128 v74; // xmm0
  __int64 v75; // rax
  __m128 m21_low; // xmm6
  float v77; // xmm10_4
  __m128 m12_low; // xmm5
  float v79; // xmm11_4
  float v80; // xmm7_4
  float v81; // xmm9_4
  __int64 v82; // rdx
  int v83; // eax
  int v84; // r9d
  char v85; // al
  __int64 v86; // rcx
  int v87; // eax
  CComplexShape *(__fastcall *v88)(CComplexShape *, char); // rax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  struct D2D_MATRIX_3X2_F *v92; // [rsp+28h] [rbp-E0h]
  char v93; // [rsp+48h] [rbp-C0h]
  char v94; // [rsp+4Ch] [rbp-BCh]
  int v95; // [rsp+50h] [rbp-B8h]
  struct D2D_MATRIX_3X2_F v96; // [rsp+54h] [rbp-B4h] BYREF
  CComplexShape *v97; // [rsp+70h] [rbp-98h] BYREF
  __int64 v98; // [rsp+78h] [rbp-90h]
  D2D1_MATRIX_3X2_F v99; // [rsp+80h] [rbp-88h] BYREF
  __int128 v100; // [rsp+98h] [rbp-70h] BYREF
  float v101; // [rsp+A8h] [rbp-60h]
  float v102; // [rsp+ACh] [rbp-5Ch]
  __int128 v103; // [rsp+B0h] [rbp-58h]
  struct D2D_RECT_F v104; // [rsp+C0h] [rbp-48h]
  float v105[10]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v106; // [rsp+F8h] [rbp-10h]
  __m256i v107; // [rsp+108h] [rbp+0h]
  _OWORD v108[2]; // [rsp+128h] [rbp+20h]
  __int128 v109; // [rsp+148h] [rbp+40h] BYREF
  __m256i v110; // [rsp+158h] [rbp+50h]
  __int128 v111; // [rsp+178h] [rbp+70h]
  int v112; // [rsp+188h] [rbp+80h]
  __int128 v113; // [rsp+198h] [rbp+90h] BYREF
  char v114[36]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v115[44]; // [rsp+1CCh] [rbp+C4h] BYREF
  __int128 v116; // [rsp+1F8h] [rbp+F0h] BYREF
  char v117; // [rsp+208h] [rbp+100h]
  __int128 v118; // [rsp+20Ch] [rbp+104h]
  __int128 v119; // [rsp+21Ch] [rbp+114h]
  int v120; // [rsp+22Ch] [rbp+124h]
  __int128 v121; // [rsp+230h] [rbp+128h]
  int v122; // [rsp+240h] [rbp+138h]
  __int128 v123; // [rsp+244h] [rbp+13Ch]
  __int128 v124; // [rsp+254h] [rbp+14Ch]
  int v125; // [rsp+264h] [rbp+15Ch]
  __int128 v126; // [rsp+268h] [rbp+160h]
  int v127; // [rsp+278h] [rbp+170h]
  int v128; // [rsp+27Ch] [rbp+174h]
  struct CoordMap *v129; // [rsp+280h] [rbp+178h]
  __int128 v130; // [rsp+288h] [rbp+180h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+298h] [rbp+190h] BYREF
  float v132; // [rsp+2B0h] [rbp+1A8h] BYREF
  float v133; // [rsp+2B4h] [rbp+1ACh]
  float v134; // [rsp+2B8h] [rbp+1B0h]
  float v135; // [rsp+2BCh] [rbp+1B4h]
  float v136[6]; // [rsp+2C0h] [rbp+1B8h] BYREF
  void **v137; // [rsp+2D8h] [rbp+1D0h] BYREF
  _BYTE *v138; // [rsp+2E0h] [rbp+1D8h] BYREF
  _BYTE *v139; // [rsp+2E8h] [rbp+1E0h]
  int v140; // [rsp+2F0h] [rbp+1E8h]
  __int64 v141; // [rsp+2F4h] [rbp+1ECh]
  _BYTE v142[16]; // [rsp+300h] [rbp+1F8h] BYREF
  __int64 v143; // [rsp+310h] [rbp+208h]
  D2D1_MATRIX_3X2_F v144; // [rsp+318h] [rbp+210h] BYREF
  D2D1_MATRIX_3X2_F v145; // [rsp+330h] [rbp+228h] BYREF
  struct D2D_RECT_F v146; // [rsp+348h] [rbp+240h] BYREF
  _DWORD v147[4]; // [rsp+358h] [rbp+250h] BYREF
  struct D2D_RECT_F v148; // [rsp+368h] [rbp+260h] BYREF
  _BYTE *v149; // [rsp+378h] [rbp+270h] BYREF
  _BYTE *v150; // [rsp+380h] [rbp+278h]
  int v151; // [rsp+388h] [rbp+280h]
  __int64 v152; // [rsp+38Ch] [rbp+284h]
  _BYTE v153[160]; // [rsp+398h] [rbp+290h] BYREF
  _BYTE *v154; // [rsp+438h] [rbp+330h]
  _BYTE *v155; // [rsp+440h] [rbp+338h]
  int v156; // [rsp+448h] [rbp+340h]
  __int64 v157; // [rsp+44Ch] [rbp+344h]
  _BYTE v158[160]; // [rsp+458h] [rbp+350h] BYREF
  _BYTE *v159; // [rsp+4F8h] [rbp+3F0h]
  _BYTE *v160; // [rsp+500h] [rbp+3F8h]
  int v161; // [rsp+508h] [rbp+400h]
  __int64 v162; // [rsp+50Ch] [rbp+404h]
  _BYTE v163[48]; // [rsp+518h] [rbp+410h] BYREF

  v8 = *((_DWORD *)this + 96);
  memset_0(&v116, 0, 0x90uLL);
  v9 = (struct CoordMap *)*((_QWORD *)a2 + 2);
  v137 = &CRectanglesShape::`vftable';
  v10 = *((_DWORD *)this + 2) == 1;
  v138 = v142;
  v139 = v142;
  v140 = 1;
  v141 = 1LL;
  v149 = v153;
  v150 = v153;
  v154 = v158;
  v155 = v158;
  v159 = v163;
  v160 = v163;
  v129 = v9;
  v97 = 0LL;
  v93 = 0;
  v143 = 0LL;
  v151 = 10;
  v152 = 10LL;
  v156 = 10;
  v157 = 10LL;
  v161 = 3;
  v162 = 3LL;
  v94 = 0;
  if ( v10 )
    v11 = 0;
  else
    v11 = *((_DWORD *)a2 + 6);
  if ( a4 )
  {
    v12 = *((_QWORD *)a4 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)a4;
    *(_QWORD *)&matrix.m[2][0] = v12;
    if ( !D2D1IsMatrixInvertible(&matrix) )
    {
      v29 = 0;
      goto LABEL_68;
    }
    v9 = v129;
  }
  else
  {
    *(_OWORD *)&matrix.m11 = _xmm;
    *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  v13 = (CoordMap *)*((_QWORD *)a2 + 2);
  if ( v13 && !CoordMap::IsEmpty(v13) && *((_QWORD *)this + 2) )
    *((_BYTE *)this + 2414) = 0;
  if ( !*((_BYTE *)this + 2414) || !*((_QWORD *)this + 2) )
  {
    m21_low = (__m128)LODWORD(matrix.m21);
    v77 = *(float *)a2;
    m12_low = (__m128)LODWORD(matrix.m12);
    v79 = *((float *)a2 + 1);
    v80 = *((float *)a2 + 2) - *(float *)a2;
    v81 = *((float *)a2 + 3) - v79;
    *(float *)&v100 = (float)(matrix.m11 * v80) + (float)(matrix.m21 * 0.0);
    *((float *)&v100 + 1) = (float)(matrix.m12 * v80) + (float)(matrix.m22 * 0.0);
    *((float *)&v100 + 2) = (float)(matrix.m21 * v81) + (float)(matrix.m11 * 0.0);
    m21_low.m128_f32[0] = (float)((float)(matrix.m21 * v79) + (float)(matrix.m11 * v77)) + matrix.dx;
    m12_low.m128_f32[0] = (float)((float)(matrix.m12 * v77) + (float)(matrix.m22 * v79)) + matrix.dy;
    *((float *)&v100 + 3) = (float)(matrix.m22 * v81) + (float)(matrix.m12 * 0.0);
    *(_QWORD *)&v99.m[2][0] = _mm_unpacklo_ps(m21_low, m12_low).m128_u64[0];
    v130 = _xmm;
    *(_OWORD *)&v99.m11 = v100;
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v137, (const struct MilRectF *)&v130);
    v36 = (CComplexShape *)&v137;
    v22 = FLOAT_1_0;
    v97 = (CComplexShape *)&v137;
    if ( v129 )
    {
      v91 = CoordMap::Copy((CoordMap *)&v149, v129);
      v29 = v91;
      if ( v91 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0x36Bu);
        goto LABEL_68;
      }
      CoordMap::TranslatePositions(
        (CoordMap *)&v149,
        COERCE_FLOAT(LODWORD(v77) ^ _xmm),
        COERCE_FLOAT(LODWORD(v79) ^ _xmm));
      CoordMap::ScalePositions((CoordMap *)&v149, 1.0 / v80, 1.0 / v81);
      v129 = (struct CoordMap *)&v149;
    }
    v95 = 12;
LABEL_89:
    LODWORD(v17) = v130;
    v18 = *((float *)&v130 + 1);
    v19 = *((float *)&v130 + 2);
    v20 = *((float *)&v130 + 3);
    goto LABEL_35;
  }
  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
          (D2DMatrixHelper *)&matrix,
          &v96,
          &v96.m12,
          &v99.m11) )
  {
    D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining((D2DMatrixHelper *)&matrix, &v96, &v96.m12, &v99.m11, v92);
    v14 = 0;
  }
  m11 = v96.m11;
  m12 = v96.m12;
  v17 = v96.m11 * *(float *)a2;
  v18 = v96.m12 * *((float *)a2 + 1);
  v19 = v96.m11 * *((float *)a2 + 2);
  v20 = v96.m12 * *((float *)a2 + 3);
  *(float *)&v130 = v17;
  *(_QWORD *)((char *)&v130 + 4) = __PAIR64__(LODWORD(v19), LODWORD(v18));
  *((float *)&v130 + 3) = v20;
  if ( v9 )
  {
    v90 = CoordMap::Copy((CoordMap *)&v149, v9);
    v29 = v90;
    if ( v90 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, 0x2DEu);
      goto LABEL_68;
    }
    CoordMap::ScalePositions((CoordMap *)&v149, m11, m12);
    v129 = (struct CoordMap *)&v149;
    v14 = 0;
  }
  v112 = v14;
  v144 = v99;
  D2D1InvertMatrix(&v144);
  v21 = (CRectanglesShape *)*((_QWORD *)this + 2);
  v22 = FLOAT_1_0;
  v106 = *(unsigned __int64 *)&v144.m11;
  v107.m256i_i64[0] = *(_QWORD *)&v144.m[1][0];
  *(_OWORD *)&v107.m256i_u64[1] = 0LL;
  *(_QWORD *)&v108[0] = *(_QWORD *)&v144.m[2][0];
  *(_QWORD *)((char *)v108 + 12) = 1065353216LL;
  v107.m256i_i64[3] = 1065353216LL;
  v109 = *(unsigned __int64 *)&v144.m11;
  DWORD2(v108[0]) = 0;
  v110 = v107;
  v112 = 0;
  v111 = v108[0];
  v23 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v21 + 32LL);
  if ( v23 == CRectanglesShape::IsRectangles )
    IsRectangles = CRectanglesShape::IsRectangles(v21, (unsigned int *)&v96.m21);
  else
    IsRectangles = v23(v21, (unsigned int *)&v96.m21);
  if ( !IsRectangles
    || LODWORD(v96.m21) != 1
    || (!CMILMatrix::Is2DAffine<1>((__int64)&v109, 1)
     || (v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v109 + 1) - 0.0)) & _xmm), v25 >= 0.00012207031)
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)v110.m256i_i32 - 0.0)) & _xmm) >= 0.00012207031)
    && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v109 - 0.0)) & _xmm) >= 0.00012207031
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v110.m256i_i32[1] - 0.0)) & _xmm) >= 0.00012207031) )
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v137, (const struct MilRectF *)&v130);
    v83 = CShape::Combine((__int64)&v137, v82, *((_QWORD *)this + 2), (__int64)&v109, 1, &v97);
    v29 = v83;
    if ( v83 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0x34Bu);
      goto LABEL_68;
    }
    v36 = v97;
    v93 = 1;
    v94 = 1;
    v95 = 14;
    goto LABEL_89;
  }
  v26 = *((_QWORD *)this + 2);
  v27 = *(__int64 (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v26 + 24LL);
  if ( (char *)v27 == (char *)CRectanglesShape::GetTightBounds )
    TightBounds = CRectanglesShape::GetTightBounds(v26, &v132);
  else
    TightBounds = v27(v26, &v132, &v109);
  v29 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x2FCu);
    goto LABEL_68;
  }
  v30 = v132;
  if ( (float)(v132 - v17) > 0.0000011920929 )
  {
    v31 = 1;
  }
  else
  {
    v31 = 0;
    v30 = v17;
  }
  v32 = v133;
  if ( (float)(v133 - v18) > 0.0000011920929 )
    v31 = 1;
  else
    v32 = v18;
  v33 = v134;
  if ( (float)(v19 - v134) > 0.0000011920929 )
    v31 = 1;
  else
    v33 = v19;
  v34 = v135;
  if ( (float)(v20 - v135) > 0.0000011920929 )
    v31 = 1;
  else
    v34 = v20;
  HIDWORD(v141) = 0;
  DynArrayImpl<0>::ShrinkToSize(&v138, 16LL);
  if ( v143 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v143 + 16LL))(v143);
    v143 = 0LL;
  }
  *(float *)v147 = v30;
  *(float *)&v147[1] = v32;
  *(float *)&v147[2] = v33;
  *(float *)&v147[3] = v34;
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(&v138, v147, 1LL);
  v35 = *((unsigned __int8 *)this + 28);
  v36 = (CComplexShape *)&v137;
  v97 = (CComplexShape *)&v137;
  v11 = CDrawListPrimitiveBuilder::CalcClippedRectEdgeFlags(v11, &v130, &v132, v35);
  if ( v11 != *((_DWORD *)a2 + 6) )
    v31 = 1;
  v95 = 13;
  v94 = v31;
LABEL_35:
  v37 = *(__int64 (__fastcall **)(CRegionShape *, __int64, __int64))(*(_QWORD *)v36 + 24LL);
  if ( (char *)v37 == (char *)CRectanglesShape::GetTightBounds )
  {
    CRectanglesShape::GetTightBounds(v36, v136);
  }
  else if ( v37 == CShape::GetTightBounds )
  {
    CShape::GetTightBounds(v36, (__int64)v136, 0LL);
  }
  else
  {
    v37(v36, (__int64)v136, 0LL);
  }
  if ( v136[2] <= v136[0] || v136[3] <= v136[1] )
  {
LABEL_64:
    _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + v95, 1u);
    ++*((_DWORD *)this + 602);
    if ( v94 )
      ++*((_DWORD *)this + 36);
    v36 = v97;
    v29 = 0;
    goto LABEL_67;
  }
  if ( a3 )
  {
    v38 = *((_BYTE *)a3 + 16);
    v116 = *(_OWORD *)a3;
    v117 = v38;
    v145 = matrix;
    D2D1InvertMatrix(&v145);
    v10 = *((_BYTE *)this + 2412) == 0;
    v105[2] = 0.0;
    v105[5] = 0.0;
    v105[8] = 1.0;
    v105[0] = (float)(v145.m21 * v99.m12) + (float)(v145.m11 * v99.m11);
    v105[1] = (float)(v145.m22 * v99.m12) + (float)(v99.m11 * v145.m12);
    v105[3] = (float)(v99.m22 * v145.m21) + (float)(v145.m11 * v99.m21);
    v105[4] = (float)(v99.m22 * v145.m22) + (float)(v99.m21 * v145.m12);
    v105[6] = (float)((float)(v99.dy * v145.m21) + (float)(v145.m11 * v99.dx)) + v145.dx;
    v105[7] = (float)((float)(v99.dy * v145.m22) + (float)(v99.dx * v145.m12)) + v145.dy;
    if ( !v10 )
    {
      v74 = *(_OWORD *)((char *)a3 + 68);
      v128 = 1;
      v122 = 1;
      v121 = v74;
      v75 = Matrix3x3::operator*(v105, v114, (char *)a3 + 32);
      v118 = *(_OWORD *)v75;
      v119 = *(_OWORD *)(v75 + 16);
      v120 = *(_DWORD *)(v75 + 32);
    }
    if ( *((_BYTE *)this + 2413) )
    {
      v39 = *(_OWORD *)((char *)a3 + 120);
      v128 = 2;
      v127 = 1;
      v126 = v39;
      v40 = Matrix3x3::operator*(v105, v115, (char *)a3 + 84);
      v123 = *(_OWORD *)v40;
      v124 = *(_OWORD *)(v40 + 16);
      v125 = *(_DWORD *)(v40 + 32);
    }
  }
  else
  {
    v116 = _xmm;
  }
  v41 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v36 + 32LL);
  if ( v41 == CRectanglesShape::IsRectangles )
    v42 = CRectanglesShape::IsRectangles(v36, (unsigned int *)&v96.m22);
  else
    v42 = v41(v36, (unsigned int *)&v96.m22);
  if ( v42 && LODWORD(v96.m22) == 1 )
  {
    v43 = *(void (__fastcall **)(CComplexShape *, struct D2D_RECT_F *, __int64))(*(_QWORD *)v36 + 40LL);
    if ( (char *)v43 == (char *)CRectanglesShape::GetRectangles )
      CRectanglesShape::GetRectangles(v36, &v146, 1LL);
    else
      v43(v36, &v146, 1LL);
    v104 = v146;
    v148 = v146;
    v44 = Mesh::CreateRectangleMesh(
            (CDrawListPrimitiveBuilder *)((char *)this + 152),
            (const struct Mesh::ContentInfo *)&v116,
            &v148,
            v11);
    v29 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x3ABu);
    }
    else
    {
      if ( v44
        || (appended = CDrawListPrimitiveBuilder::AppendGeometry(
                         this,
                         *((_BYTE *)a2 + 28) & 1,
                         (*((_BYTE *)a2 + 28) & 2) != 0),
            v29 = appended,
            appended >= 0) )
      {
LABEL_53:
        if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v99) )
        {
          if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
                  (D2DMatrixHelper *)&v99,
                  (struct D2D_MATRIX_3X2_F *)v96.m[2],
                  &v96.dy,
                  (float *)&v100) )
            D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
              (D2DMatrixHelper *)&v99,
              (struct D2D_MATRIX_3X2_F *)v96.m[2],
              &v96.dy,
              (float *)&v100,
              v92);
          v46 = v8;
          if ( v8 < *((_DWORD *)this + 96) )
          {
            dx_low = (__m128)LODWORD(v96.dx);
            dy_low = (__m128)LODWORD(v96.dy);
            v49 = v22 / v96.dx;
            v50 = v22 / v96.dy;
            v51 = v22 - (float)(v22 / v96.dx);
            v52 = v22 - (float)(v22 / v96.dy);
            do
            {
              v53 = (unsigned __int64)v46 << 6;
              v54 = (float *)(v53 + *((_QWORD *)this + 45));
              if ( v54 )
                v55 = v54 + 8;
              else
                v55 = 0LL;
              v56 = dx_low;
              v56.m128_f32[0] = dx_low.m128_f32[0] * *v55;
              ++v46;
              v57 = dy_low;
              v57.m128_f32[0] = dy_low.m128_f32[0] * v55[1];
              v58 = (float)(v54[1] - v55[1]) + v57.m128_f32[0];
              *v54 = v56.m128_f32[0] + (float)(*v54 - *v55);
              v54[1] = v58;
              v54[4] = (float)((float)(v22 - v49) * v55[4]) + (float)(v49 * v54[4]);
              v54[5] = (float)((float)(v22 - v50) * v55[5]) + (float)(v50 * v54[5]);
              v54[6] = (float)(v51 * v55[6]) + (float)(v49 * v54[6]);
              v54[7] = (float)(v52 * v55[7]) + (float)(v50 * v54[7]);
              *(_QWORD *)(*((_QWORD *)this + 45) + v53 + 32) = _mm_unpacklo_ps(v56, v57).m128_u64[0];
            }
            while ( v46 < *((_DWORD *)this + 96) );
            if ( v8 < *((_DWORD *)this + 96) )
            {
              v59 = v102;
              v60 = v101;
              v61 = (__m128)HIDWORD(v100);
              v62 = (__m128)DWORD2(v100);
              v63 = *((float *)&v100 + 1);
              v64 = *(float *)&v100;
              do
              {
                v65 = *((_QWORD *)this + 45);
                v66 = v62;
                v67 = v61;
                v68 = (unsigned __int64)v8 << 6;
                v69 = v61;
                ++v8;
                v98 = *(_QWORD *)(v65 + v68);
                v66.m128_f32[0] = (float)((float)(v62.m128_f32[0] * *((float *)&v98 + 1)) + (float)(v64 * *(float *)&v98))
                                + v60;
                v67.m128_f32[0] = (float)((float)(v61.m128_f32[0] * *((float *)&v98 + 1)) + (float)(v63 * *(float *)&v98))
                                + v59;
                v70 = v66;
                v71 = v62;
                *(_QWORD *)(v65 + v68) = _mm_unpacklo_ps(v70, v67).m128_u64[0];
                v72 = *((_QWORD *)this + 45);
                v98 = *(_QWORD *)(v72 + v68 + 32);
                v71.m128_f32[0] = (float)((float)(v62.m128_f32[0] * *((float *)&v98 + 1)) + (float)(*(float *)&v98 * v64))
                                + v60;
                v69.m128_f32[0] = (float)((float)(v61.m128_f32[0] * *((float *)&v98 + 1)) + (float)(v63 * *(float *)&v98))
                                + v59;
                *(_QWORD *)(v72 + v68 + 32) = _mm_unpacklo_ps(v71, v69).m128_u64[0];
              }
              while ( v8 < *((_DWORD *)this + 96) );
            }
          }
        }
        goto LABEL_64;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x3B0u);
    }
  }
  else if ( *((_QWORD *)this + 44)
         || (v89 = CDrawListPrimitiveBuilder::GeometrySink::Create(
                     this,
                     (struct CDrawListPrimitiveBuilder::GeometrySink **)this + 44),
             v29 = v89,
             v89 >= 0) )
  {
    v84 = *((_DWORD *)this + 2);
    v85 = *((_BYTE *)a2 + 28);
    v86 = *((_QWORD *)this + 44);
    *(_QWORD *)&v103 = __PAIR64__(LODWORD(v18), LODWORD(v17));
    *((_QWORD *)&v103 + 1) = __PAIR64__(LODWORD(v20), LODWORD(v19));
    v113 = v103;
    v87 = CDrawListPrimitiveBuilder::GeometrySink::AppendGeometry(
            v86,
            v36,
            (__int64)&v116,
            v84,
            v11,
            &v113,
            v85 & 1,
            (v85 & 2) != 0);
    v29 = v87;
    if ( v87 >= 0 )
      goto LABEL_53;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v87, 0x3BBu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v89, 0x3B7u);
  }
LABEL_67:
  if ( v93 )
  {
    v88 = **(CComplexShape *(__fastcall ***)(CComplexShape *, char))v36;
    if ( v88 == CComplexShape::`vector deleting destructor' )
      CComplexShape::`vector deleting destructor'(v36, 1);
    else
      v88(v36, 1);
  }
LABEL_68:
  if ( v159 != v160 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v159 = 0LL;
  }
  if ( v154 != v155 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v154 = 0LL;
  }
  if ( v149 != v150 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v149 = 0LL;
  }
  HIDWORD(v141) = 0;
  v137 = &CRectanglesShape::`vftable';
  DynArrayImpl<0>::ShrinkToSize(&v138, 16LL);
  if ( v143 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v143 + 16LL))(v143);
    v143 = 0LL;
  }
  if ( v138 != v139 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  return v29;
}
