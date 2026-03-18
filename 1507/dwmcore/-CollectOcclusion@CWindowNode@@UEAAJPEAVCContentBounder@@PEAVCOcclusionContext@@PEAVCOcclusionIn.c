/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 * Callees:
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1800026A0 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180004418 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180004720 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV-$CMa.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ @ 0x180004C34 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008F80 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18000E0A0 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV-$CMatrix@UBaseSampling@Co.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18001EFF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x180079CD0 (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x18007C46C (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18007EA80 (-HasContent@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18007EA90 (-IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x18007EB40 (-GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ceilf_0 @ 0x180099B5A (ceilf_0.c)
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x1800DCA98 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     Template_dffffq @ 0x1800FAC5C (Template_dffffq.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x180105094 (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180105158 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x180109168 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  int v7; // edi
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // r12
  int v11; // edx
  int v12; // r9d
  int v13; // eax
  CFlipChain *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // r12d
  int v18; // eax
  struct CShape *v19; // rdi
  __int64 v20; // r13
  bool v21; // zf
  float v22; // xmm8_4
  float v23; // xmm9_4
  signed int v24; // eax
  __m128i v25; // xmm7
  int v26; // eax
  float v27; // xmm7_4
  float v28; // xmm6_4
  __int64 (__fastcall *v29)(CComplexShape *, __int64, CBaseMatrix *); // rbx
  int TightBounds; // eax
  __int64 v31; // r13
  char v32; // al
  CGdiSpriteBitmap *v33; // r12
  struct CResource *Resource; // rax
  int right; // r13d
  __int64 (__fastcall ***v36)(__int64, GUID *, CGdiSpriteBitmap **); // rdx
  int bottom; // ebx
  LONG top; // eax
  int v39; // ecx
  float v40; // xmm6_4
  float v41; // xmm7_4
  float v42; // xmm8_4
  float v43; // xmm9_4
  int v44; // eax
  char v45; // r14
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  unsigned int v52; // r9d
  float v53; // xmm4_4
  float v54; // xmm3_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  float v58; // xmm5_4
  float v59; // xmm6_4
  float v60; // xmm7_4
  int v61; // eax
  unsigned int v62; // edx
  float v63; // xmm1_4
  unsigned int v64; // r8d
  unsigned int v65; // ecx
  __int64 v66; // rax
  unsigned int v67; // r8d
  __int64 v68; // rcx
  __int64 v69; // rdx
  int v71; // eax
  CGdiSpriteBitmap *v72; // rdi
  bool (__fastcall *v73)(CGdiSpriteBitmap *__hidden); // rbx
  bool HasContent; // al
  bool (__fastcall *v75)(CGdiSpriteBitmap *__hidden); // rbx
  bool IsOpaque; // al
  LONG v77; // edx
  LONG v78; // r8d
  LONG v79; // eax
  int v80; // eax
  __int64 v81; // rsi
  int v82; // eax
  CFilterEffect *v83; // rcx
  int v84; // edx
  __int64 v85; // rcx
  float v86; // xmm2_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  float v89; // xmm3_4
  float v90; // xmm1_4
  float v91; // xmm0_4
  float v92; // xmm2_4
  float v93; // xmm1_4
  float v94; // xmm0_4
  float v95; // xmm2_4
  int v96; // eax
  int LastKnownGoodDxClipShape; // eax
  struct CShape *DxClipShapeNoRef; // rbx
  __int64 v99; // rcx
  __int64 v100; // rdx
  int RenderBounds; // eax
  __int64 v102; // rax
  int v103; // edx
  int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rbx
  struct CShape *v107; // rax
  int v108; // eax
  unsigned int v109; // ebx
  struct CShape *v110; // rax
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rdx
  int v114; // eax
  __int64 v115; // rax
  __int64 *v116; // rbx
  CShape *v117; // rax
  int v118; // eax
  int v119; // ecx
  __int64 v120; // rax
  __int64 v121; // rdi
  float v122; // xmm2_4
  float v123; // xmm1_4
  float v124; // xmm3_4
  float v125; // xmm1_4
  float v126; // xmm2_4
  float v127; // xmm1_4
  float v128; // xmm2_4
  int v129; // eax
  int updated; // eax
  int v131; // eax
  CGdiSpriteBitmap *v132; // rax
  __int64 *v133; // rdi
  const struct D2DMatrix *v134; // rcx
  __int64 v135; // rcx
  int v136; // eax
  __int64 v137; // rax
  float *v138; // rax
  __int64 v139; // rcx
  float v140; // xmm0_4
  int v141; // eax
  int v142; // ebx
  int v143; // eax
  char v144[16]; // [rsp+40h] [rbp-C0h] BYREF
  int left; // [rsp+50h] [rbp-B0h]
  __int64 v146; // [rsp+60h] [rbp-A0h]
  CGdiSpriteBitmap *v147; // [rsp+68h] [rbp-98h] BYREF
  struct CShape *v148; // [rsp+70h] [rbp-90h] BYREF
  RECT rcSrc1; // [rsp+78h] [rbp-88h] BYREF
  __int128 v150; // [rsp+90h] [rbp-70h] BYREF
  __int128 v151; // [rsp+A0h] [rbp-60h] BYREF
  int v152; // [rsp+B0h] [rbp-50h]
  _BYTE v153[20]; // [rsp+C0h] [rbp-40h] BYREF
  int v154; // [rsp+D4h] [rbp-2Ch]
  __int64 v155; // [rsp+D8h] [rbp-28h]
  __int64 v156; // [rsp+E0h] [rbp-20h]
  int v157; // [rsp+E8h] [rbp-18h]
  __int64 v158; // [rsp+ECh] [rbp-14h]
  __int64 v159; // [rsp+F4h] [rbp-Ch]
  int v160; // [rsp+FCh] [rbp-4h]
  __int128 v161; // [rsp+100h] [rbp+0h] BYREF
  __int128 v162; // [rsp+110h] [rbp+10h]
  __int128 v163; // [rsp+120h] [rbp+20h]
  __int128 v164; // [rsp+130h] [rbp+30h]

  v7 = 0;
  v148 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    v81 = *((_QWORD *)this + 51);
    if ( !v81
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v81 + 48LL))(*((_QWORD *)this + 51), 9LL)
      || (v83 = (CFilterEffect *)*((_QWORD *)this + 51)) == 0LL
      || CFilterEffect::IsOpaque(v83, this) )
    {
      v82 = (*(__int64 (__fastcall **)(_QWORD, struct COcclusionContext *, char *))(**((_QWORD **)this + 47) + 96LL))(
              *((_QWORD *)this + 47),
              a3,
              (char *)this + 148);
      v7 = v82;
      if ( v82 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v82, 0xBB5u);
    }
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xBBFu);
    return (unsigned int)v7;
  }
  v8 = *((_QWORD *)a3 + 13);
  v9 = 0;
  LODWORD(v10) = *((_DWORD *)a3 + 32);
  *(_QWORD *)&v150 = v8;
  while ( (_DWORD)v10 )
  {
    v84 = *((_DWORD *)a3 + 163);
    v10 = (unsigned int)(v10 - 1);
    LODWORD(v147) = v84;
    *((_DWORD *)a3 + 163) = v84 + 2;
    v85 = 5 * v10;
    v146 = 5 * v10;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_dffffq(
        v85,
        v84,
        v84,
        (_DWORD)a4,
        *(_DWORD *)(v8 + 20 * v10 + 4),
        *(_DWORD *)(v8 + 20 * v10 + 8),
        *(_DWORD *)(v8 + 20 * v10 + 12),
        *(_DWORD *)(v8 + 20 * v10 + 16));
      v85 = v146;
    }
    if ( !*(_DWORD *)(v8 + 4 * v85 + 16) )
    {
      v86 = *(float *)(v8 + 4 * v85);
      v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v86) & _xmm);
      if ( v87 < 8388608.0 )
      {
        v88 = ceilf_0(*(float *)(v8 + 4 * v85));
        v85 = v146;
        v86 = (float)(int)v88;
      }
      v89 = *(float *)(v8 + 4 * v85 + 4);
      *(float *)&rcSrc1.left = v86;
      v90 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v89) & _xmm);
      if ( v90 < 8388608.0 )
      {
        v91 = ceilf_0(v89);
        v85 = v146;
        v89 = (float)(int)v91;
      }
      v92 = *(float *)(v8 + 4 * v85 + 8);
      *(float *)&rcSrc1.top = v89;
      v93 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v92) & _xmm);
      if ( v93 < 8388608.0 )
      {
        v94 = floorf_0(v92);
        v85 = v146;
        v92 = (float)(int)v94;
      }
      *(float *)&rcSrc1.right = v92;
      v95 = *(float *)(v8 + 4 * v85 + 12);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v95) & _xmm) < 8388608.0 )
        v95 = (float)(int)floorf_0(*(float *)(v8 + 4 * v85 + 12));
      *(float *)&rcSrc1.bottom = v95;
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&rcSrc1.left) )
      {
        v96 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _QWORD))(**((_QWORD **)a3 + 12) + 24LL))(
                *((_QWORD *)a3 + 12),
                &rcSrc1,
                (unsigned int)v147);
        v9 = v96;
        if ( v96 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v96, 0x317u);
          break;
        }
        v8 = v150;
      }
    }
  }
  *((_DWORD *)a3 + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)a3 + 13, 0x14u);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xBC0u);
    return (unsigned int)v9;
  }
  v13 = *((_DWORD *)a3 + 163);
  *((_DWORD *)a4 + 7) = v13;
  *((_DWORD *)a4 + 8) = v13;
  *((_DWORD *)a4 + 9) = v13;
  v14 = (CFlipChain *)*((_QWORD *)this + 147);
  if ( v14 )
  {
    if ( CFlipChain::DisplayBufferReady(v14) || !*((_QWORD *)this + 148) )
    {
      DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    }
    else
    {
      LastKnownGoodDxClipShape = CWindowNode::GetLastKnownGoodDxClipShape(this, &v148);
      v17 = LastKnownGoodDxClipShape;
      if ( LastKnownGoodDxClipShape < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, LastKnownGoodDxClipShape, 0xBDEu);
        goto LABEL_88;
      }
      DxClipShapeNoRef = v148;
    }
    v99 = *((_QWORD *)this + 147);
    if ( v99 )
      v100 = v99 + 8;
    else
      v100 = 0LL;
    RenderBounds = CWindowNode::GetRenderBounds(this, v100, DxClipShapeNoRef, &rcSrc1, v144, 0LL);
    v17 = RenderBounds;
    if ( RenderBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, 0xBE6u);
      goto LABEL_88;
    }
    v102 = *((_QWORD *)this + 147);
    if ( v102 )
      v103 = v102 + 16;
    else
      v103 = 0;
    LODWORD(v150) = (int)*(float *)&rcSrc1.left;
    DWORD1(v150) = (int)*(float *)&rcSrc1.top;
    DWORD2(v150) = (int)*(float *)&rcSrc1.right;
    HIDWORD(v150) = (int)*(float *)&rcSrc1.bottom;
    *(_OWORD *)v153 = v150;
    v104 = CWindowNode::CollectOcclusionHelper(
             (_DWORD)this,
             v103,
             (unsigned int)v153,
             (_DWORD)a3,
             (__int64)DxClipShapeNoRef,
             v144[0]);
    v17 = v104;
    if ( v104 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v104, 0xBECu);
      goto LABEL_88;
    }
  }
  else
  {
    v15 = *((_QWORD *)this + 150);
    if ( v15 && CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v15 + 40)) )
    {
      v105 = *((_QWORD *)this + 150);
      if ( v105 )
        v106 = v105 + 40;
      else
        v106 = 0LL;
      v107 = CWindowNode::GetDxClipShapeNoRef(this);
      v108 = CWindowNode::GetRenderBounds(this, v106, v107, &rcSrc1, v144, 0LL);
      v109 = v108;
      if ( v108 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v108, 0xBF5u);
        return v109;
      }
      LODWORD(v150) = (int)*(float *)&rcSrc1.left;
      DWORD1(v150) = (int)*(float *)&rcSrc1.top;
      DWORD2(v150) = (int)*(float *)&rcSrc1.right;
      HIDWORD(v150) = (int)*(float *)&rcSrc1.bottom;
      *(_OWORD *)v153 = v150;
      v110 = CWindowNode::GetDxClipShapeNoRef(this);
      v111 = CWindowNode::CollectOcclusionHelper(
               (_DWORD)this,
               *((_QWORD *)this + 150),
               (unsigned int)v153,
               (_DWORD)a3,
               (__int64)v110,
               v144[0]);
      v109 = v111;
      if ( v111 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v111, 0xBFBu);
        return v109;
      }
      if ( COcclusionContext::IsOverlayCandidateCollectionEnabled(a3) )
      {
        v112 = *((_QWORD *)this + 150);
        v159 = 0LL;
        v158 = 0LL;
        v156 = 0LL;
        v155 = 0LL;
        *(_QWORD *)&v153[12] = 0LL;
        *(_QWORD *)&v153[4] = 0LL;
        v160 = 1065353216;
        v157 = 1065353216;
        v154 = 1065353216;
        *(_DWORD *)v153 = 1065353216;
        if ( v112 )
          v113 = v112 + 40;
        else
          v113 = 0LL;
        v114 = CWindowNode::ApplyTextureToLocalTransform((__int64)this, v113, (CBaseMatrix *)v153);
        v109 = v114;
        if ( v114 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v114, 0xC05u);
          return v109;
        }
        v115 = *((_QWORD *)this + 150);
        if ( v115 )
          v116 = (__int64 *)(v115 + 40);
        else
          v116 = 0LL;
        v117 = CWindowNode::GetDxClipShapeNoRef(this);
        v118 = COcclusionContext::CheckAndRecordOverlayCandidate(
                 (__int64)a3,
                 (__int64)this,
                 v116,
                 (__int128 *)v153,
                 v117,
                 *((_DWORD *)this + 286));
        v109 = v118;
        if ( v118 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v118, 0xC0Bu);
          return v109;
        }
      }
    }
  }
  v16 = *((_QWORD *)a3 + 13);
  v17 = 0;
  v18 = *((_DWORD *)a3 + 32);
  *(_QWORD *)&v150 = v16;
  if ( !v18 )
    goto LABEL_8;
  while ( 1 )
  {
    v119 = *((_DWORD *)a3 + 163);
    v120 = (unsigned int)(v18 - 1);
    left = v120;
    LODWORD(v147) = v119;
    v121 = 5 * v120;
    *((_DWORD *)a3 + 163) = v119 + 2;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_dffffq(
        v119,
        v11,
        v119,
        v12,
        *(_DWORD *)(v16 + 20 * v120 + 4),
        *(_DWORD *)(v16 + 20 * v120 + 8),
        *(_DWORD *)(v16 + 20 * v120 + 12),
        *(_DWORD *)(v16 + 20 * v120 + 16));
    if ( *(_DWORD *)(v16 + 4 * v121 + 16) )
      goto LABEL_206;
    v122 = *(float *)(v16 + 4 * v121);
    v123 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v122) & _xmm);
    if ( v123 < 8388608.0 )
      v122 = (float)(int)ceilf_0(*(float *)(v16 + 4 * v121));
    v124 = *(float *)(v16 + 4 * v121 + 4);
    *(float *)&rcSrc1.left = v122;
    v125 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v124) & _xmm);
    if ( v125 < 8388608.0 )
      v124 = (float)(int)ceilf_0(v124);
    v126 = *(float *)(v16 + 4 * v121 + 8);
    *(float *)&rcSrc1.top = v124;
    v127 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v126) & _xmm);
    if ( v127 < 8388608.0 )
      v126 = (float)(int)floorf_0(v126);
    *(float *)&rcSrc1.right = v126;
    v128 = *(float *)(v16 + 4 * v121 + 12);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v128) & _xmm) < 8388608.0 )
      v128 = (float)(int)floorf_0(*(float *)(v16 + 4 * v121 + 12));
    *(float *)&rcSrc1.bottom = v128;
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&rcSrc1.left) )
      goto LABEL_206;
    v129 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _QWORD))(**((_QWORD **)a3 + 12) + 24LL))(
             *((_QWORD *)a3 + 12),
             &rcSrc1,
             (unsigned int)v147);
    v17 = v129;
    if ( v129 < 0 )
      break;
    v16 = v150;
