/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180028440
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCFilterEffect@@@Z @ 0x1800104D0 (-PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180010918 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18001EFF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180022DEC (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x1800281B8 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x180028408 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18002AF38 (-ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004E0D0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18005B05C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18005B08C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18005BD54 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x18008D4D0 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z @ 0x1800DC150 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@@Z @ 0x1800F3FA4 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 */

__int64 __fastcall CDrawingContext::PushEffects(
        const void **this,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        struct CShape *a5,
        _BYTE *a6)
{
  __int64 v7; // rdx
  int v9; // r14d
  double v10; // xmm0_8
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm13_4
  char v14; // di
  unsigned int v15; // r8d
  __int64 v16; // rcx
  const struct CVisual *v17; // rax
  CShape *v18; // r10
  CComplexShape *v19; // r12
  __int64 *v20; // rsi
  float *v21; // rcx
  __int64 (__fastcall *v22)(CRectangleShape *); // r8
  __int64 (__fastcall *v23)(CComplexShape *); // r9
  __int64 (__fastcall *v24)(CComplexShape *); // rbx
  float v25; // xmm5_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  bool v29; // zf
  _BYTE *v30; // rcx
  char *v31; // r12
  const struct CVisual *v32; // rax
  _OWORD *v33; // r12
  unsigned int *v34; // rdi
  __int64 v35; // rax
  void *v36; // rbx
  unsigned int v37; // eax
  void (*v38)(WPF::ProcessHeapImpl *__hidden, void *); // rdi
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  int v42; // eax
  __int64 v43; // rcx
  __int64 (__fastcall *v44)(CComplexShape *); // rbx
  CShape *v45; // r12
  float v46; // xmm8_4
  float v47; // xmm2_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm1_4
  __int64 v51; // rcx
  char *v52; // rax
  float v53; // xmm2_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm1_4
  __int64 (__fastcall *v57)(CComplexShape *); // rbx
  __int128 *v58; // rsi
  float v59; // xmm2_4
  float v60; // xmm4_4
  float v61; // xmm5_4
  float v62; // xmm6_4
  __int64 v63; // rcx
  float *v64; // rcx
  float v65; // xmm2_4
  float v66; // xmm4_4
  float v67; // xmm5_4
  float v68; // xmm6_4
  float v69; // xmm3_4
  float v70; // xmm2_4
  float v71; // xmm1_4
  float v72; // xmm0_4
  __int64 v73; // rax
  unsigned int v74; // edx
  __int64 v75; // rcx
  __int64 v76; // rcx
  int v77; // r8d
  int v78; // eax
  __int128 v79; // xmm0
  float v80; // xmm2_4
  float v81; // xmm0_4
  float v82; // xmm1_4
  float v83; // xmm1_4
  int v84; // eax
  float *v85; // rbx
  float v87; // xmm0_4
  const struct CVisual *v88; // rax
  int v89; // eax
  int v90; // eax
  int TightBounds; // eax
  __int64 v92; // rdi
  __int64 v93; // rdi
  const struct CVisual *v94; // rax
  int v95; // eax
  int v96; // eax
  CDrawingContext *v97; // rcx
  int v98; // eax
  int v99; // xmm0_4
  __m128 v100; // xmm2
  __m128 v101; // xmm1
  int v102; // eax
  int v103; // eax
  int v104; // ebx
  __int64 v105; // rax
  float *v106; // rdi
  int v107; // eax
  void (__fastcall ***v108)(__int64, __int64); // rax
  __int64 *v109; // rdi
  const struct D2DMatrix *v110; // rcx
  __int64 v111; // rcx
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rdi
  int v116; // eax
  void (__fastcall ***v117)(__int64, __int64); // r12
  __int64 *v118; // rdi
  const struct D2DMatrix *v119; // rcx
  __int64 v120; // rcx
  int v121; // eax
  __int64 v122; // rax
  unsigned __int64 v123; // rax
  int v124; // eax
  unsigned __int64 v125; // rax
  const void *v126; // rsi
  float *v127; // rax
  __int64 v128; // rcx
  float v129; // xmm0_4
  int v130; // ebx
  int v131; // eax
  void **v132; // [rsp+28h] [rbp-E0h]
  unsigned int v133; // [rsp+28h] [rbp-E0h]
  bool v134[8]; // [rsp+38h] [rbp-D0h] BYREF
  CShape *v135; // [rsp+40h] [rbp-C8h] BYREF
  void (__fastcall ***v136)(_QWORD, _QWORD); // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1Geometry *v137; // [rsp+50h] [rbp-B8h] BYREF
  __int128 *v138; // [rsp+58h] [rbp-B0h]
  struct CShape *v139; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v140; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE *v141; // [rsp+70h] [rbp-98h]
  _BYTE v142[80]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v143; // [rsp+C8h] [rbp-40h]
  __int64 v144; // [rsp+D8h] [rbp-30h]
  __int128 v145; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v146; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v147; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int64 v148; // [rsp+118h] [rbp+10h]
  __int128 v149; // [rsp+120h] [rbp+18h] BYREF
  CShape *v150; // [rsp+130h] [rbp+28h] BYREF
  float v151; // [rsp+138h] [rbp+30h]
  float v152; // [rsp+13Ch] [rbp+34h] BYREF
  float v153; // [rsp+140h] [rbp+38h]
  float v154; // [rsp+144h] [rbp+3Ch]
  float v155; // [rsp+148h] [rbp+40h]
  float v156; // [rsp+14Ch] [rbp+44h]

  v7 = 0LL;
  v9 = 0;
  *a6 = 0;
  v10 = *(float *)(a2 + 8);
  v138 = a3;
  v139 = a5;
  v141 = a6;
  v137 = 0LL;
  v11 = COERCE_DOUBLE(*(_QWORD *)&v10 & _xmm);
  if ( v11 < 0.0000011920929
    || (v12 = *(float *)(a2 + 16), (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm) < 0.0000011920929) )
  {
    *a6 = 1;
    return 0LL;
  }
  if ( *((_BYTE *)this + 2616) || *((_DWORD *)this + 1439) )
  {
    if ( *(_BYTE *)(a2 + 148) )
    {
      v98 = CDrawingContext::ShapeDataFromGeometryNoRef(
              (CDrawingContext *)this,
              (const struct D2D_SIZE_F *)(*(_QWORD *)a2 + 148LL),
              *(struct CGeometry **)(*(_QWORD *)a2 + 368LL),
              &v139);
      v9 = v98;
      if ( v98 < 0 )
      {
        v133 = 5584;
        goto LABEL_376;
      }
      if ( v139 )
      {
        v103 = (*(__int64 (__fastcall **)(struct CShape *, __int128 *, __int64))(*(_QWORD *)v139 + 24LL))(
                 v139,
                 &v147,
                 a2 + 84);
        v104 = v103;
        if ( v103 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v103, 0x15D9u);
        if ( v104 == -2003304438 )
          goto LABEL_233;
        if ( v104 >= 0 )
        {
          if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v147) )
            goto LABEL_233;
          v98 = CDrawingContext::PushClipRectForNode((__int64)this, *(_QWORD *)a2, (int)&v147, 0);
          v9 = v98;
          if ( v98 < 0 )
          {
            v133 = 5607;
            goto LABEL_376;
          }
          CScopedClipStack::GetTopClipBoundsInScope(this + 85, &v147);
          if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v147) )
LABEL_233:
            *a6 = 1;
        }
      }
    }
    v98 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, *(const struct CVisual **)a2);
    v9 = v98;
    if ( v98 >= 0 )
      goto LABEL_141;
    v133 = 5625;
    goto LABEL_376;
  }
  v13 = FLOAT_1_0;
  if ( *(_BYTE *)(a2 + 148)
    || *(_BYTE *)(a2 + 149)
    || *(_BYTE *)(a2 + 150)
    || *(_DWORD *)(a2 + 12)
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v14 = 0;
    if ( qword_1801930E8 )
    {
      v15 = *((_DWORD *)qword_1801930E8 + 18);
      if ( v15 )
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(*((_QWORD *)qword_1801930E8 + 6) + 8LL * (unsigned int)v7);
          if ( *(_BYTE *)(v16 + 149) || *(_BYTE *)(v16 + 148) || *(_BYTE *)(v16 + 288) || *(_DWORD *)(v16 + 284) )
            break;
          LODWORD(v7) = v7 + 1;
          if ( (unsigned int)v7 >= v15 )
            goto LABEL_13;
        }
        CVisual::ClearAllMoveTransformsInSubtree(*(struct CVisual **)a2);
LABEL_13:
        v7 = 0LL;
      }
    }
    if ( !*(_BYTE *)(a2 + 148) )
      goto LABEL_155;
    v17 = *(const struct CVisual **)a2;
    v18 = 0LL;
    v135 = 0LL;
    v9 = 0;
    v19 = 0LL;
    v20 = (__int64 *)*((_QWORD *)v17 + 46);
    v21 = (float *)((char *)v17 + 148);
    *(_QWORD *)&v146 = (char *)v17 + 148;
    if ( (v20[4] & 1) != 0
      || *((_BYTE *)v20 + 72) && (*((float *)v20 + 16) != *v21 || *((float *)v20 + 17) != *((float *)v17 + 38)) )
    {
      v105 = *v20;
      v106 = 0LL;
      v29 = *((_BYTE *)v20 + 72) == 0;
      v140 = 0LL;
      if ( !v29 )
        v106 = v21;
      v107 = (*(__int64 (__fastcall **)(__int64 *, float *, __int64 *))(v105 + 96))(v20, v106, &v140);
      v9 = v107;
      if ( v107 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v107, 0x49u);
        v21 = (float *)v146;
        v7 = 0LL;
        v14 = 0;
        v18 = 0LL;
        goto LABEL_18;
      }
      v108 = (void (__fastcall ***)(__int64, __int64))v20[6];
      v109 = v20 + 6;
      v136 = v108;
      if ( v108 )
        (**v108)((__int64)v136, 1LL);
      v110 = (const struct D2DMatrix *)v20[7];
      v7 = 0LL;
      *v109 = 0LL;
      if ( !v110 || D2DMatrixIsIdentity(v110) )
      {
        v113 = v140;
      }
      else
      {
        v112 = CShape::Combine(v140, v111, 0LL, 0LL, v7, v20 + 6);
        v7 = 0LL;
        v9 = v112;
        if ( v112 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v112, 0x56u);
          v21 = (float *)v146;
          v7 = 0LL;
          v14 = 0;
          v18 = 0LL;
LABEL_18:
          v22 = CRectangleShape::GetTightBounds;
          v23 = CShape::GetTightBounds;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x24u);
          }
          else
          {
            v24 = *(__int64 (__fastcall **)(CComplexShape *))(*(_QWORD *)v19 + 24LL);
            if ( v24 == CRectangleShape::GetTightBounds )
            {
              v9 = v7;
              v149 = *(_OWORD *)((char *)v19 + 8);
            }
            else
            {
              if ( v24 == CShape::GetTightBounds )
                TightBounds = CShape::GetTightBounds(v19);
              else
                TightBounds = ((__int64 (__fastcall *)(CComplexShape *, __int128 *, _QWORD, __int64 (__fastcall *)(CComplexShape *)))v24)(
                                v19,
                                &v149,
                                0LL,
                                CShape::GetTightBounds);
              v18 = v135;
              v7 = 0LL;
              v21 = (float *)v146;
              v9 = TightBounds;
            }
            if ( v9 >= 0 )
            {
LABEL_22:
              if ( v9 == -2003304438 )
              {
                v26 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
                v28 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                v25 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
                v27 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
                v149 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                v9 = v7;
              }
              else
              {
                v25 = *((float *)&v149 + 3);
                v26 = *((float *)&v149 + 2);
                v27 = *((float *)&v149 + 1);
                v28 = *(float *)&v149;
              }
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xE39u);
LABEL_283:
                v18 = v135;
                v7 = 0LL;
                goto LABEL_284;
              }
              if ( *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v28
                && v26 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
                || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v27
                && v25 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
              {
LABEL_284:
                if ( v9 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x152Du);
                  goto LABEL_141;
                }
                goto LABEL_31;
              }
              v29 = (v20[4] & 1) == 0;
              v9 = v7;
              v135 = (CShape *)v7;
              if ( !v29 || *((_BYTE *)v20 + 72) && (*((float *)v20 + 16) != *v21 || *((float *)v20 + 17) != v21[1]) )
              {
                v114 = *v20;
                v115 = v7;
                v29 = *((_BYTE *)v20 + 72) == 0;
                v136 = (void (__fastcall ***)(_QWORD, _QWORD))v7;
                if ( !v29 )
                  v115 = (__int64)v21;
                v116 = (*(__int64 (__fastcall **)(__int64 *, __int64, void (__fastcall ****)(_QWORD, _QWORD), __int64 (__fastcall *)(CComplexShape *)))(v114 + 96))(
                         v20,
                         v115,
                         &v136,
                         v23);
                v9 = v116;
                if ( v116 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v116, 0x49u);
                  v18 = v135;
                  v7 = 0LL;
                  v14 = 0;
                  goto LABEL_30;
                }
                v117 = (void (__fastcall ***)(__int64, __int64))v20[6];
                v118 = v20 + 6;
                if ( v117 )
                  (**v117)(v20[6], 1LL);
                v119 = (const struct D2DMatrix *)v20[7];
                v7 = 0LL;
                *v118 = 0LL;
                if ( !v119 || D2DMatrixIsIdentity(v119) )
                {
                  v122 = (__int64)v136;
                }
                else
                {
                  v121 = CShape::Combine((__int64)v136, v120, 0LL, 0LL, v7, v20 + 6);
                  v7 = 0LL;
                  v9 = v121;
                  if ( v121 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v121, 0x56u);
                    v18 = v135;
                    v7 = 0LL;
                    v14 = 0;
                    goto LABEL_30;
                  }
                  v122 = *v118;
                }
                v20[5] = v122;
                if ( (_QWORD)v146 )
                  v20[8] = *(_QWORD *)v146;
                *((_DWORD *)v20 + 8) &= ~1u;
                v14 = 0;
              }
              v18 = (CShape *)v20[5];
              v135 = v18;
