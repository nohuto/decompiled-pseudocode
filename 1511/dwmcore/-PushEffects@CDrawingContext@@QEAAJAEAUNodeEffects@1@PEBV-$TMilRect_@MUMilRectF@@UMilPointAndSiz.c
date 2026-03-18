/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCFilterEffect@@@Z @ 0x18000DF28 (-PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E278 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180037120 (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z @ 0x18003C96C (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x18003CD30 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x18003CF98 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18003FB88 (-ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180047400 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18004DB78 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DC10 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B1C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B7C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800A9F70 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B6058 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@@Z @ 0x18010DEBC (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 */

__int64 __fastcall CDrawingContext::PushEffects(
        CDrawingContext *this,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        struct CShape *a5,
        _BYTE *a6)
{
  CRegionShape *v6; // r12
  __int128 *v7; // rsi
  CDrawingContext *v9; // r13
  int v10; // r14d
  double v11; // xmm0_8
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm9_4
  int v15; // eax
  char v16; // di
  unsigned int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // rcx
  const struct CVisual *v20; // rax
  __int64 v21; // rsi
  bool v22; // zf
  char *v23; // rdi
  int v24; // eax
  void (__fastcall ***v25)(_QWORD, __int64); // r12
  __int64 *v26; // rdi
  const struct D2DMatrix *v27; // rcx
  int v28; // edx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  _QWORD *v32; // rcx
  __int64 (__fastcall *v33)(CRegionShape *); // rbx
  int TightBounds; // eax
  float v35; // xmm0_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm3_4
  void *v39; // rax
  void *v40; // rdi
  int v41; // eax
  void (__fastcall ***v42)(_QWORD, __int64); // r12
  __int64 *v43; // rdi
  const struct D2DMatrix *v44; // rcx
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  float v49; // xmm0_4
  const struct CVisual *v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r8
  _QWORD *v54; // r13
  const struct CVisual *v55; // rdx
  _OWORD *v56; // r13
  _QWORD *v57; // rdx
  _QWORD *v58; // rax
  void *v59; // rbx
  unsigned int *v60; // rdi
  unsigned int v61; // eax
  unsigned __int64 v62; // r12
  int v63; // eax
  unsigned __int64 v64; // rax
  void *v65; // rsi
  unsigned int v66; // ecx
  int v67; // r12d
  void (*v68)(WPF::ProcessHeapImpl *__hidden, void *); // rdi
  __int64 v69; // r8
  CShape *v70; // rsi
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdi
  int v78; // edx
  float v79; // xmm1_4
  float *v80; // rcx
  float v81; // xmm1_4
  __int64 (__fastcall *v82)(CRegionShape *); // rbx
  int v83; // eax
  float v84; // xmm5_4
  float v85; // xmm4_4
  float v86; // xmm2_4
  float v87; // xmm3_4
  __int64 v88; // rcx
  float *v89; // rcx
  float v90; // xmm1_4
  float v91; // xmm5_4
  float v92; // xmm4_4
  float v93; // xmm0_4
  __int64 v94; // rax
  unsigned int v95; // edx
  __int64 v96; // rcx
  __int64 v97; // rcx
  int v98; // eax
  int v99; // r8d
  int v100; // eax
  __int128 v101; // xmm0
  __int64 v102; // rdi
  float *v103; // rcx
  float v104; // xmm1_4
  int v105; // eax
  __int64 v106; // r8
  int v107; // eax
  float v108; // xmm2_4
  const struct CVisual *v109; // rdx
  int v110; // eax
  CDrawingContext *v111; // rcx
  int v112; // eax
  int v113; // eax
  int v114; // xmm0_4
  __m128 v115; // xmm2
  __m128 v116; // xmm1
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // ebx
  int v121; // eax
  int v122; // eax
  void **v124; // [rsp+28h] [rbp-E0h]
  bool v125[8]; // [rsp+38h] [rbp-D0h] BYREF
  CDrawingContext *v126; // [rsp+40h] [rbp-C8h]
  _BYTE *v127; // [rsp+48h] [rbp-C0h]
  __int128 *v128; // [rsp+50h] [rbp-B8h]
  struct ID2D1Geometry *v129; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v130; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v131; // [rsp+68h] [rbp-A0h] BYREF
  struct CShape *v132; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v133[80]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v134; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v135; // [rsp+D8h] [rbp-30h]
  __int128 v136; // [rsp+E8h] [rbp-20h] BYREF
  void *lpMem[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v138; // [rsp+108h] [rbp+0h] BYREF
  CShape *v139; // [rsp+118h] [rbp+10h] BYREF
  float v140; // [rsp+120h] [rbp+18h]
  float v141; // [rsp+124h] [rbp+1Ch]
  __int128 v142; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v143; // [rsp+138h] [rbp+30h]
  float v144; // [rsp+140h] [rbp+38h]
  float v145; // [rsp+144h] [rbp+3Ch]

  v6 = 0LL;
  v7 = a3;
  v132 = a5;
  v9 = this;
  v10 = 0;
  v128 = a3;
  v126 = this;
  v127 = a6;
  *a6 = 0;
  v11 = *(float *)(a2 + 8);
  v129 = 0LL;
  v12 = COERCE_DOUBLE(*(_QWORD *)&v11 & _xmm);
  if ( v12 < 0.0000011920929
    || (v13 = *(float *)(a2 + 16), (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm) < 0.0000011920929) )
  {
    *a6 = 1;
    return 0LL;
  }
  if ( *((_BYTE *)this + 2616) || *((_DWORD *)this + 1447) )
  {
    if ( *(_BYTE *)(a2 + 148) )
    {
      v118 = CDrawingContext::ShapeDataFromGeometryNoRef(
               this,
               (const struct D2D_SIZE_F *)(*(_QWORD *)a2 + 132LL),
               *(struct CGeometry **)(*(_QWORD *)a2 + 352LL),
               &v132);
      v10 = v118;
      if ( v118 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v118, 0x15DBu);
        goto LABEL_322;
      }
      if ( v132 )
      {
        v119 = (*(__int64 (__fastcall **)(struct CShape *, __int128 *, __int64))(*(_QWORD *)v132 + 24LL))(
                 v132,
                 &v138,
                 a2 + 84);
        v120 = v119;
        if ( v119 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v119, 0x15E4u);
        if ( v120 == -2003304438 )
          goto LABEL_319;
        if ( v120 >= 0 )
        {
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v138) )
            goto LABEL_319;
          v121 = CDrawingContext::PushClipRectForNode((__int64)v9, *(_QWORD *)a2, (int)&v138, 0);
          v10 = v121;
          if ( v121 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v121, 0x15F2u);
            goto LABEL_322;
          }
          CScopedClipStack::GetTopClipBoundsInScope((char *)v9 + 680, &v138);
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v138) )
LABEL_319:
            *v127 = 1;
        }
      }
    }
    v122 = CDrawingContext::PushNoOpLayer(v9, *(const struct CVisual **)a2);
    v10 = v122;
    if ( v122 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v122, 0x1604u);
    goto LABEL_322;
  }
  v14 = FLOAT_1_0;
  if ( !*(_BYTE *)(a2 + 148)
    && !*(_BYTE *)(a2 + 149)
    && !*(_BYTE *)(a2 + 150)
    && !*(_DWORD *)(a2 + 12)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - 1.0)) & _xmm) < 0.0000011920929 )
  {
    v15 = CDrawingContext::PushNoOpLayer(this, *(const struct CVisual **)a2);
    v10 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x152Au);
    goto LABEL_322;
  }
  v16 = 0;
  if ( qword_1801A39E8 )
  {
    v17 = *((_DWORD *)qword_1801A39E8 + 18);
    v18 = 0;
    if ( v17 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(*((_QWORD *)qword_1801A39E8 + 6) + 8LL * v18);
        if ( *(_BYTE *)(v19 + 304) || *(_BYTE *)(v19 + 303) || *(_BYTE *)(v19 + 220) || *(_DWORD *)(v19 + 216) )
          break;
        if ( ++v18 >= v17 )
          goto LABEL_21;
      }
      CVisual::ClearAllMoveTransformsInSubtree(*(struct CVisual **)a2);
    }
  }
