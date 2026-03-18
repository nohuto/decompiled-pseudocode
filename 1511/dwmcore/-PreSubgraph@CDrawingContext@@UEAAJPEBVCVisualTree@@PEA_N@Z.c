/*
 * XREFs of ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800521B0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800064E8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180008FA4 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18000E0BC (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180014240 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?IsCloseRealOneMatrixEpsilon@@YAHM@Z @ 0x180014B74 (-IsCloseRealOneMatrixEpsilon@@YAHM@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180025130 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180035E70 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180037120 (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z @ 0x1800474D0 (-Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180048FE0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18004D87C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DC10 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180067DFC (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x180069034 (-D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x18006F984 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180094860 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A9150 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B1C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800AAA98 (-ULongLongToUInt@@YAJ_KPEAI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B6058 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B629C (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1800F7A20 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x1800FE284 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18010BF88 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Push@?$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18010DC6C (-Push@-$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x18010EB94 (-ShiftLeft@-$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z.c)
 *     ?GetDeterminant3D@CBaseMatrix@@QEBAMXZ @ 0x18013A4F0 (-GetDeterminant3D@CBaseMatrix@@QEBAMXZ.c)
 *     ?IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z @ 0x18013A524 (-IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18013FB00 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PreSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  int v5; // r14d
  CVisual *v6; // r12
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  CDrawingContext *v12; // r13
  int v13; // eax
  __m128 v14; // xmm3
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // xmm7_8
  float *v21; // r9
  float v22; // xmm14_4
  __int64 v23; // r10
  float v24; // xmm11_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm14_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float *v37; // rax
  unsigned int v38; // xmm3_4
  unsigned int v39; // xmm1_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  unsigned int v42; // edx
  char v43; // r8
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm5_4
  float v51; // xmm6_4
  float v52; // xmm7_4
  float *v53; // rax
  unsigned int v54; // edx
  float v55; // xmm4_4
  char v56; // r8
  float v57; // xmm1_4
  float v58; // xmm2_4
  float v59; // xmm3_4
  unsigned int v60; // r11d
  unsigned int v61; // ecx
  unsigned int i; // ecx
  float *v63; // rax
  __int64 v64; // rcx
  float v65; // xmm0_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  float v68; // xmm3_4
  float v69; // xmm6_4
  float v70; // xmm6_4
  float v71; // xmm6_4
  float v72; // xmm6_4
  float v73; // xmm6_4
  float v74; // xmm6_4
  float v75; // xmm6_4
  float v76; // xmm6_4
  float v77; // xmm6_4
  float v78; // xmm6_4
  float v79; // xmm6_4
  float v80; // xmm6_4
  int v81; // r8d
  int v82; // eax
  __int128 v83; // xmm0
  float *v84; // r9
  __int64 v85; // r10
  float v86; // xmm15_4
  int v87; // eax
  __m128 v88; // xmm6
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm2
  __int64 v92; // rcx
  __int64 v93; // rax
  float v94; // xmm11_4
  float v95; // xmm6_4
  float v96; // xmm2_4
  float v97; // xmm1_4
  float v98; // xmm1_4
  float v99; // xmm1_4
  float v100; // xmm1_4
  float v101; // xmm1_4
  float v102; // xmm5_4
  float v103; // xmm2_4
  float v104; // xmm1_4
  float v105; // xmm1_4
  float v106; // xmm1_4
  float *v107; // rax
  float v108; // xmm5_4
  float v109; // xmm4_4
  unsigned int v110; // xmm0_4
  float v111; // xmm3_4
  unsigned int v112; // xmm8_4
  unsigned int v113; // edx
  char v114; // r8
  float v115; // xmm0_4
  float v116; // xmm1_4
  float v117; // xmm1_4
  float v118; // xmm1_4
  float v119; // xmm1_4
  float v120; // xmm5_4
  float v121; // xmm2_4
  float v122; // xmm4_4
  float v123; // xmm3_4
  float *v124; // rax
  unsigned int v125; // edx
  char v126; // r8
  unsigned int v127; // r11d
  unsigned int v128; // ecx
  unsigned int j; // ecx
  float *v130; // rax
  float v131; // xmm1_4
  __int64 v132; // rcx
  float v133; // xmm6_4
  float v134; // xmm0_4
  float v135; // xmm0_4
  float v136; // xmm0_4
  float v137; // xmm0_4
  float v138; // xmm0_4
  float v139; // xmm0_4
  float v140; // xmm0_4
  float v141; // xmm0_4
  float v142; // xmm0_4
  float v143; // xmm0_4
  float v144; // xmm0_4
  float v145; // xmm0_4
  float v146; // xmm5_4
  float v147; // xmm3_4
  float v148; // xmm4_4
  const struct CVisualTree **v149; // rsi
  const struct CVisualTree *v150; // rax
  unsigned int v151; // esi
  __int64 v152; // rdi
  float *v153; // rcx
  float v154; // xmm4_4
  float v155; // xmm5_4
  const struct CVisualTree **v156; // rax
  CDrawingContext *v157; // rax
  __int64 v158; // rdi
  unsigned int v159; // r8d
  __int64 v160; // rdx
  __int64 v161; // rcx
  const struct CVisualTree **v163; // rsi
  const struct CVisualTree *v164; // rdi
  int v165; // eax
  CDrawingContext *v166; // rcx
  int v167; // ecx
  const struct CVisualTree **v168; // rax
  float v169; // xmm7_4
  float v170; // xmm6_4
  __int64 v171; // rdi
  float v172; // xmm0_4
  int v173; // eax
  float v174; // xmm8_4
  float v175; // xmm8_4
  __int64 v176; // rsi
  _QWORD *v177; // r13
  char *v178; // rdi
  __int64 v179; // r15
  int v180; // eax
  void (__fastcall ***v181)(_QWORD, __int64); // r12
  __int64 *v182; // r15
  const struct D2DMatrix *v183; // rcx
  int v184; // edx
  __int64 v185; // rcx
  int v186; // eax
  __int64 v187; // rax
  int v188; // eax
  float v189; // xmm0_4
  float v190; // xmm2_4
  float v191; // xmm1_4
  float v192; // xmm3_4
  char v193; // al
  __int64 v194; // rdi
  char v195; // al
  char v196; // cl
  double v197; // xmm0_8
  __int64 v198; // xmm8_8
  float v199; // xmm1_4
  __int64 v200; // rax
  char v201; // al
  CDrawingContext *v202; // rdx
  __int64 *v203; // r12
  struct CVisualTree *v204; // r9
  char *v205; // rdi
  int v206; // ebx
  __int64 v207; // r15
  __int64 *v208; // rsi
  const struct CVisual ***v209; // rdx
  char v210; // r14
  struct CTreeData *TreeData; // rbx
  const struct CVisual **v212; // rdi
  char IsAncestorInSameSpace; // al
  __int64 v214; // rdx
  __int64 *v215; // rax
  bool v216; // cl
  _QWORD *v217; // rdx
  _QWORD *v218; // rax
  unsigned __int64 v219; // rax
  const void *v220; // rdi
  _BYTE *v221; // rax
  bool v222; // r14
  _BYTE *v223; // rdi
  int v224; // eax
  _OWORD *v225; // rax
  int v226; // eax
  __int64 v227; // rcx
  __int64 v228; // rax
  int v229; // eax
  __int64 *v230; // rsi
  char v231; // r10
  int v232; // r9d
  float v233; // xmm2_4
  float v234; // xmm1_4
  float v235; // xmm1_4
  float v236; // xmm1_4
  float v237; // xmm1_4
  float v238; // xmm1_4
  float v239; // xmm2_4
  float v240; // xmm1_4
  float v241; // xmm1_4
  float v242; // xmm1_4
  float v243; // xmm0_4
  float v244; // xmm1_4
  float v245; // xmm1_4
  float v246; // xmm1_4
  float v247; // xmm1_4
  CRegionShape *v248; // r12
  __int64 v249; // r13
  int v250; // eax
  void (__fastcall ***v251)(__int64, __int64); // r15
  __int64 *v252; // rdi
  const struct D2DMatrix *v253; // rcx
  int v254; // edx
  __int64 v255; // rcx
  int v256; // eax
  __int64 v257; // rax
  int v258; // eax
  float v259; // xmm0_4
  float v260; // xmm2_4
  float v261; // xmm1_4
  float v262; // xmm3_4
  _QWORD *v263; // r13
  __int64 v264; // rax
  _QWORD *v265; // rdi
  int v266; // eax
  void (__fastcall ***v267)(__int64, __int64); // r15
  __int64 *v268; // rdi
  const struct D2DMatrix *v269; // rcx
  __int64 v270; // rcx
  int v271; // eax
  __int64 v272; // rax
  __int64 v273; // rdi
  __int64 (__fastcall *v274)(CRegionShape *); // rbx
  int v275; // edx
  __int128 *v276; // rsi
  __int64 *v277; // rdi
  int v278; // eax
  CDrawingContext *v279; // r13
  __int64 v280; // rdi
  struct CVisualTree *v281; // rbx
  int *v282; // r8
  __int64 v283; // rdi
  float v284; // xmm0_4
  float v285; // xmm1_4
  struct CVisualTree **v286; // rax
  int v287; // eax
  _QWORD *v288; // rdx
  int v289; // r9d
  char *v290; // r8
  _QWORD *v291; // rax
  int v292; // esi
  int v293; // eax
  int v294; // eax
  int v295; // eax
  int v296; // eax
  __int128 v297; // xmm14
  __m128 v298; // xmm6
  __int128 v299; // xmm1
  __int128 v300; // xmm0
  __int128 v301; // xmm2
  __int64 v302; // rcx
  __int64 v303; // rax
  float *v304; // rdx
  float v305; // xmm5_4
  float v306; // xmm4_4
  float v307; // xmm10_4
  float v308; // xmm6_4
  float v309; // xmm2_4
  float v310; // xmm1_4
  float v311; // xmm1_4
  float v312; // xmm1_4
  float v313; // xmm1_4
  float v314; // xmm1_4
  float v315; // xmm1_4
  float v316; // xmm1_4
  float v317; // xmm1_4
  float v318; // xmm2_4
  float v319; // xmm0_4
  float v320; // xmm1_4
  float v321; // xmm1_4
  float v322; // xmm1_4
  float v323; // xmm1_4
  float v324; // xmm1_4
  float v325; // xmm7_4
  float v326; // xmm8_4
  float v327; // xmm9_4
  float *v328; // rax
  float v329; // xmm5_4
  float v330; // xmm4_4
  char v331; // dl
  unsigned int v332; // r8d
  float v333; // xmm3_4
  unsigned int v334; // ecx
  float *v335; // rax
  unsigned int v336; // xmm0_4
  unsigned int v337; // xmm7_4
  char v338; // dl
  unsigned int v339; // r8d
  unsigned int v340; // ecx
  float *v341; // rax
  float v342; // xmm1_4
  float v343; // xmm6_4
  float v344; // xmm0_4
  float v345; // xmm0_4
  float v346; // xmm0_4
  float v347; // xmm0_4
  float v348; // xmm0_4
  float v349; // xmm0_4
  float v350; // xmm0_4
  float v351; // xmm0_4
  float v352; // xmm0_4
  float v353; // xmm0_4
  float v354; // xmm0_4
  float v355; // xmm0_4
  int v356; // eax
  __int64 v357; // rdi
  int v358; // eax
  int v359; // eax
  CDrawingContext *v360; // r9
  int v361; // r8d
  int v362; // eax
  __int128 v363; // xmm0
  __int128 *v364; // r15
  char v365; // r12
  char v366; // r13
  unsigned int v367; // edi
  unsigned int v368; // ebx
  _QWORD *v369; // rsi
  int v370; // eax
  __int64 v371; // r8
  CDrawingContext *v372; // rsi
  unsigned int v373; // eax
  int v374; // eax
  WPF *v375; // rcx
  unsigned int v376; // r12d
  int v377; // eax
  int v378; // eax
  void *v379; // rsi
  unsigned int v380; // eax
  unsigned int v381; // ecx
  __int128 v382; // xmm1
  __int128 v383; // xmm0
  __int128 v384; // xmm1
  __int64 v385; // rax
  unsigned int v386; // edx
  __int64 v387; // rcx
  int v388; // eax
  unsigned int *v389; // r15
  BOOL v390; // r13d
  unsigned int v391; // eax
  int v392; // eax
  WPF *v393; // rcx
  unsigned int v394; // r12d
  int v395; // eax
  int v396; // eax
  void *v397; // rsi
  unsigned int v398; // ecx
  __int64 v399; // r8
  int v400; // ebx
  float v401; // xmm0_4
  int v402; // eax
  float v403; // xmm0_4
  float v404; // xmm11_4
  int v405; // eax
  float v406; // xmm0_4
  float v407; // xmm10_4
  int v408; // eax
  float v409; // xmm0_4
  float v410; // xmm9_4
  float v411; // xmm0_4
  unsigned int v412; // eax
  int v413; // eax
  WPF *v414; // rcx
  unsigned int v415; // r12d
  int v416; // eax
  int v417; // eax
  const void *v418; // rdx
  void *v419; // rsi
  CDrawingContext *v420; // r13
  unsigned int v421; // eax
  unsigned int v422; // ecx
  __int64 v423; // rcx
  CDrawingContext *v424; // rdi
  unsigned int *v425; // r15
  int v426; // ecx
  __int64 v427; // rax
  char v428; // bl
  char v429; // r13
  float Determinant3D; // xmm8_4
  __int64 v431; // rdx
  __int64 v432; // r8
  bool v433; // cl
  __int64 v434; // rax
  bool v435; // al
  unsigned int v436; // eax
  int v437; // eax
  WPF *v438; // rcx
  unsigned int v439; // r12d
  int v440; // eax
  int v441; // eax
  void *v442; // rsi
  unsigned int v443; // ecx
  bool v444; // al
  struct CVisual *v445; // r8
  int v446; // eax
  bool (__fastcall *v447)(CVisual *__hidden); // rbx
  __int64 (__fastcall *v448)(CVisual *__hidden, struct CDrawingContext *, bool *); // rbx
  int v449; // eax
  void **v450; // [rsp+20h] [rbp-E0h]
  unsigned int v451; // [rsp+20h] [rbp-E0h]
  bool v452; // [rsp+40h] [rbp-C0h] BYREF
  char v453; // [rsp+41h] [rbp-BFh]
  CDrawingContext *v454; // [rsp+48h] [rbp-B8h]
  CVisual *v455; // [rsp+50h] [rbp-B0h]
  float v456; // [rsp+58h] [rbp-A8h]
  CDrawingContext *v457; // [rsp+60h] [rbp-A0h]
  char v458; // [rsp+68h] [rbp-98h] BYREF
  bool v459; // [rsp+69h] [rbp-97h]
  char v460; // [rsp+6Ah] [rbp-96h] BYREF
  char *v461; // [rsp+70h] [rbp-90h]
  struct CVisualTree *v462; // [rsp+78h] [rbp-88h]
  __int64 v463; // [rsp+80h] [rbp-80h]
  bool *v464; // [rsp+88h] [rbp-78h]
  unsigned int v465; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v466; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v467; // [rsp+98h] [rbp-68h] BYREF
  size_t v468; // [rsp+9Ch] [rbp-64h] BYREF
  char *v469; // [rsp+A8h] [rbp-58h]
  unsigned int Size; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int Size_4; // [rsp+B4h] [rbp-4Ch] BYREF
  size_t v472; // [rsp+B8h] [rbp-48h] BYREF
  void *v473; // [rsp+C0h] [rbp-40h] BYREF
  void *v474; // [rsp+C8h] [rbp-38h] BYREF
  void *v475; // [rsp+D0h] [rbp-30h] BYREF
  void *v476; // [rsp+D8h] [rbp-28h] BYREF
  struct CManipulationManager *v477; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v478; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v479; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v480; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v481; // [rsp+100h] [rbp+0h] BYREF
  __int64 v482; // [rsp+108h] [rbp+8h] BYREF
  bool v483[8]; // [rsp+110h] [rbp+10h]
  _DWORD v484[12]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v485; // [rsp+148h] [rbp+48h] BYREF
  float v486; // [rsp+158h] [rbp+58h]
  float v487; // [rsp+15Ch] [rbp+5Ch]
  __int128 v488; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v489; // [rsp+170h] [rbp+70h]
  __int128 v490; // [rsp+178h] [rbp+78h] BYREF
  unsigned __int64 v491; // [rsp+188h] [rbp+88h]
  __m128 v492; // [rsp+190h] [rbp+90h] BYREF
  __m128 v493; // [rsp+1A0h] [rbp+A0h]
  __int128 v494; // [rsp+1B0h] [rbp+B0h]
  __int128 v495; // [rsp+1C0h] [rbp+C0h]
  __int128 v496; // [rsp+1D0h] [rbp+D0h]
  __int128 v497; // [rsp+1E0h] [rbp+E0h]
  __int128 v498; // [rsp+1F8h] [rbp+F8h] BYREF
  float v499; // [rsp+208h] [rbp+108h] BYREF
  float v500; // [rsp+20Ch] [rbp+10Ch]
  float v501; // [rsp+210h] [rbp+110h]
  float v502; // [rsp+214h] [rbp+114h]
  float v503; // [rsp+218h] [rbp+118h] BYREF
  float v504; // [rsp+21Ch] [rbp+11Ch]
  int v505; // [rsp+220h] [rbp+120h]
  float v506; // [rsp+224h] [rbp+124h]
  float v507; // [rsp+228h] [rbp+128h] BYREF
  float v508; // [rsp+22Ch] [rbp+12Ch]
  float v509; // [rsp+230h] [rbp+130h]
  float v510; // [rsp+234h] [rbp+134h]
  __int128 v511; // [rsp+238h] [rbp+138h] BYREF
  __int128 v512; // [rsp+248h] [rbp+148h] BYREF
  _DWORD v513[6]; // [rsp+258h] [rbp+158h] BYREF
  CVisual *v514; // [rsp+270h] [rbp+170h]
  __int64 v515; // [rsp+278h] [rbp+178h]
  float v516; // [rsp+280h] [rbp+180h]
  __int128 v517; // [rsp+284h] [rbp+184h] BYREF
  __int128 v518; // [rsp+294h] [rbp+194h]
  __int128 v519; // [rsp+2A4h] [rbp+1A4h]
  __int128 v520; // [rsp+2B4h] [rbp+1B4h]
  __int64 v521; // [rsp+2C4h] [rbp+1C4h] BYREF
  __int64 v522; // [rsp+2CCh] [rbp+1CCh]
  __int64 v523; // [rsp+2D4h] [rbp+1D4h]
  __int64 v524; // [rsp+2DCh] [rbp+1DCh]
  __int64 v525; // [rsp+2E4h] [rbp+1E4h]
  __int64 v526; // [rsp+2ECh] [rbp+1ECh]
  __int64 v527; // [rsp+2F4h] [rbp+1F4h]
  float v528; // [rsp+2FCh] [rbp+1FCh]
  float v529; // [rsp+300h] [rbp+200h]
  __int16 v530; // [rsp+304h] [rbp+204h]
  unsigned __int8 v531; // [rsp+306h] [rbp+206h]
  __int128 v532; // [rsp+310h] [rbp+210h] BYREF
  __int128 v533; // [rsp+320h] [rbp+220h] BYREF
  float v534; // [rsp+330h] [rbp+230h]
  float v535; // [rsp+334h] [rbp+234h]
  float v536; // [rsp+338h] [rbp+238h]
  float v537; // [rsp+33Ch] [rbp+23Ch]
  _DWORD v538[4]; // [rsp+340h] [rbp+240h] BYREF
  __m128 v539; // [rsp+350h] [rbp+250h] BYREF
  _DWORD v540[4]; // [rsp+360h] [rbp+260h] BYREF
  _DWORD v541[2]; // [rsp+370h] [rbp+270h] BYREF
  int v542; // [rsp+378h] [rbp+278h]
  int v543; // [rsp+37Ch] [rbp+27Ch]
  _DWORD v544[4]; // [rsp+380h] [rbp+280h] BYREF
  _DWORD v545[4]; // [rsp+390h] [rbp+290h] BYREF
  _DWORD v546[4]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _DWORD v547[4]; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int128 v548; // [rsp+3C0h] [rbp+2C0h] BYREF
  float v549; // [rsp+3D0h] [rbp+2D0h]
  float v550; // [rsp+3D4h] [rbp+2D4h]
  _BYTE v551[76]; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int128 v552; // [rsp+430h] [rbp+330h] BYREF
  void *v553[2]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v554[16]; // [rsp+450h] [rbp+350h] BYREF
  __int128 v555; // [rsp+460h] [rbp+360h] BYREF
  unsigned __int64 v556; // [rsp+470h] [rbp+370h]
  _OWORD v557[4]; // [rsp+480h] [rbp+380h] BYREF
  _OWORD v558[4]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _OWORD v559[4]; // [rsp+500h] [rbp+400h] BYREF
  _BYTE Buf2[64]; // [rsp+540h] [rbp+440h] BYREF
  _BYTE v561[64]; // [rsp+580h] [rbp+480h] BYREF
  __int64 v562; // [rsp+5C0h] [rbp+4C0h] BYREF
  float v563; // [rsp+5C8h] [rbp+4C8h]
  float v564; // [rsp+5CCh] [rbp+4CCh]
  float v565; // [rsp+5D0h] [rbp+4D0h]
  float v566; // [rsp+5D4h] [rbp+4D4h]
  float v567; // [rsp+5D8h] [rbp+4D8h]
  float v568; // [rsp+5DCh] [rbp+4DCh]
  __int64 v569; // [rsp+5E0h] [rbp+4E0h] BYREF
  float v570; // [rsp+5E8h] [rbp+4E8h]
  float v571; // [rsp+5ECh] [rbp+4ECh]
  float v572; // [rsp+5F0h] [rbp+4F0h]
  float v573; // [rsp+5F4h] [rbp+4F4h]
  float v574; // [rsp+5F8h] [rbp+4F8h]
  float v575; // [rsp+5FCh] [rbp+4FCh]
  char *v576; // [rsp+600h] [rbp+500h] BYREF
  float v577; // [rsp+608h] [rbp+508h]
  float v578; // [rsp+60Ch] [rbp+50Ch]
  float v579; // [rsp+610h] [rbp+510h]
  float v580; // [rsp+614h] [rbp+514h]
  float v581; // [rsp+618h] [rbp+518h]
  float v582; // [rsp+61Ch] [rbp+51Ch]
  __int64 v583; // [rsp+620h] [rbp+520h] BYREF
  float v584; // [rsp+628h] [rbp+528h]
  float v585; // [rsp+62Ch] [rbp+52Ch]
  float v586; // [rsp+630h] [rbp+530h]
  float v587; // [rsp+634h] [rbp+534h]
  float v588; // [rsp+638h] [rbp+538h]
  float v589; // [rsp+63Ch] [rbp+53Ch]
  float v590; // [rsp+640h] [rbp+540h] BYREF
  char v591; // [rsp+644h] [rbp+544h] BYREF
  float v592; // [rsp+6A0h] [rbp+5A0h] BYREF
  char v593; // [rsp+6A4h] [rbp+5A4h] BYREF
  float v594; // [rsp+700h] [rbp+600h] BYREF
  char v595; // [rsp+704h] [rbp+604h] BYREF

  v454 = this;
  v528 = 0.0;
  v464 = a3;
  v462 = a2;
  v5 = 0;
  v459 = 0;
  *((_DWORD *)this + 1482) = 0;
  v6 = 0LL;
  v514 = 0LL;
  v521 = 0LL;
  v522 = 0LL;
  v523 = 0LL;
  v524 = 0LL;
  v525 = 0LL;
  v526 = 0LL;
  v527 = 0LL;
  v529 = 1.0;
  v530 = 0;
  v531 = 0;
  v515 = 1065353216LL;
  v516 = 1.0;
  v455 = 0LL;
  if ( *((_BYTE *)this + 5504) )
  {
    if ( *((_BYTE *)this + 5505) )
      v6 = *(CVisual **)(*((_QWORD *)this + 323) + 8LL);
    else
      v6 = *(CVisual **)(*((_QWORD *)this + 689) + 24LL);
    v455 = v6;
  }
  v7 = (*((_BYTE *)v6 + 74) & 0x10) == 0;
  *(_QWORD *)v483 = *(_QWORD *)(*((_QWORD *)this + 323) + 16LL);
  *((_BYTE *)v6 + 75) = 1;
  if ( !v7 )
  {
    *a3 = 0;
    goto LABEL_338;
  }
  *a3 = 1;
  if ( (*((_BYTE *)v6 + 73) & 0x40) != 0 )
  {
    v8 = CWatermarkStack<_D3DCOLORVALUE,2,2,2>::Push(*((_QWORD *)this - 3) + 1008LL, (char *)v6 + 368);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x207Eu);
      goto LABEL_338;
    }
  }
  v9 = *((_DWORD *)v6 + 19);
  if ( (v9 & 0x1FF) != 0 )
  {
    v484[0] = *((_DWORD *)v6 + 19) & 0x1FF;
    v484[4] = (v9 >> 9) & 3;
    v484[1] = (int)(v9 << 17) >> 28;
    v484[2] = *((_DWORD *)v6 + 47);
    v484[5] = *((_DWORD *)v6 + 48);
    v484[6] = *((_DWORD *)v6 + 49);
    v484[7] = *((_DWORD *)v6 + 50);
    v10 = *((_DWORD *)v6 + 20);
    v484[3] = (v9 >> 15) & 0x1F;
    v484[9] = v10;
    v11 = CDrawingContext::PushRenderOptionsInternal(
            (CDrawingContext *)((char *)this - 48),
            v6,
            (const struct MilRenderOptions *)v484,
            1);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2091u);
      goto LABEL_338;
    }
  }
  v12 = (CDrawingContext *)((char *)this - 48);
  v13 = *((_DWORD *)this + 102);
  v457 = (CDrawingContext *)((char *)this - 48);
  if ( v13 )
  {
    v18 = (unsigned int)(v13 - 1);
    v19 = *((_QWORD *)v12 + 59);
    v18 <<= 6;
    v14 = *(__m128 *)(v18 + v19);
    v15 = *(_OWORD *)(v18 + v19 + 16);
    v16 = *(_OWORD *)(v18 + v19 + 32);
    v17 = *(_OWORD *)(v18 + v19 + 48);
  }
  else
  {
    v14 = (__m128)IdentityMatrix;
    v15 = xmmword_18019E9C0;
    v16 = xmmword_18019E9D0;
    v17 = xmmword_18019E9E0;
  }
  v20 = _xmm;
  v21 = (float *)((char *)v6 + 140);
  v22 = FLOAT_3_4028235e38;
  v494 = v15;
  v23 = 4LL;
  v495 = v16;
  v24 = *(float *)&v16;
  v558[1] = v15;
  v493 = v14;
  v496 = v17;
  v558[0] = v14;
  v25 = _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
  v558[3] = v17;
  v558[2] = v16;
  v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v25) & _xmm);
  if ( v26 >= 0.00012207031 )
    goto LABEL_29;
  v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v15 + 2)) & _xmm);
  if ( v27 < 0.00012207031
    && (v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v17 + 2)) & _xmm), v28 < 0.00012207031) )
  {
    v32 = FLOAT_1_0;
  }
  else
  {
    if ( v26 >= 0.00012207031
      || (v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v15 + 2)) & _xmm), v29 >= 0.00012207031)
      || (v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm), v30 >= 0.00012207031)
      || (v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v16 + 1)) & _xmm), v31 >= 0.00012207031) )
    {
LABEL_29:
      if ( v493.m128_f32[0] == 1.0
        && v493.m128_f32[1] == 0.0
        && v25 == 0.0
        && v14.m128_f32[3] == 0.0
        && *(float *)&v494 == 0.0
        && *((float *)&v494 + 1) == 1.0
        && *((float *)&v15 + 2) == 0.0
        && *((float *)&v15 + 3) == 0.0
        && v24 == 0.0
        && *((float *)&v16 + 1) == 0.0
        && *((float *)&v16 + 2) == 1.0
        && *((float *)&v16 + 3) == 0.0 )
      {
        v37 = (float *)&v485;
        *(float *)&v38 = *(float *)&v496 + *((float *)v6 + 37);
        *(float *)&v39 = *((float *)&v496 + 1) + *((float *)v6 + 36);
        v40 = *((float *)&v17 + 2) + *((float *)v6 + 39);
        *(float *)&v17 = *((float *)&v496 + 1) + *((float *)v6 + 38);
        v41 = *((float *)&v17 + 2) + *((float *)v6 + 40);
        *(float *)&v485 = *(float *)&v496 + *v21;
        v42 = 6;
        *(_QWORD *)((char *)&v485 + 4) = __PAIR64__(v38, v39);
        v43 = 1;
        v486 = v40;
        HIDWORD(v485) = v17;
        v487 = v41;
      }
      else
      {
        CBaseMatrix::Transform3DRectToPerspective((float *)v558, (float *)v6 + 35, &v590);
        v41 = v487;
        v37 = &v590;
        v40 = v486;
        v42 = 24;
        v43 = 0;
      }
      for ( i = 0; i < v42; ++i )
        v37 = (float *)((char *)v37 + v23);
      if ( !v43 )
      {
        v63 = (float *)&v591;
        v41 = FLOAT_N3_4028235e38;
        v40 = v22;
        v485 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
        v64 = 2LL;
        v65 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
        v66 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
        v67 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
        v68 = *(float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff;
        v486 = v22;
        v487 = FLOAT_N3_4028235e38;
        do
        {
          v69 = *(v63 - 1);
          if ( v68 > v69 )
          {
            v68 = *(v63 - 1);
            *(float *)&v485 = v68;
          }
          if ( v69 > v66 )
          {
            v66 = v69;
            *((float *)&v485 + 2) = v69;
          }
          v70 = *v63;
          if ( v67 > *v63 )
          {
            v67 = *v63;
            *((float *)&v485 + 1) = *v63;
          }
          if ( v70 > v65 )
          {
            v65 = v70;
            *((float *)&v485 + 3) = v70;
          }
          v71 = v63[1];
          if ( v40 > v71 )
          {
            v40 = v63[1];
            v486 = v40;
          }
          if ( v71 > v41 )
          {
            v41 = v71;
            v487 = v71;
          }
          v72 = v63[2];
          if ( v68 > v72 )
          {
            v68 = v63[2];
            *(float *)&v485 = v68;
          }
          if ( v72 > v66 )
          {
            v66 = v72;
            *((float *)&v485 + 2) = v72;
          }
          v73 = v63[3];
          if ( v67 > v73 )
          {
            v67 = v63[3];
            *((float *)&v485 + 1) = v67;
          }
          if ( v73 > v65 )
          {
            v65 = v73;
            *((float *)&v485 + 3) = v73;
          }
          v74 = v63[4];
          if ( v40 > v74 )
          {
            v40 = v63[4];
            v486 = v40;
          }
          if ( v74 > v41 )
          {
            v41 = v74;
            v487 = v74;
          }
          v75 = v63[5];
          if ( v68 > v75 )
          {
            v68 = v63[5];
            *(float *)&v485 = v68;
          }
          if ( v75 > v66 )
          {
            v66 = v75;
            *((float *)&v485 + 2) = v75;
          }
          v76 = v63[6];
          if ( v67 > v76 )
          {
            v67 = v63[6];
            *((float *)&v485 + 1) = v67;
          }
          if ( v76 > v65 )
          {
            v65 = v76;
            *((float *)&v485 + 3) = v76;
          }
          v77 = v63[7];
          if ( v40 > v77 )
          {
            v40 = v63[7];
            v486 = v40;
          }
          if ( v77 > v41 )
          {
            v41 = v77;
            v487 = v77;
          }
          v78 = v63[8];
          if ( v68 > v78 )
          {
            v68 = v63[8];
            *(float *)&v485 = v68;
          }
          if ( v78 > v66 )
          {
            v66 = v78;
            *((float *)&v485 + 2) = v78;
          }
          v79 = v63[9];
          if ( v67 > v79 )
          {
            v67 = v63[9];
            *((float *)&v485 + 1) = v67;
          }
          if ( v79 > v65 )
          {
            v65 = v79;
            *((float *)&v485 + 3) = v79;
          }
          v80 = v63[10];
          if ( v40 > v80 )
          {
            v40 = v63[10];
            v486 = v40;
          }
          if ( v80 > v41 )
          {
            v41 = v80;
            v487 = v80;
          }
          v63 += 12;
          --v64;
        }
        while ( v64 );
      }
      goto LABEL_144;
    }
    v32 = FLOAT_1_0;
    v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v16 + 2) - 1.0)) & _xmm);
    if ( v33 >= 0.00012207031
      && (v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v16 + 2)) & _xmm), v34 >= 0.00012207031)
      || (v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v16 + 3)) & _xmm), v35 >= 0.00012207031)
      || (v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v17 + 2)) & _xmm), v36 >= 0.00012207031) )
    {
LABEL_28:
      v22 = FLOAT_3_4028235e38;
      goto LABEL_29;
    }
  }
  v44 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v15 + 3)) & _xmm);
  v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v496 + 3)) & _xmm);
  v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14.m128_f32[3]) & _xmm)
                                                                          * 40960.0)
                                                                  + (float)(v44 * 40960.0))
                                                          + v45)
                                                  - v32)) & _xmm);
  if ( v46 >= 0.00012207031 )
    goto LABEL_28;
  v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v6 + 40)) & _xmm);
  if ( v47 >= 0.00012207031 )
    goto LABEL_28;
  v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v6 + 39)) & _xmm);
  if ( v48 >= 0.00012207031 )
    goto LABEL_28;
  v49 = *v21;
  v50 = *((float *)v6 + 37);
  v51 = *((float *)v6 + 36);
  v52 = *((float *)v6 + 38);
  *(float *)v545 = *v21;
  *(float *)&v545[2] = v50;
  *(float *)&v545[1] = v51;
  *(float *)&v545[3] = v52;
  if ( v493.m128_f32[0] == v32
    && v493.m128_f32[1] == 0.0
    && v25 == 0.0
    && v14.m128_f32[3] == 0.0
    && *(float *)&v494 == 0.0
    && *((float *)&v494 + 1) == v32
    && *((float *)&v15 + 2) == 0.0
    && *((float *)&v15 + 3) == 0.0
    && v24 == 0.0
    && *((float *)&v16 + 1) == 0.0
    && *((float *)&v16 + 2) == v32
    && *((float *)&v16 + 3) == 0.0 )
  {
    v53 = &v507;
    v54 = 4;
    v55 = *(float *)&v496 + v49;
    v56 = 1;
    v57 = *(float *)&v496 + v50;
    v58 = *((float *)&v496 + 1) + v52;
    v59 = *((float *)&v496 + 1) + v51;
    v507 = v55;
    v509 = *(float *)&v496 + v50;
    v510 = *((float *)&v496 + 1) + v52;
    v508 = *((float *)&v496 + 1) + v51;
  }
  else
  {
    CBaseMatrix::Transform2DRectToPerspective(
      (CBaseMatrix *)v558,
      (const struct MilRectF *)v545,
      (struct MilPoint2F *const)&v576);
    v58 = v510;
    v53 = (float *)&v576;
    v57 = v509;
    v56 = 0;
    v59 = v508;
    v54 = v60;
    v55 = v507;
  }
  v61 = 0;
  do
  {
    ++v61;
    v53 = (float *)((char *)v53 + v23);
  }
  while ( v61 < v54 );
  if ( !v56 )
  {
    v57 = v577;
    v469 = v576;
    v461 = v576;
    if ( *(float *)&v576 <= v577 )
      LODWORD(v55) = (_DWORD)v461;
    else
      v55 = v577;
    v59 = *((float *)&v461 + 1);
    if ( *((float *)&v461 + 1) > v578 )
      v59 = v578;
    if ( v577 <= *(float *)&v576 )
      LODWORD(v57) = (_DWORD)v469;
    v58 = *((float *)&v469 + 1);
    if ( v578 > *((float *)&v469 + 1) )
      v58 = v578;
    if ( v55 > v579 )
      v55 = v579;
    if ( v59 > v580 )
      v59 = v580;
    if ( v579 > v57 )
      v57 = v579;
    if ( v580 > v58 )
      v58 = v580;
    if ( v55 > v581 )
      v55 = v581;
    if ( v59 > v582 )
      v59 = v582;
    if ( v581 > v57 )
      v57 = v581;
    if ( v582 > v58 )
      v58 = v582;
    v510 = v58;
    v509 = v57;
    v508 = v59;
    v507 = v55;
  }
  v20 = _xmm;
  v41 = 0.0;
  *(_QWORD *)&v485 = __PAIR64__(LODWORD(v59), LODWORD(v55));
  v40 = 0.0;
  *((_QWORD *)&v485 + 1) = __PAIR64__(LODWORD(v58), LODWORD(v57));
  v487 = 0.0;
  v486 = 0.0;
LABEL_144:
  v81 = *((_DWORD *)v12 + 176);
  if ( !v81 || !*(_DWORD *)(76LL * (unsigned int)(v81 - 1) + *((_QWORD *)v12 + 85) + 4) || !*((_DWORD *)v12 + 638) )
  {
    v83 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    goto LABEL_150;
  }
  v82 = *((_DWORD *)v12 + 638);
  if ( v82 )
  {
    v83 = *(_OWORD *)(*((_QWORD *)v12 + 321) + 16LL * (unsigned int)(v82 - 1));
LABEL_150:
    v512 = v83;
  }
  if ( v81 && *(_DWORD *)(76LL * (unsigned int)(v81 - 1) + *((_QWORD *)v12 + 85) + 8) )
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
      (__int64)&v512,
      104LL * (unsigned int)(*((_DWORD *)v12 + 374) - 1) + *((_QWORD *)v12 + 184) + 80LL);
  v549 = v40;
  v548 = v512;
  v550 = v41;
  TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    &v485,
    &v548);
  v86 = *((float *)&v485 + 2);
  v87 = *((_DWORD *)this + 102);
  LODWORD(v461) = DWORD1(v485);
  LODWORD(v469) = HIDWORD(v485);
  v456 = *(float *)&v485;
  v511 = v485;
  if ( v87 )
  {
    v92 = (unsigned int)(v87 - 1);
    v93 = *((_QWORD *)this + 53);
    v92 <<= 6;
    v88 = *(__m128 *)(v92 + v93);
    v89 = *(_OWORD *)(v92 + v93 + 16);
    v90 = *(_OWORD *)(v92 + v93 + 32);
    v91 = *(_OWORD *)(v92 + v93 + 48);
  }
  else
  {
    v88 = (__m128)IdentityMatrix;
    v89 = xmmword_18019E9C0;
    v90 = xmmword_18019E9D0;
    v91 = xmmword_18019E9E0;
  }
  v494 = v89;
  v495 = v90;
  v94 = *(float *)&v90;
  v557[1] = v89;
  v493 = v88;
  v496 = v91;
  v557[0] = v88;
  v95 = _mm_shuffle_ps(v88, v88, 170).m128_f32[0];
  v557[3] = v91;
  v557[2] = v90;
  v96 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v95) & v20);
  if ( v96 >= 0.00012207031 )
    goto LABEL_168;
  v97 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v89 + 2)) & _xmm);
  if ( v97 < 0.00012207031
    && (v98 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v91 + 2)) & _xmm), v98 < 0.00012207031) )
  {
    v102 = FLOAT_1_0;
  }
  else
  {
    if ( v96 >= 0.00012207031 )
      goto LABEL_168;
    v99 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v89 + 2)) & _xmm);
    if ( v99 >= 0.00012207031 )
      goto LABEL_168;
    v100 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v94) & _xmm);
    if ( v100 >= 0.00012207031 )
      goto LABEL_168;
    v101 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v90 + 1)) & _xmm);
    if ( v101 >= 0.00012207031 )
      goto LABEL_168;
    v102 = FLOAT_1_0;
    v103 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v90 + 2) - 1.0)) & _xmm);
    if ( v103 >= 0.00012207031 )
    {
      v104 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v90 + 2)) & _xmm);
      if ( v104 >= 0.00012207031 )
        goto LABEL_168;
    }
    v105 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v90 + 3)) & _xmm);
    if ( v105 >= 0.00012207031 )
      goto LABEL_168;
    v106 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v91 + 2)) & _xmm);
    if ( v106 >= 0.00012207031 )
      goto LABEL_168;
  }
  v115 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v89 + 3)) & _xmm);
  v116 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v496 + 3)) & _xmm);
  v117 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v493.m128_f32[3]) & _xmm)
                                                                           * 40960.0)
                                                                   + (float)(v115 * 40960.0))
                                                           + v116)
                                                   - v102)) & _xmm);
  if ( v117 >= 0.00012207031
    || (v118 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v84[5]) & _xmm), v118 >= 0.00012207031)
    || (v119 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v84[4]) & _xmm), v119 >= 0.00012207031) )
  {
LABEL_168:
    if ( v493.m128_f32[0] == 1.0
      && v493.m128_f32[1] == 0.0
      && v95 == 0.0
      && v493.m128_f32[3] == 0.0
      && *(float *)&v494 == 0.0
      && *((float *)&v494 + 1) == 1.0
      && *((float *)&v89 + 2) == 0.0
      && *((float *)&v89 + 3) == 0.0
      && v94 == 0.0
      && *((float *)&v90 + 1) == 0.0
      && *((float *)&v90 + 2) == 1.0
      && *((float *)&v90 + 3) == 0.0 )
    {
      v107 = (float *)&v488;
      v108 = *(float *)&v496 + *v84;
      *(float *)&v91 = *(float *)&v496 + v84[2];
      v109 = *((float *)&v496 + 1) + v84[1];
      *(float *)&v110 = *((float *)&v91 + 2) + v84[4];
      v111 = *((float *)&v496 + 1) + v84[3];
      *(float *)&v112 = *((float *)&v91 + 2) + v84[5];
      *(float *)&v488 = v108;
      v113 = 6;
      *(_QWORD *)((char *)&v488 + 4) = __PAIR64__(v91, LODWORD(v109));
      v114 = 1;
      v489 = __PAIR64__(v112, v110);
      *((float *)&v488 + 3) = v111;
    }
    else
    {
      CBaseMatrix::Transform3DRectToPerspective((float *)v557, v84, &v594);
      v107 = &v594;
      v113 = 24;
      v86 = *((float *)&v511 + 2);
      v114 = 0;
      v111 = *((float *)&v488 + 3);
      v109 = *((float *)&v488 + 1);
      LODWORD(v108) = v488;
      LODWORD(v469) = HIDWORD(v511);
      v456 = *(float *)&v511;
      LODWORD(v91) = DWORD2(v488);
      LODWORD(v461) = DWORD1(v511);
    }
    for ( j = 0; j < v113; ++j )
      v107 = (float *)((char *)v107 + v85);
    if ( !v114 )
    {
      v130 = (float *)&v595;
      v131 = FLOAT_3_4028235e38;
      v132 = 2LL;
      v133 = FLOAT_N3_4028235e38;
      v488 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
      v111 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
      LODWORD(v91) = DWORD2(_xmm_ff7fffffff7fffff7f7fffff7f7fffff);
      v109 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
      LODWORD(v108) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
      v489 = __PAIR64__(LODWORD(FLOAT_N3_4028235e38), LODWORD(FLOAT_3_4028235e38));
      do
      {
        v134 = *(v130 - 1);
        if ( v108 > v134 )
        {
          v108 = *(v130 - 1);
          *(float *)&v488 = v108;
        }
        if ( v134 > *(float *)&v91 )
        {
          *(float *)&v91 = v134;
          *((float *)&v488 + 2) = v134;
        }
        v135 = *v130;
        if ( v109 > *v130 )
        {
          v109 = *v130;
          *((float *)&v488 + 1) = *v130;
        }
        if ( v135 > v111 )
        {
          v111 = v135;
          *((float *)&v488 + 3) = v135;
        }
        v136 = v130[1];
        if ( v131 > v136 )
        {
          v131 = v130[1];
          *(float *)&v489 = v131;
        }
        if ( v136 > v133 )
        {
          v133 = v136;
          *((float *)&v489 + 1) = v136;
        }
        v137 = v130[2];
        if ( v108 > v137 )
        {
          v108 = v130[2];
          *(float *)&v488 = v108;
        }
        if ( v137 > *(float *)&v91 )
        {
          *(float *)&v91 = v137;
          *((float *)&v488 + 2) = v137;
        }
        v138 = v130[3];
        if ( v109 > v138 )
        {
          v109 = v130[3];
          *((float *)&v488 + 1) = v109;
        }
        if ( v138 > v111 )
        {
          v111 = v138;
          *((float *)&v488 + 3) = v138;
        }
        v139 = v130[4];
        if ( v131 > v139 )
        {
          v131 = v130[4];
          *(float *)&v489 = v131;
        }
        if ( v139 > v133 )
        {
          v133 = v139;
          *((float *)&v489 + 1) = v139;
        }
        v140 = v130[5];
        if ( v108 > v140 )
        {
          v108 = v130[5];
          *(float *)&v488 = v108;
        }
        if ( v140 > *(float *)&v91 )
        {
          *(float *)&v91 = v140;
          *((float *)&v488 + 2) = v140;
        }
        v141 = v130[6];
        if ( v109 > v141 )
        {
          v109 = v130[6];
          *((float *)&v488 + 1) = v109;
        }
        if ( v141 > v111 )
        {
          v111 = v141;
          *((float *)&v488 + 3) = v141;
        }
        v142 = v130[7];
        if ( v131 > v142 )
        {
          v131 = v130[7];
          *(float *)&v489 = v131;
        }
        if ( v142 > v133 )
        {
          v133 = v142;
          *((float *)&v489 + 1) = v142;
        }
        v143 = v130[8];
        if ( v108 > v143 )
        {
          v108 = v130[8];
          *(float *)&v488 = v108;
        }
        if ( v143 > *(float *)&v91 )
        {
          *(float *)&v91 = v143;
          *((float *)&v488 + 2) = v143;
        }
        v144 = v130[9];
        if ( v109 > v144 )
        {
          v109 = v130[9];
          *((float *)&v488 + 1) = v109;
        }
        if ( v144 > v111 )
        {
          v111 = v144;
          *((float *)&v488 + 3) = v144;
        }
        v145 = v130[10];
        if ( v131 > v145 )
        {
          v131 = v130[10];
          *(float *)&v489 = v131;
        }
        if ( v145 > v133 )
        {
          v133 = v145;
          *((float *)&v489 + 1) = v145;
        }
        v130 += 12;
        --v132;
      }
      while ( v132 );
    }
    goto LABEL_283;
  }
  v120 = *v84;
  v121 = v84[2];
  v122 = v84[1];
  v123 = v84[3];
  *(float *)v546 = *v84;
  *(float *)&v546[2] = v121;
  *(float *)&v546[1] = v122;
  *(float *)&v546[3] = v123;
  if ( v493.m128_f32[0] == 1.0
    && v493.m128_f32[1] == 0.0
    && v95 == 0.0
    && v493.m128_f32[3] == 0.0
    && *(float *)&v494 == 0.0
    && *((float *)&v494 + 1) == 1.0
    && *((float *)&v89 + 2) == 0.0
    && *((float *)&v89 + 3) == 0.0
    && v94 == 0.0
    && *((float *)&v90 + 1) == 0.0
    && *((float *)&v90 + 2) == 1.0
    && *((float *)&v90 + 3) == 0.0 )
  {
    v108 = v120 + *(float *)&v496;
    v109 = v122 + *((float *)&v496 + 1);
    *(float *)&v91 = v121 + *(float *)&v496;
    v111 = v123 + *((float *)&v496 + 1);
    v124 = &v503;
    v125 = v85;
    v503 = v108;
    v126 = 1;
    v504 = v109;
    v505 = v91;
    v506 = v111;
  }
  else
  {
    CBaseMatrix::Transform2DRectToPerspective(
      (CBaseMatrix *)v557,
      (const struct MilRectF *)v546,
      (struct MilPoint2F *const)&v562);
    v111 = v506;
    v124 = (float *)&v562;
    LODWORD(v91) = v505;
    v126 = 0;
    v109 = v504;
    v125 = v127;
    v108 = v503;
  }
  v128 = 0;
  do
  {
    ++v128;
    v124 = (float *)((char *)v124 + v85);
  }
  while ( v128 < v125 );
  if ( !v126 )
  {
    *(float *)&v91 = v563;
    *(_QWORD *)&v497 = v562;
    v463 = v562;
    if ( *(float *)&v562 <= v563 )
      LODWORD(v108) = v463;
    else
      v108 = v563;
    v109 = *((float *)&v463 + 1);
    if ( *((float *)&v463 + 1) > v564 )
      v109 = v564;
    if ( v563 <= *(float *)&v562 )
      LODWORD(v91) = v497;
    v111 = *((float *)&v497 + 1);
    if ( v564 > *((float *)&v497 + 1) )
      v111 = v564;
    if ( v108 > v565 )
      v108 = v565;
    if ( v109 > v566 )
      v109 = v566;
    if ( v565 > *(float *)&v91 )
      *(float *)&v91 = v565;
    if ( v566 > v111 )
      v111 = v566;
    if ( v108 > v567 )
      v108 = v567;
    if ( v109 > v568 )
      v109 = v568;
    if ( v567 > *(float *)&v91 )
      *(float *)&v91 = v567;
    if ( v568 > v111 )
      v111 = v568;
    v506 = v111;
    v505 = v91;
    v504 = v109;
    v503 = v108;
  }
  v489 = 0LL;
  *((_QWORD *)&v488 + 1) = __PAIR64__(LODWORD(v111), v91);
  *(_QWORD *)&v488 = __PAIR64__(LODWORD(v109), LODWORD(v108));
LABEL_283:
  *(float *)v547 = v108;
  v146 = v456;
  v547[2] = v91;
  *(float *)&v547[1] = v109;
  *(float *)&v547[3] = v111;
  if ( v86 <= v456 )
    goto LABEL_337;
  v147 = *(float *)&v469;
  v148 = *(float *)&v461;
  if ( *(float *)&v469 <= *(float *)&v461 )
    goto LABEL_337;
  if ( !*((_BYTE *)v12 + 5967) || !*((_QWORD *)v12 + 722) )
    goto LABEL_302;
  if ( *((_BYTE *)a2 + 32) )
  {
    v149 = (const struct CVisualTree **)((char *)v6 + 432);
  }
  else
  {
    v156 = (const struct CVisualTree **)*((_QWORD *)v6 + 52);
    if ( v156 == (const struct CVisualTree **)((char *)v6 + 416) )
      goto LABEL_302;
    while ( 1 )
    {
      v149 = v156 - 33;
      if ( v156[4] == a2 )
        break;
      v156 = (const struct CVisualTree **)*v156;
      if ( v156 == (const struct CVisualTree **)((char *)v6 + 416) )
        goto LABEL_302;
    }
  }
  if ( !v149 )
  {
LABEL_302:
    v157 = this;
    goto LABEL_341;
  }
  if ( !v149[4] )
  {
    v149[4] = (const struct CVisualTree *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v149[3]
                                                                                                + 248LL))(v149[3]);
    v147 = *((float *)&v511 + 3);
    v86 = *((float *)&v511 + 2);
    v148 = *((float *)&v511 + 1);
    v146 = *(float *)&v511;
  }
  v150 = v149[4];
  if ( !v150 )
    goto LABEL_340;
  v151 = *((_DWORD *)v150 + 3);
  v152 = *((_QWORD *)v12 + 722);
  if ( v86 <= v146 || v147 <= v148 )
    goto LABEL_980;
  if ( !*((_BYTE *)v12 + 5640) && *(_BYTE *)(v152 + 520) )
  {
    *(float *)v544 = v146;
    *(float *)&v544[1] = v148;
    *(float *)&v544[2] = v86;
    *(float *)&v544[3] = v147;
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)(v152 + 588)) )
    {
      v146 = v155 + v153[12];
      v148 = v154 + v153[13];
      v86 = v86 + v153[12];
      v147 = v147 + v153[13];
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v153,
        (const struct MilRectF *)v544,
        (struct MilPoint2F *const)&v583);
      v86 = v584;
      v463 = v583;
      *(_QWORD *)&v497 = v583;
      if ( *(float *)&v583 <= v584 )
        v146 = *(float *)&v497;
      else
        v146 = v584;
      v148 = *((float *)&v497 + 1);
      if ( *((float *)&v497 + 1) > v585 )
        v148 = v585;
      if ( v584 <= *(float *)&v583 )
        v86 = *(float *)&v463;
      v147 = *((float *)&v463 + 1);
      if ( v585 > *((float *)&v463 + 1) )
        v147 = v585;
      if ( v146 > v586 )
        v146 = v586;
      if ( v148 > v587 )
        v148 = v587;
      if ( v586 > v86 )
        v86 = v586;
      if ( v587 > v147 )
        v147 = v587;
      if ( v146 > v588 )
        v146 = v588;
      if ( v148 > v589 )
        v148 = v589;
      if ( v588 > v86 )
        v86 = v588;
      if ( v589 > v147 )
        v147 = v589;
    }
    v537 = v147;
    v536 = v86;
    v535 = v148;
    v534 = v146;
  }
  v158 = *(_QWORD *)(v152 + 96);
  *(float *)v513 = v146;
  *(float *)&v513[1] = v148;
  *(float *)&v513[3] = v147;
  *(float *)&v513[2] = v86;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v158 + 40LL))(v158, v513, v151) )
  {
LABEL_980:
    if ( !qword_1801A39E8 )
      goto LABEL_337;
    v159 = *((_DWORD *)qword_1801A39E8 + 18);
    v160 = 0LL;
    if ( !v159 )
      goto LABEL_337;
    while ( 1 )
    {
      v161 = *(_QWORD *)(*((_QWORD *)qword_1801A39E8 + 6) + 8 * v160);
      if ( *(_BYTE *)(v161 + 304) || *(_BYTE *)(v161 + 303) || *(_BYTE *)(v161 + 220) || *(_DWORD *)(v161 + 216) )
        break;
      v160 = (unsigned int)(v160 + 1);
      if ( (unsigned int)v160 >= v159 )
        goto LABEL_337;
    }
    v157 = v454;
    *((_BYTE *)v6 + 72) |= 0x40u;
    ++*((_DWORD *)v157 + 1435);
  }
  else
  {
LABEL_340:
    v157 = v454;
  }
LABEL_341:
  if ( *((_BYTE *)v157 + 5919) && *((_QWORD *)v157 + 716) )
  {
    if ( *((_BYTE *)a2 + 32) )
    {
      v163 = (const struct CVisualTree **)((char *)v6 + 432);
    }
    else
    {
      v168 = (const struct CVisualTree **)*((_QWORD *)v6 + 52);
      if ( v168 == (const struct CVisualTree **)((char *)v6 + 416) )
        goto LABEL_355;
      while ( 1 )
      {
        v163 = v168 - 33;
        if ( v168[4] == a2 )
          break;
        v168 = (const struct CVisualTree **)*v168;
        if ( v168 == (const struct CVisualTree **)((char *)v6 + 416) )
          goto LABEL_355;
      }
    }
    if ( v163 )
    {
      if ( !v163[4] )
        v163[4] = (const struct CVisualTree *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v163[3] + 248LL))(v163[3]);
      v164 = v163[4];
      if ( v164 )
      {
        v165 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v164 + 24LL))(v163[4]);
        v166 = v454;
        *((_DWORD *)v454 + 1434) = v165;
        v167 = *((_DWORD *)v166 + 1397);
        if ( v165 >= v167 )
        {
          if ( *((_DWORD *)v164 + 3) < v167 )
            goto LABEL_338;
          goto LABEL_337;
        }
      }
    }
  }
LABEL_355:
  v169 = FLOAT_1_0;
  v514 = v6;
  v170 = FLOAT_1_0;
  v171 = *((_QWORD *)v6 + 49);
  if ( v171 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v171 + 48LL))(*((_QWORD *)v6 + 49), 8LL) )
  {
    v170 = *(double *)(*((_QWORD *)v6 + 49) + 56LL);
    if ( v170 <= 1.0 )
    {
      if ( v170 < 0.0 )
        v170 = 0.0;
    }
    else
    {
      v170 = FLOAT_1_0;
    }
  }
  v172 = *((float *)v6 + 96);
  if ( v172 <= 1.0 )
  {
    if ( v172 < 0.0 )
      v172 = 0.0;
  }
  else
  {
    v172 = FLOAT_1_0;
  }
  v173 = *((_DWORD *)v12 + 646);
  v516 = v172;
  if ( v173 )
    v174 = *(float *)(*((_QWORD *)v12 + 325) + 4LL * (unsigned int)(v173 - 1));
  else
    v174 = *(float *)&v468;
  v175 = v174 * v170;
  *(float *)&v515 = v175;
  v176 = *((_QWORD *)v6 + 44);
  if ( v176 )
  {
    v177 = (_QWORD *)((char *)v6 + 132);
    v7 = (*(_BYTE *)(v176 + 32) & 1) == 0;
    v178 = 0LL;
    v179 = 0LL;
    *(_QWORD *)&v497 = 0LL;
    if ( !v7
      || *(_BYTE *)(v176 + 88)
      && (*(float *)(v176 + 80) != *(float *)v177 || *(float *)(v176 + 84) != *((float *)v6 + 34)) )
    {
      v7 = *(_BYTE *)(v176 + 88) == 0;
      v478 = 0LL;
      if ( !v7 )
        v178 = (char *)v6 + 132;
      v180 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v176 + 112LL))(v176, v178, &v478);
      LODWORD(v178) = v180;
      if ( v180 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v180, 0x49u);
        goto LABEL_389;
      }
      v181 = *(void (__fastcall ****)(_QWORD, __int64))(v176 + 64);
      v182 = (__int64 *)(v176 + 64);
      if ( v181 )
        (**v181)(*(_QWORD *)(v176 + 64), 1LL);
      v183 = *(const struct D2DMatrix **)(v176 + 72);
      *v182 = 0LL;
      if ( !v183 || (unsigned int)D2DMatrixIsIdentity(v183) )
      {
        v187 = v478;
      }
      else
      {
        v186 = CShape::Combine(v478, v185, 0LL, 0LL, v184, (_QWORD *)(v176 + 64));
        LODWORD(v178) = v186;
        if ( v186 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v186, 0x56u);
          v179 = v497;
          goto LABEL_389;
        }
        v187 = *v182;
      }
      *(_QWORD *)(v176 + 56) = v187;
      if ( v177 )
        *(_QWORD *)(v176 + 80) = *v177;
      *(_DWORD *)(v176 + 32) &= ~1u;
    }
    v179 = *(_QWORD *)(v176 + 56);
LABEL_389:
    if ( (int)v178 >= 0 )
    {
      v188 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v179 + 24LL))(v179, &v532, 0LL);
      LODWORD(v178) = v188;
      if ( v188 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v188, 0x26u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, (int)v178, 0x24u);
    }
    if ( (_DWORD)v178 == -2003304438 )
    {
      v189 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v190 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v191 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v532 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v192 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    }
    else
    {
      if ( (int)v178 < 0 )
      {
LABEL_402:
        v6 = v455;
        v12 = v457;
        v169 = FLOAT_1_0;
        goto LABEL_403;
      }
      v192 = *((float *)&v532 + 3);
      v191 = *((float *)&v532 + 2);
      v190 = *((float *)&v532 + 1);
      v189 = *(float *)&v532;
    }
    if ( (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v189
       || v191 < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
      && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v190
       || v192 < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
    {
      LOBYTE(v530) = 1;
      D2DMatrixIdentity((struct D2DMatrix *)&v521);
    }
    goto LABEL_402;
  }
LABEL_403:
  v193 = HIBYTE(v530);
  if ( *((_QWORD *)v6 + 41) )
    v193 = 1;
  HIBYTE(v530) = v193;
  v194 = *((_QWORD *)v6 + 49);
  if ( v194 )
  {
    v195 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v194 + 48LL))(*((_QWORD *)v6 + 49), 9LL);
    v196 = v531;
    if ( v195 )
      v196 = 1;
    v531 = v196;
  }
  if ( v169 <= v175 )
  {
    v198 = _xmm;
  }
  else
  {
    v197 = (float)(v175 - v169);
    v198 = _xmm;
    v199 = COERCE_DOUBLE(*(_QWORD *)&v197 & _xmm);
    if ( v199 >= 0.0000011920929 )
    {
      v200 = *((_QWORD *)v6 + 7);
      if ( (v200 & 2) != 0 )
        v200 = *(_QWORD *)(v200 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v200) = v200 & 1;
      if ( !(_DWORD)v200 && *((char *)v6 + 72) < 0 && *((_DWORD *)v12 + 63) != 4
        || *((_DWORD *)v12 + 64) == 1
        || *((_DWORD *)v6 + 21) == 1 )
      {
        HIDWORD(v515) = 1;
      }
      else
      {
        HIDWORD(v515) = 2;
        if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
        {
          if ( (unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)v6 + 56)) )
            *((_DWORD *)v12 + 1494) |= 0x20u;
          if ( *((char *)v6 + 72) >= 0 )
            *((_DWORD *)v12 + 1494) |= 0x40u;
        }
      }
    }
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v515) & v198) >= 0.0000011920929
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v516) & v198) >= 0.0000011920929 )
  {
    v202 = v454;
  }
  else
  {
    if ( !qword_1801A39E8 || !CDisplaySet::NeedsDesktopMoves(qword_1801A39E8) )
      goto LABEL_337;
    CVisual::ClearAllMoveTransformsInSubtree(v6);
    v201 = *((_BYTE *)v6 + 72);
    v202 = v454;
    if ( (v201 & 0x40) == 0 )
    {
      *((_BYTE *)v6 + 72) = v201 | 0x40;
      ++*((_DWORD *)v202 + 1435);
    }
  }
  v203 = &v521;
  v204 = v462;
  v205 = 0LL;
  if ( !(_BYTE)v530 )
    v203 = 0LL;
  v206 = -2003292412;
  v207 = *(_QWORD *)(*((_QWORD *)v202 + 323) + 8LL);
  if ( *((_BYTE *)v462 + 32) )
  {
    v208 = (__int64 *)(v207 + 432);
  }
  else
  {
    v215 = *(__int64 **)(v207 + 416);
    if ( v215 == (__int64 *)(v207 + 416) )
      goto LABEL_448;
    while ( 1 )
    {
      v208 = v215 - 33;
      if ( (struct CVisualTree *)v215[4] == v462 )
        break;
      v215 = (__int64 *)*v215;
      if ( v215 == (__int64 *)(v207 + 416) )
        goto LABEL_448;
    }
  }
  if ( !v208 )
  {
LABEL_448:
    v216 = 0;
    goto LABEL_449;
  }
  v209 = *(const struct CVisual ****)(v207 + 344);
  v210 = 0;
  TreeData = 0LL;
  if ( v209 )
  {
    v212 = *v209;
    if ( *v209 )
    {
      IsAncestorInSameSpace = CVisualTree::IsAncestorInSameSpace(v462, (const struct CVisual **)v207, *v209);
      v204 = v462;
      if ( IsAncestorInSameSpace )
      {
        v210 = 1;
        TreeData = CVisual::FindTreeData((CVisual *)v212, v462);
        if ( TreeData )
        {
LABEL_458:
          v219 = *((_QWORD *)TreeData + 14);
          goto LABEL_460;
        }
      }
    }
    else
    {
      CComposition::ReleaseWeakReference(*(CComposition **)(v207 + 16), (struct CWeakReferenceBase *)v209);
      v204 = v462;
      *(_QWORD *)(v207 + 344) = 0LL;
    }
  }
  if ( v207 != *((_QWORD *)v204 + 3) )
  {
    TreeData = 0LL;
    v214 = *(_QWORD *)(v207 + 64);
    if ( *((_BYTE *)v204 + 32) )
    {
      TreeData = (struct CTreeData *)(v214 + 432);
    }
    else
    {
      v217 = (_QWORD *)(v214 + 416);
      v218 = (_QWORD *)*v217;
      if ( (_QWORD *)*v217 != v217 )
      {
        while ( (struct CVisualTree *)v218[4] != v204 )
        {
          v218 = (_QWORD *)*v218;
          if ( v218 == v217 )
            goto LABEL_457;
        }
        TreeData = (struct CTreeData *)(v218 - 33);
      }
    }
  }
LABEL_457:
  if ( TreeData )
    goto LABEL_458;
  v219 = 1LL;
LABEL_460:
  if ( v208[14] >= v219 )
  {
    v205 = 0LL;
    goto LABEL_484;
  }
  v220 = 0LL;
  if ( TreeData )
    v220 = (char *)TreeData + 40;
  v221 = v561;
  if ( !*(_QWORD *)(v207 + 352) )
    v221 = 0LL;
  CVisual::CalcEffectiveTransform(v207, 5LL, v220, &v460, Buf2, v221);
  if ( v210 || v207 == *((_QWORD *)v462 + 3) )
  {
    v222 = 1;
  }
  else if ( v460 )
  {
    v222 = memcmp_0(v220, Buf2, 0x40uLL) != 0;
  }
  else
  {
    v222 = 0;
  }
  v223 = v561;
  if ( !*(_QWORD *)(v207 + 352) )
    v223 = 0LL;
  v224 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, bool, _BYTE *))(*v208 + 48))(v208, Buf2, v222, v223);
  v206 = v224;
  if ( v224 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v224, 0x567u);
LABEL_475:
    v205 = 0LL;
    goto LABEL_476;
  }
  if ( !*(_QWORD *)(v207 + 400) || (*(_BYTE *)(v207 + 74) & 2) == 0 )
    goto LABEL_475;
  v205 = 0LL;
  v477 = 0LL;
  Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v477);
  if ( (int)CComposition::GetManipulationManager(*(CComposition **)(v207 + 16), &v477) >= 0 )
    CManipulationManager::NotifyVisualPropertyChange(v477, (struct CVisual *)v207, (const struct CMILMatrix *)Buf2);
  Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v477);
LABEL_476:
  if ( v206 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v206, 0x477u);
    v204 = v462;
    v202 = v454;
    goto LABEL_448;
  }
LABEL_484:
  v206 = 0;
  if ( !v208[14] )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x70u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x47Eu);
    v5 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x2115u);
    goto LABEL_945;
  }
  v517 = *(_OWORD *)(v208 + 5);
  v518 = *(_OWORD *)(v208 + 7);
  v519 = *(_OWORD *)(v208 + 9);
  v520 = *(_OWORD *)(v208 + 11);
  v216 = (v208[2] & 2) != 0;
  if ( v203 )
  {
    v225 = (_OWORD *)v208[13];
    *(_OWORD *)v203 = *v225;
    *((_OWORD *)v203 + 1) = v225[1];
    *((_OWORD *)v203 + 2) = v225[2];
    *((_OWORD *)v203 + 3) = v225[3];
  }
  v204 = v462;
  v202 = v454;
  v459 = v216;
LABEL_449:
  v5 = v206;
  if ( v206 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v206, 0x2115u);
LABEL_945:
    v6 = v455;
    goto LABEL_338;
  }
  v6 = v455;
  if ( v216 || *((CVisual **)v204 + 3) == v455 )
  {
    if ( !*((_BYTE *)v202 + 5584) )
      D2DMatrixMultiply(
        (struct D2DMatrix *)&v517,
        (const struct D2DMatrix *)&v517,
        (CDrawingContext *)((char *)v202 + 5520));
    v229 = CDrawingContext::PushTransformInternal(v12, v455, (const struct CMILMatrix *)&v517, 0, 1);
    v5 = v229;
    if ( v229 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v229, 0x2127u);
      goto LABEL_338;
    }
    v202 = v454;
  }
  else if ( !*((_BYTE *)v202 + 5584) )
  {
    v226 = *((_DWORD *)v202 + 102);
    if ( v226 )
    {
      v227 = (unsigned int)(v226 - 1);
      v228 = *((_QWORD *)v202 + 53);
      v227 <<= 6;
      v517 = *(_OWORD *)(v227 + v228);
      v518 = *(_OWORD *)(v227 + v228 + 16);
      v519 = *(_OWORD *)(v227 + v228 + 32);
      v520 = *(_OWORD *)(v227 + v228 + 48);
    }
    else
    {
      v517 = IdentityMatrix;
      v518 = xmmword_18019E9C0;
      v519 = xmmword_18019E9D0;
      v520 = xmmword_18019E9E0;
    }
  }
  if ( (_BYTE)v530 && !*((_BYTE *)v202 + 5584) )
    D2DMatrixMultiply(
      (struct D2DMatrix *)&v521,
      (const struct D2DMatrix *)&v521,
      (CDrawingContext *)((char *)v202 + 5520));
  v230 = (__int64 *)*((_QWORD *)v455 + 44);
  v231 = 0;
  v456 = 0.0;
  v232 = 0;
  if ( !v230 )
    goto LABEL_593;
  v233 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v522) & v198);
  if ( v233 >= 0.00012207031 )
    goto LABEL_593;
  v234 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v524) & v198);
  if ( v234 >= 0.00012207031 || (v235 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v528) & v198), v235 >= 0.00012207031) )
  {
    if ( v233 >= 0.00012207031 )
      goto LABEL_593;
    v236 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v524) & v198);
    if ( v236 >= 0.00012207031 )
      goto LABEL_593;
    v237 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v525) & v198);
    if ( v237 >= 0.00012207031 )
      goto LABEL_593;
    v238 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v525 + 1)) & v198);
    if ( v238 >= 0.00012207031 )
      goto LABEL_593;
    v239 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v526 - v169)) & v198);
    if ( v239 >= 0.00012207031 )
    {
      v240 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v526) & v198);
      if ( v240 >= 0.00012207031 )
        goto LABEL_593;
    }
    v241 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v526 + 1)) & v198);
    if ( v241 >= 0.00012207031 )
      goto LABEL_593;
    v242 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v528) & v198);
    if ( v242 >= 0.00012207031 )
      goto LABEL_593;
  }
  v243 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v522 + 1)) & v198);
  v244 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v529) & v198);
  v245 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v524 + 1)) & v198)
                                                                           * 40960.0)
                                                                   + (float)(v243 * 40960.0))
                                                           + v244)
                                                   - v169)) & v198);
  if ( v245 >= 0.00012207031 )
    goto LABEL_593;
  v246 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v521 + 1)) & v198);
  if ( v246 >= 0.00012207031 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v523) & v198) >= 0.00012207031 )
  {
    v247 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v521) & v198);
    if ( v247 >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v523 + 1)) & v198) >= 0.00012207031 )
    {
      goto LABEL_593;
    }
  }
  v7 = (v230[4] & 1) == 0;
  v461 = (char *)v455 + 132;
  v248 = 0LL;
  v5 = 0;
  v249 = 0LL;
  if ( !v7
    || *((_BYTE *)v230 + 88)
    && (*((float *)v230 + 20) != *((float *)v455 + 33) || *((float *)v230 + 21) != *((float *)v455 + 34)) )
  {
    v7 = *((_BYTE *)v230 + 88) == 0;
    v481 = 0LL;
    if ( !v7 )
      v205 = (char *)v455 + 132;
    v250 = (*(__int64 (__fastcall **)(__int64 *, char *, __int64 *, _QWORD))(*v230 + 112))(v230, v205, &v481, 0LL);
    v5 = v250;
    if ( v250 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v250, 0x49u);
      goto LABEL_540;
    }
    v251 = (void (__fastcall ***)(__int64, __int64))v230[8];
    v252 = v230 + 8;
    if ( v251 )
      (**v251)(v230[8], 1LL);
    v253 = (const struct D2DMatrix *)v230[9];
    *v252 = 0LL;
    if ( !v253 || (unsigned int)D2DMatrixIsIdentity(v253) )
    {
      v257 = v481;
    }
    else
    {
      v256 = CShape::Combine(v481, v255, 0LL, 0LL, v254, v230 + 8);
      v5 = v256;
      if ( v256 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v256, 0x56u);
        goto LABEL_540;
      }
      v257 = *v252;
    }
    v230[7] = v257;
    if ( v461 )
      v230[10] = *(_QWORD *)v461;
    *((_DWORD *)v230 + 8) &= ~1u;
  }
  v249 = v230[7];
LABEL_540:
  if ( v5 >= 0 )
  {
    v258 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v249 + 24LL))(v249, &v533, 0LL);
    v5 = v258;
    if ( v258 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v258, 0x26u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x24u);
  }
  if ( v5 == -2003304438 )
  {
    v259 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v260 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v261 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v533 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v262 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v5 = 0;
  }
  else
  {
    v262 = *((float *)&v533 + 3);
    v261 = *((float *)&v533 + 2);
    v260 = *((float *)&v533 + 1);
    v259 = *(float *)&v533;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE71u);
    goto LABEL_577;
  }
  if ( (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v259
     || v261 < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
    && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v260
     || v262 < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
  {
    v5 = 0;
    v248 = 0LL;
    if ( (v230[4] & 1) != 0 )
    {
      v263 = v461;
    }
    else
    {
      if ( !*((_BYTE *)v230 + 88) )
        goto LABEL_574;
      v263 = v461;
      if ( *((float *)v230 + 20) == *(float *)v461 && *((float *)v230 + 21) == *((float *)v461 + 1) )
        goto LABEL_574;
    }
    v264 = *v230;
    v265 = 0LL;
    v7 = *((_BYTE *)v230 + 88) == 0;
    v479 = 0LL;
    if ( !v7 )
      v265 = v263;
    v266 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64 *))(v264 + 112))(v230, v265, &v479);
    v5 = v266;
    if ( v266 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v266, 0x49u);
LABEL_575:
      if ( v5 >= 0 )
        goto LABEL_579;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE78u);
      goto LABEL_577;
    }
    v267 = (void (__fastcall ***)(__int64, __int64))v230[8];
    v268 = v230 + 8;
    if ( v267 )
      (**v267)(v230[8], 1LL);
    v269 = (const struct D2DMatrix *)v230[9];
    *v268 = 0LL;
    if ( !v269 || (unsigned int)D2DMatrixIsIdentity(v269) )
    {
      v272 = v479;
    }
    else
    {
      v271 = CShape::Combine(v479, v270, 0LL, 0LL, 0, v230 + 8);
      v5 = v271;
      if ( v271 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v271, 0x56u);
        goto LABEL_575;
      }
      v272 = *v268;
    }
    v230[7] = v272;
    if ( v263 )
      v230[10] = *v263;
    *((_DWORD *)v230 + 8) &= ~1u;
LABEL_574:
    v248 = (CRegionShape *)v230[7];
    goto LABEL_575;
  }
LABEL_577:
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2142u);
    goto LABEL_945;
  }
LABEL_579:
  if ( (*(unsigned int (__fastcall **)(CRegionShape *))(*(_QWORD *)v248 + 8LL))(v248) )
  {
    if ( (*(unsigned int (__fastcall **)(CRegionShape *))(*(_QWORD *)v248 + 8LL))(v248) != 2 )
      goto LABEL_592;
    v273 = *((_QWORD *)v248 + 1);
    if ( !v273 || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v273 + 136LL))(*((_QWORD *)v248 + 1)) != 1 )
      goto LABEL_592;
  }
  v274 = *(__int64 (__fastcall **)(CRegionShape *))(*(_QWORD *)v248 + 24LL);
  if ( v274 == CRectangleShape::GetTightBounds )
  {
    if ( (unsigned int)D2DMatrixIsIdentity((const struct D2DMatrix *)&v521) )
    {
      v492 = *(__m128 *)((char *)v248 + 8);
    }
    else
    {
      v480 = 0LL;
      if ( (unsigned int)CBaseMatrix::Is2DAffineOrNaN((CBaseMatrix *)&v521, v275) )
      {
        v276 = &v555;
        v277 = 0LL;
        *(_QWORD *)&v497 = v521;
        *((_QWORD *)&v497 + 1) = v523;
        v555 = v497;
        v556 = _mm_unpacklo_ps((__m128)(unsigned int)v527, (__m128)HIDWORD(v527)).m128_u64[0];
      }
      else
      {
        v276 = 0LL;
        v277 = &v521;
      }
      v278 = (*(__int64 (__fastcall **)(CRegionShape *, __int64 *, __int64 *))(*(_QWORD *)v248 + 16LL))(
               v248,
               v277,
               &v480);
      if ( v278 >= 0 )
      {
        if ( !v480 )
        {
          v492 = 0uLL;
LABEL_592:
          v6 = v455;
          v231 = 0;
          v232 = LODWORD(v456);
          v169 = FLOAT_1_0;
LABEL_593:
          v279 = v454;
LABEL_594:
          v280 = 2LL;
          goto LABEL_595;
        }
        (*(void (__fastcall **)(__int64, __int128 *, __m128 *))(*(_QWORD *)v480 + 32LL))(v480, v276, &v539);
        v492 = v539;
        if ( v539.m128_f32[2] < v539.m128_f32[0] || v539.m128_f32[3] < v539.m128_f32[1] )
          v492 = 0uLL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v278, 0x338u);
      }
      if ( v480 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v480 + 16LL))(v480);
    }
  }
  else if ( v274 == CShape::GetTightBounds )
  {
    CShape::GetTightBounds(v248);
  }
  else
  {
    ((void (__fastcall *)(CRegionShape *, __m128 *, __int64 *))v274)(v248, &v492, &v521);
  }
  if ( v492.m128_f32[2] <= v492.m128_f32[0] )
    goto LABEL_592;
  v279 = v454;
  if ( v492.m128_f32[3] <= v492.m128_f32[1]
    || (v283 = *((_QWORD *)v454 + 38),
        v492 = _mm_add_ps(v492, (__m128)_xmm),
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v283 + 72LL))(v283, v541),
        v284 = (float)v541[1],
        v285 = (float)v543,
        (float)v542 > (float)v541[0])
    && v285 > v284
    && ((float)v541[0] < v492.m128_f32[0]
     || v284 < v492.m128_f32[1]
     || v492.m128_f32[2] < (float)v542
     || v492.m128_f32[3] < v285) )
  {
    v169 = FLOAT_1_0;
    v231 = 0;
    v232 = LODWORD(v456);
    v6 = v455;
    goto LABEL_594;
  }
  v169 = FLOAT_1_0;
  v280 = 2LL;
  v6 = v455;
  v232 = 2;
  v231 = 1;
LABEL_595:
  v281 = v462;
  v282 = 0LL;
  if ( *((_BYTE *)v462 + 32) )
  {
    v282 = (int *)((char *)v6 + 432);
  }
  else
  {
    v286 = (struct CVisualTree **)*((_QWORD *)v6 + 52);
    if ( v286 != (struct CVisualTree **)((char *)v6 + 416) )
    {
      while ( v286[4] != v462 )
      {
        v286 = (struct CVisualTree **)*v286;
        if ( v286 == (struct CVisualTree **)((char *)v6 + 416) )
          goto LABEL_621;
      }
      v282 = (int *)(v286 - 33);
    }
  }
LABEL_621:
  v287 = CCpuClippingData::Update(v282 + 46, (__int64)v462, v6, v232, v231);
  v5 = v287;
  if ( v287 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v287, 0x58Bu);
  if ( v5 < 0 )
  {
    v451 = 8538;
LABEL_974:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v451);
    goto LABEL_338;
  }
  v289 = 0;
  v290 = 0LL;
  if ( *((_BYTE *)v281 + 32) )
  {
    v290 = (char *)v6 + 432;
  }
  else
  {
    v288 = (_QWORD *)((char *)v6 + 416);
    v291 = (_QWORD *)*((_QWORD *)v6 + 52);
    if ( v291 != (_QWORD *)((char *)v6 + 416) )
    {
      while ( (struct CVisualTree *)v291[4] != v281 )
      {
        v291 = (_QWORD *)*v291;
        if ( v291 == v288 )
          goto LABEL_632;
      }
      v290 = (char *)(v291 - 33);
    }
  }
LABEL_632:
  v292 = *((_DWORD *)v290 + 46);
  if ( !*((_BYTE *)v457 + 2616) && !*((_DWORD *)v457 + 1447) )
  {
    if ( v292 == 5 )
    {
      if ( !*(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)v279 + 164) - 1) + *((_QWORD *)v279 + 79)) )
        goto LABEL_644;
      v293 = CDrawingContext::PushClippingScope(v457, v6, 0, 0LL, 1);
      v5 = v293;
      if ( v293 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v293, 0x2164u);
        goto LABEL_338;
      }
    }
    else
    {
      if ( v292 != 3 )
        goto LABEL_644;
      CScopedClipStack::GetTopClipBoundsInScope((char *)v279 + 632, v554);
      v294 = CDrawingContext::PushClippingScope(v457, v6, 1, (const struct CMILMatrix *)&v521, 1);
      v5 = v294;
      if ( v294 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v294, 0x2173u);
        goto LABEL_338;
      }
      v295 = CDrawingContext::PushClipRectForNode((__int64)v457, (int)v6, (int)v554, 1);
      v5 = v295;
      if ( v295 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v295, 0x2175u);
        goto LABEL_338;
      }
    }
    v289 = 0;
  }
LABEL_644:
  if ( (_BYTE)v530
    || __PAIR16__(HIBYTE(v530), 0) != v531
    || HIDWORD(v515)
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v516 - v169)) & v198) >= 0.0000011920929 )
  {
    v296 = *((_DWORD *)v279 + 102);
    v297 = xmmword_18019E9E0;
    if ( v296 )
    {
      v302 = (unsigned int)(v296 - 1);
      v303 = *((_QWORD *)v279 + 53);
      v302 <<= 6;
      v298 = *(__m128 *)(v302 + v303);
      v300 = *(_OWORD *)(v302 + v303 + 16);
      v299 = *(_OWORD *)(v302 + v303 + 32);
      v301 = *(_OWORD *)(v302 + v303 + 48);
    }
    else
    {
      v298 = (__m128)IdentityMatrix;
      v299 = xmmword_18019E9D0;
      v300 = xmmword_18019E9C0;
      v301 = xmmword_18019E9E0;
    }
    v304 = (float *)((char *)v6 + 164);
    v494 = v300;
    v305 = *((float *)&v300 + 3);
    v306 = *((float *)&v300 + 2);
    v495 = v299;
    v307 = *(float *)&v299;
    v559[1] = v300;
    v493 = v298;
    v496 = v301;
    v559[0] = v298;
    v308 = _mm_shuffle_ps(v298, v298, 170).m128_f32[0];
    v559[3] = v301;
    v559[2] = v299;
    v309 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v308) & v198);
    if ( v309 >= 0.00012207031 )
      goto LABEL_720;
    v310 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v300 + 2)) & v198);
    if ( v310 >= 0.00012207031
      || (v311 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v301 + 2)) & v198), v311 >= 0.00012207031) )
    {
      if ( v309 >= 0.00012207031 )
        goto LABEL_720;
      v312 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v300 + 2)) & v198);
      if ( v312 >= 0.00012207031 )
        goto LABEL_720;
      v313 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v307) & v198);
      if ( v313 >= 0.00012207031 )
        goto LABEL_720;
      v314 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v299 + 1)) & v198);
      if ( v314 >= 0.00012207031 )
        goto LABEL_720;
      if ( !IsCloseRealOneMatrixEpsilon(*((float *)&v299 + 2)) )
      {
        v315 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v299 + 2)) & v198);
        if ( v315 >= 0.00012207031 )
          goto LABEL_720;
      }
      v316 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v299 + 3)) & v198);
      if ( v316 >= 0.00012207031 )
        goto LABEL_720;
      v317 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v301 + 2)) & v198);
      if ( v317 >= 0.00012207031 )
        goto LABEL_720;
    }
    v318 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v298.m128_f32[3]) & v198);
    v319 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v305) & v198);
    v320 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v496 + 3)) & v198);
    v321 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)(v318 * 40960.0) + (float)(v319 * 40960.0))
                                                             + v320)
                                                     - 1.0)) & v198);
    if ( v321 < 0.00012207031
      && (v322 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v304[5]) & v198), v322 < 0.00012207031)
      && (v323 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v304[4]) & v198), v323 < 0.00012207031) )
    {
      v324 = *v304;
      v325 = v304[2];
      v326 = v304[1];
      v327 = v304[3];
      *(float *)v538 = *v304;
      *(float *)&v538[2] = v325;
      *(float *)&v538[1] = v326;
      *(float *)&v538[3] = v327;
      if ( v493.m128_f32[0] == 1.0
        && v493.m128_f32[1] == 0.0
        && v308 == 0.0
        && v298.m128_f32[3] == 0.0
        && *(float *)&v494 == 0.0
        && *((float *)&v494 + 1) == 1.0
        && v306 == 0.0
        && v305 == 0.0
        && v307 == 0.0
        && *((float *)&v299 + 1) == 0.0
        && *((float *)&v299 + 2) == 1.0
        && *((float *)&v299 + 3) == 0.0 )
      {
        v328 = &v499;
        v329 = *(float *)&v496 + v324;
        v330 = *((float *)&v496 + 1) + v326;
        v331 = 1;
        *(float *)&v301 = *(float *)&v496 + v325;
        v332 = 4;
        v333 = *((float *)&v496 + 1) + v327;
        v499 = *(float *)&v496 + v324;
        v500 = *((float *)&v496 + 1) + v326;
        v501 = *(float *)&v496 + v325;
        v502 = *((float *)&v496 + 1) + v327;
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)v559,
          (const struct MilRectF *)v538,
          (struct MilPoint2F *const)&v569);
        v333 = v502;
        v328 = (float *)&v569;
        *(float *)&v301 = v501;
        v331 = 0;
        v330 = v500;
        v332 = 8;
        v329 = v499;
      }
      v334 = v289;
      do
      {
        ++v334;
        ++v328;
      }
      while ( v334 < v332 );
      if ( !v331 )
      {
        *(float *)&v301 = v570;
        v463 = v569;
        *(_QWORD *)&v497 = v569;
        if ( *(float *)&v569 <= v570 )
          LODWORD(v329) = v497;
        else
          v329 = v570;
        v330 = *((float *)&v497 + 1);
        if ( *((float *)&v497 + 1) > v571 )
          v330 = v571;
        if ( v570 <= *(float *)&v569 )
          LODWORD(v301) = v463;
        v333 = *((float *)&v463 + 1);
        if ( v571 > *((float *)&v463 + 1) )
          v333 = v571;
        if ( v329 > v572 )
          v329 = v572;
        if ( v330 > v573 )
          v330 = v573;
        if ( v572 > *(float *)&v301 )
          *(float *)&v301 = v572;
        if ( v573 > v333 )
          v333 = v573;
        if ( v329 > v574 )
          v329 = v574;
        if ( v330 > v575 )
          v330 = v575;
        if ( v574 > *(float *)&v301 )
          *(float *)&v301 = v574;
        if ( v575 > v333 )
          v333 = v575;
        v502 = v333;
        v501 = *(float *)&v301;
        v500 = v330;
        v499 = v329;
      }
      v491 = 0LL;
      *((_QWORD *)&v490 + 1) = __PAIR64__(LODWORD(v333), v301);
      *(_QWORD *)&v490 = __PAIR64__(LODWORD(v330), LODWORD(v329));
    }
    else
    {
LABEL_720:
      if ( v493.m128_f32[0] == 1.0
        && v493.m128_f32[1] == 0.0
        && v308 == 0.0
        && v298.m128_f32[3] == 0.0
        && *(float *)&v494 == 0.0
        && *((float *)&v494 + 1) == 1.0
        && v306 == 0.0
        && v305 == 0.0
        && v307 == 0.0
        && *((float *)&v299 + 1) == 0.0
        && *((float *)&v299 + 2) == 1.0
        && *((float *)&v299 + 3) == 0.0 )
      {
        v335 = (float *)&v490;
        v329 = *(float *)&v496 + *v304;
        *(float *)&v301 = *(float *)&v496 + v304[2];
        v330 = *((float *)&v496 + 1) + v304[1];
        *(float *)&v336 = *((float *)&v301 + 2) + v304[4];
        v333 = *((float *)&v496 + 1) + v304[3];
        *(float *)&v337 = *((float *)&v301 + 2) + v304[5];
        *(float *)&v490 = v329;
        v338 = 1;
        *(_QWORD *)((char *)&v490 + 4) = __PAIR64__(v301, LODWORD(v330));
        v339 = 6;
        v491 = __PAIR64__(v337, v336);
        *((float *)&v490 + 3) = v333;
      }
      else
      {
        CBaseMatrix::Transform3DRectToPerspective((float *)v559, v304, &v592);
        v333 = *((float *)&v490 + 3);
        v335 = &v592;
        LODWORD(v301) = DWORD2(v490);
        v338 = 0;
        v330 = *((float *)&v490 + 1);
        v339 = 24;
        LODWORD(v329) = v490;
        v297 = xmmword_18019E9E0;
      }
      v340 = v289;
      do
      {
        ++v340;
        ++v335;
      }
      while ( v340 < v339 );
      if ( !v338 )
      {
        v341 = (float *)&v593;
        v342 = FLOAT_3_4028235e38;
        v343 = FLOAT_N3_4028235e38;
        v490 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
        v333 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
        LODWORD(v301) = DWORD2(_xmm_ff7fffffff7fffff7f7fffff7f7fffff);
        v330 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
        LODWORD(v329) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
        v491 = __PAIR64__(LODWORD(FLOAT_N3_4028235e38), LODWORD(FLOAT_3_4028235e38));
        do
        {
          v344 = *(v341 - 1);
          if ( v329 > v344 )
          {
            v329 = *(v341 - 1);
            *(float *)&v490 = v329;
          }
          if ( v344 > *(float *)&v301 )
          {
            *(float *)&v301 = v344;
            *((float *)&v490 + 2) = v344;
          }
          v345 = *v341;
          if ( v330 > *v341 )
          {
            v330 = *v341;
            *((float *)&v490 + 1) = *v341;
          }
          if ( v345 > v333 )
          {
            v333 = v345;
            *((float *)&v490 + 3) = v345;
          }
          v346 = v341[1];
          if ( v342 > v346 )
          {
            v342 = v341[1];
            *(float *)&v491 = v342;
          }
          if ( v346 > v343 )
          {
            v343 = v346;
            *((float *)&v491 + 1) = v346;
          }
          v347 = v341[2];
          if ( v329 > v347 )
          {
            v329 = v341[2];
            *(float *)&v490 = v329;
          }
          if ( v347 > *(float *)&v301 )
          {
            *(float *)&v301 = v347;
            *((float *)&v490 + 2) = v347;
          }
          v348 = v341[3];
          if ( v330 > v348 )
          {
            v330 = v341[3];
            *((float *)&v490 + 1) = v330;
          }
          if ( v348 > v333 )
          {
            v333 = v348;
            *((float *)&v490 + 3) = v348;
          }
          v349 = v341[4];
          if ( v342 > v349 )
          {
            v342 = v341[4];
            *(float *)&v491 = v342;
          }
          if ( v349 > v343 )
          {
            v343 = v349;
            *((float *)&v491 + 1) = v349;
          }
          v350 = v341[5];
          if ( v329 > v350 )
          {
            v329 = v341[5];
            *(float *)&v490 = v329;
          }
          if ( v350 > *(float *)&v301 )
          {
            *(float *)&v301 = v350;
            *((float *)&v490 + 2) = v350;
          }
          v351 = v341[6];
          if ( v330 > v351 )
          {
            v330 = v341[6];
            *((float *)&v490 + 1) = v330;
          }
          if ( v351 > v333 )
          {
            v333 = v351;
            *((float *)&v490 + 3) = v351;
          }
          v352 = v341[7];
          if ( v342 > v352 )
          {
            v342 = v341[7];
            *(float *)&v491 = v342;
          }
          if ( v352 > v343 )
          {
            v343 = v352;
            *((float *)&v491 + 1) = v352;
          }
          v353 = v341[8];
          if ( v329 > v353 )
          {
            v329 = v341[8];
            *(float *)&v490 = v329;
          }
          if ( v353 > *(float *)&v301 )
          {
            *(float *)&v301 = v353;
            *((float *)&v490 + 2) = v353;
          }
          v354 = v341[9];
          if ( v330 > v354 )
          {
            v330 = v341[9];
            *((float *)&v490 + 1) = v330;
          }
          if ( v354 > v333 )
          {
            v333 = v354;
            *((float *)&v490 + 3) = v354;
          }
          v355 = v341[10];
          if ( v342 > v355 )
          {
            v342 = v341[10];
            *(float *)&v491 = v342;
          }
          if ( v355 > v343 )
          {
            v343 = v355;
            *((float *)&v491 + 1) = v355;
          }
          v341 += 12;
          --v280;
        }
        while ( v280 );
      }
    }
    v356 = *((_DWORD *)v279 + 102);
    *(float *)v540 = v329;
    v540[2] = v301;
    *(float *)&v540[1] = v330;
    *(float *)&v540[3] = v333;
    if ( v356 )
      v496 = *(_OWORD *)(((unsigned __int64)(unsigned int)(v356 - 1) << 6) + *((_QWORD *)v279 + 53) + 48);
    else
      v496 = v297;
    v357 = *((_QWORD *)v6 + 49);
    v5 = v289;
    v482 = v496;
    if ( v357 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v357 + 48LL))(v357, 9LL) )
    {
      v358 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int128 *, _DWORD *, _DWORD *, __int128 *, void **))(**((_QWORD **)v6 + 49) + 128LL))(
               *((_QWORD *)v6 + 49),
               &v482,
               &v511,
               v540,
               v547,
               &v552,
               v553);
      v5 = v358;
      if ( v358 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v358, 0xAEEu);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x10A0u);
      }
    }
    else
    {
      v552 = v511;
      *(_OWORD *)v553 = v511;
    }
    if ( v5 < 0 )
    {
      v451 = 8592;
      goto LABEL_974;
    }
    v359 = CDrawingContext::PushEffects(v457, (__int64)v553, (__int64)&v458);
    v5 = v359;
    if ( v359 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v359, 0x2197u);
      goto LABEL_338;
    }
    if ( v458 )
    {
LABEL_337:
      *v464 = 0;
      goto LABEL_338;
    }
  }
  v360 = v457;
  if ( !*((_BYTE *)v457 + 2616) && !*((_DWORD *)v457 + 1447) && ((v292 - 2) & 0xFFFFFFFD) == 0 )
  {
    v361 = *((_DWORD *)v279 + 164);
    if ( v361 && *(_DWORD *)(76LL * (unsigned int)(v361 - 1) + *((_QWORD *)v279 + 79) + 4) && *((_DWORD *)v279 + 626) )
    {
      v362 = *((_DWORD *)v279 + 626);
      if ( !v362 )
      {
LABEL_799:
        if ( v361 && *(_DWORD *)(76LL * (unsigned int)(v361 - 1) + *((_QWORD *)v279 + 79) + 8) )
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
            (__int64)&v498,
            104LL * (unsigned int)(*((_DWORD *)v279 + 362) - 1) + 80 + *((_QWORD *)v279 + 178));
        v364 = 0LL;
        if ( v292 == 2 )
        {
          v364 = (__int128 *)(76LL * (unsigned int)(*((_DWORD *)v279 + 164) - 1) + *((_QWORD *)v279 + 79) + 12LL);
        }
        else if ( v292 == 4 )
        {
          v364 = &v517;
        }
        v365 = 0;
        v366 = 0;
        v5 = 0;
        v367 = 0;
        v368 = 0;
        if ( *((_DWORD *)v360 + 152) )
        {
          v369 = (_QWORD *)((char *)v360 + 584);
          while ( 1 )
          {
            v370 = CD2DLayer::ApplyState(*(CD2DLayer **)(*v369 + 8LL * v368), v360);
            v5 = v370;
            if ( v370 < 0 )
              break;
            v360 = v457;
            ++v367;
            if ( ++v368 >= *((_DWORD *)v457 + 152) )
              goto LABEL_810;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v370, 0x187Au);
        }
        else
        {
LABEL_810:
          v369 = (_QWORD *)((char *)v360 + 584);
          *((_DWORD *)v360 + 152) = 0;
          DynArrayImpl<0>::ShrinkToSize((char *)v360 + 584, 8LL);
        }
        if ( v367 < *((_DWORD *)v454 + 140) && v367 )
          DynArray<CD2DLayer *,0>::ShiftLeft(v369, v367);
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x13EEu);
          v372 = v457;
          goto LABEL_840;
        }
        v372 = v457;
        v5 = 0;
        *((_QWORD *)&v497 + 1) = v455;
        LODWORD(v497) = 3;
        v373 = *((_DWORD *)v457 + 107);
        v475 = 0LL;
        if ( *((_DWORD *)v457 + 106) == v373 )
        {
          v466 = 0;
          Size = 0;
          v374 = ULongLongToUInt(2LL * v373, &v466);
          v5 = v374;
          if ( v374 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v374, 0x4Cu);
            goto LABEL_830;
          }
          v376 = v466;
          if ( v466 <= 0x40 )
            v376 = 64;
          v466 = v376;
          v377 = WPF::HrMalloc(v375, 16LL, v376, (unsigned __int64)&v475, v450);
          v5 = v377;
          if ( v377 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v377, 0x54u);
            goto LABEL_830;
          }
          v378 = ULongLongToUInt(16LL * *((unsigned int *)v457 + 106), &Size);
          v5 = v378;
          if ( v378 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v378, 0x56u);
            goto LABEL_830;
          }
          v379 = v475;
          memcpy_0(v475, *((const void **)v457 + 55), Size);
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *((_QWORD *)v454 + 49));
          *((_QWORD *)v454 + 49) = v379;
          v372 = v457;
          v475 = 0LL;
          *((_DWORD *)v457 + 107) = v376;
        }
        *(_OWORD *)(*((_QWORD *)v372 + 55) + 16LL * *((unsigned int *)v372 + 106)) = v497;
        v380 = *((_DWORD *)v372 + 112);
        v381 = ++*((_DWORD *)v372 + 106);
        if ( v380 > v381 )
          v381 = v380;
        *((_DWORD *)v372 + 112) = v381;
LABEL_830:
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v475);
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x13F3u);
          v365 = 0;
          goto LABEL_840;
        }
        v365 = 1;
        v551[0] = 1;
        *(_QWORD *)&v551[4] = 0LL;
        if ( v364 )
        {
          v382 = v364[1];
          *(_OWORD *)&v551[12] = *v364;
          v383 = v364[2];
          *(_OWORD *)&v551[28] = v382;
          v384 = v364[3];
          *(_OWORD *)&v551[44] = v383;
          *(_OWORD *)&v551[60] = v384;
        }
        else
        {
          D2DMatrixIdentity((struct D2DMatrix *)&v551[12]);
        }
        v385 = *((unsigned int *)v372 + 176);
        v386 = v385 + 1;
        if ( (int)v385 + 1 >= (unsigned int)v385 )
        {
          v5 = 0;
          if ( v386 <= *((_DWORD *)v372 + 175) )
          {
            v387 = *((_QWORD *)v372 + 85) + 76 * v385;
            *(_OWORD *)v387 = *(_OWORD *)v551;
            *(_OWORD *)(v387 + 16) = *(_OWORD *)&v551[16];
            *(_OWORD *)(v387 + 32) = *(_OWORD *)&v551[32];
            *(_OWORD *)(v387 + 48) = *(_OWORD *)&v551[48];
            *(_QWORD *)(v387 + 64) = *(_QWORD *)&v551[64];
            *(_DWORD *)(v387 + 72) = *(_DWORD *)&v551[72];
            *((_DWORD *)v372 + 176) = v386;
            goto LABEL_839;
          }
          v388 = DynArrayImpl<0>::AddMultipleAndSet((char *)v372 + 680, 76LL, 1LL, v551);
          v5 = v388;
          if ( v388 >= 0 )
          {
LABEL_849:
            if ( v5 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x13F7u);
LABEL_840:
              if ( v5 < 0 )
              {
                if ( v366 )
                  --*((_DWORD *)v372 + 176);
                if ( v365 )
                  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)v372 + 424, 0LL, v371);
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x21BCu);
                goto LABEL_945;
              }
              v7 = *((_DWORD *)v372 + 62) == 0;
              v389 = (unsigned int *)((char *)v372 + 424);
              v453 = 0;
              LODWORD(v497) = 1;
              v390 = !v7;
              *((_QWORD *)&v497 + 1) = v455;
              v5 = 0;
              v391 = *((_DWORD *)v372 + 107);
              v473 = 0LL;
              if ( *((_DWORD *)v372 + 106) == v391 )
              {
                v465 = 0;
                LODWORD(v472) = 0;
                v392 = ULongLongToUInt(2LL * v391, &v465);
                v5 = v392;
                if ( v392 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v392, 0x4Cu);
                  goto LABEL_864;
                }
                v394 = v465;
                if ( v465 <= 0x40 )
                  v394 = 64;
                v465 = v394;
                v395 = WPF::HrMalloc(v393, 16LL, v394, (unsigned __int64)&v473, v450);
                v5 = v395;
                if ( v395 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v395, 0x54u);
                  goto LABEL_864;
                }
                v396 = ULongLongToUInt(16LL * *v389, (unsigned int *)&v472);
                v5 = v396;
                if ( v396 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v396, 0x56u);
                  goto LABEL_864;
                }
                v397 = v473;
                memcpy_0(v473, *((const void **)v389 + 2), (unsigned int)v472);
                (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                  WPF::g_pProcessHeap,
                  *((_QWORD *)v389 + 2));
                *((_QWORD *)v389 + 2) = v397;
                v372 = v457;
                v473 = 0LL;
                v389[1] = v394;
              }
              *(_OWORD *)(*((_QWORD *)v389 + 2) + 16LL * (*v389)++) = v497;
              v398 = *v389;
              if ( v389[6] > *v389 )
                v398 = v389[6];
              v389[6] = v398;
LABEL_864:
              (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                v473);
              if ( v5 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x138Au);
LABEL_907:
                if ( v5 < 0 )
                {
                  if ( v453 )
                    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v389, 0LL, v399);
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x21BDu);
                  goto LABEL_945;
                }
                v360 = v457;
                v6 = v455;
                goto LABEL_912;
              }
              v453 = 1;
              if ( v390 )
              {
                v400 = 0x7FFFFFFF;
                v401 = *(float *)&v498 - 0.5;
                if ( (float)(*(float *)&v498 - 0.5) < -2147483600.0 )
                {
                  v402 = 0x80000000;
                }
                else if ( v401 >= 2147483600.0 )
                {
                  v402 = 0x7FFFFFFF;
                }
                else
                {
                  v402 = (int)ceilf_0(v401);
                }
                v403 = *((float *)&v498 + 1) - 0.5;
                v404 = (float)v402;
                if ( (float)(*((float *)&v498 + 1) - 0.5) < -2147483600.0 )
                {
                  v405 = 0x80000000;
                }
                else if ( v403 >= 2147483600.0 )
                {
                  v405 = 0x7FFFFFFF;
                }
                else
                {
                  v405 = (int)ceilf_0(v403);
                }
                v406 = *((float *)&v498 + 2) - 0.5;
                v407 = (float)v405;
                if ( (float)(*((float *)&v498 + 2) - 0.5) < -2147483600.0 )
                {
                  v408 = 0x80000000;
                }
                else if ( v406 >= 2147483600.0 )
                {
                  v408 = 0x7FFFFFFF;
                }
                else
                {
                  v408 = (int)ceilf_0(v406);
                }
                v409 = *((float *)&v498 + 3) - 0.5;
                v410 = (float)v408;
                if ( (float)(*((float *)&v498 + 3) - 0.5) < -2147483600.0 )
                {
                  v400 = 0x80000000;
                }
                else if ( v409 < 2147483600.0 )
                {
                  v411 = (float)(int)ceilf_0(v409);
                  goto LABEL_888;
                }
                v411 = (float)v400;
              }
              else
              {
                LODWORD(v404) = v498;
                v407 = *((float *)&v498 + 1);
                v410 = *((float *)&v498 + 2);
                v411 = *((float *)&v498 + 3);
              }
LABEL_888:
              v412 = *((_DWORD *)v372 + 639);
              v5 = 0;
              *(_QWORD *)&v497 = __PAIR64__(LODWORD(v407), LODWORD(v404));
              *((_QWORD *)&v497 + 1) = __PAIR64__(LODWORD(v411), LODWORD(v410));
              v476 = 0LL;
              if ( *((_DWORD *)v372 + 638) == v412 )
              {
                v467 = 0;
                Size_4 = 0;
                v413 = ULongLongToUInt(2LL * v412, &v467);
                v5 = v413;
                if ( v413 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v413, 0x4Cu);
LABEL_901:
                  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                    WPF::g_pProcessHeap,
                    v476);
                  if ( v5 >= 0 )
                  {
                    v423 = 76LL * (unsigned int)(*((_DWORD *)v372 + 176) - 1);
                    ++*(_DWORD *)(v423 + *((_QWORD *)v372 + 85) + 4);
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE8u);
                  }
                  if ( v5 >= 0 )
                    *(_WORD *)((char *)v372 + 5965) = 257;
                  else
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1391u);
                  goto LABEL_907;
                }
                v415 = v467;
                if ( v467 <= 8 )
                  v415 = 8;
                v467 = v415;
                v416 = WPF::HrMalloc(v414, 16LL, v415, (unsigned __int64)&v476, v450);
                v5 = v416;
                if ( v416 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v416, 0x54u);
                  goto LABEL_901;
                }
                v417 = ULongLongToUInt(16LL * *((unsigned int *)v372 + 638), &Size_4);
                v5 = v417;
                if ( v417 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v417, 0x56u);
                  goto LABEL_901;
                }
                v418 = (const void *)*((_QWORD *)v372 + 321);
                v419 = v476;
                memcpy_0(v476, v418, Size_4);
                v420 = v457;
                (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                  WPF::g_pProcessHeap,
                  *((_QWORD *)v457 + 321));
                *((_QWORD *)v457 + 321) = v419;
                v476 = 0LL;
                v372 = v420;
                *((_DWORD *)v420 + 639) = v415;
              }
              *(_OWORD *)(*((_QWORD *)v372 + 321) + 16LL * *((unsigned int *)v372 + 638)) = v497;
              v421 = *((_DWORD *)v372 + 644);
              v422 = ++*((_DWORD *)v372 + 638);
              if ( v421 > v422 )
                v422 = v421;
              *((_DWORD *)v372 + 644) = v422;
              goto LABEL_901;
            }
LABEL_839:
            v366 = 1;
            goto LABEL_840;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v388, 0xC0u);
        }
        else
        {
          v5 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3Cu);
        goto LABEL_849;
      }
      v363 = *(_OWORD *)(*((_QWORD *)v279 + 315) + 16LL * (unsigned int)(v362 - 1));
    }
    else
    {
      v363 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v498 = v363;
    goto LABEL_799;
  }
LABEL_912:
  v424 = v454;
  if ( *((_DWORD *)v454 + 1435) )
  {
    CVisual::ExcludeFromVisibleRegion(v6, &v511, v360);
    goto LABEL_338;
  }
  if ( *((_BYTE *)v454 + 5920) )
    CDrawingContext::UpdateMoveOptimizations(v360, v288, &v511);
  v425 = (unsigned int *)((char *)v454 + 2656);
  v426 = *((_DWORD *)v454 + 664);
  v427 = 0LL;
  if ( v426 )
    v427 = *((_QWORD *)v454 + 334) + 16LL * (unsigned int)(v426 - 1);
  v428 = *(_BYTE *)(v427 + 8);
  v453 = v428;
  v429 = 0;
  Determinant3D = CBaseMatrix::GetDeterminant3D((CBaseMatrix *)&v517);
  if ( CBaseMatrix::IsInvertableDeterminant(Determinant3D) )
    v429 = (float)((float)((float)((float)((float)(*((float *)&v518 + 3) * *((float *)&v517 + 1))
                                         - (float)(*((float *)&v518 + 1) * *((float *)&v517 + 3)))
                                 * *(float *)&v520)
                         + (float)((float)((float)(*(float *)&v518 * *((float *)&v517 + 3))
                                         - (float)(*((float *)&v518 + 3) * *(float *)&v517))
                                 * *((float *)&v520 + 1)))
                 + (float)((float)((float)(*((float *)&v518 + 1) * *(float *)&v517)
                                 - (float)(*(float *)&v518 * *((float *)&v517 + 1)))
                         * *((float *)&v520 + 3))) < 0.0 == Determinant3D < 0.0;
  if ( !*((_QWORD *)v6 + 49) )
  {
    v432 = *(_QWORD *)v483;
    LOBYTE(v431) = *((_DWORD *)v6 + 21) != 1;
    v433 = *(_QWORD *)v483 && *(_DWORD *)(*(_QWORD *)v483 + 84LL) == 1;
    v434 = *((_QWORD *)v6 + 7);
    if ( (v434 & 2) != 0 )
      v434 = *(_QWORD *)(v434 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v434) = v434 & 1;
    v435 = (_DWORD)v434 != 0;
    if ( *((_DWORD *)v6 + 21) == 1 || !v433 || !v435 )
      goto LABEL_947;
  }
  v436 = *((_DWORD *)v454 + 665);
  v5 = 0;
  *(_QWORD *)&v497 = v6;
  BYTE8(v497) = v429;
  v474 = 0LL;
  if ( *v425 != v436 )
    goto LABEL_940;
  v468 = 0LL;
  v437 = ULongLongToUInt(2LL * v436, (unsigned int *)&v468 + 1);
  v5 = v437;
  if ( v437 >= 0 )
  {
    v439 = HIDWORD(v468);
    if ( HIDWORD(v468) <= 0x40 )
      v439 = 64;
    HIDWORD(v468) = v439;
    v440 = WPF::HrMalloc(v438, 16LL, v439, (unsigned __int64)&v474, v450);
    v5 = v440;
    if ( v440 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v440, 0x54u);
      goto LABEL_943;
    }
    v441 = ULongLongToUInt(16LL * *v425, (unsigned int *)&v468);
    v5 = v441;
    if ( v441 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v441, 0x56u);
      goto LABEL_943;
    }
    v442 = v474;
    memcpy_0(v474, *((const void **)v454 + 334), (unsigned int)v468);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)v454 + 334));
    *((_QWORD *)v454 + 334) = v442;
    v474 = 0LL;
    v425[1] = v439;
LABEL_940:
    *(_OWORD *)(*((_QWORD *)v425 + 2) + 16LL * (*v425)++) = v497;
    v443 = *v425;
    if ( v425[6] > *v425 )
      v443 = v425[6];
    v425[6] = v443;
    goto LABEL_943;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v437, 0x4Cu);
LABEL_943:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v474);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x21D7u);
    goto LABEL_945;
  }
  v428 = v453;
  v6 = v455;
  v424 = v454;
  v432 = *(_QWORD *)v483;
LABEL_947:
  v444 = v432 && *(_DWORD *)(v432 + 84) == 1;
  if ( *((_DWORD *)v6 + 21) == 1 && !v444 && (unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)v6 + 56)) )
  {
    if ( CVisual::HasBspPolygonList(v6) )
    {
      v446 = CDrawingContext::DrawBspPolygonList(v457, v6, v445);
      v5 = v446;
      if ( v446 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v446, 0x21FAu);
        goto LABEL_338;
      }
    }
    goto LABEL_337;
  }
  v7 = *((_DWORD *)v424 + 53) == 0;
  v452 = 0;
  if ( v7 || v428 == v429 )
  {
    v447 = *(bool (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v6 + 176LL);
    if ( v447 == CVisual::HasContent )
    {
      if ( !*((_QWORD *)v6 + 45) )
        goto LABEL_338;
    }
    else if ( !((unsigned __int8 (__fastcall *)(CVisual *, __int64))v447)(v6, v431) )
    {
LABEL_975:
      if ( !v452 )
        goto LABEL_338;
      goto LABEL_337;
    }
    v448 = *(__int64 (__fastcall **)(CVisual *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v6 + 168LL);
    if ( v448 == CVisual::RenderContent )
    {
      v449 = CVisual::RenderContent(v6, v457, &v452);
    }
    else if ( v448 == CWindowNode::RenderContent )
    {
      v449 = CWindowNode::RenderContent(v6, v457, &v452);
    }
    else
    {
      v449 = v448(v6, v457, &v452);
    }
    v5 = v449;
    if ( v449 < 0 )
    {
      v451 = 8678;
      goto LABEL_974;
    }
    goto LABEL_975;
  }
  if ( *((_QWORD *)v6 + 49)
    && v429
    && *(_BYTE *)(CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(v425, v431)
                + 8) != v428 )
  {
    v452 = 1;
    goto LABEL_337;
  }
LABEL_338:
  *((_BYTE *)v6 + 75) = 0;
  return (unsigned int)v5;
}