LABEL_30:
              if ( v9 >= 0 )
              {
LABEL_31:
                if ( v18 )
                {
                  if ( *((_BYTE *)this[85] + 76 * (unsigned int)(*((_DWORD *)this + 176) - 1)) )
                  {
                    v30 = this[691];
                    v31 = (char *)v7;
                    v32 = *(const struct CVisual **)a2;
                    if ( v30[32] )
                    {
                      v31 = (char *)v32 + 448;
                    }
                    else
                    {
                      v23 = (__int64 (__fastcall *)(CComplexShape *))((char *)v32 + 432);
                      v22 = (__int64 (__fastcall *)(CRectangleShape *))*((_QWORD *)v32 + 54);
                      if ( (char *)v22 != (char *)((char *)v32 + 432) )
                      {
                        while ( *((_BYTE **)v22 + 4) != v30 )
                        {
                          v22 = *(__int64 (__fastcall **)(CRectangleShape *))v22;
                          if ( v22 == v23 )
                            goto LABEL_35;
                        }
                        v31 = (char *)v22 - 264;
                      }
                    }
LABEL_35:
                    v33 = (_OWORD *)*((_QWORD *)v31 + 26);
                  }
                  else
                  {
                    v33 = (_OWORD *)(a2 + 84);
                  }
                  v34 = (unsigned int *)(this + 53);
                  *((_QWORD *)&v147 + 1) = *(_QWORD *)a2;
                  v9 = v7;
                  v35 = *((unsigned int *)this + 107);
                  v36 = (void *)v7;
                  v134[0] = 0;
                  LODWORD(v147) = 2;
                  *(_QWORD *)&v146 = v7;
                  if ( *((_DWORD *)this + 106) == (_DWORD)v35 )
                  {
                    v123 = 2 * v35;
                    if ( v123 > 0xFFFFFFFF )
                    {
                      v9 = -2147024362;
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
                      v18 = v135;
                      v7 = 0LL;
                      goto LABEL_40;
                    }
                    if ( (unsigned int)v123 <= 0x40 )
                      v123 = 64LL;
                    *(_QWORD *)&v145 = v123;
                    v124 = WPF::HrMalloc((WPF *)0x40, 16LL, (unsigned int)v123, (unsigned __int64)&v146, v132);
                    v9 = v124;
                    if ( v124 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v124, 0x54u);
                      v18 = v135;
                      v7 = 0LL;
                      v36 = (void *)v146;
                      goto LABEL_40;
                    }
                    v125 = 16LL * *v34;
                    if ( v125 > 0xFFFFFFFF )
                    {
                      v9 = -2147024362;
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
                      v18 = v135;
                      v7 = 0LL;
                      v36 = (void *)v146;
                      goto LABEL_40;
                    }
                    v9 = 0;
                    v126 = (const void *)v146;
                    memcpy_0((void *)v146, this[55], (unsigned int)v125);
                    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                      WPF::g_pProcessHeap,
                      this[55]);
                    v34 = (unsigned int *)(this + 53);
                    v18 = v135;
                    v7 = 0LL;
                    *((_DWORD *)this + 107) = v145;
                    v36 = 0LL;
                    this[55] = v126;
                  }
                  *(_OWORD *)(*((_QWORD *)v34 + 2) + 16LL * (*v34)++) = v147;
                  v37 = v34[6];
                  if ( v37 <= *v34 )
                    v37 = *v34;
                  v34[6] = v37;