LABEL_21:
  if ( !*(_BYTE *)(a2 + 148) )
  {
LABEL_90:
    if ( *(_BYTE *)(a2 + 148) || (v48 = *(_DWORD *)(a2 + 12), v48 == 2) )
    {
      v108 = *(float *)(a2 + 16);
      v109 = *(const struct CVisual **)a2;
      if ( *(_DWORD *)(a2 + 12) == 1 )
      {
        v110 = CDrawingContext::PushEffectiveAlphaForNode(v9, v109, v108 * *(float *)(a2 + 8));
        v10 = v110;
        if ( v110 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v110, 0x1577u);
          goto LABEL_322;
        }
      }
      else
      {
        v112 = CDrawingContext::PushEffectiveAlphaForNode(v9, v109, v108);
        v10 = v112;
        if ( v112 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v112, 0x1580u);
          goto LABEL_322;
        }
        v14 = *(float *)(a2 + 8);
      }
      v22 = *(_BYTE *)(a2 + 148) == 0;
      v125[0] = 1;
      if ( !v22 )
      {
        v113 = CDrawingContext::D2DGeometryFromGeometry(
                 v111,
                 (const struct D2D_SIZE_F *)(*(_QWORD *)a2 + 132LL),
                 *(struct CGeometry **)(*(_QWORD *)a2 + 352LL),
                 (const struct CMILMatrix *)(a2 + 84),
                 &v129,
                 v125);
        v10 = v113;
        if ( v113 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v113, 0x158Du);
          goto LABEL_322;
        }
        if ( !v125[0] )
        {
          v114 = *(_DWORD *)(a2 + 84);
          v6 = (CRegionShape *)&v142;
          v115 = (__m128)*(unsigned int *)(a2 + 136);
          DWORD1(v142) = *(_DWORD *)(a2 + 88);
          HIDWORD(v142) = *(_DWORD *)(a2 + 104);
          v116 = (__m128)*(unsigned int *)(a2 + 132);
          LODWORD(v142) = v114;
          DWORD2(v142) = *(_DWORD *)(a2 + 100);
          v143 = _mm_unpacklo_ps(v116, v115).m128_u64[0];
        }
      }
      v117 = CDrawingContext::PushD2DLayer(v9, *(struct CVisual **)a2, v7, (__int64)v129, (__int64)v6, v14);
      v10 = v117;
      if ( v117 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v117, 0x159Cu);
        goto LABEL_322;
      }
    }
    else if ( v48 == 1 )
    {
      v49 = *(float *)(a2 + 16) * *(float *)(a2 + 8);
      v50 = *(const struct CVisual **)a2;
      LODWORD(v142) = 7;
      *((_QWORD *)&v142 + 1) = v50;
      *(float *)&v139 = v49;
      v51 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)v9 + 424, &v142);
      v10 = v51;
      if ( v51 >= 0 )
      {
        v105 = CWatermarkStack<float,64,2,10>::Push((char *)v9 + 2584, &v139);
        v10 = v105;
        if ( v105 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0x18D6u);
          CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)v9 + 424, 0LL, v106);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x18D4u);
      }
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x15ADu);
        goto LABEL_322;
      }
    }
    else if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a2 + 16) - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      v107 = CDrawingContext::PushEffectiveAlphaForNode(v9, *(const struct CVisual **)a2, *(float *)(a2 + 16));
      v10 = v107;
      if ( v107 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v107, 0x15B6u);
        goto LABEL_322;
      }
    }
    if ( *(_BYTE *)(a2 + 149) )
    {
      CDrawingContext::PushColorTransformLayer(v9, *(struct CVisual **)a2);
      v16 = 1;
    }
    if ( *(_BYTE *)(a2 + 150) )
    {
      CDrawingContext::PushFilterEffectLayer(
        v9,
        *(struct CVisual **)a2,
        (float *)v7,
        (float *)v132,
        *(struct CFilterEffect **)(*(_QWORD *)a2 + 392LL));
    }
    else if ( !v16 )
    {
      goto LABEL_322;
    }
    CBaseMatrixStack::Top((CDrawingContext *)((char *)v9 + 456), (struct CBaseMatrix *)(a2 + 20));
    goto LABEL_322;
  }
  v20 = *(const struct CVisual **)a2;
  v139 = 0LL;
  *(_QWORD *)&v136 = 0LL;
  v21 = *((_QWORD *)v20 + 44);
  lpMem[0] = (char *)v20 + 132;
  if ( (*(_BYTE *)(v21 + 32) & 1) != 0
    || *(_BYTE *)(v21 + 88)
    && (*(float *)(v21 + 80) != *((float *)v20 + 33) || *(float *)(v21 + 84) != *((float *)v20 + 34)) )
  {
    v22 = *(_BYTE *)(v21 + 88) == 0;
    v23 = 0LL;
    v130 = 0LL;
    if ( !v22 )
      v23 = (char *)v20 + 132;
    v24 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v21 + 112LL))(v21, v23, &v130);
    v10 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x49u);
      goto LABEL_42;
    }
    v25 = *(void (__fastcall ****)(_QWORD, __int64))(v21 + 64);
    v26 = (__int64 *)(v21 + 64);
    if ( v25 )
      (**v25)(*(_QWORD *)(v21 + 64), 1LL);
    v27 = *(const struct D2DMatrix **)(v21 + 72);
    *v26 = 0LL;
    if ( !v27 || (unsigned int)D2DMatrixIsIdentity(v27) )
    {
      v31 = v130;
    }
    else
    {
      v30 = CShape::Combine(v130, v29, 0LL, 0LL, v28, (_QWORD *)(v21 + 64));
      v10 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x56u);
        v6 = (CRegionShape *)v136;
        goto LABEL_42;
      }
      v31 = *v26;
    }
    v32 = lpMem[0];
    *(_QWORD *)(v21 + 56) = v31;
    if ( v32 )
      *(_QWORD *)(v21 + 80) = *v32;
    *(_DWORD *)(v21 + 32) &= ~1u;
  }
  v6 = *(CRegionShape **)(v21 + 56);
