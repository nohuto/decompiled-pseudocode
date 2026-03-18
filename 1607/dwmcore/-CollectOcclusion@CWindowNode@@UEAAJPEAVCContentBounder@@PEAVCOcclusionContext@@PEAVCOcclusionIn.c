/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ @ 0x180010E70 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001160C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800116C0 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x180014754 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180020048 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV-$CMatrix@UBaseSampling@Co.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x1800266EC (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x1800267DC (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x180028358 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180028FEC (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18002ABF0 (-HasContent@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18002AC10 (-IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x18002ACC0 (-GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x18002BE80 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002BF80 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800AA424 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_dffffq @ 0x18012C48C (Template_dffffq.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180140150 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801427B0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  int v7; // esi
  __int64 v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // r13
  int v11; // r12d
  int v12; // r9d
  int v13; // eax
  CFlipChain *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r13
  int v17; // r14d
  __int64 v18; // r12
  CRegionShape *v20; // r12
  __int64 v21; // r15
  _QWORD *v22; // r13
  char v23; // r15
  float v24; // xmm8_4
  float v25; // xmm9_4
  signed int v26; // eax
  __m128i v27; // xmm7
  int v28; // eax
  float v29; // xmm7_4
  float v30; // xmm6_4
  __int64 (__fastcall *v31)(CRegionShape *, RECT *, _QWORD); // rax
  int TightBounds; // eax
  bool (__fastcall *v33)(CRegionShape *__hidden, unsigned int *); // rax
  bool v34; // al
  CGdiSpriteBitmap *v35; // rcx
  __int64 (*v36)(void); // rax
  struct CResource *Resource; // rax
  int right; // r13d
  int bottom; // r15d
  LONG top; // eax
  int v41; // ecx
  float v42; // xmm8_4
  float v43; // xmm6_4
  float v44; // xmm7_4
  int v45; // eax
  char v46; // r15
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  int v53; // eax
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm4_4
  float v57; // xmm5_4
  float v58; // xmm3_4
  float v59; // xmm2_4
  float v60; // xmm0_4
  float v61; // xmm1_4
  int v62; // eax
  unsigned int v63; // edx
  float v64; // xmm1_4
  unsigned int v65; // r8d
  unsigned int v66; // ecx
  __int64 v67; // rax
  unsigned int v68; // r8d
  __int64 v69; // rcx
  __int64 v70; // rdx
  int v71; // eax
  CGdiSpriteBitmap *v72; // rbx
  bool (__fastcall *v73)(CGdiSpriteBitmap *__hidden); // rax
  bool HasContent; // al
  bool (__fastcall *v75)(CGdiSpriteBitmap *__hidden); // rax
  bool IsOpaque; // al
  LONG v77; // edx
  LONG v78; // r8d
  LONG v79; // eax
  int v80; // eax
  char v81; // r12
  char v82; // r14
  int v83; // eax
  CFilterEffect *EffectInternal; // r13
  unsigned int v85; // edx
  CGdiSpriteBitmap *v86; // rcx
  float v87; // xmm2_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  float v90; // xmm3_4
  float v91; // xmm1_4
  float v92; // xmm0_4
  float v93; // xmm2_4
  float v94; // xmm1_4
  float v95; // xmm0_4
  float v96; // xmm2_4
  unsigned int v97; // edx
  int v98; // eax
  int LastKnownGoodDxClipShape; // eax
  struct CShape *DxClipShapeNoRef; // r12
  __int64 v101; // rcx
  __int64 v102; // rdx
  int RenderBounds; // eax
  __int64 v104; // rax
  __int64 v105; // rdx
  int v106; // eax
  __int64 v107; // rax
  __int64 v108; // r14
  struct CShape *v109; // rax
  int v110; // eax
  struct CShape *v111; // rax
  int v112; // eax
  __int64 v113; // rdx
  int v114; // eax
  __int64 v115; // rax
  _QWORD *v116; // r14
  CShape *v117; // rax
  int v118; // eax
  unsigned int v119; // edx
  CGdiSpriteBitmap *v120; // rcx
  float v121; // xmm2_4
  float v122; // xmm1_4
  float v123; // xmm0_4
  float v124; // xmm3_4
  float v125; // xmm1_4
  float v126; // xmm0_4
  float v127; // xmm2_4
  float v128; // xmm1_4
  float v129; // xmm0_4
  float v130; // xmm2_4
  unsigned int v131; // edx
  int v132; // eax
  int updated; // eax
  int ShapeDataWorker; // eax
  int v135; // eax
  int v136; // eax
  unsigned int v137; // [rsp+20h] [rbp-E0h]
  char v138[16]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v139[4]; // [rsp+50h] [rbp-B0h] BYREF
  CGdiSpriteBitmap *v140; // [rsp+60h] [rbp-A0h] BYREF
  struct CShape *v141; // [rsp+68h] [rbp-98h] BYREF
  __int128 v142; // [rsp+70h] [rbp-90h] BYREF
  __int128 v143; // [rsp+80h] [rbp-80h]
  __int128 v144; // [rsp+90h] [rbp-70h]
  __int128 v145; // [rsp+A0h] [rbp-60h]
  int v146; // [rsp+B0h] [rbp-50h]
  RECT rcSrc1; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v148; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v149; // [rsp+E0h] [rbp-20h]
  __int128 v150; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v151; // [rsp+100h] [rbp+0h] BYREF
  int v152; // [rsp+110h] [rbp+10h]

  v7 = 0;
  v141 = 0LL;
  if ( *((_QWORD *)this + 38) || (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x10000) != 0 )
  {
    v81 = 0;
    v82 = 0;
    if ( (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x8000000) == 0
      || (EffectInternal = CVisual::GetEffectInternal(this),
          !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
             EffectInternal,
             9LL))
      || CFilterEffect::IsOpaque(EffectInternal, this) )
    {
      v81 = 1;
    }
    if ( (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x10000) == 0 )
      v82 = 1;
    if ( v81 )
    {
      if ( v82 )
      {
        v83 = (*(__int64 (__fastcall **)(_QWORD, struct COcclusionContext *, char *))(**((_QWORD **)this + 38) + 112LL))(
                *((_QWORD *)this + 38),
                a3,
                (char *)this + 192);
        v7 = v83;
        if ( v83 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0xC4Fu);
      }
    }
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xBBCu);
    return (unsigned int)v7;
  }
  else
  {
    LODWORD(v8) = *((_DWORD *)a3 + 70);
    v9 = (__int64 *)((char *)a3 + 256);
    v10 = *((_QWORD *)a3 + 32);
    v11 = 0;
    if ( (_DWORD)v8 )
    {
      while ( 1 )
      {
        v85 = *((_DWORD *)a3 + 222);
        v8 = (unsigned int)(v8 - 1);
        v139[0] = v85;
        *((_DWORD *)a3 + 222) = v85 + 2;
        v86 = (CGdiSpriteBitmap *)(5 * v8);
        v140 = (CGdiSpriteBitmap *)(5 * v8);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          Template_dffffq(
            (_DWORD)v86,
            v85,
            v85,
            (_DWORD)a4,
            *(_DWORD *)(v10 + 20 * v8 + 4),
            *(_DWORD *)(v10 + 20 * v8 + 8),
            *(_DWORD *)(v10 + 20 * v8 + 12),
            *(_DWORD *)(v10 + 20 * v8 + 16));
          v86 = v140;
        }
        if ( !*(_DWORD *)(v10 + 4LL * (_QWORD)v86 + 16) )
        {
          v87 = *(float *)(v10 + 4LL * (_QWORD)v86);
          v88 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v87) & _xmm);
          if ( v88 < 8388608.0 )
          {
            v89 = ceilf_0(*(float *)(v10 + 4LL * (_QWORD)v86));
            v86 = v140;
            v87 = (float)(int)v89;
          }
          v90 = *(float *)(v10 + 4LL * (_QWORD)v86 + 4);
          *(float *)&rcSrc1.left = v87;
          v91 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v90) & _xmm);
          if ( v91 < 8388608.0 )
          {
            v92 = ceilf_0(v90);
            v86 = v140;
            v90 = (float)(int)v92;
          }
          v93 = *(float *)(v10 + 4LL * (_QWORD)v86 + 8);
          *(float *)&rcSrc1.top = v90;
          v94 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v93) & _xmm);
          if ( v94 < 8388608.0 )
          {
            v95 = floorf_0(v93);
            v86 = v140;
            v93 = (float)(int)v95;
          }
          *(float *)&rcSrc1.right = v93;
          v96 = *(float *)(v10 + 4LL * (_QWORD)v86 + 12);
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v96) & _xmm) < 8388608.0 )
            v96 = (float)(int)floorf_0(*(float *)(v10 + 4LL * (_QWORD)v86 + 12));
          *(float *)&rcSrc1.bottom = v96;
          if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&rcSrc1) )
          {
            v98 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _QWORD))(**((_QWORD **)a3 + 31) + 24LL))(
                    *((_QWORD *)a3 + 31),
                    &rcSrc1,
                    v97);
            v11 = v98;
            if ( v98 < 0 )
              break;
          }
        }
        if ( !(_DWORD)v8 )
          goto LABEL_5;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v98, 0x369u);
    }