LABEL_40:
                  v38 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
                  if ( v38 == WPF::ProcessHeapImpl::Free )
                  {
                    if ( !v36 )
                      goto LABEL_42;
                    HeapFree(g_hProcessHeap, 0, v36);
                  }
                  else
                  {
                    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *, __int64 (__fastcall *)(CRectangleShape *), __int64 (__fastcall *)(CComplexShape *)))v38)(
                      WPF::g_pProcessHeap,
                      v36,
                      v22,
                      v23);
                  }
                  v18 = v135;
                  v7 = 0LL;
LABEL_42:
                  if ( v9 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1430u);
                    v45 = v135;
                    v58 = 0LL;
                    goto LABEL_110;
                  }
                  v134[0] = 1;
                  *(_QWORD *)v142 = v18;
                  if ( v33 )
                  {
                    v39 = v33[1];
                    *(_OWORD *)&v142[8] = *v33;
                    v40 = v33[2];
                    *(_OWORD *)&v142[24] = v39;
                    v41 = v33[3];
                    *(_OWORD *)&v142[40] = v40;
                    *(_OWORD *)&v142[56] = v41;
                  }
                  else
                  {
                    *(_OWORD *)&v142[52] = 0uLL;
                    *(_OWORD *)&v142[32] = 0uLL;
                    *(_QWORD *)&v142[20] = 0LL;
                    *(_QWORD *)&v142[12] = 0LL;
                    *(_DWORD *)&v142[68] = 1065353216;
                    *(_DWORD *)&v142[48] = 1065353216;
                    *(_DWORD *)&v142[28] = 1065353216;
                    *(_DWORD *)&v142[8] = 1065353216;
                  }
                  v42 = *((_DWORD *)this + 176);
                  *(_QWORD *)&v142[72] = v7;
                  if ( v42 && (v7 = 76LL * (unsigned int)(v42 - 1), *(_DWORD *)((char *)this[85] + v7 + 8)) )
                  {
                    v7 = (__int64)this[184];
                    v43 = 104LL * (unsigned int)(*((_DWORD *)this + 374) - 1);
                    v143 = *(_OWORD *)(v43 + v7 + 80);
                    LOBYTE(v144) = *(_BYTE *)(v43 + v7 + 96);
                  }
                  else
                  {
                    LOBYTE(v144) = 1;
                    v143 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                  }
                  v44 = *(__int64 (__fastcall **)(CComplexShape *))(*(_QWORD *)v18 + 24LL);
                  if ( v44 == CRectangleShape::GetTightBounds )
                  {
                    v147 = *(_OWORD *)((char *)v18 + 8);
                  }
                  else
                  {
                    if ( v44 == CShape::GetTightBounds )
                      CShape::GetTightBounds(v18);
                    else
                      ((void (__fastcall *)(CShape *, __int128 *, _QWORD, __int64 (__fastcall *)(CComplexShape *)))v44)(
                        v135,
                        &v147,
                        0LL,
                        v23);
                    v18 = v135;
                  }
                  if ( *((float *)&v147 + 2) <= *(float *)&v147 || *((float *)&v147 + 3) <= *((float *)&v147 + 1) )
                  {
                    v45 = v135;
                    v143 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
                  }
                  else
                  {
                    v45 = v135;
                    if ( (!(*(unsigned int (__fastcall **)(CShape *, __int64, __int64 (__fastcall *)(CRectangleShape *), __int64 (__fastcall *)(CComplexShape *)))(*(_QWORD *)v18 + 8LL))(
                             v135,
                             v7,
                             v22,
                             v23)
                       || (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v135 + 8LL))(v135) == 2
                       && (v92 = *((_QWORD *)v135 + 1)) != 0
                       && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v92 + 136LL))(*((_QWORD *)v135 + 1)) == 1)
                      && (v46 = *(float *)&v142[48],
                          v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[16]) & _xmm),
                          v47 < 0.00012207031)
                      && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[32]) & _xmm) < 0.00012207031
                       && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[64]) & _xmm) < 0.00012207031
                       || v47 < 0.00012207031
                       && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[32]) & _xmm) < 0.00012207031
                       && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[40]) & _xmm) < 0.00012207031
                       && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[44]) & _xmm) < 0.00012207031
                       && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v142[48] - 1.0)) & _xmm) < 0.00012207031
                        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[48]) & _xmm) < 0.00012207031)
                       && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[52]) & _xmm) < 0.00012207031
                       && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[64]) & _xmm) < 0.00012207031)
                      && (v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[20]) & _xmm),
                          v49 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[68]) & _xmm),
                          (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[36]) & _xmm) * 40960.0)
                                                                                           + (float)(v48 * 40960.0))
                                                                                   + v49)
                                                                           - 1.0)) & _xmm) < 0.00012207031)
                      && ((v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[12]) & _xmm), v50 < 0.00012207031)
                       && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[24]) & _xmm) < 0.00012207031
                       || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[8]) & _xmm) < 0.00012207031
                       && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v142[28]) & _xmm) < 0.00012207031) )
                    {
                      v51 = 76LL * (unsigned int)(*((_DWORD *)this + 176) - 1);
                      v52 = (char *)this[85];
                      v53 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 20]) & _xmm);
                      if ( v53 < 0.00012207031
                        && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 36]) & _xmm) < 0.00012207031
                         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 68]) & _xmm) < 0.00012207031
                         || v53 < 0.00012207031
                         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 36]) & _xmm) < 0.00012207031
                         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 44]) & _xmm) < 0.00012207031
                         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 48]) & _xmm) < 0.00012207031
                         && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v52[v51 + 52] - 1.0)) & _xmm) < 0.00012207031
                          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 52]) & _xmm) < 0.00012207031)
                         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 56]) & _xmm) < 0.00012207031
                         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 68]) & _xmm) < 0.00012207031) )
                      {
                        v54 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 24]) & _xmm);
                        v55 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 72]) & _xmm);
                        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 40]) & _xmm) * 40960.0)
                                                                                              + (float)(v54 * 40960.0))
                                                                                      + v55)
                                                                              - 1.0)) & _xmm) < 0.00012207031 )
                        {
                          if ( (v56 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 16]) & _xmm),
                                v56 < 0.00012207031)
                            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 28]) & _xmm) < 0.00012207031
                            || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 12]) & _xmm) < 0.00012207031
                            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v52[v51 + 32]) & _xmm) < 0.00012207031 )
                          {
                            v57 = *(__int64 (__fastcall **)(CComplexShape *))(*(_QWORD *)v135 + 24LL);
                            if ( v57 == CRectangleShape::GetTightBounds )
                            {
                              v58 = 0LL;
                              v9 = 0;
                              v145 = *(_OWORD *)((char *)v135 + 8);
                            }
                            else
                            {
                              if ( v57 == CShape::GetTightBounds )
                                v102 = CShape::GetTightBounds(v135);
                              else
                                v102 = ((__int64 (__fastcall *)(CShape *, __int128 *, _QWORD))v57)(v135, &v145, 0LL);
                              v46 = *(float *)&v142[48];
                              v58 = 0LL;
                              v9 = v102;
                            }
                            if ( v9 < 0 )
                            {
                              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x133u);
                              goto LABEL_108;
                            }
                            v146 = v145;
                            if ( *(float *)&v142[8] == 1.0
                              && *(float *)&v142[12] == 0.0
                              && *(float *)&v142[16] == 0.0
                              && *(float *)&v142[20] == 0.0
                              && *(float *)&v142[24] == 0.0
                              && *(float *)&v142[28] == 1.0
                              && *(float *)&v142[32] == 0.0
                              && *(float *)&v142[36] == 0.0
                              && *(float *)&v142[40] == 0.0
                              && *(float *)&v142[44] == 0.0
                              && v46 == 1.0
                              && *(float *)&v142[52] == 0.0 )
                            {
                              v59 = *(float *)&v145 + *(float *)&v142[56];
                              v60 = *((float *)&v145 + 1) + *(float *)&v142[60];
                              v61 = *((float *)&v145 + 2) + *(float *)&v142[56];
                              v62 = *((float *)&v145 + 3) + *(float *)&v142[60];
                            }
                            else
                            {
                              CBaseMatrix::Transform2DRectToPerspective(
                                (CBaseMatrix *)&v142[8],
                                (const struct MilRectF *)&v146,
                                (struct MilPoint2F *const)&v150);
                              v61 = v151;
                              v135 = v150;
                              *(_QWORD *)&v146 = v150;
                              if ( *(float *)&v150 > v151 )
                                v59 = v151;
                              else
                                LODWORD(v59) = v146;
                              v60 = *((float *)&v146 + 1);
                              if ( *((float *)&v146 + 1) > v152 )
                                v60 = v152;
                              if ( v151 <= *(float *)&v150 )
                                LODWORD(v61) = (_DWORD)v135;
                              v62 = *((float *)&v135 + 1);
                              if ( v152 > *((float *)&v135 + 1) )
                                v62 = v152;
                              if ( v59 > v153 )
                                v59 = v153;
                              if ( v60 > v154 )
                                v60 = v154;
                              if ( v153 > v61 )
                                v61 = v153;
                              if ( v154 > v62 )
                                v62 = v154;
                              if ( v59 > v155 )
                                v59 = v155;
                              if ( v60 > v156 )
                                v60 = v156;
                              if ( v155 > v61 )
                                v61 = v155;
                              if ( v156 > v62 )
                                v62 = v156;
                            }
                            v63 = 76LL * (unsigned int)(*((_DWORD *)this + 176) - 1);
                            *((_QWORD *)&v145 + 1) = __PAIR64__(LODWORD(v62), LODWORD(v61));
                            *(_QWORD *)&v145 = __PAIR64__(LODWORD(v60), LODWORD(v59));
                            *(_QWORD *)&v146 = __PAIR64__(LODWORD(v60), LODWORD(v59));
                            v64 = (float *)((char *)this[85] + v63 + 12);
                            *((_QWORD *)&v146 + 1) = __PAIR64__(LODWORD(v62), LODWORD(v61));
                            if ( *v64 == 1.0
                              && v64[1] == 0.0
                              && v64[2] == 0.0
                              && v64[3] == 0.0
                              && v64[4] == 0.0
                              && v64[5] == 1.0
                              && v64[6] == 0.0
                              && v64[7] == 0.0
                              && v64[8] == 0.0
                              && v64[9] == 0.0
                              && v64[10] == 1.0
                              && v64[11] == 0.0 )
                            {
                              v65 = v59 + v64[12];
                              *(float *)&v145 = v65;
                              v66 = v60 + v64[13];
                              *((float *)&v145 + 1) = v66;
                              v67 = v61 + v64[12];
                              *((float *)&v145 + 2) = v67;
                              v68 = v62 + v64[13];
                            }
                            else
                            {
                              CBaseMatrix::Transform2DRectToPerspective(
                                (CBaseMatrix *)v64,
                                (const struct MilRectF *)&v146,
                                (struct MilPoint2F *const)&v150);
                              v127 = &v152;
                              *(_QWORD *)&v146 = v150;
                              v128 = 3LL;
                              v68 = *((float *)&v150 + 1);
                              v67 = *(float *)&v150;
                              v135 = v150;
                              v66 = *((float *)&v150 + 1);
                              LODWORD(v65) = (_DWORD)v150;
                              do
                              {
                                v129 = *(v127 - 1);
                                if ( v65 > v129 )
                                  v65 = *(v127 - 1);
                                if ( v66 > *v127 )
                                  v66 = *v127;
                                if ( v129 > v67 )
                                  v67 = *(v127 - 1);
                                if ( *v127 > v68 )
                                  v68 = *v127;
                                v127 += 2;
                                --v128;
                              }
                              while ( v128 );
                              *(_QWORD *)&v145 = __PAIR64__(LODWORD(v66), LODWORD(v65));
                              *((float *)&v145 + 2) = v67;
                            }
                            v69 = *(float *)&v143;
                            *((float *)&v145 + 3) = v68;
                            if ( v65 > *(float *)&v143 )
                            {
                              v69 = v65;
                              *(float *)&v143 = v65;
                            }
                            v70 = *((float *)&v143 + 1);
                            if ( v66 > *((float *)&v143 + 1) )
                            {
                              v70 = v66;
                              *((float *)&v143 + 1) = v66;
                            }
                            v71 = *((float *)&v143 + 2);
                            if ( *((float *)&v143 + 2) > v67 )
                            {
                              v71 = v67;
                              *((float *)&v143 + 2) = v67;
                            }
                            v72 = *((float *)&v143 + 3);
                            if ( *((float *)&v143 + 3) > v68 )
                            {
                              v72 = v68;
                              *((float *)&v143 + 3) = v68;
                            }
                            if ( v71 <= v69 || v72 <= v70 )
                              v143 = 0uLL;
