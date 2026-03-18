/*
 * XREFs of ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180052A00 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 * Callees:
 *     ?FindVisualFromHwnd@CWindowManager@@QEAAJPEAUHWND__@@PEAPEAVCVisual@@@Z @ 0x1800019EC (-FindVisualFromHwnd@CWindowManager@@QEAAJPEAUHWND__@@PEAPEAVCVisual@@@Z.c)
 *     ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x180001A50 (-CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180014240 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1800487D8 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800497D0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180049DC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004DB5C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetInflateSizeForAntiAliasing@CPreComputeContext@@AEBAMPEBVCVisual@@@Z @ 0x18004F2FC (-GetInflateSizeForAntiAliasing@CPreComputeContext@@AEBAMPEBVCVisual@@@Z.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800632E0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18007969C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079BB0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A8F80 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A9264 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?IsSimple3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1800F78C0 (-IsSimple3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18015AAC8 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18015AE74 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@0@Z @ 0x18015AEBC (-PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@0@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18015B910 (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::PostSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int VisualFromHwnd; // eax
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // r9
  char v18; // cl
  char v19; // al
  float *v20; // rdi
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r12d
  int v24; // eax
  CBaseMatrix *v25; // rbx
  __int64 v26; // r15
  __int64 (__fastcall *v27)(__int64, __int64, CBaseMatrix *, __int64, float *); // r14
  int v28; // eax
  int v29; // eax
  int v30; // eax
  float InflateSizeForAntiAliasing; // xmm0_4
  int v32; // eax
  float *v33; // rdx
  __m128 v34; // xmm6
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm0
  __int64 v38; // rcx
  __int64 v39; // rax
  float v40; // xmm13_4
  float v41; // xmm6_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm1_4
  float v51; // xmm1_4
  float v52; // xmm1_4
  float v53; // xmm3_4
  float v54; // xmm1_4
  float v55; // xmm1_4
  float v56; // xmm1_4
  float v57; // xmm1_4
  float v58; // xmm5_4
  float v59; // xmm2_4
  float v60; // xmm3_4
  float v61; // xmm4_4
  float v62; // xmm5_4
  float v63; // xmm3_4
  float v64; // xmm2_4
  float v65; // xmm4_4
  __int128 *v66; // rax
  unsigned int v67; // edx
  char v68; // r8
  unsigned int j; // ecx
  __int128 *v70; // rax
  float v71; // xmm8_4
  unsigned int v72; // edx
  char v73; // r8
  unsigned int i; // ecx
  float *v75; // rax
  float v76; // xmm1_4
  __int64 v77; // rcx
  float v78; // xmm6_4
  float v79; // xmm0_4
  float v80; // xmm0_4
  float v81; // xmm0_4
  float v82; // xmm0_4
  float v83; // xmm0_4
  float v84; // xmm0_4
  float v85; // xmm0_4
  float v86; // xmm0_4
  float v87; // xmm0_4
  float v88; // xmm0_4
  float v89; // xmm0_4
  int v90; // eax
  __int64 v91; // rdi
  int v92; // eax
  __int64 v93; // r8
  unsigned __int8 v94; // dl
  unsigned __int8 v95; // cl
  unsigned int v96; // ecx
  _QWORD *v97; // rcx
  __int64 v98; // rax
  unsigned int v99; // edx
  int v100; // ebx
  unsigned int v101; // edi
  int v102; // eax
  char v103; // al
  CVisual *v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  unsigned int v107; // edx
  __int64 v108; // rcx
  __int64 v109; // rax
  int v110; // r14d
  int v111; // eax
  int v112; // eax
  int v113; // ebx
  bool v114; // al
  __int64 v115; // rax
  struct CBspNode *v116; // rdx
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  __int64 v121; // rdi
  __int64 v122; // rax
  char v123; // cl
  struct CVisual *v124; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v125; // [rsp+38h] [rbp-C8h]
  __int128 v126; // [rsp+40h] [rbp-C0h] BYREF
  int v127; // [rsp+50h] [rbp-B0h]
  float v128; // [rsp+54h] [rbp-ACh]
  __int128 v129; // [rsp+58h] [rbp-A8h] BYREF
  __m128 v130; // [rsp+70h] [rbp-90h] BYREF
  __int128 v131; // [rsp+80h] [rbp-80h]
  __m256i v132; // [rsp+90h] [rbp-70h]
  __int64 v133; // [rsp+B0h] [rbp-50h]
  __int64 v134; // [rsp+B8h] [rbp-48h]
  __m128 v135; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v136; // [rsp+D0h] [rbp-30h]
  __int128 v137; // [rsp+E0h] [rbp-20h]
  __int128 v138; // [rsp+F0h] [rbp-10h]

  *a3 = 1;
  v4 = *((_QWORD *)this + 26);
  v5 = 0LL;
  v6 = *((_QWORD *)this + 25);
  *(_QWORD *)&v126 = v4;
  v125 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    v5 = v6 + 432;
    v125 = v6 + 432;
  }
  if ( (*(_BYTE *)(v6 + 72) & 1) != 0 )
  {
    if ( (*(_BYTE *)(v6 + 74) & 8) != 0
      && !(unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v6 + 164) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v7, &EVTDESC_PROCESS_VISUAL_FIRSTFRAME, v6);
      *(_BYTE *)(v6 + 74) &= ~8u;
    }
    v8 = CVisual::ConvertInnerToOuterBounds((CVisual *)v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x185u);
      return v9;
    }
    v11 = *((_QWORD *)this + 1);
    v124 = 0LL;
    if ( *(int *)(v11 + 1000) >= 2 )
    {
      v12 = *(_QWORD *)(v6 + 208);
      if ( v12 )
      {
        VisualFromHwnd = CWindowManager::FindVisualFromHwnd(*(CWindowManager **)(v11 + 48), v12, &v124);
        if ( VisualFromHwnd >= 0 )
        {
          v14 = (*(__int64 (__fastcall **)(struct CVisual *, __int128 *))(*(_QWORD *)v124 + 200LL))(v124, &v129);
          if ( v14 >= 0 )
          {
            v15 = 0;
            v16 = *((_DWORD *)qword_1801A39E0 + 10);
            if ( v16 )
            {
              v17 = *((_QWORD *)qword_1801A39E0 + 2);
              while ( *(_QWORD *)(*(_QWORD *)(v17 + 8LL * v15) + 16LL) != *(_QWORD *)(v6 + 208) )
              {
                if ( ++v15 >= v16 )
                  goto LABEL_24;
              }
              *(_OWORD *)(*(_QWORD *)(v17 + 8LL * v15) + 24LL) = v129;
            }
LABEL_24:
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0xF8Fu);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xF8Cu);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualFromHwnd, 0xF8Au);
        }
      }
    }
  }
  if ( v4 )
  {
    v18 = *(_BYTE *)(v4 + 72) | *(_BYTE *)(v6 + 72) & 0x10;
    *(_BYTE *)(v4 + 72) = v18;
    v19 = v18 | *(_BYTE *)(v6 + 72) & 0x20;
    *(_BYTE *)(v4 + 72) = v19;
    if ( (v19 & 1) != 0 )
      TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        v4 + 164,
        v6 + 140);
    if ( v5 && (*(_BYTE *)(v5 + 264) & 2) != 0 )
      *(_BYTE *)(v4 + 696) |= 2u;
  }
  if ( (*(_BYTE *)(v6 + 72) & 8) != 0 )
  {
    v20 = 0LL;
    if ( *((_DWORD *)this + 38) )
    {
      v21 = *((_DWORD *)this + 38);
      if ( v21 )
        v129 = *(_OWORD *)(*((_QWORD *)this + 21) + 16LL * (unsigned int)(v21 - 1));
      v20 = (float *)&v129;
    }
    v22 = *((_DWORD *)this + 4);
    if ( !v22 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1BAu);
      return 2147500037LL;
    }
    v23 = *(_DWORD *)(*((_QWORD *)this + 4) + 4LL * (unsigned int)(v22 - 1));
    v24 = *((_DWORD *)this + 28);
    if ( v24 )
      v25 = (CBaseMatrix *)(*((_QWORD *)this + 16) + ((unsigned __int64)(unsigned int)(v24 - 1) << 6));
    else
      v25 = (CBaseMatrix *)&IdentityMatrix;
    v26 = *((_QWORD *)this + 43);
    v27 = *(__int64 (__fastcall **)(__int64, __int64, CBaseMatrix *, __int64, float *))(*(_QWORD *)v6 + 232LL);
    if ( v27 == CVisual::CollectAdditionalDirtyRegion )
    {
      v28 = CVisual::CollectAdditionalDirtyRegion(v6, v26, v25, v23, v20);
    }
    else if ( (char *)v27 == (char *)CWindowNode::CollectAdditionalDirtyRegion )
    {
      v28 = CWindowNode::CollectAdditionalDirtyRegion(v6, v26, v25, v23, v20);
    }
    else
    {
      v28 = v27(v6, v26, v25, v23, v20);
    }
    v9 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x1BFu);
      return v9;
    }
    v4 = v126;
  }
  if ( (*(_BYTE *)(v6 + 73) & 1) != 0 )
  {
    v29 = *((_DWORD *)this + 28);
    if ( v29 )
      *((_DWORD *)this + 28) = v29 - 1;
  }
  if ( (*(_BYTE *)(v6 + 73) & 2) != 0 )
  {
    v30 = *((_DWORD *)this + 38);
    if ( v30 )
      *((_DWORD *)this + 38) = v30 - 1;
  }
  if ( (*(_BYTE *)(v6 + 72) & 4) != 0 )
  {
    --*(_DWORD *)(*((_QWORD *)this + 43) + 992LL);
    InflateSizeForAntiAliasing = CPreComputeContext::GetInflateSizeForAntiAliasing(this, (const struct CVisual *)v6);
    v32 = *((_DWORD *)this + 28);
    v33 = (float *)(v6 + 140);
    *(float *)&v124 = InflateSizeForAntiAliasing;
    if ( v32 )
    {
      v38 = (unsigned int)(v32 - 1);
      v39 = *((_QWORD *)this + 16);
      v38 <<= 6;
      v34 = *(__m128 *)(v38 + v39);
      v35 = *(_OWORD *)(v38 + v39 + 16);
      v36 = *(_OWORD *)(v38 + v39 + 32);
      v37 = *(_OWORD *)(v38 + v39 + 48);
    }
    else
    {
      v34 = (__m128)IdentityMatrix;
      v35 = xmmword_18019E9C0;
      v36 = xmmword_18019E9D0;
      v37 = xmmword_18019E9E0;
    }
    v137 = v36;
    v40 = *(float *)&v36;
    v138 = v37;
    *(_OWORD *)&v132.m256i_u64[2] = v37;
    v135 = v34;
    v136 = v35;
    v130 = v34;
    v41 = _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
    *(_OWORD *)v132.m256i_i8 = v36;
    v131 = v35;
    v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v41) & _xmm);
    if ( v42 >= 0.00012207031 )
      goto LABEL_115;
    v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v35 + 2)) & _xmm);
    if ( v43 >= 0.00012207031
      || (v44 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v37 + 2)) & _xmm), v44 >= 0.00012207031) )
    {
      if ( v42 >= 0.00012207031 )
        goto LABEL_115;
      v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v35 + 2)) & _xmm);
      if ( v45 >= 0.00012207031 )
        goto LABEL_115;
      v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v40) & _xmm);
      if ( v46 >= 0.00012207031 )
        goto LABEL_115;
      v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v36 + 1)) & _xmm);
      if ( v47 >= 0.00012207031 )
        goto LABEL_115;
      v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v36 + 2) - 1.0)) & _xmm);
      if ( v48 >= 0.00012207031 )
      {
        v49 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v36 + 2)) & _xmm);
        if ( v49 >= 0.00012207031 )
          goto LABEL_115;
      }
      v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v36 + 3)) & _xmm);
      if ( v50 >= 0.00012207031 )
        goto LABEL_115;
      v51 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v37 + 2)) & _xmm);
      if ( v51 >= 0.00012207031 )
        goto LABEL_115;
    }
    v52 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v35 + 3)) & _xmm);
    v53 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v34.m128_f32[3]) & _xmm) * 40960.0)
        + (float)(v52 * 40960.0);
    v54 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v138 + 3)) & _xmm);
    v55 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v53 + v54) - 1.0)) & _xmm);
    if ( v55 >= 0.00012207031
      || (v56 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v6 + 160)) & _xmm), v56 >= 0.00012207031)
      || (v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v6 + 156)) & _xmm), v57 >= 0.00012207031) )
    {
LABEL_115:
      if ( v135.m128_f32[0] == 1.0
        && v135.m128_f32[1] == 0.0
        && v41 == 0.0
        && v34.m128_f32[3] == 0.0
        && *(float *)&v136 == 0.0
        && *((float *)&v136 + 1) == 1.0
        && *((float *)&v35 + 2) == 0.0
        && *((float *)&v35 + 3) == 0.0
        && v40 == 0.0
        && *((float *)&v36 + 1) == 0.0
        && *((float *)&v36 + 2) == 1.0
        && *((float *)&v36 + 3) == 0.0 )
      {
        v70 = &v126;
        v62 = *(float *)&v138 + *v33;
        v64 = *(float *)&v138 + *(float *)(v6 + 148);
        v63 = *((float *)&v138 + 1) + *(float *)(v6 + 144);
        *(float *)&v37 = *((float *)&v37 + 2) + *(float *)(v6 + 156);
        v65 = *((float *)&v138 + 1) + *(float *)(v6 + 152);
        v71 = *((float *)&v37 + 2) + *(float *)(v6 + 160);
        *(float *)&v126 = v62;
        v72 = 6;
        *(_QWORD *)((char *)&v126 + 4) = __PAIR64__(LODWORD(v64), LODWORD(v63));
        v73 = 1;
        v127 = v37;
        *((float *)&v126 + 3) = v65;
        v128 = v71;
      }
      else
      {
        CBaseMatrix::Transform3DRectToPerspective(v130.m128_f32, v33, v135.m128_f32);
        v65 = *((float *)&v126 + 3);
        v70 = (__int128 *)&v135;
        v64 = *((float *)&v126 + 2);
        v72 = 24;
        v63 = *((float *)&v126 + 1);
        v73 = 0;
        LODWORD(v62) = v126;
      }
      for ( i = 0; i < v72; ++i )
        v70 = (__int128 *)((char *)v70 + 4);
      if ( !v73 )
      {
        v75 = &v135.m128_f32[1];
        v76 = FLOAT_3_4028235e38;
        v77 = 2LL;
        v78 = FLOAT_N3_4028235e38;
        v126 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
        v65 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
        v64 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
        v63 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
        LODWORD(v62) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
        do
        {
          v79 = *(v75 - 1);
          if ( v62 > v79 )
            v62 = *(v75 - 1);
          if ( v79 > v64 )
            v64 = *(v75 - 1);
          if ( v63 > *v75 )
            v63 = *v75;
          if ( *v75 > v65 )
            v65 = *v75;
          v80 = v75[1];
          if ( v76 > v80 )
            v76 = v75[1];
          if ( v80 > v78 )
            v78 = v75[1];
          v81 = v75[2];
          if ( v62 > v81 )
            v62 = v75[2];
          if ( v81 > v64 )
            v64 = v75[2];
          v82 = v75[3];
          if ( v63 > v82 )
            v63 = v75[3];
          if ( v82 > v65 )
            v65 = v75[3];
          v83 = v75[4];
          if ( v76 > v83 )
            v76 = v75[4];
          if ( v83 > v78 )
            v78 = v75[4];
          v84 = v75[5];
          if ( v62 > v84 )
            v62 = v75[5];
          if ( v84 > v64 )
            v64 = v75[5];
          v85 = v75[6];
          if ( v63 > v85 )
            v63 = v75[6];
          if ( v85 > v65 )
            v65 = v75[6];
          v86 = v75[7];
          if ( v76 > v86 )
            v76 = v75[7];
          if ( v86 > v78 )
            v78 = v75[7];
          v87 = v75[8];
          if ( v62 > v87 )
            v62 = v75[8];
          if ( v87 > v64 )
            v64 = v75[8];
          v88 = v75[9];
          if ( v63 > v88 )
            v63 = v75[9];
          if ( v88 > v65 )
            v65 = v75[9];
          v89 = v75[10];
          if ( v76 > v89 )
            v76 = v75[10];
          if ( v89 > v78 )
            v78 = v75[10];
          v75 += 12;
          --v77;
        }
        while ( v77 );
      }
    }
    else
    {
      v58 = *v33;
      v59 = *(float *)(v6 + 148);
      v60 = *(float *)(v6 + 144);
      v61 = *(float *)(v6 + 152);
      *(float *)&v126 = *v33;
      *(_QWORD *)((char *)&v126 + 4) = __PAIR64__(LODWORD(v59), LODWORD(v60));
      *((float *)&v126 + 3) = v61;
      if ( v135.m128_f32[0] == 1.0
        && v135.m128_f32[1] == 0.0
        && v41 == 0.0
        && v34.m128_f32[3] == 0.0
        && *(float *)&v136 == 0.0
        && *((float *)&v136 + 1) == 1.0
        && *((float *)&v35 + 2) == 0.0
        && *((float *)&v35 + 3) == 0.0
        && v40 == 0.0
        && *((float *)&v36 + 1) == 0.0
        && *((float *)&v36 + 2) == 1.0
        && *((float *)&v36 + 3) == 0.0 )
      {
        v62 = v58 + *(float *)&v138;
        v63 = v60 + *((float *)&v138 + 1);
        v64 = v59 + *(float *)&v138;
        v65 = v61 + *((float *)&v138 + 1);
        v66 = &v126;
        v67 = 4;
        *(_QWORD *)&v126 = __PAIR64__(LODWORD(v63), LODWORD(v62));
        v68 = 1;
        *((_QWORD *)&v126 + 1) = __PAIR64__(LODWORD(v65), LODWORD(v64));
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)&v130,
          (const struct MilRectF *)&v126,
          (struct MilPoint2F *const)&v135);
        v65 = *((float *)&v126 + 3);
        v66 = (__int128 *)&v135;
        v64 = *((float *)&v126 + 2);
        v68 = 0;
        v63 = *((float *)&v126 + 1);
        v67 = 8;
        LODWORD(v62) = v126;
      }
      for ( j = 0; j < v67; ++j )
        v66 = (__int128 *)((char *)v66 + 4);
      if ( !v68 )
      {
        v64 = v135.m128_f32[2];
        *(_QWORD *)&v126 = v135.m128_u64[0];
        *(_QWORD *)&v129 = v135.m128_u64[0];
        if ( v135.m128_f32[0] <= v135.m128_f32[2] )
          LODWORD(v62) = v129;
        else
          v62 = v135.m128_f32[2];
        v63 = *((float *)&v129 + 1);
        if ( *((float *)&v129 + 1) > v135.m128_f32[3] )
          v63 = v135.m128_f32[3];
        if ( v135.m128_f32[2] <= v135.m128_f32[0] )
          LODWORD(v64) = v126;
        v65 = *((float *)&v126 + 1);
        if ( v135.m128_f32[3] > *((float *)&v126 + 1) )
          v65 = v135.m128_f32[3];
        if ( v62 > *(float *)&v136 )
          LODWORD(v62) = v136;
        if ( v63 > *((float *)&v136 + 1) )
          v63 = *((float *)&v136 + 1);
        if ( *(float *)&v136 > v64 )
          LODWORD(v64) = v136;
        if ( *((float *)&v136 + 1) > v65 )
          v65 = *((float *)&v136 + 1);
        if ( v62 > *((float *)&v136 + 2) )
          v62 = *((float *)&v136 + 2);
        if ( v63 > *((float *)&v136 + 3) )
          v63 = *((float *)&v136 + 3);
        if ( *((float *)&v136 + 2) > v64 )
          v64 = *((float *)&v136 + 2);
        if ( *((float *)&v136 + 3) > v65 )
          v65 = *((float *)&v136 + 3);
      }
    }
    *(_QWORD *)&v126 = __PAIR64__(LODWORD(v63), LODWORD(v62));
    *((_QWORD *)&v126 + 1) = __PAIR64__(LODWORD(v65), LODWORD(v64));
    if ( *(float *)&v124 > 0.0 && v64 > v62 && v65 > v63 )
    {
      v62 = v62 - *(float *)&v124;
      v63 = v63 - *(float *)&v124;
      *(_QWORD *)&v126 = __PAIR64__(LODWORD(v63), LODWORD(v62));
      v64 = *(float *)&v124 + v64;
      v65 = *(float *)&v124 + v65;
      *((_QWORD *)&v126 + 1) = __PAIR64__(LODWORD(v65), LODWORD(v64));
    }
    if ( *((_DWORD *)this + 38) )
    {
      v90 = *((_DWORD *)this + 38);
      if ( v90 )
        v129 = *(_OWORD *)(*((_QWORD *)this + 21) + 16LL * (unsigned int)(v90 - 1));
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v126, (__int64)&v129);
      v65 = *((float *)&v126 + 3);
      v64 = *((float *)&v126 + 2);
      v63 = *((float *)&v126 + 1);
      LODWORD(v62) = v126;
    }
    v9 = 0;
    v91 = *((_QWORD *)this + 43);
    if ( *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v62
      && v64 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
      || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v63
      && v65 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
    {
      CDirtyRegion::SetFullDirty(*((CDirtyRegion **)this + 43));
    }
    if ( !*(_BYTE *)(v91 + 1012) && !*(_DWORD *)(v91 + 992) )
    {
      v92 = CDirtyRegion::_Add((CDirtyRegion *)v91);
      v9 = v92;
      if ( v92 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v92, 0x1C3u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x255u);
      }
    }
    if ( (v9 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1DFu);
      return v9;
    }
  }
  v93 = v125;
  if ( v125 )
  {
    *(_BYTE *)(v125 + 264) &= ~1u;
    v94 = *(_BYTE *)(v6 + 73);
    if ( (v94 & 4) != 0 )
    {
      v95 = *(_BYTE *)(v6 + 696);
      if ( ((v95 ^ (v94 >> 2)) & 2) != 0 )
      {
        *(_QWORD *)&v126 = *(_QWORD *)(v6 + 208);
        v96 = v94 ^ (v94 ^ (unsigned __int8)(4 * v95)) & 8;
        *(_BYTE *)(v6 + 73) = v96;
        DWORD2(v126) = (v96 >> 3) & 1;
        v97 = (_QWORD *)((char *)this + 280);
        v98 = *((unsigned int *)this + 76);
        v99 = v98 + 1;
        if ( (int)v98 + 1 < (unsigned int)v98 )
        {
          v100 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v101 = -2147024362;
LABEL_211:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v100, 0x1EFu);
          return v101;
        }
        if ( v99 > *((_DWORD *)this + 75) )
        {
          v102 = DynArrayImpl<0>::AddMultipleAndSet(v97, 16LL, 1LL, &v126);
          v100 = v102;
          if ( v102 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v102, 0xC0u);
          v101 = v100;
          if ( v100 < 0 )
            goto LABEL_211;
          v93 = v125;
        }
        else
        {
          *(_OWORD *)(*v97 + 16 * v98) = v126;
          *((_DWORD *)this + 76) = v99;
        }
      }
    }
    v103 = *(_BYTE *)(v93 + 264);
    if ( (v103 & 4) != 0 )
    {
      v104 = *(CVisual **)(v93 + 24);
      *(_BYTE *)(v93 + 264) = v103 & 0xFB;
      v130.m128_u64[0] = (unsigned __int64)CVisual::GetInputHandle(v104);
      CInputManager::CopyTransform(
        (const struct CMILMatrix *)(v105 + 40),
        (struct tagINPUT_TRANSFORM *)&v130.m128_u16[4]);
      v106 = *((unsigned int *)this + 84);
      v107 = v106 + 1;
      if ( (int)v106 + 1 < (unsigned int)v106 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v101 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x1F8u);
        return v101;
      }
      if ( v107 > *((_DWORD *)this + 83) )
      {
        v112 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 312, 72LL, 1LL, &v130);
        v113 = v112;
        if ( v112 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v112, 0xC0u);
        v101 = v113;
        if ( v113 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v113, 0x1F8u);
          return v101;
        }
      }
      else
      {
        v108 = 9 * v106;
        v109 = *((_QWORD *)this + 39);
        *(__m128 *)(v109 + 8 * v108) = v130;
        *(_OWORD *)(v109 + 8 * v108 + 16) = v131;
        *(__m256i *)(v109 + 8 * v108 + 32) = v132;
        *(_QWORD *)(v109 + 8 * v108 + 64) = v133;
        *((_DWORD *)this + 84) = v107;
      }
    }
  }
  v110 = 0;
  if ( *((_DWORD *)this + 112)
    && CVisual::IsSimple3DRoot((CVisual *)v6, (const struct CVisual *)v4)
    && (v111 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
                 (CPreComputeContext *)((char *)this + 352),
                 (struct CVisual *)v6,
                 1),
        v110 = v111,
        v111 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v111, 0x15Au);
  }
  else
  {
    v114 = v4 && *(_DWORD *)(v4 + 84) == 1;
    if ( *(_DWORD *)(v6 + 84) == 1
      && !v114
      && ((v115 = *(_QWORD *)(v6 + 56), (v115 & 2) == 0)
        ? (LODWORD(v115) = v115 & 1)
        : (v115 = *(_QWORD *)(v115 & 0xFFFFFFFFFFFFFFFCuLL)),
          (_DWORD)v115) )
    {
      CVisual::ReleaseBspPolygonList((CVisual *)v6);
      *(__int64 *)((char *)&v132.m256i_i64[1] + 4) = 0LL;
      v130.m128_u64[0] = (unsigned __int64)&CBspPolygonListBuilder::`vftable';
      v131 = 0LL;
      v132.m256i_i64[3] = 0LL;
      LODWORD(v133) = 0;
      *(__int64 *)((char *)v132.m256i_i64 + 4) = 1LL;
      v130.m128_i32[3] = 0;
      v134 = v6;
      v116 = *(struct CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((char *)this + 352);
      if ( v116
        && (v117 = CBspPolygonListBuilder::BuildPolygonList((CBspPolygonListBuilder *)&v130, v116), v110 = v117, v117 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v117, 0x166u);
      }
      else
      {
        CBspPreComputeHelper::PopStacks(
          (CPreComputeContext *)((char *)this + 352),
          (const struct CVisual *)v6,
          (const struct CVisual *)v4);
      }
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v132.m256i_i64[3]);
    }
    else if ( v4 && *(_DWORD *)(v4 + 84) == 1 )
    {
      CBspPreComputeHelper::PopStacks(
        (CPreComputeContext *)((char *)this + 352),
        (const struct CVisual *)v6,
        (const struct CVisual *)v4);
    }
  }
  if ( v110 >= 0 )
  {
    if ( (*(_BYTE *)(v6 + 76) & 2) != 0 )
    {
      v118 = *((_DWORD *)this + 4);
      if ( v118 )
        *((_DWORD *)this + 4) = v118 - 1;
    }
    if ( (*(_BYTE *)(v6 + 76) & 8) != 0 )
    {
      v119 = *((_DWORD *)this + 12);
      if ( v119 )
        *((_DWORD *)this + 12) = v119 - 1;
    }
    if ( *(char *)(v6 + 76) < 0 )
    {
      v120 = *((_DWORD *)this + 20);
      if ( v120 )
        *((_DWORD *)this + 20) = v120 - 1;
    }
    v121 = *(_QWORD *)(v6 + 392);
    if ( !v121 )
      goto LABEL_263;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v121 + 48LL))(*(_QWORD *)(v6 + 392), 24LL) )
    {
      v122 = *(_QWORD *)(v6 + 392);
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 392) + 48LL))(
              *(_QWORD *)(v6 + 392),
              8LL) )
      {
LABEL_263:
        v123 = *(_BYTE *)(v6 + 73);
        *(_BYTE *)(v6 + 72) &= 0xF0u;
        *(_BYTE *)(v6 + 73) = v123 & 0xFC;
        return (unsigned int)v110;
      }
      v122 = *(_QWORD *)(*(_QWORD *)(v6 + 392) + 72LL);
    }
    if ( v122 )
      --*((_DWORD *)this + 46);
    goto LABEL_263;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v110, 0x1FCu);
  return (unsigned int)v110;
}