LABEL_5:
    *((_DWORD *)a3 + 70) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)a3 + 256, 20LL);
    if ( v11 >= 0 )
    {
      v13 = *((_DWORD *)a3 + 222);
      *((_DWORD *)a4 + 7) = v13;
      *((_DWORD *)a4 + 8) = v13;
      *((_DWORD *)a4 + 9) = v13;
      v14 = (CFlipChain *)*((_QWORD *)this + 117);
      if ( v14 )
      {
        if ( CFlipChain::DisplayBufferReady(v14) || !*((_QWORD *)this + 118) )
        {
          DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
        }
        else
        {
          LastKnownGoodDxClipShape = CWindowNode::GetLastKnownGoodDxClipShape(this, &v141);
          v17 = LastKnownGoodDxClipShape;
          if ( LastKnownGoodDxClipShape < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, LastKnownGoodDxClipShape, 0xBDBu);
            goto LABEL_11;
          }
          DxClipShapeNoRef = v141;
        }
        v101 = *((_QWORD *)this + 117);
        if ( v101 )
          v102 = v101 + 8;
        else
          v102 = 0LL;
        RenderBounds = CWindowNode::GetRenderBounds(this, v102, DxClipShapeNoRef, &rcSrc1, v138, 0LL);
        v17 = RenderBounds;
        if ( RenderBounds < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, 0xBE3u);
          goto LABEL_11;
        }
        v104 = *((_QWORD *)this + 117);
        if ( v104 )
          v105 = v104 + 16;
        else
          v105 = 0LL;
        LODWORD(v148) = (int)*(float *)&rcSrc1.left;
        DWORD1(v148) = (int)*(float *)&rcSrc1.top;
        DWORD2(v148) = (int)*(float *)&rcSrc1.right;
        HIDWORD(v148) = (int)*(float *)&rcSrc1.bottom;
        v150 = v148;
        v106 = CWindowNode::CollectOcclusionHelper(
                 this,
                 v105,
                 (LONG *)&v150,
                 (__int64)a3,
                 (__int64)DxClipShapeNoRef,
                 v138[0]);
        v17 = v106;
        if ( v106 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v106, 0xBE9u);
          goto LABEL_11;
        }
      }
      else
      {
        v15 = *((_QWORD *)this + 120);
        if ( v15 && CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v15 + 120)) )
        {
          v107 = *((_QWORD *)this + 120);
          if ( v107 )
            v108 = v107 + 120;
          else
            v108 = 0LL;
          v109 = CWindowNode::GetDxClipShapeNoRef(this);
          v110 = CWindowNode::GetRenderBounds(this, v108, v109, &rcSrc1, v138, 0LL);
          v17 = v110;
          if ( v110 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v110, 0xBF2u);
            return (unsigned int)v17;
          }
          LODWORD(v148) = (int)*(float *)&rcSrc1.left;
          DWORD1(v148) = (int)*(float *)&rcSrc1.top;
          DWORD2(v148) = (int)*(float *)&rcSrc1.right;
          HIDWORD(v148) = (int)*(float *)&rcSrc1.bottom;
          v150 = v148;
          v111 = CWindowNode::GetDxClipShapeNoRef(this);
          v112 = CWindowNode::CollectOcclusionHelper(
                   this,
                   *((_QWORD *)this + 120),
                   (LONG *)&v150,
                   (__int64)a3,
                   (__int64)v111,
                   v138[0]);
          v17 = v112;
          if ( v112 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v112, 0xBF8u);
            return (unsigned int)v17;
          }
          if ( COcclusionContext::IsOverlayCandidateCollectionEnabled(a3) )
          {
            v113 = *((_QWORD *)this + 120);
            v142 = CMILMatrix::Identity;
            v143 = xmmword_1801EAD20;
            v144 = xmmword_1801EAD30;
            v145 = xmmword_1801EAD40;
            v146 = dword_1801EAD50;
            if ( v113 )
              v113 += 120LL;
            v114 = CWindowNode::ApplyTextureToLocalTransform((__int64)this, v113, (__int64)&v142);
            v17 = v114;
            if ( v114 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v114, 0xC02u);
              return (unsigned int)v17;
            }
            v115 = *((_QWORD *)this + 120);
            if ( v115 )
              v116 = (_QWORD *)(v115 + 112);
            else
              v116 = 0LL;
            v117 = CWindowNode::GetDxClipShapeNoRef(this);
            v118 = COcclusionContext::CheckAndRecordOverlayCandidate(
                     (__int64)a3,
                     (__int64)this,
                     v116,
                     (__int64)&v142,
                     v117,
                     *((_DWORD *)this + 226));
            v17 = v118;
            if ( v118 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v118, 0xC08u);
              return (unsigned int)v17;
            }
          }
        }
      }
      LODWORD(v16) = *((_DWORD *)a3 + 70);
      v17 = 0;
      v18 = *v9;
      if ( (_DWORD)v16 )
      {
        while ( 1 )
        {
          v119 = *((_DWORD *)a3 + 222);
          v16 = (unsigned int)(v16 - 1);
          v139[0] = v119;
          v120 = (CGdiSpriteBitmap *)(5 * v16);
          *((_DWORD *)a3 + 222) = v119 + 2;
          v140 = (CGdiSpriteBitmap *)(5 * v16);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            Template_dffffq(
              (_DWORD)v120,
              v119,
              v119,
              v12,
              *(_DWORD *)(v18 + 20 * v16 + 4),
              *(_DWORD *)(v18 + 20 * v16 + 8),
              *(_DWORD *)(v18 + 20 * v16 + 12),
              *(_DWORD *)(v18 + 20 * v16 + 16));
            v120 = v140;
          }
          if ( !*(_DWORD *)(v18 + 4LL * (_QWORD)v120 + 16) )
          {
            v121 = *(float *)(v18 + 4LL * (_QWORD)v120);
            v122 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v121) & _xmm);
            if ( v122 < 8388608.0 )
            {
              v123 = ceilf_0(*(float *)(v18 + 4LL * (_QWORD)v120));
              v120 = v140;
              v121 = (float)(int)v123;
            }
            v124 = *(float *)(v18 + 4LL * (_QWORD)v120 + 4);
            *(float *)&rcSrc1.left = v121;
            v125 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v124) & _xmm);
            if ( v125 < 8388608.0 )
            {
              v126 = ceilf_0(v124);
              v120 = v140;
              v124 = (float)(int)v126;
            }
            v127 = *(float *)(v18 + 4LL * (_QWORD)v120 + 8);
            *(float *)&rcSrc1.top = v124;
            v128 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v127) & _xmm);
            if ( v128 < 8388608.0 )
            {
              v129 = floorf_0(v127);
              v120 = v140;
              v127 = (float)(int)v129;
            }
            *(float *)&rcSrc1.right = v127;
            v130 = *(float *)(v18 + 4LL * (_QWORD)v120 + 12);
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v130) & _xmm) < 8388608.0 )
              v130 = (float)(int)floorf_0(*(float *)(v18 + 4LL * (_QWORD)v120 + 12));
            *(float *)&rcSrc1.bottom = v130;
            if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&rcSrc1) )
            {
              v132 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _QWORD))(**((_QWORD **)a3 + 31) + 24LL))(
                       *((_QWORD *)a3 + 31),
                       &rcSrc1,
                       v131);
              v17 = v132;
              if ( v132 < 0 )
                break;
            }
          }
          if ( !(_DWORD)v16 )
            goto LABEL_9;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v132, 0x369u);
      }