LABEL_104:
                            v73 = *((unsigned int *)this + 374);
                            v74 = v73 + 1;
                            if ( (int)v73 + 1 < (unsigned int)v73 )
                            {
                              v130 = -2147024362;
                              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
                              v9 = -2147024362;
                            }
                            else
                            {
                              v9 = 0;
                              if ( v74 <= *((_DWORD *)this + 373) )
                              {
                                v75 = (__int64)this[184] + 104 * v73;
                                *(_OWORD *)v75 = *(_OWORD *)v142;
                                *(_OWORD *)(v75 + 16) = *(_OWORD *)&v142[16];
                                *(_OWORD *)(v75 + 32) = *(_OWORD *)&v142[32];
                                *(_OWORD *)(v75 + 48) = *(_OWORD *)&v142[48];
                                *(_OWORD *)(v75 + 64) = *(_OWORD *)&v142[64];
                                *(_OWORD *)(v75 + 80) = v143;
                                *(_QWORD *)(v75 + 96) = v144;
                                *((_DWORD *)this + 374) = v74;
LABEL_107:
                                v76 = 76LL * (unsigned int)(*((_DWORD *)this + 176) - 1);
                                ++*(_DWORD *)((char *)this[85] + v76 + 8);
                                goto LABEL_108;
                              }
                              v131 = DynArrayImpl<0>::AddMultipleAndSet(this + 184, 104LL, 1LL, v142);
                              v130 = v131;
                              if ( v131 < 0 )
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v131, 0xC0u);
                              v9 = v130;
                              if ( v130 >= 0 )
                                goto LABEL_107;
                            }
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v130, 0x142u);
LABEL_108:
                            if ( v9 < 0 )
                              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1433u);
                            else
                              *((_BYTE *)this + 5929) = 1;