LABEL_42:
  if ( v10 >= 0 )
  {
    v33 = *(__int64 (__fastcall **)(CRegionShape *))(*(_QWORD *)v6 + 24LL);
    if ( v33 == CRectangleShape::GetTightBounds )
    {
      v10 = 0;
      v138 = *(_OWORD *)((char *)v6 + 8);
    }
    else
    {
      if ( v33 == CShape::GetTightBounds )
        TightBounds = CShape::GetTightBounds(v6);
      else
        TightBounds = ((__int64 (__fastcall *)(CRegionShape *, __int128 *, _QWORD))v33)(v6, &v138, 0LL);
      v10 = TightBounds;
    }
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x26u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x24u);
  }
  v6 = 0LL;
  if ( v10 == -2003304438 )
  {
    v35 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v36 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v37 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v138 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v38 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v10 = 0;
  }
  else
  {
    v38 = *((float *)&v138 + 3);
    v37 = *((float *)&v138 + 2);
    v36 = *((float *)&v138 + 1);
    v35 = *(float *)&v138;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xE71u);
    goto LABEL_85;
  }
  if ( (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v35
     || v37 < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
    && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v36
     || v38 < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
  {
    v22 = (*(_BYTE *)(v21 + 32) & 1) == 0;
    v10 = 0;
    v139 = 0LL;
    if ( v22 )
    {
      if ( !*(_BYTE *)(v21 + 88) )
        goto LABEL_82;
      v39 = lpMem[0];
      if ( *(float *)(v21 + 80) == *(float *)lpMem[0] && *(float *)(v21 + 84) == *((float *)lpMem[0] + 1) )
        goto LABEL_82;
    }
    else
    {
      v39 = lpMem[0];
    }
    v22 = *(_BYTE *)(v21 + 88) == 0;
    v40 = 0LL;
    v131 = 0LL;
    if ( !v22 )
      v40 = v39;
    v41 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v21 + 112LL))(v21, v40, &v131);
    v10 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x49u);
