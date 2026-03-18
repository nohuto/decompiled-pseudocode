/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 * Callees:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000A884 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ @ 0x18000B0B0 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C0D0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x18001A384 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18001B4BC (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV-$CMatrix@UBaseSampling@Co.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DC10 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x18005EE4C (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x18005EF3C (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x180061690 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180062CA8 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065E14 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x1800873F0 (-GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800AE0F4 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 *     floorf_0 @ 0x1800BC87E (floorf_0.c)
 *     Template_dffffq @ 0x180114A28 (Template_dffffq.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x18012380C (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  __int64 v4; // rbx
  struct COcclusionInfo *v5; // r12
  int v8; // edi
  __int64 v9; // rsi
  CFilterEffect *v10; // rcx
  int v11; // eax
  __int64 v13; // rsi
  char *v14; // rax
  int v15; // edi
  __int64 v16; // r14
  unsigned int v17; // r12d
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  int v25; // eax
  int v26; // edx
  int v27; // r9d
  int v28; // eax
  CFlipChain *v29; // rcx
  int LastKnownGoodDxClipShape; // eax
  int v31; // esi
  struct CShape *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  int (__fastcall ***v37)(_QWORD, GUID *, CGdiSpriteBitmap **); // rdx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  struct CShape *DxClipShapeNoRef; // rax
  int RenderBounds; // eax
  unsigned int v43; // ebx
  CRegionShape *v44; // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  CCompositionSurfaceBitmap *v50; // rbx
  CShape *v51; // rax
  int v52; // eax
  __int64 v53; // r12
  __int64 v54; // r14
  LONG v55; // ecx
  float v56; // xmm2_4
  float v57; // xmm1_4
  float v58; // xmm3_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  float v62; // xmm2_4
  int v63; // eax
  CRegionShape *v64; // r12
  int updated; // eax
  __int64 v66; // r14
  bool v67; // zf
  char *v68; // rdi
  int v69; // eax
  void (__fastcall ***v70)(_QWORD, __int64); // rax
  struct COcclusionInfo **v71; // rdi
  const struct D2DMatrix *v72; // rcx
  __int64 v73; // rcx
  int v74; // eax
  struct COcclusionInfo *v75; // rax
  char v76; // r14
  float v77; // xmm8_4
  float v78; // xmm9_4
  signed int v79; // eax
  __m128i v80; // xmm6
  int v81; // eax
  float v82; // xmm6_4
  float v83; // xmm7_4
  __int64 (__fastcall *v84)(CRegionShape *, __int64, CBaseMatrix *); // rbx
  int TightBounds; // eax
  __int64 v86; // rdi
  struct CResource *(__fastcall *v87)(CGdiSpriteBitmap *__hidden); // rdi
  struct CResource *Resource; // rax
  int v89; // r14d
  struct CResource *v90; // rdi
  int v91; // eax
  int v92; // ecx
  int v93; // eax
  int v94; // ebx
  LONG v95; // edx
  LONG v96; // r8d
  LONG v97; // eax
  float v98; // xmm6_4
  float v99; // xmm7_4
  float v100; // xmm8_4
  float v101; // xmm9_4
  int v102; // eax
  bool v103; // r14
  int v104; // eax
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int64 v107; // rcx
  __int64 v108; // rax
  __int128 v109; // xmm1
  float v110; // xmm1_4
  float v111; // xmm3_4
  float v112; // xmm2_4
  float v113; // xmm0_4
  __int128 v114; // xmm0
  int v115; // eax
  unsigned int v116; // r8d
  int v117; // eax
  unsigned int v118; // edx
  unsigned int v119; // ecx
  CRegionShape *v120; // r10
  __int64 v121; // rax
  unsigned int v122; // r8d
  int v123; // ebx
  __int64 v124; // rcx
  __int64 v125; // rdx
  int v126; // eax
  int v127; // eax
  char v128[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct COcclusionInfo *v129; // [rsp+48h] [rbp-B8h] BYREF
  struct CShape *v130; // [rsp+50h] [rbp-B0h] BYREF
  CRegionShape *v131; // [rsp+58h] [rbp-A8h]
  __int128 v132; // [rsp+60h] [rbp-A0h] BYREF
  RECT rcSrc1; // [rsp+70h] [rbp-90h] BYREF
  __int128 v134; // [rsp+80h] [rbp-80h] BYREF
  int v135; // [rsp+90h] [rbp-70h]
  RECT v136; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v137[12]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v138; // [rsp+BCh] [rbp-44h]
  float v139; // [rsp+C4h] [rbp-3Ch]
  __int64 v140; // [rsp+C8h] [rbp-38h]
  __int64 v141; // [rsp+D0h] [rbp-30h]
  int v142; // [rsp+D8h] [rbp-28h]
  __int64 v143; // [rsp+DCh] [rbp-24h]
  __int64 v144; // [rsp+E4h] [rbp-1Ch]
  int v145; // [rsp+ECh] [rbp-14h]
  __int128 v146; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v147; // [rsp+100h] [rbp+0h]
  __int128 v148; // [rsp+110h] [rbp+10h]
  __int128 v149; // [rsp+120h] [rbp+20h]

  v4 = 0LL;
  v129 = a4;
  v5 = a4;
  v130 = 0LL;
  v8 = 0;
  if ( *((_QWORD *)this + 45) )
  {
    v9 = *((_QWORD *)this + 49);
    if ( !v9
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v9 + 48LL))(*((_QWORD *)this + 49), 9LL)
      || (v10 = (CFilterEffect *)*((_QWORD *)this + 49)) == 0LL
      || CFilterEffect::IsOpaque(v10, this) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct COcclusionContext *, char *))(**((_QWORD **)this + 45) + 104LL))(
              *((_QWORD *)this + 45),
              a3,
              (char *)this + 132);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB1Bu);
    }
    v4 = 0LL;
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xBC0u);
    return (unsigned int)v8;
  }
  v13 = *((_QWORD *)a3 + 13);
  v14 = (char *)a3 + 104;
  v15 = 0;
  LODWORD(v16) = *((_DWORD *)a3 + 32);
  v131 = (struct COcclusionContext *)((char *)a3 + 104);
  if ( (_DWORD)v16 )
  {
    while ( 1 )
    {
      v17 = *((_DWORD *)a3 + 163);
      v16 = (unsigned int)(v16 - 1);
      *((_DWORD *)a3 + 163) = v17 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_dffffq(
          (_DWORD)this,
          (_DWORD)a2,
          v17,
          (_DWORD)a4,
          *(_DWORD *)(v13 + 20 * v16 + 4),
          *(_DWORD *)(v13 + 20 * v16 + 8),
          *(_DWORD *)(v13 + 20 * v16 + 12),
          *(_DWORD *)(v13 + 20 * v16 + 16));
      if ( !*(_DWORD *)(v13 + 20 * v16 + 16) )
      {
        v18 = *(float *)(v13 + 20 * v16);
        v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18) & _xmm);
        if ( v19 < 8388608.0 )
          v18 = (float)(int)ceilf_0(*(float *)(v13 + 20 * v16));
        v20 = *(float *)(v13 + 20 * v16 + 4);
        *(float *)&rcSrc1.left = v18;
        v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20) & _xmm);
        if ( v21 < 8388608.0 )
          v20 = (float)(int)ceilf_0(v20);
        v22 = *(float *)(v13 + 20 * v16 + 8);
        *(float *)&rcSrc1.top = v20;
        v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v22) & _xmm);
        if ( v23 < 8388608.0 )
          v22 = (float)(int)floorf_0(v22);
        *(float *)&rcSrc1.right = v22;
        v24 = *(float *)(v13 + 20 * v16 + 12);
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm) < 8388608.0 )
          v24 = (float)(int)floorf_0(*(float *)(v13 + 20 * v16 + 12));
        *(float *)&rcSrc1.bottom = v24;
        if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&rcSrc1.left) )
        {
          v25 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _QWORD))(**((_QWORD **)a3 + 12) + 24LL))(
                  *((_QWORD *)a3 + 12),
                  &rcSrc1,
                  v17);
          v15 = v25;
          if ( v25 < 0 )
            break;
        }
      }
      if ( !(_DWORD)v16 )
        goto LABEL_28;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x32Bu);