LABEL_110:
                            if ( v9 < 0 )
                            {
                              if ( v134[0] )
                                CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(this + 53, 0LL);
                              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x153Au);
                              goto LABEL_141;
                            }
                            v77 = *((_DWORD *)this + 176);
                            if ( v77
                              && *((_DWORD *)this[85] + 19 * (unsigned int)(v77 - 1) + 1)
                              && *((_DWORD *)this + 638) )
                            {
                              v78 = *((_DWORD *)this + 638);
                              if ( !v78 )
                                goto LABEL_117;
                              v79 = *((_OWORD *)this[321] + (unsigned int)(v78 - 1));
                            }
                            else
                            {
                              v79 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                            }
                            v145 = v79;
LABEL_117:
                            if ( v77 && *((_DWORD *)this[85] + 19 * (unsigned int)(v77 - 1) + 2) )
                              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                                &v145,
                                (char *)this[184] + 104 * (unsigned int)(*((_DWORD *)this + 374) - 1) + 80);
                            if ( *((float *)&v145 + 2) <= *(float *)&v145
                              || *((float *)&v145 + 3) <= *((float *)&v145 + 1) )
                            {
                              *v141 = 1;
                              goto LABEL_141;
                            }
                            if ( !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v45 + 8LL))(v45)
                              || (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v45 + 8LL))(v45) == 2
                              && (v93 = *((_QWORD *)v45 + 1)) != 0
                              && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v93 + 136LL))(*((_QWORD *)v45 + 1)) == 1 )
                            {
                              v80 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 92)) & _xmm);
                              if ( v80 < 0.00012207031
                                && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 108)) & _xmm) < 0.00012207031
                                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 140)) & _xmm) < 0.00012207031
                                 || v80 < 0.00012207031
                                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 108)) & _xmm) < 0.00012207031
                                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 116)) & _xmm) < 0.00012207031
                                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 120)) & _xmm) < 0.00012207031
                                 && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a2 + 124) - 1.0)) & _xmm) < 0.00012207031
                                  || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 124)) & _xmm) < 0.00012207031)
                                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 128)) & _xmm) < 0.00012207031
                                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 140)) & _xmm) < 0.00012207031) )
                              {
                                v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 96)) & _xmm);
                                v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 144)) & _xmm);
                                if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 112)) & _xmm) * 40960.0) + (float)(v81 * 40960.0))
                                                                                              + v82)
                                                                                      - 1.0)) & _xmm) < 0.00012207031 )
                                {
                                  if ( (v83 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 88)) & _xmm),
                                        v83 < 0.00012207031)
                                    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 100)) & _xmm) < 0.00012207031
                                    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 84)) & _xmm) < 0.00012207031
                                    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a2 + 104)) & _xmm) < 0.00012207031 )
                                  {
                                    *(_BYTE *)(a2 + 148) = 0;
                                  }
                                }
                              }
                            }
                            if ( EventEnabled(
                                   Microsoft_Windows_Dwm_CoreHandle,
                                   &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
                            {
                              if ( CShape::IsAxisAlignedRectangle(v45) )
                                *((_DWORD *)this + 1486) |= 1u;
                              if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)(a2 + 84)) )
                                *((_DWORD *)this + 1486) |= 4u;
                            }
                            v14 = 0;
                            goto LABEL_132;
                          }
                        }
                      }
                    }
                    else
                    {
                      LOBYTE(v144) = 0;
                    }
                  }
                  v58 = 0LL;
                  goto LABEL_104;
                }
                *(_BYTE *)(a2 + 148) = 0;