LABEL_83:
      if ( v10 >= 0 )
        goto LABEL_87;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xE78u);
      goto LABEL_85;
    }
    v42 = *(void (__fastcall ****)(_QWORD, __int64))(v21 + 64);
    v43 = (__int64 *)(v21 + 64);
    if ( v42 )
      (**v42)(*(_QWORD *)(v21 + 64), 1LL);
    v44 = *(const struct D2DMatrix **)(v21 + 72);
    v6 = 0LL;
    *v43 = 0LL;
    if ( !v44 || (unsigned int)D2DMatrixIsIdentity(v44) )
    {
      v47 = v131;
    }
    else
    {
      v46 = CShape::Combine(v131, v45, 0LL, 0LL, 0, (_QWORD *)(v21 + 64));
      v10 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x56u);
        goto LABEL_83;
      }
      v47 = *v43;
    }
    *(_QWORD *)(v21 + 56) = v47;
    if ( lpMem[0] )
      *(_QWORD *)(v21 + 80) = *(_QWORD *)lpMem[0];
    *(_DWORD *)(v21 + 32) &= ~1u;
LABEL_82:
    v139 = *(CShape **)(v21 + 56);
    goto LABEL_83;
  }
LABEL_85:
  if ( v10 >= 0 )
  {
LABEL_87:
    if ( !v139 )
    {
      *(_BYTE *)(a2 + 148) = 0;
LABEL_89:
      v7 = v128;
      v16 = 0;
      goto LABEL_90;
    }
    v52 = 76LL * (unsigned int)(*((_DWORD *)v9 + 176) - 1);
    if ( *(_BYTE *)(v52 + *((_QWORD *)v9 + 85)) )
    {
      v53 = *((_QWORD *)v9 + 695);
      v54 = 0LL;
      v55 = *(const struct CVisual **)a2;
      if ( *(_BYTE *)(v53 + 32) )
      {
        v56 = (_OWORD *)*((_QWORD *)v55 + 80);
      }
      else
      {
        v57 = (_QWORD *)((char *)v55 + 416);
        v58 = (_QWORD *)*v57;
        if ( (_QWORD *)*v57 != v57 )
        {
          while ( v58[4] != v53 )
          {
            v58 = (_QWORD *)*v58;
            if ( v58 == v57 )
            {
              v56 = (_OWORD *)MEMORY[0xD0];
              goto LABEL_105;
            }
          }
          v54 = v58 - 33;
        }
        v56 = (_OWORD *)v54[26];
      }
    }
    else
    {
      v56 = (_OWORD *)(a2 + 84);
    }
LABEL_105:
    v59 = 0LL;
    v10 = 0;
    v60 = (unsigned int *)((char *)v126 + 424);
    *((_QWORD *)&v142 + 1) = *(_QWORD *)a2;
    v125[0] = 0;
    LODWORD(v142) = 2;
    *(_QWORD *)&v136 = (char *)v126 + 424;
    v61 = *((_DWORD *)v126 + 107);
    lpMem[0] = 0LL;
    if ( *((_DWORD *)v126 + 106) != v61 )
      goto LABEL_113;
    v62 = 2LL * v61;
    if ( v62 > 0xFFFFFFFF )
    {
      v67 = -2147024362;
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    }
    else
    {
      if ( (unsigned int)v62 <= 0x40 )
        LODWORD(v62) = 64;
      v63 = WPF::HrMalloc((WPF *)v52, 16LL, (unsigned int)v62, (unsigned __int64)lpMem, v124);
      v10 = v63;
      if ( v63 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x54u);
        v59 = lpMem[0];
LABEL_116:
        v67 = -2147024362;
        goto LABEL_117;
      }
      v64 = 16LL * *v60;
      if ( v64 <= 0xFFFFFFFF )
      {
        v65 = lpMem[0];
        v10 = 0;
        memcpy_0(lpMem[0], *((const void **)v126 + 55), (unsigned int)v64);
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(v136 + 16));
        v60 = (unsigned int *)v136;
        v59 = 0LL;
        *(_QWORD *)(v136 + 16) = v65;
        v60[1] = v62;
LABEL_113:
        *(_OWORD *)(*((_QWORD *)v60 + 2) + 16LL * (*v60)++) = v142;
        v66 = *v60;
        if ( v60[6] > *v60 )
          v66 = v60[6];
        v60[6] = v66;
        goto LABEL_116;
      }
      v67 = -2147024362;
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
      v59 = lpMem[0];
    }