LABEL_206:
    v18 = left;
    if ( !left )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v129, 0x317u);
LABEL_8:
  *((_DWORD *)a3 + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)a3 + 13, 0x14u);
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC15u);
    goto LABEL_88;
  }
  *((_DWORD *)a4 + 6) = *((_DWORD *)a3 + 163);
  if ( !*((_QWORD *)this + 130) || *((_BYTE *)this + 1244) || (*((_BYTE *)this + 1144) & 2) != 0 )
    goto LABEL_88;
  v17 = 0;
  v19 = 0LL;
  if ( !*((_BYTE *)this + 1272) )
    goto LABEL_13;
  updated = CWindowNode::UpdateSpriteClipShape(this);
  v17 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x144Eu);
    v19 = v148;
    goto LABEL_18;
  }
  *((_BYTE *)this + 1272) = 0;
LABEL_13:
  if ( *((_QWORD *)this + 158) )
  {
    v19 = (struct CShape *)*((_QWORD *)this + 158);
    goto LABEL_18;
  }
  v20 = *((_QWORD *)this + 135);
  if ( !v20 )
    goto LABEL_18;
  v21 = (*(_BYTE *)(v20 + 32) & 1) == 0;
  v146 = 0LL;
  if ( v21
    && (!*(_BYTE *)(v20 + 72)
     || *(float *)(v20 + 64) == *((float *)this + 37) && *(float *)(v20 + 68) == *((float *)this + 38)) )
  {
LABEL_17:
    v19 = *(struct CShape **)(v20 + 40);
    goto LABEL_18;
  }
  v21 = *(_BYTE *)(v20 + 72) == 0;
  *(_QWORD *)&v150 = 0LL;
  if ( !v21 )
    v19 = (CWindowNode *)((char *)this + 148);
  v131 = (*(__int64 (__fastcall **)(__int64, struct CShape *, __int128 *))(*(_QWORD *)v20 + 96LL))(v20, v19, &v150);
  if ( v131 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v131, 0x49u);
    v19 = (struct CShape *)v146;
    goto LABEL_18;
  }
  v132 = *(CGdiSpriteBitmap **)(v20 + 48);
  v133 = (__int64 *)(v20 + 48);
  v147 = v132;
  if ( v132 )
    (**(void (__fastcall ***)(CGdiSpriteBitmap *, __int64))v132)(v147, 1LL);
  v134 = *(const struct D2DMatrix **)(v20 + 56);
  *v133 = 0LL;
  if ( !v134 || D2DMatrixIsIdentity(v134) )
  {
    v137 = v150;
    goto LABEL_227;
  }
  v136 = CShape::Combine(v150, v135, 0LL, 0LL, 0, (_QWORD *)(v20 + 48));
  if ( v136 >= 0 )
  {
    v137 = *v133;
LABEL_227:
    *(_QWORD *)(v20 + 40) = v137;
    if ( this != (CWindowNode *)-148LL )
      *(_QWORD *)(v20 + 64) = *(_QWORD *)((char *)this + 148);
    *(_DWORD *)(v20 + 32) &= ~1u;
    goto LABEL_17;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v136, 0x56u);
  v19 = 0LL;