LABEL_155:
                v58 = 0LL;
LABEL_132:
                if ( !*(_BYTE *)(a2 + 148) )
                {
                  v84 = *(_DWORD *)(a2 + 12);
                  if ( v84 != 2 )
                  {
                    if ( v84 == 1 )
                    {
                      v87 = *(float *)(a2 + 16) * *(float *)(a2 + 8);
                      v88 = *(const struct CVisual **)a2;
                      LODWORD(v147) = 7;
                      *((_QWORD *)&v147 + 1) = v88;
                      *(float *)&v135 = v87;
                      v89 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 53, &v147);
                      v9 = v89;
                      if ( v89 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v89, 0x18F5u);
                      }
                      else
                      {
                        v90 = CWatermarkStack<float,64,2,10>::Push(this + 323, &v135);
                        v9 = v90;
                        if ( v90 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, 0x18F7u);
                          CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(this + 53, 0LL);
                        }
                      }
                      if ( v9 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x15A2u);
                        goto LABEL_141;
                      }
                    }
                    else if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a2 + 16) - 1.0)) & _xmm) >= 0.0000011920929 )
                    {
                      v98 = CDrawingContext::PushEffectiveAlphaForNode(
                              (CDrawingContext *)this,
                              *(const struct CVisual **)a2,
                              *(float *)(a2 + 16));
                      v9 = v98;
                      if ( v98 < 0 )
                      {
                        v133 = 5547;
                        goto LABEL_376;
                      }
                    }
                    v85 = (float *)v138;