LABEL_9:
      *((_DWORD *)a3 + 70) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)a3 + 256, 20LL);
      if ( v17 < 0 )
      {
        v137 = 3090;
        goto LABEL_236;
      }
      *((_DWORD *)a4 + 6) = *((_DWORD *)a3 + 222);
      if ( !*((_QWORD *)this + 100) || *((_BYTE *)this + 1004) || (*((_BYTE *)this + 904) & 2) != 0 )
        goto LABEL_11;
      v17 = 0;
      v20 = 0LL;
      if ( *((_BYTE *)this + 1032) )
      {
        updated = CWindowNode::UpdateSpriteClipShape((struct D2D_SIZE_F *)this);
        v17 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x141Cu);
          v20 = v141;
          goto LABEL_22;
        }
        *((_BYTE *)this + 1032) = 0;
      }
      if ( *((_QWORD *)this + 128) )
      {
        v20 = (CRegionShape *)*((_QWORD *)this + 128);
      }
      else
      {
        v21 = *((_QWORD *)this + 105);
        if ( v21 )
        {
          v22 = (_QWORD *)((char *)this + 192);
          if ( (*(_BYTE *)(v21 + 32) & 1) != 0
            || *(_BYTE *)(v21 + 168)
            && (*(float *)(v21 + 144) != *(float *)v22 || *(float *)(v21 + 148) != *((float *)this + 49)) )
          {
            ShapeDataWorker = CGeometry::GetShapeDataWorker(
                                *((CGeometry **)this + 105),
                                (const struct D2D_SIZE_F *)this + 24,
                                (struct CShapePtr *)(v21 + 152));
            if ( ShapeDataWorker < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataWorker, 0x71u);
              goto LABEL_22;
            }
            if ( this != (CWindowNode *)-192LL )
              *(_QWORD *)(v21 + 144) = *v22;
            *(_DWORD *)(v21 + 32) &= ~1u;
          }
          v20 = *(CRegionShape **)(v21 + 152);
        }
      }