LABEL_28:
    v5 = v129;
    v14 = (char *)a3 + 104;
    v4 = 0LL;
  }
  *((_DWORD *)v14 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v14, 20LL);
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xBC1u);
    return (unsigned int)v15;
  }
  v28 = *((_DWORD *)a3 + 163);
  *((_DWORD *)v5 + 7) = v28;
  *((_DWORD *)v5 + 8) = v28;
  *((_DWORD *)v5 + 9) = v28;
  v29 = (CFlipChain *)*((_QWORD *)this + 141);
  if ( !v29 )
  {
    v39 = *((_QWORD *)this + 144);
    if ( !v39 || !CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v39 + 48)) )
      goto LABEL_64;
    v40 = *((_QWORD *)this + 144);
    if ( v40 )
      v4 = v40 + 48;
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    RenderBounds = CWindowNode::GetRenderBounds(this, v4, DxClipShapeNoRef, &v132, v128, 0LL);
    v43 = RenderBounds;
    if ( RenderBounds >= 0 )
    {
      rcSrc1.left = (int)*(float *)&v132;
      rcSrc1.top = (int)*((float *)&v132 + 1);
      rcSrc1.right = (int)*((float *)&v132 + 2);
      rcSrc1.bottom = (int)*((float *)&v132 + 3);
      v44 = CWindowNode::GetDxClipShapeNoRef(this);
      v45 = CWindowNode::CollectOcclusionHelper(
              this,
              *((int (__fastcall ****)(_QWORD, GUID *, CGdiSpriteBitmap **))this + 144),
              &rcSrc1.left,
              (__int64)a3,
              v44,
              v128[0]);
      v43 = v45;
      if ( v45 >= 0 )
      {
        if ( !COcclusionContext::IsOverlayCandidateCollectionEnabled(a3) )
          goto LABEL_64;
        v46 = *((_QWORD *)this + 144);
        v144 = 0LL;
        v143 = 0LL;
        v141 = 0LL;
        v140 = 0LL;
        v47 = v46 + 48;
        v138 = 0LL;
        *(_QWORD *)&v137[4] = 0LL;
        v145 = 1065353216;
        v142 = 1065353216;
        v139 = 1.0;
        *(_DWORD *)v137 = 1065353216;
        if ( !v46 )
          v47 = 0LL;
        v48 = CWindowNode::ApplyTextureToLocalTransform((__int64)this, v47, (CBaseMatrix *)v137);
        v43 = v48;
        if ( v48 >= 0 )
        {
          v49 = *((_QWORD *)this + 144);
          v50 = (CCompositionSurfaceBitmap *)(v49 + 40);
          if ( !v49 )
            v50 = 0LL;
          v51 = CWindowNode::GetDxClipShapeNoRef(this);
          v52 = COcclusionContext::CheckAndRecordOverlayCandidate(
                  (__int64)a3,
                  this,
                  v50,
                  (__int64)v137,
                  v51,
                  *((_DWORD *)this + 274));
          v43 = v52;
          if ( v52 >= 0 )
            goto LABEL_64;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0xC0Cu);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xC06u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xBFCu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, 0xBF6u);
    }
    return v43;
  }
  if ( CFlipChain::DisplayBufferReady(v29) || !*((_QWORD *)this + 142) )
  {
    v32 = CWindowNode::GetDxClipShapeNoRef(this);
  }
  else
  {
    LastKnownGoodDxClipShape = CWindowNode::GetLastKnownGoodDxClipShape(this, &v130);
    v31 = LastKnownGoodDxClipShape;
    if ( LastKnownGoodDxClipShape < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastKnownGoodDxClipShape, 0xBDFu);
      goto LABEL_234;
    }
    v32 = v130;
  }
  v33 = *((_QWORD *)this + 141);
  v34 = v33 + 8;
  if ( !v33 )
    v34 = 0LL;
  v35 = CWindowNode::GetRenderBounds(this, v34, v32, &v132, v128, 0LL);
  v31 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xBE7u);
    goto LABEL_234;
  }
  v36 = *((_QWORD *)this + 141);
  v37 = (int (__fastcall ***)(_QWORD, GUID *, CGdiSpriteBitmap **))(v36 + 16);
  if ( !v36 )
    v37 = 0LL;
  rcSrc1.left = (int)*(float *)&v132;
  rcSrc1.top = (int)*((float *)&v132 + 1);
  rcSrc1.right = (int)*((float *)&v132 + 2);
  rcSrc1.bottom = (int)*((float *)&v132 + 3);
  v38 = CWindowNode::CollectOcclusionHelper(this, v37, &rcSrc1.left, (__int64)a3, v32, v128[0]);
  v31 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xBEDu);
    goto LABEL_234;
  }