LABEL_137:
                    if ( *(_BYTE *)(a2 + 149) )
                    {
                      CDrawingContext::PushColorTransformLayer((CDrawingContext *)this, *(struct CVisual **)a2);
                      v14 = 1;
                    }
                    if ( *(_BYTE *)(a2 + 150) )
                    {
                      CDrawingContext::PushFilterEffectLayer(
                        (struct IRenderTarget **)this,
                        *(struct CVisual **)a2,
                        v85,
                        (float *)v139,
                        *(struct CFilterEffect **)(*(_QWORD *)a2 + 408LL));
                    }
                    else if ( !v14 )
                    {
                      goto LABEL_141;
                    }
                    CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 57), (struct CBaseMatrix *)(a2 + 20));
                    goto LABEL_141;
                  }
                }
                if ( *(_DWORD *)(a2 + 12) == 1 )
                {
                  v98 = CDrawingContext::PushEffectiveAlphaForNode(
                          (CDrawingContext *)this,
                          *(const struct CVisual **)a2,
                          *(float *)(a2 + 16) * *(float *)(a2 + 8));
                  v9 = v98;
                  if ( v98 < 0 )
                  {
                    v133 = 5484;
                    goto LABEL_376;
                  }
                }
                else
                {
                  v94 = *(const struct CVisual **)a2;
                  LODWORD(v135) = *(_DWORD *)(a2 + 16);
                  *((_QWORD *)&v147 + 1) = v94;
                  LODWORD(v147) = 7;
                  v95 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 53, &v147);
                  v9 = v95;
                  if ( v95 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v95, 0x18F5u);
                  }
                  else
                  {
                    v96 = CWatermarkStack<float,64,2,10>::Push(this + 323, &v135);
                    v9 = v96;
                    if ( v96 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v96, 0x18F7u);
                      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(this + 53, 0LL);
                    }
                  }
                  if ( v9 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1575u);
                    goto LABEL_141;
                  }
                  v13 = *(float *)(a2 + 8);
                }
                v29 = *(_BYTE *)(a2 + 148) == 0;
                v134[0] = 1;
                if ( !v29 )
                {
                  v98 = CDrawingContext::D2DGeometryFromGeometry(
                          v97,
                          (const struct D2D_SIZE_F *)(*(_QWORD *)a2 + 148LL),
                          *(struct CGeometry **)(*(_QWORD *)a2 + 368LL),
                          (const struct CMILMatrix *)(a2 + 84),
                          &v137,
                          v134);
                  v9 = v98;
                  if ( v98 < 0 )
                  {
                    v133 = 5506;
                    goto LABEL_376;
                  }
                  if ( !v134[0] )
                  {
                    v99 = *(_DWORD *)(a2 + 84);
                    v58 = &v147;
                    v100 = (__m128)*(unsigned int *)(a2 + 136);
                    DWORD1(v147) = *(_DWORD *)(a2 + 88);
                    HIDWORD(v147) = *(_DWORD *)(a2 + 104);
                    v101 = (__m128)*(unsigned int *)(a2 + 132);
                    LODWORD(v147) = v99;
                    DWORD2(v147) = *(_DWORD *)(a2 + 100);
                    v148 = _mm_unpacklo_ps(v101, v100).m128_u64[0];
                  }
                }
                v85 = (float *)v138;
                v98 = CDrawingContext::PushD2DLayer(
                        (CDrawingContext *)this,
                        *(struct CVisual **)a2,
                        v138,
                        (__int64)v137,
                        (__int64)v58,
                        v13);
                v9 = v98;
                if ( v98 >= 0 )
                  goto LABEL_137;
                v133 = 5521;
LABEL_376:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v98, v133);
                goto LABEL_141;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xE40u);
              goto LABEL_283;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x26u);
          }
          v18 = v135;
          v7 = 0LL;
          v21 = (float *)v146;
          goto LABEL_22;
        }
        v113 = *v109;
      }
      v21 = (float *)v146;
      v20[5] = v113;
      if ( v21 )
        v20[8] = *(_QWORD *)v21;
      *((_DWORD *)v20 + 8) &= ~1u;
      v18 = (CShape *)v7;
      v14 = 0;
    }
    v19 = (CComplexShape *)v20[5];
    goto LABEL_18;
  }
  v98 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, *(const struct CVisual **)a2);
  v9 = v98;
  if ( v98 < 0 )
  {
    v133 = 5407;
    goto LABEL_376;
  }
LABEL_141:
  if ( v137 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v137 + 16LL))(v137);
  return (unsigned int)v9;
}