LABEL_22:
      if ( v17 < 0 )
      {
        v137 = 3099;
        goto LABEL_236;
      }
      v17 = 0;
      v23 = 0;
      v24 = 0.0;
      v25 = 0.0;
      if ( *((_QWORD *)this + 100) )
      {
        v26 = *((_DWORD *)this + 180) - *((_DWORD *)this + 178);
        if ( v26 < 0 )
          v26 = 0;
        v27 = _mm_cvtsi32_si128(v26);
        v28 = *((_DWORD *)this + 181) - *((_DWORD *)this + 179);
        LODWORD(v29) = _mm_cvtepi32_ps(v27).m128_u32[0];
        if ( v28 < 0 )
          v28 = 0;
        v30 = (float)v28;
      }
      else
      {
        v30 = 0.0;
        v29 = 0.0;
      }
      if ( !v20 )
        goto LABEL_47;
      v31 = *(__int64 (__fastcall **)(CRegionShape *, RECT *, _QWORD))(*(_QWORD *)v20 + 24LL);
      if ( (char *)v31 == (char *)CRegionShape::GetTightBounds )
        TightBounds = CRegionShape::GetTightBounds(v20, &rcSrc1, 0LL);
      else
        TightBounds = v31(v20, &rcSrc1, 0LL);
      v17 = TightBounds;
      if ( TightBounds < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0xAE4u);
        goto LABEL_49;
      }
      if ( *(float *)&rcSrc1.left > 0.0 )
        v24 = *(float *)&rcSrc1.left;
      if ( *(float *)&rcSrc1.top > 0.0 )
        v25 = *(float *)&rcSrc1.top;
      if ( v29 > *(float *)&rcSrc1.right )
        v29 = *(float *)&rcSrc1.right;
      if ( v30 > *(float *)&rcSrc1.bottom )
        v30 = *(float *)&rcSrc1.bottom;
      if ( v29 <= v24 || v30 <= v25 )
      {
        v30 = 0.0;
        v29 = 0.0;
        v25 = 0.0;
        v24 = 0.0;
      }
      v33 = *(bool (__fastcall **)(CRegionShape *__hidden, unsigned int *))(*(_QWORD *)v20 + 32LL);
      v34 = v33 == CRegionShape::IsRectangles ? CRegionShape::IsRectangles(v20, v139) : v33(v20, v139);
      if ( v34 && v139[0] == 1 )