LABEL_64:
  LODWORD(v53) = *((_DWORD *)a3 + 32);
  v31 = 0;
  v54 = *((_QWORD *)a3 + 13);
  if ( (_DWORD)v53 )
  {
    while ( 1 )
    {
      v55 = *((_DWORD *)a3 + 163);
      v53 = (unsigned int)(v53 - 1);
      v136.left = v55;
      *((_DWORD *)a3 + 163) = v55 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_dffffq(
          v55,
          v26,
          v55,
          v27,
          *(_DWORD *)(v54 + 20 * v53 + 4),
          *(_DWORD *)(v54 + 20 * v53 + 8),
          *(_DWORD *)(v54 + 20 * v53 + 12),
          *(_DWORD *)(v54 + 20 * v53 + 16));
      if ( !*(_DWORD *)(v54 + 20 * v53 + 16) )
      {
        v56 = *(float *)(v54 + 20 * v53);
        v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v56) & _xmm);
        if ( v57 < 8388608.0 )
          v56 = (float)(int)ceilf_0(*(float *)(v54 + 20 * v53));
        v58 = *(float *)(v54 + 20 * v53 + 4);
        *(float *)&rcSrc1.left = v56;
        v59 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v58) & _xmm);
        if ( v59 < 8388608.0 )
          v58 = (float)(int)ceilf_0(v58);
        v60 = *(float *)(v54 + 20 * v53 + 8);
        *(float *)&rcSrc1.top = v58;
        v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v60) & _xmm);
        if ( v61 < 8388608.0 )
          v60 = (float)(int)floorf_0(v60);
        *(float *)&rcSrc1.right = v60;
        v62 = *(float *)(v54 + 20 * v53 + 12);
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v62) & _xmm) < 8388608.0 )
          v62 = (float)(int)floorf_0(*(float *)(v54 + 20 * v53 + 12));
        *(float *)&rcSrc1.bottom = v62;
        if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&rcSrc1.left) )
        {
          v63 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _QWORD))(**((_QWORD **)a3 + 12) + 24LL))(
                  *((_QWORD *)a3 + 12),
                  &rcSrc1,
                  (unsigned int)v136.left);
          v31 = v63;
          if ( v63 < 0 )
            break;
        }
      }
      if ( !(_DWORD)v53 )
        goto LABEL_81;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x32Bu);
  }