LABEL_18:
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC1Eu);
    goto LABEL_88;
  }
  v17 = 0;
  v22 = 0.0;
  v23 = 0.0;
  if ( *((_QWORD *)this + 130) )
  {
    v24 = *((_DWORD *)this + 240) - *((_DWORD *)this + 238);
    if ( v24 < 0 )
      v24 = 0;
    v25 = _mm_cvtsi32_si128(v24);
    v26 = *((_DWORD *)this + 241) - *((_DWORD *)this + 239);
    LODWORD(v27) = _mm_cvtepi32_ps(v25).m128_u32[0];
    if ( v26 < 0 )
      v26 = 0;
    v28 = (float)v26;
  }
  else
  {
    v28 = 0.0;
    v27 = 0.0;
  }
  if ( !v19 )
  {
LABEL_43:
    v32 = 1;
    goto LABEL_44;
  }
  v29 = *(__int64 (__fastcall **)(CComplexShape *, __int64, CBaseMatrix *))(*(_QWORD *)v19 + 24LL);
  if ( v29 == CShape::GetTightBounds )
    TightBounds = CShape::GetTightBounds(v19, (__int64)&rcSrc1, 0LL);
  else
    TightBounds = v29(v19, (__int64)&rcSrc1, 0LL);
  v17 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0xAE3u);
  }
  else
  {
    if ( *(float *)&rcSrc1.left > 0.0 )
      v22 = *(float *)&rcSrc1.left;
    if ( *(float *)&rcSrc1.top > 0.0 )
      v23 = *(float *)&rcSrc1.top;
    if ( v27 > *(float *)&rcSrc1.right )
      v27 = *(float *)&rcSrc1.right;
    if ( v28 > *(float *)&rcSrc1.bottom )
      v28 = *(float *)&rcSrc1.bottom;
    if ( v27 <= v22 || v28 <= v23 )
    {
      v28 = 0.0;
      v27 = 0.0;
      v23 = 0.0;
      v22 = 0.0;
    }
    if ( !(*(unsigned int (__fastcall **)(struct CShape *))(*(_QWORD *)v19 + 8LL))(v19) )
      goto LABEL_43;
    if ( (*(unsigned int (__fastcall **)(struct CShape *))(*(_QWORD *)v19 + 8LL))(v19) == 2 )
    {
      v31 = *((_QWORD *)v19 + 1);
      if ( v31 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v31 + 136LL))(*((_QWORD *)v19 + 1)) == 1 )
          goto LABEL_43;
      }
    }
    v32 = 0;