LABEL_117:
    v68 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v68 == WPF::ProcessHeapImpl::Free )
    {
      if ( v59 )
        HeapFree(g_hProcessHeap, 0, v59);
    }
    else
    {
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v68)(WPF::g_pProcessHeap, v59);
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x143Bu);
      v9 = v126;
      v70 = v139;
      goto LABEL_248;
    }
    v70 = v139;
    *(_QWORD *)v133 = v139;
    v125[0] = 1;
    if ( v56 )
    {
      v71 = v56[1];
      *(_OWORD *)&v133[8] = *v56;
      v72 = v56[2];
      *(_OWORD *)&v133[24] = v71;
      v73 = v56[3];
      *(_OWORD *)&v133[40] = v72;
      *(_OWORD *)&v133[56] = v73;
    }
    else
    {
      *(_OWORD *)&v133[52] = 0uLL;
      *(_OWORD *)&v133[32] = 0uLL;
      *(_OWORD *)&v133[12] = 0uLL;
      *(_DWORD *)&v133[68] = 1065353216;
      *(_DWORD *)&v133[48] = 1065353216;
      *(_DWORD *)&v133[28] = 1065353216;
      *(_DWORD *)&v133[8] = 1065353216;
    }
    v9 = v126;
    v10 = 0;
    *(_QWORD *)&v133[72] = 0LL;
    v74 = *((_DWORD *)v126 + 176);
    if ( v74 && *(_DWORD *)(76LL * (unsigned int)(v74 - 1) + *((_QWORD *)v126 + 85) + 8) )
    {
      v75 = *((_QWORD *)v126 + 184);
      v76 = 104LL * (unsigned int)(*((_DWORD *)v126 + 374) - 1);
      v134 = *(_OWORD *)(v76 + v75 + 80);
      LOBYTE(v135) = *(_BYTE *)(v76 + v75 + 96);
    }
    else
    {
      LOBYTE(v135) = 1;
      v136 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v134 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    (*(void (__fastcall **)(CShape *, CShape **, _QWORD))(*(_QWORD *)v139 + 24LL))(v139, &v139, 0LL);
    if ( v140 <= *(float *)&v139 || v141 <= *((float *)&v139 + 1) )
    {
      v136 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v134 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else if ( (!(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v70 + 8LL))(v70)
            || (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v70 + 8LL))(v70) == 2
            && (v77 = *((_QWORD *)v70 + 1)) != 0
            && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v77 + 136LL))(*((_QWORD *)v70 + 1)) == 1)
           && (unsigned int)CBaseMatrix::Is2DAffine((CBaseMatrix *)&v133[8], 1)
           && ((v79 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v133[12]) & _xmm), v79 < 0.00012207031)
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v133[24]) & _xmm) < 0.00012207031
            || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v133[8]) & _xmm) < 0.00012207031
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v133[28]) & _xmm) < 0.00012207031) )
    {
      if ( (unsigned int)CBaseMatrix::Is2DAffine(
                           (CBaseMatrix *)(*((_QWORD *)v126 + 85)
                                         + 12LL
                                         + 76LL * (unsigned int)(*((_DWORD *)v126 + 176) - 1)),
                           v78) )
      {
        if ( (v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v80[1]) & _xmm), v81 < 0.00012207031)
          && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v80[4]) & _xmm) < 0.00012207031
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v80) & _xmm) < 0.00012207031
          && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v80[5]) & _xmm) < 0.00012207031 )
        {
          v82 = *(__int64 (__fastcall **)(CRegionShape *))(*(_QWORD *)v70 + 24LL);
          if ( v82 == CRectangleShape::GetTightBounds )
          {
            *(_OWORD *)lpMem = *(_OWORD *)((char *)v70 + 8);
          }
          else
          {
            if ( v82 == CShape::GetTightBounds )
              v83 = CShape::GetTightBounds(v70);
            else
              v83 = ((__int64 (__fastcall *)(CShape *, void **, _QWORD))v82)(v70, lpMem, 0LL);
            v10 = v83;
          }
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x133u);
            goto LABEL_241;
          }
          v136 = *(_OWORD *)lpMem;
          if ( *(float *)&v133[8] == 1.0
            && *(float *)&v133[12] == 0.0
            && *(float *)&v133[16] == 0.0
            && *(float *)&v133[20] == 0.0
            && *(float *)&v133[24] == 0.0
            && *(float *)&v133[28] == 1.0
            && *(float *)&v133[32] == 0.0
            && *(float *)&v133[36] == 0.0
            && *(float *)&v133[40] == 0.0
            && *(float *)&v133[44] == 0.0
            && *(float *)&v133[48] == 1.0
            && *(float *)&v133[52] == 0.0 )
          {
            v84 = *(float *)lpMem + *(float *)&v133[56];
            v85 = *((float *)lpMem + 1) + *(float *)&v133[60];
            v86 = *(float *)&lpMem[1] + *(float *)&v133[56];
            v87 = *((float *)&lpMem[1] + 1) + *(float *)&v133[60];
          }
          else
          {
            CBaseMatrix::Transform2DRectToPerspective(
              (CBaseMatrix *)&v133[8],
              (const struct MilRectF *)&v136,
              (struct MilPoint2F *const)&v142);
            v86 = *((float *)&v142 + 2);
            v126 = (CDrawingContext *)v142;
            *(_QWORD *)&v136 = v142;
            if ( *(float *)&v142 <= *((float *)&v142 + 2) )
              LODWORD(v84) = v136;
            else
              v84 = *((float *)&v142 + 2);
            v85 = *((float *)&v136 + 1);
            if ( *((float *)&v136 + 1) > *((float *)&v142 + 3) )
              v85 = *((float *)&v142 + 3);
            if ( *((float *)&v142 + 2) <= *(float *)&v142 )
              LODWORD(v86) = (_DWORD)v126;
            v87 = *((float *)&v126 + 1);
            if ( *((float *)&v142 + 3) > *((float *)&v126 + 1) )
              v87 = *((float *)&v142 + 3);
            if ( v84 > *(float *)&v143 )
              LODWORD(v84) = v143;
            if ( v85 > *((float *)&v143 + 1) )
              v85 = *((float *)&v143 + 1);
            if ( *(float *)&v143 > v86 )
              LODWORD(v86) = v143;
            if ( *((float *)&v143 + 1) > v87 )
              v87 = *((float *)&v143 + 1);
            if ( v84 > v144 )
              v84 = v144;
            if ( v85 > v145 )
              v85 = v145;
            if ( v144 > v86 )
              v86 = v144;
            if ( v145 > v87 )
              v87 = v145;
          }
          v88 = 76LL * (unsigned int)(*((_DWORD *)v9 + 176) - 1);
          lpMem[1] = (void *)__PAIR64__(LODWORD(v87), LODWORD(v86));
          lpMem[0] = (void *)__PAIR64__(LODWORD(v85), LODWORD(v84));
          *(_QWORD *)&v136 = __PAIR64__(LODWORD(v85), LODWORD(v84));
          v89 = (float *)(*((_QWORD *)v9 + 85) + 12LL + v88);
          *((_QWORD *)&v136 + 1) = __PAIR64__(LODWORD(v87), LODWORD(v86));
          if ( *v89 == 1.0
            && v89[1] == 0.0
            && v89[2] == 0.0
            && v89[3] == 0.0
            && v89[4] == 0.0
            && v89[5] == 1.0
            && v89[6] == 0.0
            && v89[7] == 0.0
            && v89[8] == 0.0
            && v89[9] == 0.0
            && v89[10] == 1.0
            && v89[11] == 0.0 )
          {
            *(float *)lpMem = v84 + v89[12];
            *((float *)lpMem + 1) = v85 + v89[13];
            *(float *)&lpMem[1] = v86 + v89[12];
            *((float *)&lpMem[1] + 1) = v87 + v89[13];
          }
          else
          {
            CBaseMatrix::Transform2DRectToPerspective(
              (CBaseMatrix *)v89,
              (const struct MilRectF *)&v136,
              (struct MilPoint2F *const)&v142);
            v90 = *((float *)&v142 + 2);
            v126 = (CDrawingContext *)v142;
            *(_QWORD *)&v136 = v142;
            if ( *(float *)&v142 <= *((float *)&v142 + 2) )
              LODWORD(v91) = v136;
            else
              v91 = *((float *)&v142 + 2);
            v92 = *((float *)&v136 + 1);
            if ( *((float *)&v136 + 1) > *((float *)&v142 + 3) )
              v92 = *((float *)&v142 + 3);
            if ( *((float *)&v142 + 2) <= *(float *)&v142 )
              LODWORD(v90) = (_DWORD)v126;
            v93 = *((float *)&v126 + 1);
            if ( *((float *)&v142 + 3) > *((float *)&v126 + 1) )
              v93 = *((float *)&v142 + 3);
            if ( v91 > *(float *)&v143 )
              LODWORD(v91) = v143;
            if ( v92 > *((float *)&v143 + 1) )
              v92 = *((float *)&v143 + 1);
            if ( *(float *)&v143 > v90 )
              LODWORD(v90) = v143;
            if ( *((float *)&v143 + 1) > v93 )
              v93 = *((float *)&v143 + 1);
            if ( v91 > v144 )
              v91 = v144;
            if ( v92 > v145 )
              v92 = v145;
            if ( v144 > v90 )
              v90 = v144;
            if ( v145 > v93 )
              v93 = v145;
            lpMem[0] = (void *)__PAIR64__(LODWORD(v92), LODWORD(v91));
            lpMem[1] = (void *)__PAIR64__(LODWORD(v93), LODWORD(v90));
          }
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v134, (__int64)lpMem);
          v10 = 0;
        }
      }
    }
    else
    {
      LOBYTE(v135) = 0;
    }
    v94 = *((unsigned int *)v9 + 374);
    v95 = v94 + 1;
    if ( (int)v94 + 1 < (unsigned int)v94 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v10 = -2147024362;
LABEL_246:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x142u);
LABEL_241:
      if ( v10 >= 0 )
        *((_BYTE *)v9 + 5965) = 1;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x143Eu);
