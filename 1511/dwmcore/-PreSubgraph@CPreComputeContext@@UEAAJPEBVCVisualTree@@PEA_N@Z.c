/*
 * XREFs of ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180052A00 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800062E4 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800064E8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x1800090C4 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180014240 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1800487D8 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x180048CB0 (-ClearContentTreeDataCaches@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048E40 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E68 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x18004E7C0 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800629E0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180067DFC (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18007969C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079BB0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180091E00 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180094860 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1800A2670 (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800A45C0 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     ?IsSimple3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1800F78C0 (-IsSimple3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18013FB00 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18015AAC8 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B2F0 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18015B4A4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::PreSubgraph(
        CPreComputeContext *this,
        const struct CVisualTree *a2,
        struct CManipulationManager *a3)
{
  struct CVisual *v3; // rax
  __int64 v4; // r15
  struct CManipulationManager *v5; // rdi
  __int64 *v6; // rbx
  char v7; // r8
  const struct CVisualTree *v8; // r9
  CPreComputeContext *v9; // rsi
  __int64 *v10; // rax
  int v11; // r13d
  __int64 *v12; // r12
  unsigned int v13; // eax
  void *v14; // rbx
  int v15; // r14d
  int v16; // r13d
  unsigned __int64 v17; // r12
  int v18; // eax
  unsigned __int64 v19; // rax
  const void *v20; // rdx
  void *v21; // rsi
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  void (*v24)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  int v25; // eax
  int v26; // eax
  int v27; // edx
  __int64 v28; // r8
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __m128 v32; // xmm8
  float v33; // xmm4_4
  float v34; // xmm1_4
  float v35; // xmm5_4
  float v36; // xmm0_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm0_4
  bool v44; // di
  char v45; // bl
  __int64 v46; // rax
  __int64 v47; // rbx
  unsigned int v48; // r13d
  bool (__fastcall *v49)(__int64, int); // rdi
  __int64 v50; // rax
  bool (__fastcall *v51)(__int64, int); // rbx
  char v52; // bl
  char v53; // al
  float v54; // xmm0_4
  struct CManipulationManager *v55; // rdi
  _BOOL8 (__fastcall *v56)(CVisual *); // rdi
  __int64 v57; // rsi
  bool v58; // di
  __int64 (__fastcall *v59)(_QWORD, __int64); // r14
  char v60; // al
  __int64 v61; // rax
  __int64 v62; // rcx
  bool v63; // al
  char v64; // al
  float v65; // xmm7_4
  __int64 v66; // rax
  int v67; // eax
  float *v68; // rdx
  __m128 v69; // xmm6
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm2
  __int64 v73; // rcx
  __int64 v74; // rax
  float v75; // xmm12_4
  float v76; // xmm6_4
  float v77; // xmm2_4
  float v78; // xmm1_4
  float v79; // xmm1_4
  float v80; // xmm1_4
  float v81; // xmm1_4
  float v82; // xmm1_4
  float v83; // xmm2_4
  float v84; // xmm1_4
  float v85; // xmm1_4
  float v86; // xmm1_4
  float v87; // xmm1_4
  float v88; // xmm3_4
  float v89; // xmm1_4
  float v90; // xmm1_4
  float v91; // xmm1_4
  float v92; // xmm1_4
  float v93; // xmm2_4
  float v94; // xmm5_4
  float v95; // xmm7_4
  float v96; // xmm8_4
  __int128 *v97; // rax
  char v98; // dl
  float v99; // xmm4_4
  unsigned int v100; // r8d
  float v101; // xmm1_4
  float v102; // xmm3_4
  unsigned int j; // ecx
  float *v104; // rax
  float v105; // xmm0_4
  float v106; // xmm7_4
  char v107; // dl
  unsigned int i; // ecx
  float *v109; // rax
  float v110; // xmm5_4
  __int64 v111; // rcx
  float v112; // xmm6_4
  float v113; // xmm0_4
  float v114; // xmm0_4
  float v115; // xmm0_4
  float v116; // xmm0_4
  float v117; // xmm0_4
  float v118; // xmm0_4
  float v119; // xmm0_4
  float v120; // xmm0_4
  float v121; // xmm0_4
  float v122; // xmm0_4
  float v123; // xmm0_4
  int v124; // eax
  __int64 v125; // rbx
  int v126; // eax
  __int64 v127; // rax
  __m128 *v128; // r13
  __int64 v129; // r11
  __int64 v130; // rsi
  int v131; // ebx
  _QWORD *v132; // r14
  struct CWeakReferenceBase *v133; // rdx
  char v134; // r12
  __int64 **TreeData; // rbx
  __int64 v136; // r11
  char IsPreserve3D; // di
  const struct CVisual **v138; // r9
  CVisual *v139; // rdx
  CVisual *v140; // r10
  CVisual *v141; // r11
  __int64 v142; // rdx
  _QWORD *v143; // rax
  _QWORD *v144; // rdx
  _QWORD *v145; // rax
  unsigned __int64 v146; // rax
  _OWORD *v147; // rdi
  float *v148; // rax
  bool v149; // r12
  float *v150; // rdi
  int v151; // eax
  char v152; // cl
  __int128 v153; // xmm1
  bool v154; // cl
  __int128 v155; // xmm1
  __m128 *v156; // rax
  __m128 v157; // xmm1
  __m128 v158; // xmm0
  __m128 v159; // xmm1
  __int64 *v160; // rsi
  __int64 v161; // rax
  bool v162; // zf
  __int64 *v163; // r12
  __int64 v164; // r13
  __int64 v165; // rax
  __int64 v166; // rdi
  int v167; // eax
  void (__fastcall ***v168)(__int64, __int64); // r13
  __int64 *v169; // rdi
  const struct D2DMatrix *v170; // rcx
  __int64 v171; // rcx
  __int64 v172; // r8
  int v173; // eax
  __int64 v174; // rax
  int v175; // eax
  float v176; // xmm3_4
  float v177; // xmm4_4
  float v178; // xmm5_4
  float v179; // xmm6_4
  float v180; // xmm3_4
  float v181; // xmm1_4
  float v182; // xmm2_4
  float v183; // xmm0_4
  unsigned __int64 v184; // rbx
  int v185; // eax
  unsigned __int64 v186; // rdx
  int v187; // r8d
  struct CVisual *v188; // rdi
  CBspPreComputeHelper *v189; // rbx
  bool v190; // al
  int v191; // eax
  int v192; // eax
  int v193; // eax
  int v194; // eax
  __int64 v195; // rax
  __int64 v196; // r12
  __int64 (__fastcall *v197)(CWindowNode *); // rbx
  __int64 v198; // rsi
  int v199; // eax
  int ContentBounds; // eax
  __int128 v201; // xmm0
  void **v203; // [rsp+20h] [rbp-E0h]
  unsigned int v204; // [rsp+20h] [rbp-E0h]
  bool v205[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v206; // [rsp+38h] [rbp-C8h]
  struct CManipulationManager *v207; // [rsp+40h] [rbp-C0h] BYREF
  void *v208; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisual *v209; // [rsp+50h] [rbp-B0h]
  __int128 v210; // [rsp+58h] [rbp-A8h] BYREF
  float v211; // [rsp+68h] [rbp-98h]
  float v212; // [rsp+6Ch] [rbp-94h]
  __m128 v213; // [rsp+70h] [rbp-90h] BYREF
  __int128 v214; // [rsp+80h] [rbp-80h]
  __int128 v215; // [rsp+90h] [rbp-70h]
  __int128 v216; // [rsp+A0h] [rbp-60h]
  __int128 v217; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v218[2]; // [rsp+C0h] [rbp-40h] BYREF
  __m128 Buf2; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v220; // [rsp+F0h] [rbp-10h]
  __int128 v221; // [rsp+100h] [rbp+0h]
  __int128 v222; // [rsp+110h] [rbp+10h]
  _OWORD v223[4]; // [rsp+120h] [rbp+20h] BYREF
  float v224; // [rsp+160h] [rbp+60h] BYREF
  char v225; // [rsp+164h] [rbp+64h] BYREF

  v3 = (struct CVisual *)*((_QWORD *)this + 26);
  v4 = *((_QWORD *)this + 25);
  v5 = a3;
  v207 = a3;
  v6 = 0LL;
  v7 = *((_BYTE *)a2 + 32);
  v8 = a2;
  *(_QWORD *)&v218[0] = 0LL;
  v9 = this;
  *(_QWORD *)&v217 = a2;
  v206 = (unsigned __int64)this;
  v209 = v3;
  if ( v7 )
  {
    v6 = (__int64 *)(v4 + 432);
  }
  else
  {
    v10 = *(__int64 **)(v4 + 416);
    if ( v10 == (__int64 *)(v4 + 416) )
      goto LABEL_9;
    while ( (const struct CVisualTree *)v10[4] != a2 )
    {
      v10 = (__int64 *)*v10;
      if ( v10 == (__int64 *)(v4 + 416) )
        goto LABEL_9;
    }
    v6 = v10 - 33;
  }
  *(_QWORD *)&v218[0] = v6;
LABEL_9:
  *(_BYTE *)v5 = 0;
  v11 = *(_DWORD *)(v4 + 76);
  v12 = 0LL;
  if ( v7 )
    v12 = v6;
  *(_QWORD *)&v210 = v12;
  if ( (v11 & 2) == 0 )
  {
LABEL_31:
    if ( (*(_BYTE *)(v4 + 76) & 8) != 0 )
    {
      LODWORD(v208) = *(_DWORD *)(v4 + 188);
      v25 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)v9 + 48, &v208);
      v15 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xA3u);
        return (unsigned int)v15;
      }
    }
    if ( *(char *)(v4 + 76) < 0 )
    {
      LODWORD(v208) = *(_DWORD *)(v4 + 204);
      v26 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)v9 + 80, &v208);
      v15 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xA9u);
        return (unsigned int)v15;
      }
    }
    v27 = *((_DWORD *)v9 + 20);
    v28 = 0LL;
    v29 = 0LL;
    if ( v27 )
      v29 = (_DWORD *)(*((_QWORD *)v9 + 12) + 4LL * (unsigned int)(v27 - 1));
    if ( *(_DWORD *)(v4 + 84) != *v29 )
    {
      *(_DWORD *)(v4 + 84) = *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)v9 + 80);
      CVisual::OnOuterTransformChanged((CVisual *)v4);
      v28 = 0LL;
    }
    if ( *(_DWORD *)(v4 + 84) == 1 )
      *(_BYTE *)v5 = 1;
    v30 = *((_QWORD *)v9 + 43);
    if ( !*(_BYTE *)(v30 + 1012) && !*(_DWORD *)(v30 + 992) )
      v6[1] = *(_QWORD *)(*((_QWORD *)v9 + 1) + 352LL);
    if ( v12 && (v12[33] & 1) != 0 )
      *(_BYTE *)v5 = 1;
    if ( *((_QWORD *)v9 + 26) && (*(_BYTE *)(*(_QWORD *)(v4 + 64) + 72LL) & 1) == 0 )
    {
      v32 = 0LL;
    }
    else
    {
      v31 = *(_QWORD *)(v4 + 64);
      v32 = 0LL;
      v33 = *(float *)(v4 + 108);
      v34 = 0.0;
      v35 = *(float *)(v4 + 112);
      v36 = 0.0;
      v37 = *(float *)(v4 + 132);
      v38 = *(float *)(v4 + 136);
      if ( v31 )
      {
        v34 = *(float *)(v31 + 132);
        v36 = *(float *)(v31 + 136);
      }
      v39 = v34;
      v40 = (float)(v34 * *(float *)(v4 + 124)) + *(float *)(v4 + 116);
      v41 = (float)(v39 * *(float *)(v4 + 100)) + *(float *)(v4 + 88);
      v42 = (float)(v36 * *(float *)(v4 + 104)) + *(float *)(v4 + 92);
      v43 = (float)(v36 * *(float *)(v4 + 128)) + *(float *)(v4 + 120);
      *(float *)(v4 + 132) = v40;
      *(float *)(v4 + 108) = v41;
      *(float *)(v4 + 112) = v42;
      *(float *)(v4 + 136) = v43;
      if ( v40 < 0.0 )
        *(_DWORD *)(v4 + 132) = 0;
      if ( v43 < 0.0 )
        *(_DWORD *)(v4 + 136) = 0;
      v44 = v33 != v41 || v35 != v42;
      if ( v37 == *(float *)(v4 + 132) && v38 == *(float *)(v4 + 136) )
      {
        v45 = 0;
      }
      else
      {
        v46 = *(_QWORD *)(v4 + 352);
        v45 = 1;
        if ( v46 && *(_BYTE *)(v46 + 88) )
          CVisual::OnClipChanged((CVisual *)v4);
        CVisual::ClearContentTreeDataCaches((CVisual *)v4);
      }
      if ( v44 || v45 )
        *(_BYTE *)(v4 + 72) |= 1u;
    }
    if ( (*(_BYTE *)(v4 + 72) & 3) != 0 )
      *(_BYTE *)v207 = 1;
    v47 = *(_QWORD *)(v4 + 392);
    v48 = 24;
    if ( !v47 )
      goto LABEL_83;
    v49 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v47 + 48LL);
    if ( v49 == CEffectGroup::IsOfType
      || !((unsigned __int8 (__fastcall *)(_QWORD, __int64, __int64, const struct CVisualTree *))v49)(
            *(_QWORD *)(v4 + 392),
            24LL,
            v28,
            v8) )
    {
      v51 = *(bool (__fastcall **)(__int64, int))(**(_QWORD **)(v4 + 392) + 48LL);
      if ( v51 != CEffectGroup::IsOfType
        && !((unsigned __int8 (__fastcall *)(_QWORD, __int64, __int64, const struct CVisualTree *))v51)(
              *(_QWORD *)(v4 + 392),
              8LL,
              v28,
              v8) )
      {
        goto LABEL_83;
      }
      v50 = *(_QWORD *)(*(_QWORD *)(v4 + 392) + 72LL);
    }
    else
    {
      v50 = *(_QWORD *)(v4 + 392);
    }
    if ( v50 )
    {
      ++*((_DWORD *)v9 + 46);
      v52 = 1;
LABEL_84:
      if ( *((_DWORD *)v9 + 46) || (v53 = *(_BYTE *)(v4 + 72), (v53 & 0x20) != 0) )
      {
        v54 = FLOAT_4_0;
      }
      else if ( (v53 & 0x10) != 0 )
      {
        v54 = FLOAT_0_5;
      }
      else
      {
        v54 = v32.m128_f32[0];
      }
      v55 = v207;
      *(float *)&v208 = v54;
      if ( *(_BYTE *)v207 )
      {
        v56 = *(_BOOL8 (__fastcall **)(CVisual *))(*(_QWORD *)v4 + 240LL);
        if ( v56 == CVisual::HasAtlasedContent )
        {
          v57 = *(_QWORD *)(v4 + 360);
          v58 = 0;
          if ( v57 )
          {
            v59 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v57 + 48LL);
            if ( v59 != CRenderData::IsOfType )
            {
              if ( v59 == CPrimitiveGroup::IsOfType )
                v60 = CPrimitiveGroup::IsOfType(*(_QWORD *)(v4 + 360), 92LL);
              else
                v60 = v59(*(_QWORD *)(v4 + 360), 92LL);
              v58 = v60 != 0;
            }
          }
          v9 = (CPreComputeContext *)v206;
        }
        else
        {
          v58 = v56((CVisual *)v4);
        }
        *(_BYTE *)(v4 + 72) &= 0xCFu;
        *(_BYTE *)(v4 + 72) |= 16 * (v58 | (2 * (v52 & 1)));
        if ( v12 )
        {
          v61 = *(_QWORD *)(v4 + 400);
          v63 = 0;
          if ( v61 )
          {
            v62 = *(_QWORD *)(v61 + 72);
            if ( v62 )
            {
              if ( *(_QWORD *)(v62 + 16) )
                v63 = 1;
            }
          }
          *((_BYTE *)v12 + 264) &= ~2u;
          *((_BYTE *)v12 + 264) |= 2 * v63;
        }
        v55 = v207;
      }
      v64 = *(_BYTE *)(v4 + 72);
      v65 = FLOAT_1_0;
      if ( (v64 & 4) != 0 )
      {
        if ( (v64 & 1) != 0 )
        {
          v66 = *((_QWORD *)v9 + 43);
          if ( !*(_BYTE *)(v66 + 1012) && !*(_DWORD *)(v66 + 992) )
          {
            v67 = *((_DWORD *)v9 + 28);
            v68 = (float *)(v4 + 140);
            if ( v67 )
            {
              v73 = (unsigned int)(v67 - 1);
              v74 = *((_QWORD *)v9 + 16);
              v73 <<= 6;
              v69 = *(__m128 *)(v73 + v74);
              v70 = *(_OWORD *)(v73 + v74 + 16);
              v71 = *(_OWORD *)(v73 + v74 + 32);
              v72 = *(_OWORD *)(v73 + v74 + 48);
            }
            else
            {
              v69 = (__m128)IdentityMatrix;
              v70 = xmmword_18019E9C0;
              v71 = xmmword_18019E9D0;
              v72 = xmmword_18019E9E0;
            }
            v214 = v70;
            v215 = v71;
            v75 = *(float *)&v71;
            v220 = v70;
            v213 = v69;
            v216 = v72;
            Buf2 = v69;
            v76 = _mm_shuffle_ps(v69, v69, 170).m128_f32[0];
            v222 = v72;
            v221 = v71;
            v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v76) & _xmm);
            if ( v77 >= 0.00012207031 )
              goto LABEL_183;
            v78 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v70 + 2)) & _xmm);
            if ( v78 >= 0.00012207031
              || (v79 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v72 + 2)) & _xmm), v79 >= 0.00012207031) )
            {
              if ( v77 >= 0.00012207031 )
                goto LABEL_183;
              v80 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v70 + 2)) & _xmm);
              if ( v80 >= 0.00012207031 )
                goto LABEL_183;
              v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v75) & _xmm);
              if ( v81 >= 0.00012207031 )
                goto LABEL_183;
              v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v71 + 1)) & _xmm);
              if ( v82 >= 0.00012207031 )
                goto LABEL_183;
              v83 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v71 + 2) - 1.0)) & _xmm);
              if ( v83 >= 0.00012207031 )
              {
                v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v71 + 2)) & _xmm);
                if ( v84 >= 0.00012207031 )
                  goto LABEL_183;
              }
              v85 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v71 + 3)) & _xmm);
              if ( v85 >= 0.00012207031 )
                goto LABEL_183;
              v86 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v72 + 2)) & _xmm);
              if ( v86 >= 0.00012207031 )
                goto LABEL_183;
            }
            v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v69.m128_f32[3]) & _xmm);
            v88 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v70 + 3)) & _xmm) * 40960.0)
                + (float)(v87 * 40960.0);
            v89 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v216 + 3)) & _xmm);
            v90 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v88 + v89) - 1.0)) & _xmm);
            if ( v90 >= 0.00012207031
              || (v91 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v4 + 160)) & _xmm), v91 >= 0.00012207031)
              || (v92 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v4 + 156)) & _xmm), v92 >= 0.00012207031) )
            {
LABEL_183:
              if ( v213.m128_f32[0] == 1.0
                && v213.m128_f32[1] == v32.m128_f32[0]
                && v76 == v32.m128_f32[0]
                && v69.m128_f32[3] == v32.m128_f32[0]
                && *(float *)&v214 == v32.m128_f32[0]
                && *((float *)&v214 + 1) == 1.0
                && *((float *)&v70 + 2) == v32.m128_f32[0]
                && *((float *)&v70 + 3) == v32.m128_f32[0]
                && v75 == v32.m128_f32[0]
                && *((float *)&v71 + 1) == v32.m128_f32[0]
                && *((float *)&v71 + 2) == 1.0
                && *((float *)&v71 + 3) == v32.m128_f32[0] )
              {
                v104 = (float *)&v210;
                v99 = *(float *)&v216 + *v68;
                v101 = *(float *)&v216 + *(float *)(v4 + 148);
                v102 = *((float *)&v216 + 1) + *(float *)(v4 + 144);
                v105 = *((float *)&v72 + 2) + *(float *)(v4 + 156);
                *(float *)&v72 = *((float *)&v216 + 1) + *(float *)(v4 + 152);
                v106 = *((float *)&v72 + 2) + *(float *)(v4 + 160);
                *(float *)&v210 = v99;
                v48 = 6;
                *(_QWORD *)((char *)&v210 + 4) = __PAIR64__(LODWORD(v101), LODWORD(v102));
                v107 = 1;
                v211 = v105;
                HIDWORD(v210) = v72;
                v212 = v106;
              }
              else
              {
                CBaseMatrix::Transform3DRectToPerspective(Buf2.m128_f32, v68, &v224);
                LODWORD(v72) = HIDWORD(v210);
                v104 = &v224;
                v101 = *((float *)&v210 + 2);
                v107 = 0;
                v102 = *((float *)&v210 + 1);
                LODWORD(v99) = v210;
              }
              for ( i = 0; i < v48; ++i )
                ++v104;
              if ( !v107 )
              {
                v109 = (float *)&v225;
                v110 = FLOAT_3_4028235e38;
                v111 = 2LL;
                v112 = FLOAT_N3_4028235e38;
                v210 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
                LODWORD(v72) = HIDWORD(_xmm_ff7fffffff7fffff7f7fffff7f7fffff);
                v101 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
                v102 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
                LODWORD(v99) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
                do
                {
                  v113 = *(v109 - 1);
                  if ( v99 > v113 )
                    v99 = *(v109 - 1);
                  if ( v113 > v101 )
                    v101 = *(v109 - 1);
                  if ( v102 > *v109 )
                    v102 = *v109;
                  if ( *v109 > *(float *)&v72 )
                    *(float *)&v72 = *v109;
                  v114 = v109[1];
                  if ( v110 > v114 )
                    v110 = v109[1];
                  if ( v114 > v112 )
                    v112 = v109[1];
                  v115 = v109[2];
                  if ( v99 > v115 )
                    v99 = v109[2];
                  if ( v115 > v101 )
                    v101 = v109[2];
                  v116 = v109[3];
                  if ( v102 > v116 )
                    v102 = v109[3];
                  if ( v116 > *(float *)&v72 )
                    *(float *)&v72 = v109[3];
                  v117 = v109[4];
                  if ( v110 > v117 )
                    v110 = v109[4];
                  if ( v117 > v112 )
                    v112 = v109[4];
                  v118 = v109[5];
                  if ( v99 > v118 )
                    v99 = v109[5];
                  if ( v118 > v101 )
                    v101 = v109[5];
                  v119 = v109[6];
                  if ( v102 > v119 )
                    v102 = v109[6];
                  if ( v119 > *(float *)&v72 )
                    *(float *)&v72 = v109[6];
                  v120 = v109[7];
                  if ( v110 > v120 )
                    v110 = v109[7];
                  if ( v120 > v112 )
                    v112 = v109[7];
                  v121 = v109[8];
                  if ( v99 > v121 )
                    v99 = v109[8];
                  if ( v121 > v101 )
                    v101 = v109[8];
                  v122 = v109[9];
                  if ( v102 > v122 )
                    v102 = v109[9];
                  if ( v122 > *(float *)&v72 )
                    *(float *)&v72 = v109[9];
                  v123 = v109[10];
                  if ( v110 > v123 )
                    v110 = v109[10];
                  if ( v123 > v112 )
                    v112 = v109[10];
                  v109 += 12;
                  --v111;
                }
                while ( v111 );
              }
            }
            else
            {
              v93 = *v68;
              v94 = *(float *)(v4 + 148);
              v95 = *(float *)(v4 + 144);
              v96 = *(float *)(v4 + 152);
              *(float *)&v210 = *v68;
              *(_QWORD *)((char *)&v210 + 4) = __PAIR64__(LODWORD(v94), LODWORD(v95));
              *((float *)&v210 + 3) = v96;
              if ( v213.m128_f32[0] == 1.0
                && v213.m128_f32[1] == 0.0
                && v76 == 0.0
                && v69.m128_f32[3] == 0.0
                && *(float *)&v214 == 0.0
                && *((float *)&v214 + 1) == 1.0
                && *((float *)&v70 + 2) == 0.0
                && *((float *)&v70 + 3) == 0.0
                && v75 == 0.0
                && *((float *)&v71 + 1) == 0.0
                && *((float *)&v71 + 2) == 1.0
                && *((float *)&v71 + 3) == 0.0 )
              {
                v97 = &v210;
                v98 = 1;
                v99 = *(float *)&v216 + v93;
                v100 = 4;
                v101 = *(float *)&v216 + v94;
                *(float *)&v72 = *((float *)&v216 + 1) + v96;
                v102 = *((float *)&v216 + 1) + v95;
                *(float *)&v210 = v99;
                *((float *)&v210 + 2) = *(float *)&v216 + v94;
                *((float *)&v210 + 3) = *((float *)&v216 + 1) + v96;
                *((float *)&v210 + 1) = *((float *)&v216 + 1) + v95;
              }
              else
              {
                CBaseMatrix::Transform2DRectToPerspective(
                  (CBaseMatrix *)&Buf2,
                  (const struct MilRectF *)&v210,
                  (struct MilPoint2F *const)&v213);
                LODWORD(v72) = HIDWORD(v210);
                v97 = (__int128 *)&v213;
                v101 = *((float *)&v210 + 2);
                v98 = 0;
                v102 = *((float *)&v210 + 1);
                v100 = 8;
                LODWORD(v99) = v210;
              }
              for ( j = 0; j < v100; ++j )
                v97 = (__int128 *)((char *)v97 + 4);
              if ( v98 )
                goto LABEL_171;
              v101 = v213.m128_f32[2];
              v207 = (struct CManipulationManager *)v213.m128_u64[0];
              *(_QWORD *)&v218[0] = v213.m128_u64[0];
              if ( v213.m128_f32[0] <= v213.m128_f32[2] )
                v99 = *(float *)v218;
              else
                v99 = v213.m128_f32[2];
              v102 = *((float *)v218 + 1);
              if ( *((float *)v218 + 1) > v213.m128_f32[3] )
                v102 = v213.m128_f32[3];
              if ( v213.m128_f32[2] <= v213.m128_f32[0] )
                LODWORD(v101) = (_DWORD)v207;
              LODWORD(v72) = HIDWORD(v207);
              if ( v213.m128_f32[3] > *((float *)&v207 + 1) )
                LODWORD(v72) = v213.m128_i32[3];
              if ( v99 > *(float *)&v214 )
                LODWORD(v99) = v214;
              if ( v102 > *((float *)&v214 + 1) )
                v102 = *((float *)&v214 + 1);
              if ( *(float *)&v214 > v101 )
                LODWORD(v101) = v214;
              if ( *((float *)&v214 + 1) > *(float *)&v72 )
                LODWORD(v72) = DWORD1(v214);
              if ( v99 > *((float *)&v214 + 2) )
                v99 = *((float *)&v214 + 2);
              if ( v102 > *((float *)&v214 + 3) )
                v102 = *((float *)&v214 + 3);
              if ( *((float *)&v214 + 2) > v101 )
                v101 = *((float *)&v214 + 2);
              if ( *((float *)&v214 + 3) <= *(float *)&v72 )
              {
LABEL_171:
                v32 = 0LL;
              }
              else
              {
                LODWORD(v72) = HIDWORD(v214);
                v32 = 0LL;
              }
            }
            *(_QWORD *)&v210 = __PAIR64__(LODWORD(v102), LODWORD(v99));
            *((_QWORD *)&v210 + 1) = __PAIR64__(v72, LODWORD(v101));
            if ( *(float *)&v208 > v32.m128_f32[0] && v101 > v99 && *(float *)&v72 > v102 )
            {
              v99 = v99 - *(float *)&v208;
              v102 = v102 - *(float *)&v208;
              v101 = v101 + *(float *)&v208;
              *(float *)&v72 = *(float *)&v72 + *(float *)&v208;
              *(_QWORD *)&v210 = __PAIR64__(LODWORD(v102), LODWORD(v99));
              *((_QWORD *)&v210 + 1) = __PAIR64__(v72, LODWORD(v101));
            }
            if ( *((_DWORD *)v9 + 38) )
            {
              v124 = *((_DWORD *)v9 + 38);
              if ( v124 )
                v218[0] = *(_OWORD *)(*((_QWORD *)v9 + 21) + 16LL * (unsigned int)(v124 - 1));
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v210, (__int64)v218);
              LODWORD(v72) = HIDWORD(v210);
              v101 = *((float *)&v210 + 2);
              v102 = *((float *)&v210 + 1);
              LODWORD(v99) = v210;
            }
            v15 = 0;
            v125 = *((_QWORD *)v9 + 43);
            if ( *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v99
              && v101 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
              || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v102
              && *(float *)&v72 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
            {
              CDirtyRegion::SetFullDirty(*((CDirtyRegion **)v9 + 43));
            }
            if ( !*(_BYTE *)(v125 + 1012) && !*(_DWORD *)(v125 + 992) )
            {
              v126 = CDirtyRegion::_Add((CDirtyRegion *)v125);
              v15 = v126;
              if ( v126 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v126, 0x1C3u);
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x255u);
              }
            }
            if ( v15 < 0 )
            {
              v204 = 268;
              goto LABEL_440;
            }
            v65 = FLOAT_1_0;
          }
        }
        ++*(_DWORD *)(*((_QWORD *)v9 + 43) + 992LL);
      }
      if ( !*(_BYTE *)v55 )
      {
        if ( (*(_BYTE *)(v4 + 72) & 0xA) == 0
          || (v127 = *((_QWORD *)v9 + 43), *(_BYTE *)(v127 + 1012))
          || *(_DWORD *)(v127 + 992) )
        {
LABEL_405:
          v186 = v206;
          v187 = 0;
          v15 = 0;
          v188 = v209;
          v189 = (CBspPreComputeHelper *)(v206 + 352);
          v190 = v209 && *((_DWORD *)v209 + 21) == 1;
          if ( *(_DWORD *)(v4 + 84) == 1 && !v190 && (unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v4 + 56)) )
          {
            v191 = CBspPreComputeHelper::PushStacksForBspRootVisual(v189, (struct CVisual *)v4);
            v15 = v191;
            if ( v191 >= 0 )
            {
              v192 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(v189, (struct CVisual *)v4, 0);
              v15 = v192;
              if ( v192 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v192, 0x36u);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v191, 0x35u);
            }
            goto LABEL_426;
          }
          if ( v188 && *((_DWORD *)v188 + 21) == 1 )
          {
            v193 = CBspPreComputeHelper::PushStacksForBspChildVisual(v189, (struct CVisual *)v4);
            v15 = v193;
            if ( v193 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v193, 0x3Au);
LABEL_426:
              v186 = v206;
              v187 = 0;
LABEL_427:
              if ( v15 < 0 )
              {
                v204 = 318;
                goto LABEL_440;
              }
              goto LABEL_429;
            }
            if ( !CVisual::IsSimple3DRoot((CVisual *)v4, v188) )
            {
              v194 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(v189, (struct CVisual *)v4, 0);
              v15 = v194;
              if ( v194 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v194, 0x47u);
                goto LABEL_426;
              }
            }
          }
          else
          {
            v195 = *(_QWORD *)(v4 + 408);
            if ( !v195 )
              goto LABEL_427;
            if ( *(_DWORD *)(v195 + 24) == v187 )
            {
LABEL_429:
              if ( (*(_BYTE *)(v4 + 72) & 1) == 0 )
                return (unsigned int)v15;
              v196 = *(_QWORD *)(v186 + 272);
              v197 = *(__int64 (__fastcall **)(CWindowNode *))(*(_QWORD *)v4 + 152LL);
              if ( (char *)v197 == (char *)CVisual::GetContentBounds )
              {
                v198 = *(_QWORD *)(v4 + 360);
                v15 = v187;
                v210 = 0uLL;
                if ( v198 )
                {
                  v199 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int128 *))(*(_QWORD *)v198 + 120LL))(
                           v198,
                           v196,
                           v4 + 132,
                           &v210);
                  v15 = v199;
                  if ( v199 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v199, 0xACEu);
                }
              }
              else
              {
                if ( v197 == CWindowNode::GetContentBounds )
                  ContentBounds = CWindowNode::GetContentBounds((CWindowNode *)v4);
                else
                  ContentBounds = ((__int64 (__fastcall *)(__int64, _QWORD, __int128 *))v197)(
                                    v4,
                                    *(_QWORD *)(v186 + 272),
                                    &v210);
                v15 = ContentBounds;
              }
              if ( v15 >= 0 )
              {
                v201 = v210;
                *(_OWORD *)(v4 + 164) = v210;
                *(_QWORD *)(v4 + 180) = _mm_unpacklo_ps(v32, v32).m128_u64[0];
                v218[0] = v201;
                return (unsigned int)v15;
              }
              v204 = 332;
LABEL_440:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v204);
              return (unsigned int)v15;
            }
          }
          CVisual::ReleaseBspPolygonList((CVisual *)v4);
          goto LABEL_426;
        }
      }
      v128 = &v213;
      v129 = v217;
      v130 = *((_QWORD *)v9 + 25);
      if ( !*(_QWORD *)(v4 + 352) )
        v128 = 0LL;
      v131 = -2003292412;
      if ( *(_BYTE *)(v217 + 32) )
      {
        v132 = (_QWORD *)(v130 + 432);
      }
      else
      {
        v143 = *(_QWORD **)(v130 + 416);
        if ( v143 == (_QWORD *)(v130 + 416) )
          goto LABEL_283;
        while ( 1 )
        {
          v132 = v143 - 33;
          if ( v143[4] == (_QWORD)v217 )
            break;
          v143 = (_QWORD *)*v143;
          if ( v143 == (_QWORD *)(v130 + 416) )
            goto LABEL_283;
        }
      }
      if ( v132 )
      {
        v133 = *(struct CWeakReferenceBase **)(v130 + 344);
        v134 = 0;
        TreeData = 0LL;
        if ( v133 )
        {
          if ( *(_QWORD *)v133 )
          {
            if ( v130 != *(_QWORD *)v133 )
            {
              IsPreserve3D = CVisual::IsPreserve3D((CVisual *)v130, *(const struct CVisual **)(v130 + 64));
              if ( v130 != *(_QWORD *)(v136 + 24) )
              {
                while ( IsPreserve3D == CVisual::IsPreserve3D((CVisual *)v138, v138[8]) )
                {
                  if ( v139 == v140 )
                  {
                    v134 = 1;
                    TreeData = CVisual::FindTreeData(v140, (const struct CVisualTree *)v217);
                    if ( TreeData )
                      goto LABEL_294;
                    goto LABEL_277;
                  }
                  v138 = (const struct CVisual **)v139;
                  if ( v139 == v141 )
                    break;
                }
              }
              v129 = v217;
            }
          }
          else
          {
            CComposition::ReleaseWeakReference(*(CComposition **)(v130 + 16), v133);
            v129 = v217;
            *(_QWORD *)(v130 + 344) = 0LL;
          }
        }
LABEL_277:
        if ( v130 != *(_QWORD *)(v129 + 24) )
        {
          TreeData = 0LL;
          v142 = *(_QWORD *)(v130 + 64);
          if ( *(_BYTE *)(v129 + 32) )
          {
            TreeData = (__int64 **)(v142 + 432);
          }
          else
          {
            v144 = (_QWORD *)(v142 + 416);
            v145 = (_QWORD *)*v144;
            if ( (_QWORD *)*v144 != v144 )
            {
              while ( v145[4] != v129 )
              {
                v145 = (_QWORD *)*v145;
                if ( v145 == v144 )
                  goto LABEL_293;
              }
              TreeData = (__int64 **)(v145 - 33);
            }
          }
        }
LABEL_293:
        if ( TreeData )
LABEL_294:
          v146 = (unsigned __int64)TreeData[14];
        else
          v146 = 1LL;
        if ( v132[14] >= v146 )
          goto LABEL_318;
        v147 = 0LL;
        if ( TreeData )
          v147 = TreeData + 5;
        v148 = &v224;
        if ( !*(_QWORD *)(v130 + 352) )
          v148 = 0LL;
        CVisual::CalcEffectiveTransform(v130, 5, v147, v205, (struct D2DMatrix *)&Buf2, (__int64)v148);
        if ( v134 || v130 == *(_QWORD *)(v217 + 24) )
          v149 = 1;
        else
          v149 = v205[0] && memcmp_0(v147, &Buf2, 0x40uLL) != 0;
        v150 = &v224;
        if ( !*(_QWORD *)(v130 + 352) )
          v150 = 0LL;
        v151 = (*(__int64 (__fastcall **)(_QWORD *, __m128 *, bool, float *))(*v132 + 48LL))(v132, &Buf2, v149, v150);
        v131 = v151;
        if ( v151 >= 0 )
        {
          if ( *(_QWORD *)(v130 + 400) && (*(_BYTE *)(v130 + 74) & 2) != 0 )
          {
            v207 = 0LL;
            Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v207);
            if ( (int)CComposition::GetManipulationManager(*(CComposition **)(v130 + 16), &v207) >= 0 )
              CManipulationManager::NotifyVisualPropertyChange(
                v207,
                (struct CVisual *)v130,
                (const struct CMILMatrix *)&Buf2);
            Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v207);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v151, 0x567u);
        }
        if ( v131 >= 0 )
        {
LABEL_318:
          v131 = 0;
          if ( !v132[14] )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x70u);
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x47Eu);
            v15 = -2003292412;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x123u);
            return (unsigned int)v15;
          }
          v152 = *((_BYTE *)v132 + 16);
          v153 = *(_OWORD *)(v132 + 7);
          v223[0] = *(_OWORD *)(v132 + 5);
          v154 = (v152 & 2) != 0;
          v223[1] = v153;
          v155 = *(_OWORD *)(v132 + 11);
          v223[2] = *(_OWORD *)(v132 + 9);
          v223[3] = v155;
          if ( v128 )
          {
            v156 = (__m128 *)v132[13];
            v157 = v156[1];
            *v128 = *v156;
            v158 = v156[2];
            v128[1] = v157;
            v159 = v156[3];
            v128[2] = v158;
            v128[3] = v159;
          }
          v205[0] = v154;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v131, 0x477u);
        }
      }
LABEL_283:
      v15 = v131;
      if ( v131 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v131, 0x123u);
        return (unsigned int)v15;
      }
      v160 = *(__int64 **)(v4 + 352);
      if ( !v160
        || v209 && *((_DWORD *)v209 + 21) == 1
        || *(_DWORD *)(v4 + 84) == 1
        && ((v161 = *(_QWORD *)(v4 + 56), (v161 & 2) == 0)
          ? (LODWORD(v161) = v161 & 1)
          : (v161 = *(_QWORD *)(v161 & 0xFFFFFFFFFFFFFFFCuLL)),
            (_DWORD)v161) )
      {
        v184 = v206;
LABEL_403:
        if ( v205[0] )
        {
          CBaseMatrixStack::Push((CBaseMatrixStack *)(v184 + 112), (const struct CMILMatrix *)v223, 0);
          *(_BYTE *)(v4 + 73) |= 1u;
        }
        goto LABEL_405;
      }
      v162 = (v160[4] & 1) == 0;
      v163 = (__int64 *)(v4 + 132);
      v15 = 0;
      *(_QWORD *)&v210 = 0LL;
      v164 = 0LL;
      if ( !v162
        || *((_BYTE *)v160 + 88)
        && (*((float *)v160 + 20) != *(float *)v163 || *((float *)v160 + 21) != *(float *)(v4 + 136)) )
      {
        v165 = *v160;
        v166 = 0LL;
        v162 = *((_BYTE *)v160 + 88) == 0;
        *(_QWORD *)&v218[0] = 0LL;
        if ( !v162 )
          v166 = v4 + 132;
        v167 = (*(__int64 (__fastcall **)(__int64 *, __int64, _OWORD *))(v165 + 112))(v160, v166, v218);
        v15 = v167;
        if ( v167 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v167, 0x49u);
LABEL_351:
          if ( v15 >= 0 )
          {
            v175 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v164 + 24LL))(v164, &v217, 0LL);
            v15 = v175;
            if ( v175 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v175, 0x26u);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x24u);
          }
          if ( v15 == -2003304438 )
          {
            LODWORD(v176) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v177 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
            v15 = 0;
            v178 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
            v179 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
            v217 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          }
          else
          {
            v179 = *((float *)&v217 + 3);
            v178 = *((float *)&v217 + 2);
            v177 = *((float *)&v217 + 1);
            LODWORD(v176) = v217;
          }
          if ( v15 < 0 )
          {
            v204 = 298;
            goto LABEL_440;
          }
          v220 = v214;
          v222 = v216;
          *(_QWORD *)&v210 = __PAIR64__(LODWORD(v177), LODWORD(v176));
          *((_QWORD *)&v210 + 1) = __PAIR64__(LODWORD(v179), LODWORD(v178));
          Buf2 = v213;
          v221 = v215;
          if ( v213.m128_f32[0] == v65
            && v213.m128_f32[1] == v32.m128_f32[0]
            && v213.m128_f32[2] == v32.m128_f32[0]
            && v213.m128_f32[3] == v32.m128_f32[0]
            && *(float *)&v214 == v32.m128_f32[0]
            && *((float *)&v214 + 1) == v65
            && *((float *)&v214 + 2) == v32.m128_f32[0]
            && *((float *)&v214 + 3) == v32.m128_f32[0]
            && *(float *)&v215 == v32.m128_f32[0]
            && *((float *)&v215 + 1) == v32.m128_f32[0]
            && *((float *)&v215 + 2) == v65
            && *((float *)&v215 + 3) == v32.m128_f32[0] )
          {
            v180 = v176 + *(float *)&v216;
            *((float *)&v210 + 1) = v177 + *((float *)&v216 + 1);
            *((float *)&v210 + 2) = v178 + *(float *)&v216;
            *((float *)&v210 + 3) = v179 + *((float *)&v216 + 1);
          }
          else
          {
            CBaseMatrix::Transform2DRectToPerspective(
              (CBaseMatrix *)&Buf2,
              (const struct MilRectF *)&v210,
              (struct MilPoint2F *const)&v213);
            v181 = v213.m128_f32[2];
            v207 = (struct CManipulationManager *)v213.m128_u64[0];
            *(_QWORD *)&v218[0] = v213.m128_u64[0];
            if ( v213.m128_f32[0] <= v213.m128_f32[2] )
              v180 = *(float *)v218;
            else
              v180 = v213.m128_f32[2];
            v182 = *((float *)v218 + 1);
            if ( *((float *)v218 + 1) > v213.m128_f32[3] )
              v182 = v213.m128_f32[3];
            if ( v213.m128_f32[2] <= v213.m128_f32[0] )
              LODWORD(v181) = (_DWORD)v207;
            v183 = *((float *)&v207 + 1);
            if ( v213.m128_f32[3] > *((float *)&v207 + 1) )
              v183 = v213.m128_f32[3];
            if ( v180 > *(float *)&v214 )
              v180 = *(float *)&v214;
            if ( v182 > *((float *)&v214 + 1) )
              v182 = *((float *)&v214 + 1);
            if ( *(float *)&v214 > v181 )
              LODWORD(v181) = v214;
            if ( *((float *)&v214 + 1) > v183 )
              v183 = *((float *)&v214 + 1);
            if ( v180 > *((float *)&v214 + 2) )
              v180 = *((float *)&v214 + 2);
            if ( v182 > *((float *)&v214 + 3) )
              v182 = *((float *)&v214 + 3);
            if ( *((float *)&v214 + 2) > v181 )
              v181 = *((float *)&v214 + 2);
            if ( *((float *)&v214 + 3) > v183 )
              v183 = *((float *)&v214 + 3);
            *(_QWORD *)((char *)&v210 + 4) = __PAIR64__(LODWORD(v181), LODWORD(v182));
            *((float *)&v210 + 3) = v183;
          }
          v184 = v206;
          *(float *)&v210 = v180;
          v185 = CBaseClipStack::Push((CBaseClipStack *)(v206 + 144), (const struct MilRectF *)&v210);
          v15 = v185;
          if ( v185 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v185, 0x132u);
            return (unsigned int)v15;
          }
          *(_BYTE *)(v4 + 73) |= 2u;
          goto LABEL_403;
        }
        v168 = (void (__fastcall ***)(__int64, __int64))v160[8];
        v169 = v160 + 8;
        if ( v168 )
          (**v168)(v160[8], 1LL);
        v170 = (const struct D2DMatrix *)v160[9];
        *v169 = 0LL;
        if ( !v170 || D2DMatrixIsIdentity(v170) )
        {
          v174 = *(_QWORD *)&v218[0];
        }
        else
        {
          v173 = CShape::Combine(*(__int64 *)&v218[0], v171, v172, 0LL, v172, v160 + 8);
          v15 = v173;
          if ( v173 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v173, 0x56u);
            v164 = v210;
            goto LABEL_351;
          }
          v174 = *v169;
        }
        v160[7] = v174;
        if ( v4 != -132 )
          v160[10] = *v163;
        *((_DWORD *)v160 + 8) &= ~1u;
      }
      v164 = v160[7];
      goto LABEL_351;
    }
LABEL_83:
    v52 = 0;
    goto LABEL_84;
  }
  v13 = *((_DWORD *)this + 5);
  v14 = 0LL;
  v15 = 0;
  v16 = v11 << 17 >> 28;
  v208 = 0LL;
  if ( *((_DWORD *)this + 4) == v13 )
  {
    v17 = 2LL * v13;
    if ( v17 > 0xFFFFFFFF )
    {
      v15 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_23;
    }
    if ( (unsigned int)v17 <= 0x40 )
      LODWORD(v17) = 64;
    v18 = WPF::HrMalloc((WPF *)0x40, 4LL, (unsigned int)v17, (unsigned __int64)&v208, v203);
    v15 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x54u);
      v14 = v208;
      goto LABEL_23;
    }
    v19 = 4LL * *((unsigned int *)v9 + 4);
    if ( v19 > 0xFFFFFFFF )
    {
      v15 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
      v14 = v208;
      goto LABEL_23;
    }
    v20 = (const void *)*((_QWORD *)v9 + 4);
    v15 = 0;
    v21 = v208;
    memcpy_0(v208, v20, (unsigned int)v19);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(v206 + 32));
    v22 = v206;
    v14 = 0LL;
    *(_QWORD *)(v206 + 32) = v21;
    v9 = (CPreComputeContext *)v22;
    *(_DWORD *)(v22 + 20) = v17;
  }
  *(_DWORD *)(*((_QWORD *)v9 + 4) + 4LL * (unsigned int)(*((_DWORD *)v9 + 4))++) = v16;
  v23 = *((_DWORD *)v9 + 4);
  if ( *((_DWORD *)v9 + 10) > v23 )
    v23 = *((_DWORD *)v9 + 10);
  *((_DWORD *)v9 + 10) = v23;
LABEL_23:
  v24 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v24 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v14);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v24)(WPF::g_pProcessHeap, v14);
  if ( v15 >= 0 )
  {
    v6 = *(__int64 **)&v218[0];
    v12 = (__int64 *)v210;
    v9 = (CPreComputeContext *)v206;
    v5 = v207;
    goto LABEL_31;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x9Du);
  return (unsigned int)v15;
}