LABEL_81:
  *((_DWORD *)a3 + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)a3 + 104, 20LL);
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC16u);
    goto LABEL_234;
  }
  *((_DWORD *)v129 + 6) = *((_DWORD *)a3 + 163);
  if ( *((_QWORD *)this + 124) && !*((_BYTE *)this + 1196) && (*((_BYTE *)this + 1096) & 2) == 0 )
  {
    v31 = 0;
    v64 = 0LL;
    if ( *((_BYTE *)this + 1224) )
    {
      updated = CWindowNode::UpdateSpriteClipShape(this);
      v31 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1425u);
        v64 = v131;
        goto LABEL_113;
      }
      *((_BYTE *)this + 1224) = 0;
    }
    if ( *((_QWORD *)this + 152) )
    {
      v64 = (CRegionShape *)*((_QWORD *)this + 152);
    }
    else
    {
      v66 = *((_QWORD *)this + 129);
      if ( v66 )
      {
        if ( (*(_BYTE *)(v66 + 32) & 1) != 0
          || *(_BYTE *)(v66 + 88)
          && (*(float *)(v66 + 80) != *((float *)this + 33) || *(float *)(v66 + 84) != *((float *)this + 34)) )
        {
          v67 = *(_BYTE *)(v66 + 88) == 0;
          v68 = 0LL;
          v129 = 0LL;
          if ( !v67 )
            v68 = (char *)this + 132;
          v69 = (*(__int64 (__fastcall **)(__int64, char *, struct COcclusionInfo **))(*(_QWORD *)v66 + 112LL))(
                  v66,
                  v68,
                  &v129);
          if ( v69 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x49u);
            goto LABEL_113;
          }
          v70 = *(void (__fastcall ****)(_QWORD, __int64))(v66 + 64);
          v71 = (struct COcclusionInfo **)(v66 + 64);
          *(_QWORD *)&v132 = v70;
          if ( v70 )
            (**v70)(v132, 1LL);
          v72 = *(const struct D2DMatrix **)(v66 + 72);
          *v71 = 0LL;
          if ( !v72 || D2DMatrixIsIdentity(v72) )
          {
            v75 = v129;
          }
          else
          {
            v74 = CShape::Combine((__int64)v129, v73, 0LL, 0LL, 0, (_QWORD *)(v66 + 64));
            if ( v74 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0x56u);
              goto LABEL_113;
            }
            v75 = *v71;
          }
          *(_QWORD *)(v66 + 56) = v75;
          if ( this != (CWindowNode *)-132LL )
            *(_QWORD *)(v66 + 80) = *(_QWORD *)((char *)this + 132);
          *(_DWORD *)(v66 + 32) &= ~1u;
        }
        v64 = *(CRegionShape **)(v66 + 56);
      }
    }