LABEL_44:
    v144[0] = v32;
  }
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC23u);
    goto LABEL_88;
  }
  v33 = (CGdiSpriteBitmap *)*((_QWORD *)this + 130);
  v146 = *(_QWORD *)(*(_QWORD *)v33 + 232LL);
  if ( (struct CResource *(__fastcall *)(CGdiSpriteBitmap *__hidden))v146 == CGdiSpriteBitmap::GetResource )
    Resource = CGdiSpriteBitmap::GetResource(v33);
  else
    Resource = (struct CResource *)((__int64 (__fastcall *)(CGdiSpriteBitmap *))v146)(v33);
  right = (int)v27 - *((_DWORD *)this + 283);
  v36 = (__int64 (__fastcall ***)(__int64, GUID *, CGdiSpriteBitmap **))Resource;
  bottom = (int)v28 - *((_DWORD *)this + 285);
  v146 = (__int64)Resource;
  v17 = 0;
  left = (int)v22 + *((_DWORD *)this + 282);
  top = (int)v23 + *((_DWORD *)this + 284);
  v39 = left;
  LODWORD(v147) = top;
  if ( right <= left )
  {
    right = left;
    v39 = left;
  }
  if ( bottom <= top )
    bottom = top;
  if ( *((_DWORD *)this + 289) || *((_DWORD *)this + 291) || *((_DWORD *)this + 290) || *((_DWORD *)this + 292) )
  {
    v77 = *((_DWORD *)this + 291) + *((_DWORD *)this + 223);
    v78 = *((_DWORD *)this + 225) - *((_DWORD *)this + 292);
    v79 = *((_DWORD *)this + 289) + *((_DWORD *)this + 222);
    rcSrc1.right = *((_DWORD *)this + 224) - *((_DWORD *)this + 290);
    rcSrc1.top = v77;
    rcSrc1.bottom = v78;
    rcSrc1.left = v79;
    IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)((char *)this + 952));
    if ( EqualRect(&rcSrc1, (const RECT *)((char *)this + 952)) )
    {
      top = (int)v147;
      v39 = left;
    }
    else
    {
      OffsetRect(&rcSrc1, -*((_DWORD *)this + 238), -*((_DWORD *)this + 239));
      if ( rcSrc1.left > left )
        left = rcSrc1.left;
      top = (int)v147;
      if ( rcSrc1.top > (int)v147 )
        top = rcSrc1.top;
      if ( rcSrc1.right < right )
        right = rcSrc1.right;
      if ( rcSrc1.bottom < bottom )
        bottom = rcSrc1.bottom;
      v39 = left;
      if ( right <= left || bottom <= top )
      {
        bottom = 0;
        right = 0;
        top = 0;
        v39 = 0;
      }
    }
    v36 = (__int64 (__fastcall ***)(__int64, GUID *, CGdiSpriteBitmap **))v146;
  }
  v40 = (float)v39;
  v41 = (float)top;
  v42 = (float)right;
  v43 = (float)bottom;
  *(float *)v153 = (float)v39;
  *(float *)&v153[4] = (float)top;
  *(float *)&v153[8] = (float)right;
  *(float *)&v153[12] = (float)bottom;
  if ( !v144[0] )
  {
    if ( v19 )
    {
      v80 = COcclusionContext::DrawClippedImage((__int64)a3, (__int64)v36, (float *)v153, v19, *((_DWORD *)this + 286));
      v17 = v80;
      if ( v80 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v80, 0xC64u);
    }
    goto LABEL_124;
  }
  v17 = 0;
  v44 = *((_DWORD *)this + 286);
  if ( *((_DWORD *)a3 + 164) )
  {
LABEL_124:
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC29u);
    goto LABEL_88;
  }
  v45 = 0;
  v147 = 0LL;
  if ( v36 && (v44 & 2) == 0 )
  {
    if ( (v44 & 1) != 0 )
      goto LABEL_61;
    v71 = (**v36)(v146, &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552, &v147);
    v72 = v147;
    if ( v71 >= 0 )
    {
      v73 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v147 + 152LL);
      if ( v73 == CGdiSpriteBitmap::HasContent )
      {
        HasContent = CGdiSpriteBitmap::HasContent(v147);
      }
      else
      {
        HasContent = v73(v147);
        v72 = v147;
      }
      if ( HasContent )
      {
        v75 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v72 + 168LL);
        if ( v75 == CGdiSpriteBitmap::IsOpaque )
        {
          IsOpaque = CGdiSpriteBitmap::IsOpaque(v72);
        }
        else
        {
          IsOpaque = v75(v72);
          v72 = v147;
        }
        if ( IsOpaque )
          v45 = 1;
      }
    }
    if ( v72 )
      (*(void (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v72 + 16LL))(v72);
  }
  v17 = 0;
  if ( v45 )
  {
LABEL_61:
    v17 = 0;
    if ( v42 > v40 && v43 > v41 )
    {
      v46 = *((_DWORD *)a3 + 4);
      *(_QWORD *)&v151 = __PAIR64__(LODWORD(v41), LODWORD(v40));
      *((float *)&v151 + 2) = (float)right;
      *((float *)&v151 + 3) = v43;
      v152 = 0;
      if ( v46 )
      {
        v47 = (unsigned int)(v46 - 1);
        v48 = *((_QWORD *)a3 + 4);
        v47 <<= 6;
        v49 = *(_OWORD *)(v47 + v48 + 16);
        v161 = *(_OWORD *)(v47 + v48);
        v50 = *(_OWORD *)(v47 + v48 + 32);
        v162 = v49;
        v51 = *(_OWORD *)(v47 + v48 + 48);
      }
      else
      {
        v161 = IdentityMatrix;
        v50 = xmmword_180190B20;
        v162 = *(&IdentityMatrix + 1);
        v51 = xmmword_180190B30;
      }
      *(_QWORD *)&v150 = __PAIR64__(LODWORD(v41), LODWORD(v40));
      *((float *)&v150 + 2) = (float)right;
      *((float *)&v150 + 3) = v43;
      v164 = v51;
      v163 = v50;
      if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v161) )
      {
        v53 = *(float *)&v164 + v40;
        v54 = *((float *)&v164 + 1) + v41;
        v55 = *(float *)&v164 + v42;
        v56 = *((float *)&v164 + 1) + v43;
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)&v161,
          (const struct MilRectF *)&v150,
          (struct MilPoint2F *const)v153);
        v138 = (float *)&v153[12];
        *(_QWORD *)&v150 = *(_QWORD *)v153;
        v139 = 3LL;
        v56 = *(float *)&v153[4];
        v55 = *(float *)v153;
        v146 = *(_QWORD *)v153;
        v54 = *(float *)&v153[4];
        v53 = *(float *)v153;
        do
        {
          v140 = *(v138 - 1);
          if ( v53 > v140 )
            v53 = *(v138 - 1);
          if ( v54 > *v138 )
            v54 = *v138;
          if ( v140 > v55 )
            v55 = *(v138 - 1);
          if ( *v138 > v56 )
            v56 = *v138;
          v138 += 2;
          --v139;
        }
        while ( v139 );
      }
      v21 = *((_DWORD *)a3 + 16) == 0;
      *((_QWORD *)&v151 + 1) = __PAIR64__(LODWORD(v56), LODWORD(v55));
      *(_QWORD *)&v151 = __PAIR64__(LODWORD(v54), LODWORD(v53));
      if ( v21 )
      {
        v57 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v58 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        v59 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v60 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      }
      else
      {
        v141 = *((_DWORD *)a3 + 16);
        if ( v141 )
          v150 = *(_OWORD *)(*((_QWORD *)a3 + 10) + 16LL * (unsigned int)(v141 - 1));
        v57 = *(float *)&v150;
        v58 = *((float *)&v150 + 1);
        v59 = *((float *)&v150 + 2);
        v60 = *((float *)&v150 + 3);
      }
      if ( v57 > v53 )
      {
        v53 = v57;
        *(float *)&v151 = v57;
      }
      if ( v58 > v54 )
      {
        v54 = v58;
        *((float *)&v151 + 1) = v58;
      }
      if ( v55 > v59 )
      {
        v55 = v59;
        *((float *)&v151 + 2) = v59;
      }
      if ( v56 > v60 )
      {
        v56 = v60;
        *((float *)&v151 + 3) = v60;
      }
      if ( v55 <= v53 || v56 <= v54 )
      {
        v56 = 0.0;
        v55 = 0.0;
        v54 = 0.0;
        v53 = 0.0;
        v151 = 0uLL;
      }
      v61 = *((_DWORD *)a3 + 174);
      v62 = -1;
      v63 = (float)(v56 - v54) * (float)(v55 - v53);
      if ( v61 )
        v62 = *(_DWORD *)(*((_QWORD *)a3 + 89) + 4LL * (unsigned int)(v61 - 1));
      v64 = *((_DWORD *)a3 + 86);
      v65 = v52;
      if ( v64 )
      {
        while ( ((v62 >> v65) & 1) == 0 || v63 <= (float)(*((float *)a3 + v65 + 119) * 0.25) )
        {
          if ( ++v65 >= v64 )
            goto LABEL_87;
        }
        v66 = *((unsigned int *)a3 + 32);
        v67 = v66 + 1;
        if ( (int)v66 + 1 < (unsigned int)v66 )
        {
          v142 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v17 = -2147024362;
LABEL_257:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v142, 0x6F6u);
          goto LABEL_87;
        }
        if ( v67 <= *((_DWORD *)a3 + 31) )
        {
          v68 = *((_QWORD *)a3 + 13);
          v69 = 5 * v66;
          *(_OWORD *)(v68 + 4 * v69) = v151;
          *(_DWORD *)(v68 + 4 * v69 + 16) = v152;
          *((_DWORD *)a3 + 32) = v67;
          goto LABEL_87;
        }
        v143 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a3 + 104, 0x14u, 1, &v151);
        v142 = v143;
        if ( v143 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v143, 0xC0u);
        v17 = v142;
        if ( v142 < 0 )
          goto LABEL_257;
      }
    }
LABEL_87:
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x51Bu);
      goto LABEL_102;
    }
    goto LABEL_88;
  }
LABEL_102:
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC5Du);
    goto LABEL_124;
  }
LABEL_88:
  if ( v148 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v148)(v148, 1LL);
  return (unsigned int)v17;
}