LABEL_248:
      if ( v10 < 0 )
      {
        if ( v125[0] )
          CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)v9 + 424, 0LL, v69);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1545u);
        goto LABEL_322;
      }
      v99 = *((_DWORD *)v9 + 176);
      if ( v99 && *(_DWORD *)(76LL * (unsigned int)(v99 - 1) + *((_QWORD *)v9 + 85) + 4) && *((_DWORD *)v9 + 638) )
      {
        v100 = *((_DWORD *)v9 + 638);
        if ( !v100 )
          goto LABEL_259;
        v101 = *(_OWORD *)(*((_QWORD *)v9 + 321) + 16LL * (unsigned int)(v100 - 1));
      }
      else
      {
        v101 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      v136 = v101;
LABEL_259:
      if ( v99 && *(_DWORD *)(76LL * (unsigned int)(v99 - 1) + *((_QWORD *)v9 + 85) + 8) )
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
          (__int64)&v136,
          104LL * (unsigned int)(*((_DWORD *)v9 + 374) - 1) + 80 + *((_QWORD *)v9 + 184));
      if ( *((float *)&v136 + 2) <= *(float *)&v136 || *((float *)&v136 + 3) <= *((float *)&v136 + 1) )
      {
        *v127 = 1;
        goto LABEL_322;
      }
      if ( !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v70 + 8LL))(v70)
        || (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v70 + 8LL))(v70) == 2
        && (v102 = *((_QWORD *)v70 + 1)) != 0
        && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v102 + 136LL))(*((_QWORD *)v70 + 1)) == 1 )
      {
        if ( (unsigned int)CBaseMatrix::Is2DAffine((CBaseMatrix *)(a2 + 84), 1) )
        {
          if ( (v104 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v103[1]) & _xmm), v104 < 0.00012207031)
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v103[4]) & _xmm) < 0.00012207031
            || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v103) & _xmm) < 0.00012207031
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v103[5]) & _xmm) < 0.00012207031 )
          {
            *(_BYTE *)(a2 + 148) = 0;
          }
        }
      }
      if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
      {
        if ( CShape::IsAxisAlignedRectangle(v70) )
          *((_DWORD *)v9 + 1494) |= 1u;
        if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)(a2 + 84)) )
          *((_DWORD *)v9 + 1494) |= 4u;
      }
      v6 = 0LL;
      goto LABEL_89;
    }
    if ( v95 > *((_DWORD *)v9 + 373) )
    {
      v98 = DynArrayImpl<0>::AddMultipleAndSet((char *)v9 + 1472, 104LL, 1LL, v133);
      v67 = v98;
      if ( v98 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v98, 0xC0u);
      v10 = v67;
      if ( v67 < 0 )
        goto LABEL_246;
    }
    else
    {
      v96 = *((_QWORD *)v9 + 184) + 104 * v94;
      *(_OWORD *)v96 = *(_OWORD *)v133;
      *(_OWORD *)(v96 + 16) = *(_OWORD *)&v133[16];
      *(_OWORD *)(v96 + 32) = *(_OWORD *)&v133[32];
      *(_OWORD *)(v96 + 48) = *(_OWORD *)&v133[48];
      *(_OWORD *)(v96 + 64) = *(_OWORD *)&v133[64];
      *(_OWORD *)(v96 + 80) = v134;
      *(_QWORD *)(v96 + 96) = v135;
      *((_DWORD *)v9 + 374) = v95;
    }
    v97 = 76LL * (unsigned int)(*((_DWORD *)v9 + 176) - 1);
    ++*(_DWORD *)(v97 + *((_QWORD *)v9 + 85) + 8);
    goto LABEL_241;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1538u);
LABEL_322:
  if ( v129 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v129 + 16LL))(v129);
  return (unsigned int)v10;
}