LABEL_47:
        v23 = 1;
      v138[0] = v23;
LABEL_49:
      if ( v17 >= 0 )
      {
        v35 = (CGdiSpriteBitmap *)*((_QWORD *)this + 100);
        v36 = *(__int64 (**)(void))(*(_QWORD *)v35 + 144LL);
        if ( (char *)v36 == (char *)CGdiSpriteBitmap::GetResource )
          Resource = CGdiSpriteBitmap::GetResource(v35);
        else
          Resource = (struct CResource *)v36();
        right = (int)v29 - *((_DWORD *)this + 223);
        v17 = 0;
        bottom = (int)v30 - *((_DWORD *)this + 225);
        *(_QWORD *)&v149 = Resource;
        v139[0] = (int)v24 + *((_DWORD *)this + 222);
        top = (int)v25 + *((_DWORD *)this + 224);
        v41 = v139[0];
        LODWORD(v140) = top;
        if ( right <= (int)v139[0] )
        {
          right = v139[0];
          v41 = v139[0];
        }
        if ( bottom <= top )
          bottom = top;
        if ( *((_DWORD *)this + 229) || *((_DWORD *)this + 231) || *((_DWORD *)this + 230) || *((_DWORD *)this + 232) )
        {
          v77 = *((_DWORD *)this + 231) + *((_DWORD *)this + 163);
          v78 = *((_DWORD *)this + 165) - *((_DWORD *)this + 232);
          v79 = *((_DWORD *)this + 229) + *((_DWORD *)this + 162);
          rcSrc1.right = *((_DWORD *)this + 164) - *((_DWORD *)this + 230);
          rcSrc1.top = v77;
          rcSrc1.bottom = v78;
          rcSrc1.left = v79;
          IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)((char *)this + 712));
          if ( EqualRect(&rcSrc1, (const RECT *)((char *)this + 712)) )
          {
            top = (int)v140;
            v41 = v139[0];
          }
          else
          {
            OffsetRect(&rcSrc1, -*((_DWORD *)this + 178), -*((_DWORD *)this + 179));
            if ( rcSrc1.left > (int)v139[0] )
              v139[0] = rcSrc1.left;
            top = (int)v140;
            if ( rcSrc1.top > (int)v140 )
              top = rcSrc1.top;
            if ( rcSrc1.right < right )
              right = rcSrc1.right;
            if ( rcSrc1.bottom < bottom )
              bottom = rcSrc1.bottom;
            v41 = v139[0];
            if ( right <= (int)v139[0] || bottom <= top )
            {
              bottom = 0;
              right = 0;
              top = 0;
              v41 = 0;
            }
          }
        }
        v42 = (float)v41;
        v43 = (float)top;
        v44 = (float)bottom;
        *(float *)&v148 = (float)v41;
        *((float *)&v148 + 1) = (float)top;
        *((float *)&v148 + 2) = (float)right;
        *((float *)&v148 + 3) = (float)bottom;
        if ( v138[0] )
        {
          v45 = *((_DWORD *)this + 226);
          if ( !*((_DWORD *)a3 + 223) )
          {
            v46 = 0;
            v140 = 0LL;
            if ( (_QWORD)v149 && (v45 & 2) == 0 )
            {
              if ( (v45 & 1) != 0 )
                goto LABEL_65;
              v71 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, CGdiSpriteBitmap **))v149)(
                      v149,
                      &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552,
                      &v140);
              v72 = v140;
              if ( v71 >= 0 )
              {
                v73 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v140 + 80LL);
                if ( v73 == CGdiSpriteBitmap::HasContent )
                {
                  HasContent = CGdiSpriteBitmap::HasContent(v140);
                }
                else
                {
                  HasContent = v73(v140);
                  v72 = v140;
                }
                if ( HasContent )
                {
                  v75 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v72 + 96LL);
                  if ( v75 == CGdiSpriteBitmap::IsOpaque )
                  {
                    IsOpaque = CGdiSpriteBitmap::IsOpaque(v72);
                  }
                  else
                  {
                    IsOpaque = v75(v72);
                    v72 = v140;
                  }
                  if ( IsOpaque )
                    v46 = 1;
                }
              }
              if ( v72 )
                (*(void (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v72 + 16LL))(v72);
            }
            if ( !v46 )
            {
LABEL_102:
              if ( v17 >= 0 )
                goto LABEL_11;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC5Au);
              goto LABEL_127;
            }