LABEL_113:
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC1Fu);
      goto LABEL_234;
    }
    v76 = 0;
    v31 = 0;
    v77 = 0.0;
    v78 = 0.0;
    if ( *((_QWORD *)this + 124) )
    {
      v79 = *((_DWORD *)this + 228) - *((_DWORD *)this + 226);
      if ( v79 < 0 )
        v79 = 0;
      v80 = _mm_cvtsi32_si128(v79);
      v81 = *((_DWORD *)this + 229) - *((_DWORD *)this + 227);
      LODWORD(v82) = _mm_cvtepi32_ps(v80).m128_u32[0];
      if ( v81 < 0 )
        v81 = 0;
      v83 = (float)v81;
    }
    else
    {
      v83 = 0.0;
      v82 = 0.0;
    }
    if ( !v64 )
      goto LABEL_143;
    v84 = *(__int64 (__fastcall **)(CRegionShape *, __int64, CBaseMatrix *))(*(_QWORD *)v64 + 24LL);
    if ( v84 == CShape::GetTightBounds )
      TightBounds = CShape::GetTightBounds(v64, (__int64)&rcSrc1, 0LL);
    else
      TightBounds = v84(v64, (__int64)&rcSrc1, 0LL);
    v31 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0xAE4u);
      goto LABEL_145;
    }
    if ( *(float *)&rcSrc1.left > 0.0 )
      v77 = *(float *)&rcSrc1.left;
    if ( *(float *)&rcSrc1.top > 0.0 )
      v78 = *(float *)&rcSrc1.top;
    if ( v82 > *(float *)&rcSrc1.right )
      v82 = *(float *)&rcSrc1.right;
    if ( v83 > *(float *)&rcSrc1.bottom )
      v83 = *(float *)&rcSrc1.bottom;
    if ( v82 <= v77 || v83 <= v78 )
    {
      v83 = 0.0;
      v82 = 0.0;
      v78 = 0.0;
      v77 = 0.0;
    }
    if ( !(*(unsigned int (__fastcall **)(CRegionShape *))(*(_QWORD *)v64 + 8LL))(v64)
      || (*(unsigned int (__fastcall **)(CRegionShape *))(*(_QWORD *)v64 + 8LL))(v64) == 2
      && (v86 = *((_QWORD *)v64 + 1)) != 0
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v86 + 136LL))(*((_QWORD *)v64 + 1)) == 1 )
    {
LABEL_143:
      v76 = 1;
    }
    v128[0] = v76;
LABEL_145:
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC24u);
      goto LABEL_234;
    }
    v87 = *(struct CResource *(__fastcall **)(CGdiSpriteBitmap *__hidden))(**((_QWORD **)this + 124) + 136LL);
    if ( v87 == CGdiSpriteBitmap::GetResource )
      Resource = CGdiSpriteBitmap::GetResource(*((CGdiSpriteBitmap **)this + 124));
    else
      Resource = v87(*((CGdiSpriteBitmap **)this + 124));
    v89 = (int)v82 - *((_DWORD *)this + 271);
    v31 = 0;
    v90 = Resource;
    v91 = *((_DWORD *)this + 272);
    v92 = *((_DWORD *)this + 270) + (int)v77;
    LODWORD(v132) = v92;
    v93 = (int)v78 + v91;
    DWORD1(v132) = v93;
    v94 = (int)v83 - *((_DWORD *)this + 273);
    if ( v89 <= v92 )
      v89 = v92;
    DWORD2(v132) = v89;
    if ( v94 <= v93 )
      v94 = v93;
    HIDWORD(v132) = v94;
    if ( *((_DWORD *)this + 277) || *((_DWORD *)this + 279) || *((_DWORD *)this + 278) || *((_DWORD *)this + 280) )
    {
      v95 = *((_DWORD *)this + 279) + *((_DWORD *)this + 211);
      v96 = *((_DWORD *)this + 213) - *((_DWORD *)this + 280);
      v97 = *((_DWORD *)this + 277) + *((_DWORD *)this + 210);
      rcSrc1.right = *((_DWORD *)this + 212) - *((_DWORD *)this + 278);
      rcSrc1.top = v95;
      rcSrc1.bottom = v96;
      rcSrc1.left = v97;
      IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)((char *)this + 904));
      if ( !EqualRect(&rcSrc1, (const RECT *)((char *)this + 904)) )
      {
        OffsetRect(&rcSrc1, -*((_DWORD *)this + 226), -*((_DWORD *)this + 227));
        v136 = rcSrc1;
        TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v132, &v136);
        v94 = HIDWORD(v132);
        v89 = DWORD2(v132);
      }
      v93 = DWORD1(v132);
      v92 = v132;
    }
    v98 = (float)v92;
    v99 = (float)v93;
    v100 = (float)v89;
    v101 = (float)v94;
    *(float *)&v132 = (float)v92;
    *((float *)&v132 + 1) = (float)v93;
    *((float *)&v132 + 2) = (float)v89;
    *((float *)&v132 + 3) = (float)v94;
    if ( !v128[0] )
    {
      if ( v64 )
      {
        v127 = COcclusionContext::DrawClippedImage(
                 (__int64)a3,
                 (__int64)v90,
                 (float *)&v132,
                 v64,
                 *((_DWORD *)this + 274));
        v31 = v127;
        if ( v127 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v127, 0xC65u);
      }
      goto LABEL_232;
    }
    v102 = *((_DWORD *)this + 274);
    if ( *((_DWORD *)a3 + 164) )
    {
LABEL_232:
      if ( v31 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC2Au);
      goto LABEL_234;
    }
    v103 = 0;
    *(_QWORD *)&v136.left = 0LL;
    if ( v90 && (v102 & 2) == 0 )
    {
      if ( (v102 & 1) != 0 )
        goto LABEL_172;
      if ( (**(int (__fastcall ***)(struct CResource *, GUID *, RECT *))v90)(
             v90,
             &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552,
             &v136) >= 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v136.left + 80LL))(*(_QWORD *)&v136.left) )
      {
        v103 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v136.left + 96LL))(*(_QWORD *)&v136.left) != 0;
      }
      if ( *(_QWORD *)&v136.left )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v136.left + 16LL))(*(_QWORD *)&v136.left);
    }
    if ( !v103 )
    {
LABEL_227:
      if ( v31 >= 0 )
        goto LABEL_234;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC5Eu);
      goto LABEL_232;
    }