LABEL_65:
            v17 = 0;
            if ( (float)right <= v42 || v44 <= v43 )
              goto LABEL_89;
            v47 = *((_DWORD *)a3 + 4);
            v152 = 0;
            v146 = 0;
            if ( v47 )
            {
              v48 = (unsigned int)(v47 - 1);
              v49 = *((_QWORD *)a3 + 4);
              v50 = *(_OWORD *)(68 * v48 + v49 + 16);
              v142 = *(_OWORD *)(68 * v48 + v49);
              v51 = *(_OWORD *)(68 * v48 + v49 + 32);
              v143 = v50;
              v52 = *(_OWORD *)(68 * v48 + v49 + 48);
              v53 = *(_DWORD *)(68 * v48 + v49 + 64);
            }
            else
            {
              v53 = dword_1801EAD50;
              v142 = CMILMatrix::Identity;
              v51 = xmmword_1801EAD30;
              v143 = xmmword_1801EAD20;
              v52 = xmmword_1801EAD40;
            }
            v146 = v53;
            v145 = v52;
            v144 = v51;
            CMILMatrix::Transform2DBoundsHelper<0>(&v142, &v148, &v150);
            if ( *((_DWORD *)a3 + 16) )
            {
              v135 = *((_DWORD *)a3 + 16);
              if ( v135 )
                v149 = *(_OWORD *)(*((_QWORD *)a3 + 10) + 16LL * (unsigned int)(v135 - 1));
              v54 = *(float *)&v149;
              v55 = *((float *)&v149 + 1);
              v56 = *((float *)&v149 + 2);
              v57 = *((float *)&v149 + 3);
            }
            else
            {
              v54 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              v55 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
              v56 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
              v57 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
            }
            LODWORD(v58) = v150;
            if ( v54 > *(float *)&v150 )
              v58 = v54;
            v59 = *((float *)&v150 + 1);
            if ( v55 > *((float *)&v150 + 1) )
              v59 = v55;
            v60 = *((float *)&v150 + 2);
            if ( *((float *)&v150 + 2) > v56 )
              v60 = v56;
            v61 = *((float *)&v150 + 3);
            if ( *((float *)&v150 + 3) > v57 )
              v61 = v57;
            if ( v60 <= v58 || v61 <= v59 )
            {
              v61 = 0.0;
              v60 = 0.0;
              v59 = 0.0;
              v58 = 0.0;
            }
            v62 = *((_DWORD *)a3 + 232);
            v63 = -1;
            *((_QWORD *)&v151 + 1) = __PAIR64__(LODWORD(v61), LODWORD(v60));
            *(_QWORD *)&v151 = __PAIR64__(LODWORD(v59), LODWORD(v58));
            v64 = (float)(v61 - v59) * (float)(v60 - v58);
            if ( v62 )
              v63 = *(_DWORD *)(*((_QWORD *)a3 + 118) + 4LL * (unsigned int)(v62 - 1));
            v65 = *((_DWORD *)a3 + 124);
            v66 = 0;
            if ( !v65 )
              goto LABEL_89;
            while ( ((v63 >> v66) & 1) == 0 || v64 <= (float)(*((float *)a3 + v66 + 157) * 0.25) )
            {
              if ( ++v66 >= v65 )
                goto LABEL_89;
            }
            v67 = *((unsigned int *)a3 + 70);
            v68 = v67 + 1;
            if ( (int)v67 + 1 < (unsigned int)v67 )
            {
              v17 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
            }
            else
            {
              if ( v68 <= *((_DWORD *)a3 + 69) )
              {
                v69 = *v9;
                v70 = 5 * v67;
                *(_OWORD *)(v69 + 4 * v70) = v151;
                *(_DWORD *)(v69 + 4 * v70 + 16) = v152;
                *((_DWORD *)a3 + 70) = v68;
LABEL_89:
                if ( v17 >= 0 )
                  goto LABEL_11;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x56Du);
                goto LABEL_102;
              }
              v136 = DynArrayImpl<0>::AddMultipleAndSet((char *)a3 + 256, 20LL, 1LL, &v151);
              v17 = v136;
              if ( v136 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v136, 0xC0u);
            }
            if ( v17 >= 0 )
              goto LABEL_11;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x73Du);
            goto LABEL_89;
          }
        }
        else if ( v20 )
        {
          v80 = COcclusionContext::DrawClippedImage(
                  (__int64)a3,
                  v149,
                  (float *)&v148,
                  (__int64)v20,
                  *((_DWORD *)this + 226));
          v17 = v80;
          if ( v80 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v80, 0xC61u);
        }
LABEL_127:
        if ( v17 >= 0 )
          goto LABEL_11;
        v137 = 3110;
        goto LABEL_236;
      }
      v137 = 3104;
LABEL_236:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v137);
LABEL_11:
      if ( v141 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v141)(v141, 1LL);
      return (unsigned int)v17;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xBBDu);
    return (unsigned int)v11;
  }
}