LABEL_172:
    v31 = 0;
    if ( v100 <= v98 || v101 <= v99 )
      goto LABEL_225;
    v104 = *((_DWORD *)a3 + 4);
    *(_QWORD *)&v134 = __PAIR64__(LODWORD(v99), LODWORD(v98));
    *((float *)&v134 + 2) = v100;
    *((float *)&v134 + 3) = (float)v94;
    v135 = 0;
    if ( v104 )
    {
      v107 = (unsigned int)(v104 - 1);
      v108 = *((_QWORD *)a3 + 4);
      v107 <<= 6;
      v109 = *(_OWORD *)(v107 + v108 + 16);
      v146 = *(_OWORD *)(v107 + v108);
      v105 = *(_OWORD *)(v107 + v108 + 32);
      v147 = v109;
      v106 = *(_OWORD *)(v107 + v108 + 48);
    }
    else
    {
      v146 = IdentityMatrix;
      v105 = *(_OWORD *)ymmword_18019E9D0.m256_f32;
      v147 = *(&IdentityMatrix + 1);
      v106 = *(_OWORD *)&ymmword_18019E9D0.m256_f32[4];
    }
    *(_QWORD *)&v132 = __PAIR64__(LODWORD(v99), LODWORD(v98));
    *((float *)&v132 + 2) = v100;
    *((float *)&v132 + 3) = (float)v94;
    v149 = v106;
    v148 = v105;
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v146) )
    {
      *(float *)&v134 = *(float *)&v149 + v98;
      *((float *)&v134 + 1) = *((float *)&v149 + 1) + v99;
      *((float *)&v134 + 2) = *(float *)&v149 + v100;
      *((float *)&v134 + 3) = *((float *)&v149 + 1) + v101;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)&v146,
        (const struct MilRectF *)&v132,
        (struct MilPoint2F *const)v137);
      v110 = *(float *)&v137[8];
      *(_QWORD *)&v132 = *(_QWORD *)v137;
      v129 = *(struct COcclusionInfo **)v137;
      if ( *(float *)v137 <= *(float *)&v137[8] )
        LODWORD(v111) = (_DWORD)v129;
      else
        v111 = *(float *)&v137[8];
      v112 = *((float *)&v129 + 1);
      if ( *((float *)&v129 + 1) > *(float *)&v138 )
        LODWORD(v112) = v138;
      if ( *(float *)&v137[8] <= *(float *)v137 )
        LODWORD(v110) = v132;
      v113 = *((float *)&v132 + 1);
      if ( *(float *)&v138 > *((float *)&v132 + 1) )
        LODWORD(v113) = v138;
      if ( v111 > *((float *)&v138 + 1) )
        v111 = *((float *)&v138 + 1);
      if ( v112 > v139 )
        v112 = v139;
      if ( *((float *)&v138 + 1) > v110 )
        v110 = *((float *)&v138 + 1);
      if ( v139 > v113 )
        v113 = v139;
      if ( v111 > *(float *)&v140 )
        LODWORD(v111) = v140;
      if ( v112 > *((float *)&v140 + 1) )
        v112 = *((float *)&v140 + 1);
      if ( *(float *)&v140 > v110 )
        LODWORD(v110) = v140;
      if ( *((float *)&v140 + 1) > v113 )
        v113 = *((float *)&v140 + 1);
      *(_QWORD *)&v134 = __PAIR64__(LODWORD(v112), LODWORD(v111));
      *((_QWORD *)&v134 + 1) = __PAIR64__(LODWORD(v113), LODWORD(v110));
    }
    if ( *((_DWORD *)a3 + 16) )
    {
      v115 = *((_DWORD *)a3 + 16);
      if ( !v115 )
        goto LABEL_210;
      v114 = *(_OWORD *)(*((_QWORD *)a3 + 10) + 16LL * (unsigned int)(v115 - 1));
    }
    else
    {
      v114 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v132 = v114;
LABEL_210:
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v134, (__int64)&v132);
    v116 = -1;
    v117 = *((_DWORD *)a3 + 174);
    if ( v117 )
      v116 = *(_DWORD *)(*((_QWORD *)a3 + 89) + 4LL * (unsigned int)(v117 - 1));
    v118 = *((_DWORD *)a3 + 86);
    v119 = 0;
    if ( !v118 )
      goto LABEL_225;
    while ( ((v116 >> v119) & 1) == 0
         || (float)((float)(*((float *)&v134 + 2) - *(float *)&v134)
                  * (float)(*((float *)&v134 + 3) - *((float *)&v134 + 1))) <= (float)(*((float *)a3 + v119 + 119) * 0.25) )
    {
      if ( ++v119 >= v118 )
        goto LABEL_225;
    }
    v120 = v131;
    v121 = *((unsigned int *)v131 + 6);
    v122 = v121 + 1;
    if ( (int)v121 + 1 >= (unsigned int)v121 )
    {
      if ( v122 <= *((_DWORD *)v131 + 5) )
      {
        v124 = *(_QWORD *)v131;
        v125 = 5 * v121;
        *(_OWORD *)(v124 + 4 * v125) = v134;
        *(_DWORD *)(v124 + 4 * v125 + 16) = v135;
        *((_DWORD *)v120 + 6) = v122;
LABEL_225:
        if ( v31 >= 0 )
          goto LABEL_234;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x52Fu);
        goto LABEL_227;
      }
      v126 = DynArrayImpl<0>::AddMultipleAndSet(v131, 20LL, 1LL, &v134);
      v123 = v126;
      if ( v126 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v126, 0xC0u);
      v31 = v123;
      if ( v123 >= 0 )
        goto LABEL_225;
    }
    else
    {
      v123 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v31 = -2147024362;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v123, 0x70Au);
    goto LABEL_225;
  }
LABEL_234:
  if ( v130 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v130)(v130, 1LL);
  return (unsigned int)v31;
}
