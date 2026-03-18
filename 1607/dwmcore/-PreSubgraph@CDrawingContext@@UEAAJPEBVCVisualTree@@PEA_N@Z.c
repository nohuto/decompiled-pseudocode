/*
 * XREFs of ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005FC60 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x1800040C0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180005850 (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800058E0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18000CD48 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180022168 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026450 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x18002BE80 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002BF80 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180030FA0 (-SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800313F0 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180036584 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004B950 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004F938 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18004F984 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004FA24 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800513D0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x1800528C0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x180054998 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180055530 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800560D0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180058F60 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A3E0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005ABF0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18005B4D4 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18006E110 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180097C30 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800A2570 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AC1E0 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800AC8F8 (-AddMultipleAndSet@-$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScop.c)
 *     ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800ADBCC (-ULongLongToUInt@@YAJ_KPEAI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800ADD8C (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B9F7C (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BA504 (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GetLightsCount@CVisual@@QEBAIXZ @ 0x1800BD3A8 (-GetLightsCount@CVisual@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1800C0AFC (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x180109880 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x180112424 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180122064 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetHeatMapColor@CVisual@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180123E98 (-GetHeatMapColor@CVisual@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?Push@?$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801240E0 (-Push@-$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z @ 0x180124684 (-PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x1801251DC (-ShiftLeft@-$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z.c)
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@I@Z @ 0x18013843C (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@I@Z.c)
 *     ?IsEmptyDrawing@CDropShadow@@QEAA_NXZ @ 0x18014FA8C (-IsEmptyDrawing@CDropShadow@@QEAA_NXZ.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18016ADEC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PreSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  void *v3; // r14
  int v4; // r12d
  bool *v5; // rbx
  const struct CVisualTree *v6; // r13
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  int v16; // ecx
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  int v20; // r8d
  int v21; // eax
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  _QWORD *v30; // rbx
  __int64 v31; // rax
  unsigned int v32; // r13d
  __int64 v33; // rbx
  char (__fastcall *v34)(__int64, __int64); // rax
  __int64 v35; // r9
  unsigned int v36; // r10d
  unsigned int v37; // r8d
  __int64 v38; // rdx
  float v39; // xmm1_4
  float v40; // xmm2_4
  char v41; // al
  _QWORD *v42; // rbx
  _DWORD *v43; // rbx
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rax
  float v47; // xmm6_4
  float v48; // xmm6_4
  __int64 v49; // rax
  float v50; // xmm0_4
  float v51; // xmm0_4
  int v52; // eax
  float v53; // xmm7_4
  float v54; // xmm7_4
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _BYTE *v59; // rax
  __int64 v60; // r8
  int v61; // r13d
  __int64 v62; // r12
  _QWORD *v63; // rbx
  struct _LIST_ENTRY *TreeData; // r13
  struct _LIST_ENTRY *v65; // rax
  unsigned __int64 Blink; // rax
  __int64 v67; // rdx
  bool v68; // cl
  int v69; // ebx
  char v70; // r12
  bool (__fastcall *v71)(__int64, int); // rax
  __int64 v72; // r13
  _QWORD *v73; // rdx
  char v74; // cl
  int v75; // eax
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  int v78; // ebx
  int *v79; // r13
  __int64 v80; // rax
  int v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  char v85; // r10
  float v86; // xmm0_4
  float v87; // xmm2_4
  int v88; // ecx
  struct CVisual *v89; // r11
  __int64 v90; // rax
  bool v91; // bl
  bool v92; // r14
  __int64 v93; // rax
  char v94; // al
  bool v95; // zf
  _BOOL8 (__fastcall *v96)(CVisual *); // rax
  __int64 result; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  struct CDrawingContext *v100; // rdx
  __int64 (__fastcall *v101)(CVisual *, struct CDrawingContext *, bool *); // rax
  int v102; // eax
  float v103; // xmm4_4
  float v104; // xmm0_4
  int v105; // eax
  int v106; // eax
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int128 v111; // xmm0
  int v112; // ecx
  __int128 v113; // xmm1
  __int128 v114; // xmm2
  __int128 v115; // xmm3
  int v116; // eax
  __int64 v117; // rcx
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // r10
  int v121; // r13d
  __int128 **v122; // rax
  __int64 (__fastcall *v123)(CRegionShape *, _QWORD *); // r9
  __int64 v124; // rax
  float v125; // xmm4_4
  char v126; // dl
  float v127; // xmm3_4
  float v128; // xmm1_4
  float v129; // xmm1_4
  float v130; // xmm1_4
  float v131; // xmm3_4
  float v132; // xmm1_4
  float v133; // xmm1_4
  char v134; // cl
  float v135; // xmm1_4
  __int64 v136; // rbx
  __int128 **v137; // r13
  __int64 (__fastcall *v138)(CRegionShape *, _QWORD *); // rax
  struct CResource **v139; // r13
  char (__fastcall *v140)(CRegionShape *, unsigned int *); // rax
  unsigned int v141; // eax
  __int64 (__fastcall *v142)(CRegionShape *, _QWORD *); // rax
  __int64 v143; // rcx
  float v144; // xmm1_4
  float v145; // xmm2_4
  unsigned int v146; // r8d
  unsigned int v147; // edx
  __int64 v148; // rcx
  __int64 p_Blink; // rcx
  _BYTE *v150; // rax
  __int64 v151; // r8
  struct CMILMatrix *v152; // r9
  __int64 (__fastcall *v153)(CTreeData *, const struct CMILMatrix *, char, struct CMILMatrix *); // rax
  int v154; // eax
  __int64 v155; // rax
  int v157; // edx
  int *v158; // rcx
  bool (__fastcall *v159)(__int64, int); // rax
  char v160; // al
  int v161; // edx
  int *v162; // rcx
  bool (__fastcall *v163)(__int64, int); // rax
  char v164; // al
  __int64 v165; // rax
  int v166; // ecx
  void (__fastcall *v167)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v168; // r8
  unsigned int *k; // rcx
  bool (__fastcall *v170)(__int64, int); // rax
  char v171; // al
  __int64 v172; // rcx
  int v173; // edx
  int *v174; // rcx
  _QWORD *v175; // rcx
  int v176; // r8d
  int v177; // eax
  __int128 v178; // xmm0
  __int128 *v179; // r13
  __int64 v180; // rcx
  _QWORD *v181; // rbx
  __int64 v182; // rax
  void *v183; // rbx
  unsigned int v184; // eax
  void (__fastcall *v185)(WPF::ProcessHeapImpl *, void *); // rax
  char v186; // bl
  __int128 v187; // xmm0
  __int128 v188; // xmm1
  __int128 v189; // xmm0
  __int128 v190; // xmm1
  int v191; // eax
  char v192; // al
  unsigned int *v193; // r13
  __int64 v194; // rax
  int v195; // ebx
  void *v196; // rdx
  unsigned int v197; // eax
  void (*v198)(void); // rax
  int v199; // ebx
  float v200; // xmm0_4
  int v201; // eax
  float v202; // xmm0_4
  float v203; // xmm11_4
  int v204; // eax
  float v205; // xmm0_4
  float v206; // xmm10_4
  int v207; // eax
  float v208; // xmm0_4
  float v209; // xmm9_4
  float v210; // xmm0_4
  __int64 v211; // rax
  void *v212; // rbx
  unsigned int v213; // eax
  unsigned int v214; // ecx
  void (__fastcall *v215)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v216; // rcx
  int TightBounds; // eax
  int v218; // eax
  __int64 v219; // rcx
  int v220; // edx
  int *v221; // rcx
  _QWORD *v222; // rcx
  __int64 v223; // r8
  int v224; // r9d
  int *v225; // r8
  _QWORD *v226; // r9
  int v227; // r8d
  _QWORD *v228; // r8
  __int64 v229; // rcx
  int v230; // edx
  int *v231; // rcx
  _QWORD *v232; // rcx
  int ShapeDataWorker; // eax
  const struct D2D_SIZE_F *v234; // rax
  __int64 v235; // rcx
  int v236; // r8d
  int *v237; // rcx
  _QWORD *j; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  int Blink_high; // edx
  int *v241; // rcx
  _QWORD *v242; // rdx
  char IsRectangles; // al
  int v244; // eax
  __int64 v245; // rcx
  __int64 v246; // rax
  float v247; // xmm1_4
  __int64 v248; // rax
  __int128 *v249; // rbx
  const struct CMILMatrix *v250; // rdx
  int (*v251)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v252; // eax
  int v253; // eax
  float v254; // edx
  float *v255; // rcx
  struct CEffect *EffectInternal; // rbx
  bool (__fastcall *v257)(__int64, int); // rax
  bool v258; // al
  int v259; // eax
  __int64 *TreeDataListHead; // rax
  CComposition *v261; // r10
  __int64 v262; // r11
  CVisual *v263; // rcx
  int (*v264)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // r9
  int D2DGeometry; // eax
  int (*v266)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v267; // eax
  int v268; // edx
  int *v269; // rcx
  unsigned int i; // ebx
  CVisual *v271; // rcx
  struct CCompositionLight *LightAtNoRef; // rsi
  int v273; // r9d
  int v274; // edx
  int *v275; // rcx
  char v276; // al
  int v277; // edx
  int *v278; // rcx
  char v279; // al
  __int64 v280; // rax
  int v281; // eax
  char v282; // al
  int ManipulationManager; // eax
  float v284; // xmm1_4
  float v285; // xmm1_4
  float v286; // xmm1_4
  float v287; // xmm1_4
  float v288; // xmm1_4
  float v289; // xmm1_4
  float v290; // xmm1_4
  CGeometry *v291; // rcx
  int v292; // eax
  int v293; // eax
  CDropShadow *v294; // rcx
  int v295; // eax
  unsigned int v296; // eax
  int v297; // eax
  int v298; // eax
  void *v299; // rbx
  unsigned int v300; // eax
  int v301; // eax
  unsigned int v302; // eax
  int v303; // eax
  int v304; // eax
  void *v305; // rbx
  unsigned int v306; // eax
  int v307; // eax
  unsigned int v308; // eax
  int v309; // eax
  int v310; // eax
  void *v311; // rbx
  unsigned int v312; // eax
  int v313; // eax
  unsigned int v314; // eax
  int v315; // eax
  int v316; // eax
  void *v317; // rbx
  int v318; // ecx
  __int64 TopByReference; // rax
  char v320; // r8
  void **v321; // [rsp+20h] [rbp-E0h]
  unsigned int v322; // [rsp+20h] [rbp-E0h]
  char v323; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v324; // [rsp+40h] [rbp-C0h]
  char v325; // [rsp+40h] [rbp-C0h]
  bool v326; // [rsp+41h] [rbp-BFh] BYREF
  char v327; // [rsp+42h] [rbp-BEh] BYREF
  bool v328; // [rsp+43h] [rbp-BDh]
  _DWORD v329[3]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v330; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v331; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v332; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v333; // [rsp+5Ch] [rbp-A4h] BYREF
  float *v334; // [rsp+60h] [rbp-A0h]
  unsigned int v335; // [rsp+68h] [rbp-98h] BYREF
  bool *v336; // [rsp+70h] [rbp-90h]
  void *v337; // [rsp+78h] [rbp-88h] BYREF
  unsigned int Size; // [rsp+80h] [rbp-80h] BYREF
  unsigned int Size_4; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v340; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v341; // [rsp+8Ch] [rbp-74h] BYREF
  float v342; // [rsp+90h] [rbp-70h]
  void *v343; // [rsp+98h] [rbp-68h] BYREF
  void *v344; // [rsp+A0h] [rbp-60h] BYREF
  void *v345; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v346; // [rsp+B0h] [rbp-50h]
  __int64 v347; // [rsp+B8h] [rbp-48h]
  float v348; // [rsp+C0h] [rbp-40h]
  __int128 v349; // [rsp+C4h] [rbp-3Ch] BYREF
  __int128 v350; // [rsp+D4h] [rbp-2Ch]
  __int128 v351; // [rsp+E4h] [rbp-1Ch]
  __int128 v352; // [rsp+F4h] [rbp-Ch]
  _BYTE v353[72]; // [rsp+104h] [rbp+4h] BYREF
  __int64 v354; // [rsp+14Ch] [rbp+4Ch]
  struct ID2D1Geometry *v355; // [rsp+160h] [rbp+60h] BYREF
  struct CManipulationManager *v356; // [rsp+168h] [rbp+68h] BYREF
  struct ID2D1Geometry *v357; // [rsp+170h] [rbp+70h] BYREF
  struct ID2D1Geometry *v358; // [rsp+178h] [rbp+78h] BYREF
  struct CResource ***TransformParentDataInternal; // [rsp+180h] [rbp+80h]
  struct CVisual *v360; // [rsp+188h] [rbp+88h]
  _QWORD *v361; // [rsp+190h] [rbp+90h]
  double *v362; // [rsp+198h] [rbp+98h]
  __int64 v364; // [rsp+1A8h] [rbp+A8h]
  _QWORD *v365; // [rsp+1B0h] [rbp+B0h]
  _QWORD *v366; // [rsp+1B8h] [rbp+B8h]
  _QWORD *v367; // [rsp+1C0h] [rbp+C0h]
  __int64 v368; // [rsp+1C8h] [rbp+C8h]
  _QWORD *v369; // [rsp+1D0h] [rbp+D0h]
  _QWORD *v370; // [rsp+1D8h] [rbp+D8h]
  _QWORD *v371; // [rsp+1E0h] [rbp+E0h]
  __int64 v372; // [rsp+1E8h] [rbp+E8h]
  _QWORD *v373; // [rsp+1F0h] [rbp+F0h]
  _DWORD v374[10]; // [rsp+1F8h] [rbp+F8h] BYREF
  _OWORD v375[4]; // [rsp+220h] [rbp+120h] BYREF
  int v376; // [rsp+260h] [rbp+160h]
  __int128 v377; // [rsp+270h] [rbp+170h] BYREF
  __int128 v378; // [rsp+280h] [rbp+180h]
  __int128 v379; // [rsp+290h] [rbp+190h]
  __int128 v380; // [rsp+2A0h] [rbp+1A0h]
  int v381; // [rsp+2B0h] [rbp+1B0h]
  char v382[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v383; // [rsp+2C4h] [rbp+1C4h]
  _OWORD v384[4]; // [rsp+2CCh] [rbp+1CCh] BYREF
  int v385; // [rsp+30Ch] [rbp+20Ch]
  struct _D3DCOLORVALUE v386; // [rsp+310h] [rbp+210h] BYREF
  float v387[20]; // [rsp+320h] [rbp+220h] BYREF
  _OWORD v388[4]; // [rsp+370h] [rbp+270h] BYREF
  int v389; // [rsp+3B0h] [rbp+2B0h]
  _BYTE v390[64]; // [rsp+3C0h] [rbp+2C0h] BYREF
  int v391; // [rsp+400h] [rbp+300h]
  __m128 v392; // [rsp+410h] [rbp+310h] BYREF
  __int128 v393; // [rsp+420h] [rbp+320h]
  __int128 v394; // [rsp+430h] [rbp+330h] BYREF
  __int128 v395; // [rsp+440h] [rbp+340h] BYREF
  __int128 v396; // [rsp+450h] [rbp+350h] BYREF
  __int128 v397; // [rsp+460h] [rbp+360h]
  __int128 v398; // [rsp+478h] [rbp+378h] BYREF
  __int128 v399; // [rsp+488h] [rbp+388h] BYREF
  __int128 v400; // [rsp+498h] [rbp+398h] BYREF
  __int128 v401; // [rsp+4A8h] [rbp+3A8h] BYREF
  int v402; // [rsp+4B8h] [rbp+3B8h]
  int v403; // [rsp+4BCh] [rbp+3BCh]
  __int128 v404; // [rsp+4C0h] [rbp+3C0h] BYREF
  __int128 v405; // [rsp+4D0h] [rbp+3D0h] BYREF
  __int128 v406; // [rsp+4E0h] [rbp+3E0h] BYREF
  _DWORD v407[2]; // [rsp+4F0h] [rbp+3F0h] BYREF
  int v408; // [rsp+4F8h] [rbp+3F8h]
  int v409; // [rsp+4FCh] [rbp+3FCh]
  __m128 v410; // [rsp+500h] [rbp+400h] BYREF
  _DWORD v411[6]; // [rsp+510h] [rbp+410h] BYREF
  __int64 v412[2]; // [rsp+528h] [rbp+428h] BYREF
  __int128 v413; // [rsp+538h] [rbp+438h] BYREF
  __int128 v414; // [rsp+548h] [rbp+448h] BYREF
  _BYTE v415[16]; // [rsp+560h] [rbp+460h] BYREF
  _BYTE v416[16]; // [rsp+570h] [rbp+470h] BYREF
  __int128 v417; // [rsp+580h] [rbp+480h] BYREF
  unsigned __int64 v418; // [rsp+590h] [rbp+490h]

  v3 = 0LL;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  *(_QWORD *)&v353[64] = 0x557F3F800000LL;
  v328 = 0;
  v354 = 0LL;
  v8 = 0LL;
  v336 = a3;
  *(_QWORD *)&v329[1] = a2;
  memset(v353, 0, 64);
  v346 = 0LL;
  v347 = 1065353216LL;
  v348 = 1.0;
  if ( *((_BYTE *)this + 6120) )
  {
    if ( *((_BYTE *)this + 6121) )
      v8 = *(_QWORD *)(*((_QWORD *)this + 368) + 8LL);
    else
      v8 = *(_QWORD *)(*((_QWORD *)this + 766) + 24LL);
  }
  v360 = *(struct CVisual **)(*((_QWORD *)this + 368) + 16LL);
  *(_BYTE *)(v8 + 155) = 1;
  v9 = *(_QWORD *)(v8 + 312);
  if ( (v9 & 2) != 0 )
    v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v9) = v9 & 1;
  if ( (_DWORD)v9 )
  {
    for ( i = 0; i < CVisual::GetLightsCount((CVisual *)v8); ++i )
    {
      LightAtNoRef = CVisual::GetLightAtNoRef(v271, i);
      if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionLight *, const struct CVisualTree *))(*(_QWORD *)LightAtNoRef + 128LL))(
             LightAtNoRef,
             v6) )
      {
        v105 = CDrawingContext::PushLight(
                 (CDrawingContext *)((char *)this - 120),
                 (const struct CVisual *)v8,
                 LightAtNoRef);
        v4 = v105;
        if ( v105 < 0 )
        {
          v322 = 8402;
          goto LABEL_582;
        }
      }
    }
    v5 = v336;
  }
  if ( (*(_BYTE *)(v8 + 154) & 0x10) != 0 )
    goto LABEL_138;
  *v5 = 1;
  if ( (*(_BYTE *)(v8 + 153) & 0x40) != 0 )
  {
    CVisual::GetHeatMapColor((CVisual *)v8, &v386);
    v105 = CWatermarkStack<_D3DCOLORVALUE,2,2,2>::Push(*((_QWORD *)this - 12) + 1112LL, &v386);
    v4 = v105;
    if ( v105 < 0 )
    {
      v322 = 8428;
      goto LABEL_582;
    }
  }
  v10 = *(_DWORD *)(v8 + 156);
  if ( (_BYTE)v10 )
  {
    v374[0] = (unsigned __int8)v10;
    v374[4] = (v10 >> 8) & 3;
    v374[1] = (int)(v10 << 18) >> 28;
    v374[2] = *(_DWORD *)(v8 + 248);
    v374[5] = *(_DWORD *)(v8 + 252);
    v374[6] = *(_DWORD *)(v8 + 256);
    v106 = *(_DWORD *)(v8 + 260);
    v374[3] = (v10 >> 14) & 0x1F;
    v374[7] = v106;
    v105 = CDrawingContext::PushRenderOptionsInternal(
             (CDrawingContext *)((char *)this - 120),
             (const struct CVisual *)v8,
             (const struct MilRenderOptions *)v374,
             1);
    v4 = v105;
    if ( v105 < 0 )
    {
      v322 = 8446;
      goto LABEL_582;
    }
  }
  v11 = *((_DWORD *)this + 104);
  if ( v11 )
  {
    v12 = (unsigned int)(v11 - 1);
    v13 = *((_QWORD *)this + 54);
    v14 = 68 * v12;
    v15 = *(_OWORD *)(68 * v12 + v13);
    v16 = *(_DWORD *)(68 * v12 + v13 + 64);
    v17 = *(_OWORD *)(v14 + v13 + 16);
    v18 = *(_OWORD *)(v14 + v13 + 32);
    v19 = *(_OWORD *)(v14 + v13 + 48);
  }
  else
  {
    v15 = CMILMatrix::Identity;
    v17 = xmmword_1801EAD20;
    v18 = xmmword_1801EAD30;
    v19 = xmmword_1801EAD40;
    v16 = dword_1801EAD50;
  }
  v389 = v16;
  v388[0] = v15;
  v388[1] = v17;
  v388[2] = v18;
  v388[3] = v19;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v388, v8 + 200, (float *)&v401);
  v20 = *((_DWORD *)this + 204);
  if ( v20 && *(_DWORD *)(*((_QWORD *)this + 99) + 80LL * (unsigned int)(v20 - 1) + 4) && *((_DWORD *)this + 716) )
  {
    v21 = *((_DWORD *)this + 716);
    if ( v21 )
      v393 = *(_OWORD *)(*((_QWORD *)this + 360) + 16LL * (unsigned int)(v21 - 1));
    v22 = *((float *)&v393 + 3);
    v23 = *((float *)&v393 + 2);
    v24 = *((float *)&v393 + 1);
    v25 = *(float *)&v393;
  }
  else
  {
    v22 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v23 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v24 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v25 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v393 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v20 && *(_DWORD *)(*((_QWORD *)this + 99) + 80LL * (unsigned int)(v20 - 1) + 8) )
  {
    v98 = 120LL * (unsigned int)(*((_DWORD *)this + 412) - 1);
    v99 = *((_QWORD *)this + 203);
    if ( *(float *)(v98 + v99 + 96) > v25 )
    {
      v25 = *(float *)(v98 + v99 + 96);
      *(float *)&v393 = v25;
    }
    if ( *(float *)(v98 + v99 + 100) > v24 )
    {
      v24 = *(float *)(v98 + v99 + 100);
      *((float *)&v393 + 1) = v24;
    }
    if ( v23 > *(float *)(v98 + v99 + 104) )
    {
      v23 = *(float *)(v98 + v99 + 104);
      *((float *)&v393 + 2) = v23;
    }
    if ( v22 > *(float *)(v98 + v99 + 108) )
    {
      v22 = *(float *)(v98 + v99 + 108);
      *((float *)&v393 + 3) = v22;
    }
    if ( v23 <= v25 || v22 <= v24 )
    {
      v22 = 0.0;
      v23 = 0.0;
      v24 = 0.0;
      v25 = 0.0;
      v393 = 0uLL;
    }
  }
  *(float *)&v411[1] = v24;
  v411[4] = v402;
  v411[5] = v403;
  *(float *)v411 = v25;
  *(float *)&v411[2] = v23;
  *(float *)&v411[3] = v22;
  TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    &v401,
    v411);
  LODWORD(v26) = v401;
  v27 = *((float *)&v401 + 2);
  v28 = *((float *)&v401 + 1);
  v29 = *((float *)&v401 + 3);
  v398 = v401;
  if ( *((float *)&v401 + 2) <= *(float *)&v401 || *((float *)&v401 + 3) <= *((float *)&v401 + 1) )
  {
LABEL_138:
    *v5 = 0;
    goto LABEL_139;
  }
  if ( !*((_BYTE *)this + 6411) )
    goto LABEL_51;
  if ( *((_QWORD *)this + 793) )
  {
    if ( *((_BYTE *)v6 + 32) )
    {
      v30 = (_QWORD *)(v8 + 320);
      goto LABEL_26;
    }
    v172 = *(_QWORD *)(v8 + 272);
    if ( (*(_DWORD *)(v172 + 4) & 0x80000) != 0 )
    {
      v173 = *(_DWORD *)(v172 + 12);
      v174 = (int *)(v172 + 12);
      if ( (v173 & 0x7F000000) != 0xD000000 )
      {
        do
        {
          v174 = (int *)((char *)v174 + (v173 & 0xFFFFFF) + 4);
          v173 = *v174;
        }
        while ( (*v174 & 0x7F000000) != 0xD000000 );
      }
      v373 = *(_QWORD **)(v174 + 1);
      if ( v373 )
      {
        v175 = (_QWORD *)*v373;
        if ( (_QWORD *)*v373 != v373 )
        {
          while ( 1 )
          {
            v30 = v175 - 28;
            if ( (const struct CVisualTree *)v175[4] == v6 )
              break;
            v175 = (_QWORD *)*v175;
            if ( v175 == v373 )
              goto LABEL_42;
          }
LABEL_26:
          if ( v30 )
          {
            if ( !v30[4] )
            {
              v30[4] = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v30[3] + 264LL))(v30[3]);
              v29 = *((float *)&v398 + 3);
              v27 = *((float *)&v398 + 2);
              v28 = *((float *)&v398 + 1);
              LODWORD(v26) = v398;
            }
            v31 = v30[4];
            if ( v31 )
            {
              v32 = *(_DWORD *)(v31 + 12);
              v33 = *((_QWORD *)this + 793);
              if ( v27 <= v26 || v29 <= v28 )
                goto LABEL_778;
              if ( *(_BYTE *)(v33 + 672) )
              {
                CMILMatrix::Transform2DBoundsHelper<0>(v33 + 744, (__int64)&v398, (float *)&v404);
                v399 = v404;
              }
              else
              {
                *(_QWORD *)&v399 = __PAIR64__(LODWORD(v28), LODWORD(v26));
                *((_QWORD *)&v399 + 1) = __PAIR64__(LODWORD(v29), LODWORD(v27));
              }
              v34 = *(char (__fastcall **)(__int64, __int64))(**(_QWORD **)(v33 + 248) + 40LL);
              if ( v34 == CArrayBasedCoverageSet::IsFullyCovered )
              {
                if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v399) )
                {
LABEL_250:
                  v41 = 1;
                }
                else
                {
                  v37 = 0;
                  v397 = v399;
                  if ( v36 )
                  {
                    v38 = *(_QWORD *)(v35 + 24);
                    v39 = *((float *)&v397 + 3);
                    v40 = *((float *)&v397 + 1);
                    do
                    {
                      if ( *(_DWORD *)(v38 + 20LL * v37 + 16) >= (signed int)v32 )
                        break;
                      if ( *(float *)&v397 >= *(float *)(v38 + 20LL * v37)
                        && *(float *)(v38 + 20LL * v37 + 8) >= *((float *)&v397 + 2) )
                      {
                        v103 = *(float *)(v38 + 20LL * v37 + 4);
                        v104 = *(float *)(v38 + 20LL * v37 + 12);
                        if ( v40 < v103 )
                        {
                          if ( v104 >= v39 && v39 > v103 )
                            v39 = *(float *)(v38 + 20LL * v37 + 4);
                        }
                        else
                        {
                          if ( v104 >= v39 )
                            goto LABEL_250;
                          if ( v104 > v40 )
                            v40 = *(float *)(v38 + 20LL * v37 + 12);
                        }
                      }
                      ++v37;
                    }
                    while ( v37 < v36 );
                  }
                  v41 = 0;
                }
              }
              else
              {
                v41 = ((__int64 (__fastcall *)(_QWORD, __int128 *, _QWORD))v34)(*(_QWORD *)(v33 + 248), &v399, v32);
              }
              if ( v41 )
              {
LABEL_778:
                if ( !qword_1801EFD28 )
                  goto LABEL_249;
                v146 = *((_DWORD *)qword_1801EFD28 + 18);
                v147 = 0;
                if ( !v146 )
                  goto LABEL_249;
                while ( 1 )
                {
                  v148 = *(_QWORD *)(*((_QWORD *)qword_1801EFD28 + 6) + 8LL * v147);
                  if ( *(_BYTE *)(v148 + 304)
                    || *(_BYTE *)(v148 + 303)
                    || *(_BYTE *)(v148 + 220)
                    || *(_DWORD *)(v148 + 216) )
                  {
                    break;
                  }
                  if ( ++v147 >= v146 )
                    goto LABEL_249;
                }
                *(_BYTE *)(v8 + 152) |= 0x40u;
                ++*((_DWORD *)this + 1591);
              }
              v6 = *(const struct CVisualTree **)&v329[1];
            }
          }
        }
      }
    }
  }
LABEL_42:
  if ( !*((_BYTE *)this + 6411) || !*((_QWORD *)this + 793) )
    goto LABEL_51;
  if ( *((_BYTE *)v6 + 32) )
  {
    v42 = (_QWORD *)(v8 + 320);
  }
  else
  {
    v229 = *(_QWORD *)(v8 + 272);
    if ( (*(_DWORD *)(v229 + 4) & 0x80000) == 0 )
      goto LABEL_51;
    v230 = *(_DWORD *)(v229 + 12);
    v231 = (int *)(v229 + 12);
    if ( (v230 & 0x7F000000) != 0xD000000 )
    {
      do
      {
        v231 = (int *)((char *)v231 + (v230 & 0xFFFFFF) + 4);
        v230 = *v231;
      }
      while ( (*v231 & 0x7F000000) != 0xD000000 );
    }
    v361 = *(_QWORD **)(v231 + 1);
    if ( !v361 )
      goto LABEL_51;
    v232 = (_QWORD *)*v361;
    if ( (_QWORD *)*v361 == v361 )
      goto LABEL_51;
    while ( 1 )
    {
      v42 = v232 - 28;
      if ( (const struct CVisualTree *)v232[4] == v6 )
        break;
      v232 = (_QWORD *)*v232;
      if ( v232 == v361 )
        goto LABEL_51;
    }
  }
  if ( v42 )
  {
    if ( !v42[4] )
      v42[4] = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v42[3] + 264LL))(v42[3]);
    v43 = (_DWORD *)v42[4];
    if ( v43 )
    {
      v44 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v43 + 24LL))(v43);
      v45 = *((_DWORD *)this + 1552);
      *((_DWORD *)this + 1590) = v44;
      if ( v44 >= v45 )
      {
        if ( v43[3] < v45 )
          goto LABEL_139;
        goto LABEL_249;
      }
    }
  }
LABEL_51:
  v346 = v8;
  v46 = *(_QWORD *)(v8 + 272);
  v47 = FLOAT_1_0;
  if ( (*(_DWORD *)(v46 + 4) & 0x8000000) == 0 )
    goto LABEL_52;
  v157 = *(_DWORD *)(v46 + 12);
  v158 = (int *)(v46 + 12);
  if ( (v157 & 0x7F000000) != 0x5000000 )
  {
    do
    {
      v158 = (int *)((char *)v158 + (v157 & 0xFFFFFF) + 4);
      v157 = *v158;
    }
    while ( (*v158 & 0x7F000000) != 0x5000000 );
  }
  v362 = *(double **)(v158 + 1);
  v159 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v362 + 48LL);
  v160 = v159 == CEffectGroup::IsOfType
       ? CEffectGroup::IsOfType((__int64)v362, 8)
       : ((__int64 (__fastcall *)(double *, __int64, __int64))v159)(v362, 8LL, 8LL);
  if ( v160 && (v47 = v362[17], v47 > 1.0) )
    v48 = FLOAT_1_0;
  else
LABEL_52:
    v48 = fmaxf(v47, 0.0);
  v49 = *(_QWORD *)(v8 + 272);
  if ( (*(_DWORD *)(v49 + 4) & 0x100000) == 0 )
  {
    v50 = FLOAT_1_0;
LABEL_55:
    v51 = fmaxf(v50, 0.0);
    goto LABEL_56;
  }
  v254 = *(float *)(v49 + 12);
  v255 = (float *)(v49 + 12);
  if ( (LODWORD(v254) & 0x7F000000) != 0xC000000 )
  {
    do
    {
      v255 = (float *)((char *)v255 + (LODWORD(v254) & 0xFFFFFF) + 4);
      v254 = *v255;
    }
    while ( (*(_DWORD *)v255 & 0x7F000000) != 0xC000000 );
  }
  v342 = v255[1];
  v50 = v342;
  if ( v342 <= 1.0 )
    goto LABEL_55;
  v51 = FLOAT_1_0;
LABEL_56:
  v52 = *((_DWORD *)this + 724);
  v348 = v51;
  if ( v52 )
    v53 = *(float *)(*((_QWORD *)this + 364) + 4LL * (unsigned int)(v52 - 1));
  else
    v53 = v342;
  v54 = v53 * v48;
  *(float *)&v347 = v54;
  v55 = *(_QWORD *)(v8 + 296);
  if ( !v55 )
    goto LABEL_59;
  v121 = 0;
  if ( (*(_BYTE *)(v55 + 32) & 1) != 0
    || *(_BYTE *)(v55 + 168)
    && (*(float *)(v55 + 144) != *(float *)(v8 + 192) || *(float *)(v55 + 148) != *(float *)(v8 + 196)) )
  {
    ShapeDataWorker = CGeometry::GetShapeDataWorker(
                        *(CGeometry **)(v8 + 296),
                        (const struct D2D_SIZE_F *)(v8 + 192),
                        (struct CShapePtr *)(v55 + 152));
    v121 = ShapeDataWorker;
    if ( ShapeDataWorker < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataWorker, 0x71u);
      v122 = 0LL;
      goto LABEL_188;
    }
    if ( v8 != -192 )
      *(_QWORD *)(v55 + 144) = *(_QWORD *)(v8 + 192);
    *(_DWORD *)(v55 + 32) &= ~1u;
  }
  v122 = *(__int128 ***)(v55 + 152);
LABEL_188:
  if ( v121 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v121, 0x26u);
  }
  else
  {
    v123 = (__int64 (__fastcall *)(CRegionShape *, _QWORD *))*((_QWORD *)*v122 + 3);
    if ( (char *)v123 == (char *)CRectanglesShape::GetTightBounds )
    {
      v121 = 0;
      if ( *((_DWORD *)v122 + 8) == 1 )
      {
        v394 = *v122[1];
      }
      else
      {
        v264 = (int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))*((_QWORD *)*v122 + 2);
        v355 = 0LL;
        if ( v264 == CRectanglesShape::GetD2DGeometry )
          D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v122, 0LL, &v355);
        else
          D2DGeometry = ((__int64 (__fastcall *)(__int128 **, _QWORD, struct ID2D1Geometry **))v264)(v122, 0LL, &v355);
        v121 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0x357u);
        }
        else
        {
          v121 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int128 *))(*(_QWORD *)v355 + 32LL))(
                   v355,
                   0LL,
                   &v405);
          v394 = v405;
          if ( *((float *)&v405 + 2) < *(float *)&v405 || *((float *)&v405 + 3) < *((float *)&v405 + 1) )
            v394 = 0uLL;
        }
        if ( v355 )
          (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v355 + 16LL))(v355);
      }
    }
    else
    {
      if ( v123 == CRegionShape::GetTightBounds )
        TightBounds = CRegionShape::GetTightBounds((CRegionShape *)v122, &v394);
      else
        TightBounds = (*((__int64 (__fastcall **)(__int128 **, __int128 *, _QWORD))*v122 + 3))(v122, &v394, 0LL);
      v121 = TightBounds;
    }
    if ( v121 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v121, 0x28u);
  }
  if ( v121 == -2003304438 )
  {
    v394 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  else if ( v121 < 0 )
  {
    goto LABEL_59;
  }
  if ( (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v394
     || *((float *)&v394 + 2) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
    && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *((float *)&v394 + 1)
     || *((float *)&v394 + 3) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
  {
    *(_OWORD *)&v353[4] = _xmm;
    BYTE4(v354) = 1;
    *(_OWORD *)&v353[20] = _xmm;
    *(_WORD *)&v353[68] = 32085;
    *(_OWORD *)&v353[36] = _xmm;
    *(_OWORD *)&v353[52] = _xmm;
  }
LABEL_59:
  v56 = *(_QWORD *)(v8 + 272);
  if ( (*(_DWORD *)(v56 + 4) & 0x20000000) != 0 )
  {
    v274 = *(_DWORD *)(v56 + 12);
    v275 = (int *)(v56 + 12);
    if ( (v274 & 0x7F000000) != 0x3000000 )
    {
      do
      {
        v275 = (int *)((char *)v275 + (v274 & 0xFFFFFF) + 4);
        v274 = *v275;
      }
      while ( (*v275 & 0x7F000000) != 0x3000000 );
    }
    v276 = BYTE5(v354);
    if ( *(_QWORD *)(v275 + 1) )
      v276 = 1;
    BYTE5(v354) = v276;
  }
  v57 = *(_QWORD *)(v8 + 272);
  if ( (*(_DWORD *)(v57 + 4) & 0x8000000) != 0 )
  {
    v161 = *(_DWORD *)(v57 + 12);
    v162 = (int *)(v57 + 12);
    if ( (v161 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v162 = (int *)((char *)v162 + (v161 & 0xFFFFFF) + 4);
        v161 = *v162;
      }
      while ( (*v162 & 0x7F000000) != 0x5000000 );
    }
    v364 = *(_QWORD *)(v162 + 1);
    v163 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v364 + 48LL);
    if ( v163 == CEffectGroup::IsOfType )
      v164 = CEffectGroup::IsOfType(v364, 9);
    else
      v164 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v163)(v364, 9LL, 1LL);
    if ( v164 )
      BYTE6(v354) = 1;
  }
  v58 = *(_QWORD *)(v8 + 272);
  if ( (*(_DWORD *)(v58 + 4) & 0x10000) != 0 )
  {
    v277 = *(_DWORD *)(v58 + 12);
    v278 = (int *)(v58 + 12);
    if ( (v277 & 0x7F000000) != 0x10000000 )
    {
      do
      {
        v278 = (int *)((char *)v278 + (v277 & 0xFFFFFF) + 4);
        v277 = *v278;
      }
      while ( (*v278 & 0x7F000000) != 0x10000000 );
    }
    v365 = *(_QWORD **)(v278 + 1);
    if ( v365 )
    {
      v279 = HIBYTE(v354);
      if ( *v365 )
        v279 = 1;
      HIBYTE(v354) = v279;
    }
  }
  if ( v54 < 1.0 )
  {
    v247 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v54 - 1.0)) & _xmm);
    if ( v247 >= 0.0000011920929 )
    {
      v248 = *(_QWORD *)(v8 + 136);
      if ( (v248 & 2) != 0 )
        v248 = *(_QWORD *)(v248 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v248) = v248 & 1;
      if ( !(_DWORD)v248 && *(char *)(v8 + 152) < 0 && *((_DWORD *)this + 53) != 4
        || *((_DWORD *)this + 54) == 1
        || *(_DWORD *)(v8 + 160) == 1 )
      {
        HIDWORD(v347) = 1;
      }
      else
      {
        HIDWORD(v347) = 2;
        if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
        {
          v280 = *(_QWORD *)(v8 + 136);
          if ( (v280 & 2) != 0 )
            v280 = *(_QWORD *)(v280 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v280) = v280 & 1;
          v95 = (_DWORD)v280 == 0;
          v281 = v354;
          if ( !v95 )
          {
            v281 = v354 | 0x20;
            LODWORD(v354) = v354 | 0x20;
          }
          if ( *(char *)(v8 + 152) >= 0 )
            LODWORD(v354) = v281 | 0x40;
        }
      }
    }
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v347) & _xmm) < 0.0000011920929
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v348) & _xmm) < 0.0000011920929 )
  {
    if ( qword_1801EFD28 && CDisplaySet::NeedsDesktopMoves(qword_1801EFD28) )
    {
      CVisual::ClearAllMoveTransformsInSubtree((struct CVisual *)v8);
      v282 = *(_BYTE *)(v8 + 152);
      if ( (v282 & 0x40) == 0 )
      {
        *(_BYTE *)(v8 + 152) = v282 | 0x40;
        ++*((_DWORD *)this + 1591);
      }
      goto LABEL_65;
    }
LABEL_249:
    *v336 = 0;
    goto LABEL_139;
  }
LABEL_65:
  v59 = &v353[4];
  v60 = *(_QWORD *)&v329[1];
  v61 = -2003292412;
  if ( !BYTE4(v354) )
    v59 = 0LL;
  *(_QWORD *)&v397 = v59;
  v62 = *(_QWORD *)(*((_QWORD *)this + 368) + 8LL);
  if ( *(_BYTE *)(*(_QWORD *)&v329[1] + 32LL) )
  {
    v63 = (_QWORD *)(v62 + 320);
  }
  else
  {
    v219 = *(_QWORD *)(v62 + 272);
    if ( (*(_DWORD *)(v219 + 4) & 0x80000) == 0 )
      goto LABEL_632;
    v220 = *(_DWORD *)(v219 + 12);
    v221 = (int *)(v219 + 12);
    if ( (v220 & 0x7F000000) != 0xD000000 )
    {
      do
      {
        v221 = (int *)((char *)v221 + (v220 & 0xFFFFFF) + 4);
        v220 = *v221;
      }
      while ( (*v221 & 0x7F000000) != 0xD000000 );
    }
    v366 = *(_QWORD **)(v221 + 1);
    if ( !v366 )
      goto LABEL_632;
    v222 = (_QWORD *)*v366;
    if ( (_QWORD *)*v366 == v366 )
      goto LABEL_632;
    while ( 1 )
    {
      v63 = v222 - 28;
      if ( v222[4] == *(_QWORD *)&v329[1] )
        break;
      v222 = (_QWORD *)*v222;
      if ( v222 == v366 )
        goto LABEL_632;
    }
  }
  if ( !v63 )
  {
LABEL_632:
    v68 = 0;
    goto LABEL_81;
  }
  TreeData = 0LL;
  v323 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(v62 + 272) + 4LL) & 0x10000000) != 0 )
  {
    TransformParentDataInternal = (struct CResource ***)CVisual::GetTransformParentDataInternal((CVisual *)v62);
    v263 = **TransformParentDataInternal;
    if ( v263 )
    {
      if ( (v63[2] & 4) == 0 || v63[27] != v262 )
      {
        v323 = 1;
        TreeData = CVisual::FindTreeData(v263, *(const struct CVisualTree **)&v329[1]);
        if ( TreeData )
          goto LABEL_75;
      }
    }
    else
    {
      CComposition::ReleaseWeakReference(v261, *TransformParentDataInternal);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource ***))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        TransformParentDataInternal);
      CVisual::SetTransformParentDataInternal((CVisual *)v62, 0LL);
    }
  }
  if ( v62 != *(_QWORD *)(*(_QWORD *)&v329[1] + 24LL) )
  {
    TreeData = 0LL;
    v65 = *(struct _LIST_ENTRY **)(v62 + 144);
    if ( *(_BYTE *)(*(_QWORD *)&v329[1] + 32LL) )
    {
      TreeData = v65 + 20;
    }
    else
    {
      Flink = v65[17].Flink;
      if ( (HIDWORD(Flink->Flink) & 0x80000) != 0 )
      {
        Blink_high = HIDWORD(Flink->Blink);
        v241 = (int *)&Flink->Blink + 1;
        if ( (Blink_high & 0x7F000000) != 0xD000000 )
        {
          do
          {
            v241 = (int *)((char *)v241 + (Blink_high & 0xFFFFFF) + 4);
            Blink_high = *v241;
          }
          while ( (*v241 & 0x7F000000) != 0xD000000 );
        }
        v367 = *(_QWORD **)(v241 + 1);
        if ( v367 )
        {
          v242 = (_QWORD *)*v367;
          if ( (_QWORD *)*v367 != v367 )
          {
            while ( v242[4] != *(_QWORD *)&v329[1] )
            {
              v242 = (_QWORD *)*v242;
              if ( v242 == v367 )
                goto LABEL_74;
            }
            TreeData = (struct _LIST_ENTRY *)(v242 - 28);
          }
        }
      }
    }
  }
LABEL_74:
  if ( !TreeData )
  {
    Blink = 1LL;
    goto LABEL_76;
  }
LABEL_75:
  Blink = (unsigned __int64)TreeData[7].Blink;
LABEL_76:
  if ( v63[15] < Blink )
  {
    v387[16] = 0.0;
    p_Blink = 0LL;
    v334 = 0LL;
    v391 = 0;
    if ( TreeData )
    {
      p_Blink = (__int64)&TreeData[2].Blink;
      v334 = (float *)&TreeData[2].Blink;
    }
    v150 = *(_QWORD *)(v62 + 296) ? v390 : 0LL;
    CVisual::CalcEffectiveTransform(v62, 5, p_Blink, &v327, (CMILMatrix *)v387, (__int64)v150);
    LOBYTE(v151) = v323
                || v62 == *(_QWORD *)(*(_QWORD *)&v329[1] + 24LL)
                || v327 && !CMILMatrix::IsEqualTo<0>(v334, v387);
    v152 = *(_QWORD *)(v62 + 296) ? (struct CMILMatrix *)v390 : 0LL;
    v153 = *(__int64 (__fastcall **)(CTreeData *, const struct CMILMatrix *, char, struct CMILMatrix *))(*v63 + 48LL);
    if ( v153 == CDesktopTreeData::SetWorldTransform )
      v154 = CDesktopTreeData::SetWorldTransform((CDesktopTreeData *)v63, (const struct CMILMatrix *)v387, v151, v152);
    else
      v154 = v153 == CTreeData::SetWorldTransform
           ? CTreeData::SetWorldTransform((CTreeData *)v63, (const struct CMILMatrix *)v387, v151, v152)
           : v153((CTreeData *)v63, (const struct CMILMatrix *)v387, v151, v152);
    v61 = v154;
    if ( v154 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v154, 0x5DAu);
    }
    else
    {
      v155 = *(_QWORD *)(v62 + 272);
      if ( (*(_DWORD *)(v155 + 4) & 0x2000000) != 0 )
      {
        v268 = *(_DWORD *)(v155 + 12);
        v269 = (int *)(v155 + 12);
        if ( (v268 & 0x7F000000) != 0x7000000 )
        {
          do
          {
            v269 = (int *)((char *)v269 + (v268 & 0xFFFFFF) + 4);
            v268 = *v269;
          }
          while ( (*v269 & 0x7F000000) != 0x7000000 );
        }
        v368 = *(_QWORD *)(v269 + 1);
        if ( v368 && (*(_BYTE *)(v62 + 154) & 2) != 0 )
        {
          v356 = 0LL;
          Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v356);
          ManipulationManager = CComposition::GetManipulationManager(*(CComposition **)(v62 + 16), &v356);
          if ( ManipulationManager >= 0 )
            CManipulationManager::NotifyVisualPropertyChange(
              v356,
              (struct CVisual *)v62,
              (const struct CMILMatrix *)v387);
          Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v356);
        }
      }
    }
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x596u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x4E7u);
      v60 = *(_QWORD *)&v329[1];
      goto LABEL_632;
    }
  }
  v61 = 0;
  if ( !v63[15] )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x70u);
    v61 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x4EEu);
    v4 = -2003292412;
    goto LABEL_584;
  }
  v67 = v397;
  v349 = *(_OWORD *)(v63 + 5);
  v350 = *(_OWORD *)(v63 + 7);
  v351 = *(_OWORD *)(v63 + 9);
  v352 = *(_OWORD *)(v63 + 11);
  *(_DWORD *)v353 = *((_DWORD *)v63 + 26);
  v68 = (v63[2] & 2) != 0;
  if ( (_QWORD)v397 )
  {
    v124 = v63[14];
    *(_OWORD *)v397 = *(_OWORD *)v124;
    *(_OWORD *)(v67 + 16) = *(_OWORD *)(v124 + 16);
    *(_OWORD *)(v67 + 32) = *(_OWORD *)(v124 + 32);
    *(_OWORD *)(v67 + 48) = *(_OWORD *)(v124 + 48);
    *(_DWORD *)(v67 + 64) = *(_DWORD *)(v124 + 64);
  }
  v60 = *(_QWORD *)&v329[1];
  v328 = v68;
LABEL_81:
  v4 = v61;
  if ( v61 < 0 )
  {
LABEL_584:
    v322 = 8570;
    v273 = v61;
    goto LABEL_585;
  }
  if ( v68 || *(_QWORD *)(v60 + 24) == v8 )
  {
    if ( !*((_BYTE *)this + 6204) )
      CMILMatrix::Multiply((CMILMatrix *)&v349, (CDrawingContext *)((char *)this + 6136));
    v105 = CDrawingContext::PushTransformInternal(
             (CDrawingContext *)((char *)this - 120),
             (const struct CVisual *)v8,
             (const struct CMILMatrix *)&v349,
             0,
             1);
    v4 = v105;
    if ( v105 < 0 )
    {
      v322 = 8588;
LABEL_582:
      v273 = v105;
LABEL_585:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v273, v322);
      goto LABEL_139;
    }
  }
  else if ( !*((_BYTE *)this + 6204) )
  {
    v244 = *((_DWORD *)this + 104);
    if ( v244 )
    {
      v245 = (unsigned int)(v244 - 1);
      v246 = *((_QWORD *)this + 54);
      v349 = *(_OWORD *)(68 * v245 + v246);
      v350 = *(_OWORD *)(68 * v245 + v246 + 16);
      v351 = *(_OWORD *)(68 * v245 + v246 + 32);
      v352 = *(_OWORD *)(68 * v245 + v246 + 48);
      *(_DWORD *)v353 = *(_DWORD *)(68 * v245 + v246 + 64);
    }
    else
    {
      v349 = CMILMatrix::Identity;
      *(_DWORD *)v353 = dword_1801EAD50;
      v350 = xmmword_1801EAD20;
      v351 = xmmword_1801EAD30;
      v352 = xmmword_1801EAD40;
    }
  }
  if ( BYTE4(v354) && !*((_BYTE *)this + 6204) )
    CMILMatrix::Multiply((CMILMatrix *)&v353[4], (CDrawingContext *)((char *)this + 6136));
  v69 = 0;
  v70 = 0;
  if ( *(_QWORD *)(v8 + 296) )
  {
    v125 = FLOAT_0_00012207031;
    if ( v353[69] >> 6 )
    {
      if ( v353[69] >> 6 == 1 )
        goto LABEL_209;
      v125 = FLOAT_0_00012207031;
      goto LABEL_545;
    }
    v126 = 0;
    v127 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[12] - 0.0)) & _xmm);
    if ( v127 < 0.00012207031 )
    {
      v128 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[28] - 0.0)) & _xmm);
      if ( v128 < 0.00012207031 )
      {
        v129 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[60] - 0.0)) & _xmm);
        if ( v129 < 0.00012207031 )
          goto LABEL_206;
      }
      if ( v127 < 0.00012207031 )
      {
        v284 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[28] - 0.0)) & _xmm);
        if ( v284 < 0.00012207031 )
        {
          v285 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[36] - 0.0)) & _xmm);
          if ( v285 < 0.00012207031 )
          {
            v286 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[40] - 0.0)) & _xmm);
            if ( v286 < 0.00012207031 )
            {
              v287 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[44] - 0.0)) & _xmm);
              if ( v287 < 0.00012207031
                || (v288 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[44] - 1.0)) & _xmm),
                    v288 < 0.00012207031) )
              {
                v289 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[48] - 0.0)) & _xmm);
                if ( v289 < 0.00012207031 )
                {
                  v290 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[60] - 0.0)) & _xmm);
                  if ( v290 < 0.00012207031 )
                  {
LABEL_206:
                    v130 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v353[16]) & _xmm);
                    v131 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v353[32]) & _xmm) * 40960.0)
                         + (float)(v130 * 40960.0);
                    v132 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v353[64]) & _xmm);
                    v133 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v131 + v132) - 1.0)) & _xmm);
                    if ( v133 < 0.00012207031 )
                    {
                      v126 = 1;
                      v134 = 1;
                      goto LABEL_208;
                    }
                    v126 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    v134 = -1;
LABEL_208:
    v353[69] = (v134 << 6) | v353[69] & 0x3F;
    if ( v126 )
    {
LABEL_209:
      v135 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[8] - 0.0)) & _xmm);
      if ( v135 < 0.00012207031
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[20] - 0.0)) & _xmm) < 0.00012207031 )
      {
        goto LABEL_211;
      }
    }
LABEL_545:
    if ( v125 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[4] - 0.0)) & _xmm)
      || v125 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v353[24] - 0.0)) & _xmm) )
    {
      goto LABEL_87;
    }
LABEL_211:
    v136 = *(_QWORD *)(v8 + 296);
    v4 = 0;
    v137 = 0LL;
    if ( (*(_BYTE *)(v136 + 32) & 1) != 0
      || *(_BYTE *)(v136 + 168)
      && (*(float *)(v136 + 144) != *(float *)(v8 + 192) || *(float *)(v136 + 148) != *(float *)(v8 + 196)) )
    {
      v291 = *(CGeometry **)(v8 + 296);
      TransformParentDataInternal = (struct CResource ***)(v136 + 152);
      v292 = CGeometry::GetShapeDataWorker(
               v291,
               (const struct D2D_SIZE_F *)(v8 + 192),
               (struct CShapePtr *)(v136 + 152));
      v4 = v292;
      if ( v292 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v292, 0x71u);
LABEL_214:
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x26u);
        }
        else
        {
          v138 = (__int64 (__fastcall *)(CRegionShape *, _QWORD *))*((_QWORD *)*v137 + 3);
          if ( (char *)v138 == (char *)CRectanglesShape::GetTightBounds )
          {
            v4 = 0;
            if ( *((_DWORD *)v137 + 8) == 1 )
            {
              v395 = *v137[1];
            }
            else
            {
              v266 = (int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))*((_QWORD *)*v137 + 2);
              v357 = 0LL;
              if ( v266 == CRectanglesShape::GetD2DGeometry )
                v267 = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v137, 0LL, &v357);
              else
                v267 = ((__int64 (__fastcall *)(__int128 **, _QWORD, struct ID2D1Geometry **))v266)(v137, 0LL, &v357);
              v4 = v267;
              if ( v267 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v267, 0x357u);
              }
              else
              {
                v4 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int128 *))(*(_QWORD *)v357 + 32LL))(
                       v357,
                       0LL,
                       &v406);
                v395 = v406;
                if ( *((float *)&v406 + 2) < *(float *)&v406 || *((float *)&v406 + 3) < *((float *)&v406 + 1) )
                  v395 = 0uLL;
              }
              if ( v357 )
                (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v357 + 16LL))(v357);
            }
          }
          else
          {
            if ( v138 == CRegionShape::GetTightBounds )
              v218 = CRegionShape::GetTightBounds((CRegionShape *)v137, &v395);
            else
              v218 = ((__int64 (__fastcall *)(__int128 **, __int128 *, _QWORD))v138)(v137, &v395, 0LL);
            v4 = v218;
          }
          if ( v4 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x28u);
        }
        if ( v4 == -2003304438 )
        {
          v4 = 0;
          v395 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xE67u);
        }
        else if ( (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v395
                || *((float *)&v395 + 2) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                           + 2))
               && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *((float *)&v395 + 1)
                || *((float *)&v395 + 3) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                           + 3)) )
        {
          v4 = 0;
          v139 = 0LL;
          if ( (*(_BYTE *)(v136 + 32) & 1) != 0 )
          {
            v234 = (const struct D2D_SIZE_F *)(v8 + 192);
          }
          else
          {
            if ( !*(_BYTE *)(v136 + 168) )
              goto LABEL_227;
            v234 = (const struct D2D_SIZE_F *)(v8 + 192);
            if ( *(float *)(v136 + 144) == *(float *)(v8 + 192) && *(float *)(v136 + 148) == *(float *)(v8 + 196) )
              goto LABEL_227;
          }
          v293 = CGeometry::GetShapeDataWorker((CGeometry *)v136, v234, (struct CShapePtr *)(v136 + 152));
          v4 = v293;
          if ( v293 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v293, 0x71u);
            goto LABEL_228;
          }
          if ( v8 != -192 )
            *(_QWORD *)(v136 + 144) = *(_QWORD *)(v8 + 192);
          *(_DWORD *)(v136 + 32) &= ~1u;
LABEL_227:
          v139 = *TransformParentDataInternal;
LABEL_228:
          if ( v4 >= 0 )
            goto LABEL_229;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xE6Eu);
LABEL_665:
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x21A7u);
            goto LABEL_139;
          }
LABEL_229:
          v140 = (char (__fastcall *)(CRegionShape *, unsigned int *))*((_QWORD *)*v139 + 4);
          if ( (char *)v140 == (char *)CRectanglesShape::IsRectangles )
          {
            v141 = *((_DWORD *)v139 + 8);
            v335 = v141;
          }
          else
          {
            if ( v140 == CRegionShape::IsRectangles )
              IsRectangles = CRegionShape::IsRectangles((CRegionShape *)v139, &v335);
            else
              IsRectangles = v140((CRegionShape *)v139, &v335);
            if ( !IsRectangles )
            {
LABEL_241:
              v70 = 0;
              v69 = 0;
              goto LABEL_87;
            }
            v141 = v335;
          }
          if ( v141 == 1 )
          {
            v142 = (__int64 (__fastcall *)(CRegionShape *, _QWORD *))*((_QWORD *)*v139 + 3);
            if ( (char *)v142 == (char *)CRectanglesShape::GetTightBounds )
            {
              if ( *((_DWORD *)v139 + 8) == 1 && CMILMatrix::IsIdentity<0>((__int64)&v353[4]) )
              {
                v392 = *(__m128 *)v139[1];
              }
              else
              {
                v358 = 0LL;
                if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>((float *)&v353[4]) )
                {
                  v249 = &v417;
                  v250 = 0LL;
                  *(_QWORD *)&v397 = *(_QWORD *)&v353[4];
                  *((_QWORD *)&v397 + 1) = *(_QWORD *)&v353[20];
                  v417 = v397;
                  v418 = _mm_unpacklo_ps((__m128)*(unsigned int *)&v353[52], (__m128)*(unsigned int *)&v353[56]).m128_u64[0];
                }
                else
                {
                  v249 = 0LL;
                  v250 = (const struct CMILMatrix *)&v353[4];
                }
                v251 = (int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))*((_QWORD *)*v139 + 2);
                v252 = v251 == CRectanglesShape::GetD2DGeometry
                     ? CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v139, v250, &v358)
                     : ((__int64 (__fastcall *)(struct CResource **, const struct CMILMatrix *, struct ID2D1Geometry **))v251)(
                         v139,
                         v250,
                         &v358);
                if ( v252 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v252, 0x357u);
                }
                else
                {
                  (*(void (__fastcall **)(struct ID2D1Geometry *, __int128 *, __m128 *))(*(_QWORD *)v358 + 32LL))(
                    v358,
                    v249,
                    &v410);
                  v392 = v410;
                  if ( v410.m128_f32[2] < v410.m128_f32[0] || v410.m128_f32[3] < v410.m128_f32[1] )
                    v392 = 0uLL;
                }
                if ( v358 )
                  (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v358 + 16LL))(v358);
              }
            }
            else if ( v142 == CRegionShape::GetTightBounds )
            {
              CRegionShape::GetTightBounds((CRegionShape *)v139, &v392);
            }
            else
            {
              ((void (__fastcall *)(struct CResource **, __m128 *, _BYTE *))v142)(v139, &v392, &v353[4]);
            }
            if ( v392.m128_f32[2] > v392.m128_f32[0] && v392.m128_f32[3] > v392.m128_f32[1] )
            {
              v143 = *((_QWORD *)this + 39);
              v392 = _mm_add_ps(v392, (__m128)_xmm);
              (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v143 + 72LL))(v143, v407);
              v144 = (float)v407[1];
              v145 = (float)v409;
              if ( (float)v408 <= (float)v407[0]
                || v145 <= v144
                || (float)v407[0] >= v392.m128_f32[0]
                && v144 >= v392.m128_f32[1]
                && v392.m128_f32[2] >= (float)v408
                && v392.m128_f32[3] >= v145 )
              {
                v69 = 2;
                v70 = 1;
                goto LABEL_87;
              }
            }
          }
          goto LABEL_241;
        }
        v139 = 0LL;
        goto LABEL_665;
      }
      if ( v8 != -192 )
        *(_QWORD *)(v136 + 144) = *(_QWORD *)(v8 + 192);
      *(_DWORD *)(v136 + 32) &= ~1u;
    }
    v137 = *(__int128 ***)(v136 + 152);
    TransformParentDataInternal = (struct CResource ***)(v136 + 152);
    goto LABEL_214;
  }
LABEL_87:
  v71 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v8 + 48LL);
  if ( v71 != CVisual::IsOfType && (v71 == CWindowNode::IsOfType ? CWindowNode::IsOfType(v8, 33) : v71(v8, 33)) )
  {
    v294 = *(CDropShadow **)(v8 + 552);
    if ( v294 )
    {
      if ( !CDropShadow::IsEmptyDrawing(v294) )
        v69 = 5;
    }
  }
  if ( HIBYTE(v354) )
    v69 = 5;
  v72 = *(_QWORD *)&v329[1];
  v73 = 0LL;
  v74 = *(_BYTE *)(*(_QWORD *)&v329[1] + 32LL);
  if ( v74 )
  {
    v73 = (_QWORD *)(v8 + 320);
  }
  else
  {
    v223 = *(_QWORD *)(v8 + 272);
    if ( (*(_DWORD *)(v223 + 4) & 0x80000) != 0 )
    {
      v224 = *(_DWORD *)(v223 + 12);
      v225 = (int *)(v223 + 12);
      if ( (v224 & 0x7F000000) != 0xD000000 )
      {
        do
        {
          v225 = (int *)((char *)v225 + (v224 & 0xFFFFFF) + 4);
          v224 = *v225;
        }
        while ( (*v225 & 0x7F000000) != 0xD000000 );
      }
      v369 = *(_QWORD **)(v225 + 1);
      if ( v369 )
      {
        v226 = (_QWORD *)*v369;
        if ( (_QWORD *)*v369 != v369 )
        {
          while ( v226[4] != *(_QWORD *)&v329[1] )
          {
            v226 = (_QWORD *)*v226;
            if ( v226 == v369 )
              goto LABEL_92;
          }
          v73 = v226 - 28;
        }
      }
    }
  }
LABEL_92:
  if ( v8 != *(_QWORD *)(*(_QWORD *)&v329[1] + 24LL) && !v74 )
  {
    v235 = *(_QWORD *)(*(_QWORD *)(v8 + 144) + 272LL);
    if ( (*(_DWORD *)(v235 + 4) & 0x80000) != 0 )
    {
      v236 = *(_DWORD *)(v235 + 12);
      v237 = (int *)(v235 + 12);
      if ( (v236 & 0x7F000000) != 0xD000000 )
      {
        do
        {
          v237 = (int *)((char *)v237 + (v236 & 0xFFFFFF) + 4);
          v236 = *v237;
        }
        while ( (*v237 & 0x7F000000) != 0xD000000 );
      }
      v370 = *(_QWORD **)(v237 + 1);
      if ( v370 )
      {
        for ( j = (_QWORD *)*v370; j != v370; j = (_QWORD *)*j )
        {
          if ( j[4] == *(_QWORD *)&v329[1] )
            break;
        }
      }
    }
  }
  v75 = CCpuClippingData::Update((__int64)(v73 + 17), *(__int64 *)&v329[1], v8, v69, v70);
  v4 = v75;
  if ( v75 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x5FDu);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x21DBu);
    goto LABEL_139;
  }
  v77 = 0LL;
  if ( *(_BYTE *)(v72 + 32) )
  {
    v77 = (_QWORD *)(v8 + 320);
  }
  else
  {
    v76 = *(_QWORD *)(v8 + 272);
    if ( (*(_DWORD *)(v76 + 4) & 0x80000) != 0 )
    {
      v227 = *(_DWORD *)(v76 + 12);
      v76 += 12LL;
      if ( (v227 & 0x7F000000) != 0xD000000 )
      {
        do
        {
          v76 += (v227 & 0xFFFFFF) + 4LL;
          v227 = *(_DWORD *)v76;
        }
        while ( (*(_DWORD *)v76 & 0x7F000000) != 0xD000000 );
      }
      v371 = *(_QWORD **)(v76 + 4);
      if ( v371 )
      {
        v228 = (_QWORD *)*v371;
        if ( (_QWORD *)*v371 != v371 )
        {
          while ( 1 )
          {
            v76 = (__int64)(v228 - 28);
            if ( v228[4] == v72 )
              break;
            v228 = (_QWORD *)*v228;
            if ( v228 == v371 )
              goto LABEL_99;
          }
          v77 = v228 - 28;
        }
      }
    }
  }
LABEL_99:
  v78 = *((_DWORD *)v77 + 34);
  if ( !*((_BYTE *)this + 2928) && !*((_DWORD *)this + 1591) )
  {
    if ( v78 == 5 )
    {
      v76 = 80LL * (unsigned int)(*((_DWORD *)this + 204) - 1);
      if ( *(_BYTE *)(v76 + *((_QWORD *)this + 99)) )
      {
        LOBYTE(v76) = 1;
        CScopedClipStack::GetTopGpuClipInScope((char *)this + 792, v76, v415);
        v105 = CDrawingContext::PushClippingScope(
                 (CDrawingContext *)((char *)this - 120),
                 (const struct CVisual *)v8,
                 0,
                 0LL,
                 1);
        v4 = v105;
        if ( v105 < 0 )
        {
          v322 = 8681;
          goto LABEL_582;
        }
        v105 = CDrawingContext::PushClipRectForNode((__int64)this - 120, v8, (int)v415, 1);
        v4 = v105;
        if ( v105 < 0 )
        {
          v322 = 8683;
          goto LABEL_582;
        }
      }
    }
    else if ( v78 == 3 )
    {
      LOBYTE(v76) = 1;
      CScopedClipStack::GetTopGpuClipInScope((char *)this + 792, v76, v416);
      v105 = CDrawingContext::PushClippingScope(
               (CDrawingContext *)((char *)this - 120),
               (const struct CVisual *)v8,
               1,
               (const struct CMILMatrix *)&v353[4],
               1);
      v4 = v105;
      if ( v105 < 0 )
      {
        v322 = 8698;
        goto LABEL_582;
      }
      v105 = CDrawingContext::PushClipRectForNode((__int64)this - 120, v8, (int)v416, 1);
      v4 = v105;
      if ( v105 < 0 )
      {
        v322 = 8700;
        goto LABEL_582;
      }
    }
  }
  if ( !BYTE4(v354)
    && !HIDWORD(v347)
    && !*(_WORD *)((char *)&v354 + 5)
    && !HIBYTE(v354)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v348 - 1.0)) & _xmm) < 0.0000011920929 )
  {
    goto LABEL_108;
  }
  v107 = *((_DWORD *)this + 104);
  if ( v107 )
  {
    v108 = (unsigned int)(v107 - 1);
    v109 = *((_QWORD *)this + 54);
    v110 = 68 * v108;
    v111 = *(_OWORD *)(68 * v108 + v109);
    v112 = *(_DWORD *)(68 * v108 + v109 + 64);
    v113 = *(_OWORD *)(v110 + v109 + 16);
    v114 = *(_OWORD *)(v110 + v109 + 32);
    v115 = *(_OWORD *)(v110 + v109 + 48);
  }
  else
  {
    v111 = CMILMatrix::Identity;
    v113 = xmmword_1801EAD20;
    v114 = xmmword_1801EAD30;
    v115 = xmmword_1801EAD40;
    v112 = dword_1801EAD50;
  }
  v376 = v112;
  v375[0] = v111;
  v375[1] = v113;
  v375[2] = v114;
  v375[3] = v115;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v375, v8 + 224, (float *)&v414);
  v116 = *((_DWORD *)this + 104);
  v381 = 0;
  v400 = v414;
  if ( v116 )
  {
    v117 = (unsigned int)(v116 - 1);
    v118 = *((_QWORD *)this + 54);
    v377 = *(_OWORD *)(68 * v117 + v118);
    v378 = *(_OWORD *)(68 * v117 + v118 + 16);
    v379 = *(_OWORD *)(68 * v117 + v118 + 32);
    v380 = *(_OWORD *)(68 * v117 + v118 + 48);
    v119 = *(_DWORD *)(68 * v117 + v118 + 64);
  }
  else
  {
    v119 = dword_1801EAD50;
    v377 = CMILMatrix::Identity;
    v378 = xmmword_1801EAD20;
    v379 = xmmword_1801EAD30;
    v380 = xmmword_1801EAD40;
  }
  v381 = v119;
  v4 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 272) + 4LL) & 0x8000000) != 0
    && ((EffectInternal = CVisual::GetEffectInternal((CVisual *)v8),
         v257 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)EffectInternal + 48LL),
         v257 != CEffectGroup::IsOfType)
      ? (v258 = v257((__int64)EffectInternal, 9))
      : (v258 = CEffectGroup::IsOfType((__int64)EffectInternal, 9)),
        v258) )
  {
    v259 = (*(__int64 (__fastcall **)(struct CEffect *, __int128 *, __int128 *, __int128 *, __int128 *, __int64 *))(*(_QWORD *)EffectInternal + 136LL))(
             EffectInternal,
             &v377,
             &v398,
             &v400,
             &v413,
             v412);
    v4 = v259;
    if ( v259 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v259, 0xC07u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1057u);
    }
  }
  else
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 272) + 4LL) & 0x10000) != 0 )
    {
      v413 = v400;
      *(_OWORD *)v412 = v398;
      goto LABEL_180;
    }
    v413 = v398;
    *(_OWORD *)v412 = v398;
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2216u);
    goto LABEL_139;
  }
LABEL_180:
  v105 = CDrawingContext::PushEffects((CDrawingContext *)((char *)this - 120), (__int64)v412, (__int64)v329);
  v4 = v105;
  if ( v105 < 0 )
  {
    v322 = 8733;
    goto LABEL_582;
  }
  if ( LOBYTE(v329[0]) )
    goto LABEL_249;
  if ( *(_BYTE *)(v72 + 32) )
  {
    v120 = v8 + 320;
  }
  else
  {
    TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)v8);
    if ( TreeDataListHead )
    {
      v76 = *TreeDataListHead;
      if ( (__int64 *)*TreeDataListHead != TreeDataListHead )
      {
        while ( *(_QWORD *)(v76 + 32) != v72 )
        {
          v76 = *(_QWORD *)v76;
          if ( (__int64 *)v76 == TreeDataListHead )
            goto LABEL_184;
        }
        v120 = v76 - 224;
      }
    }
  }
LABEL_184:
  v78 = *(_DWORD *)(v120 + 136);
LABEL_108:
  if ( !*((_BYTE *)this + 2928) )
  {
    if ( *((_DWORD *)this + 1591) )
    {
LABEL_772:
      CVisual::ExcludeFromVisibleRegion((CVisual *)v8, (__int64)&v398, (CDrawingContext *)((char *)this - 120));
      goto LABEL_139;
    }
    if ( ((v78 - 2) & 0xFFFFFFFD) == 0 )
    {
      v176 = *((_DWORD *)this + 204);
      if ( v176 && *(_DWORD *)(*((_QWORD *)this + 99) + 80LL * (unsigned int)(v176 - 1) + 4) && *((_DWORD *)this + 716) )
      {
        v177 = *((_DWORD *)this + 716);
        if ( !v177 )
        {
LABEL_310:
          if ( v176 && *(_DWORD *)(*((_QWORD *)this + 99) + 80LL * (unsigned int)(v176 - 1) + 8) )
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
              (__int64)&v396,
              120LL * (unsigned int)(*((_DWORD *)this + 412) - 1) + *((_QWORD *)this + 203) + 96LL);
          v179 = 0LL;
          if ( v78 == 2 )
          {
            v179 = (__int128 *)(80LL * (unsigned int)(*((_DWORD *)this + 204) - 1) + *((_QWORD *)this + 99) + 12LL);
          }
          else if ( v78 == 4 )
          {
            v179 = &v349;
          }
          v4 = 0;
          v180 = 0LL;
          v329[1] = 0;
          LODWORD(v334) = 0;
          if ( *((_DWORD *)this + 142) )
          {
            v181 = (_QWORD *)((char *)this + 544);
            while ( 1 )
            {
              v253 = CD2DLayer::ApplyState(*(CD2DLayer **)(*v181 + 8 * v180), (CDrawingContext *)((char *)this - 120));
              v4 = v253;
              if ( v253 < 0 )
                break;
              LODWORD(v334) = (_DWORD)v334 + 1;
              v180 = (unsigned int)(v329[1] + 1);
              v329[1] = v180;
              if ( (unsigned int)v180 >= *((_DWORD *)this + 142) )
                goto LABEL_317;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v253, 0x18D2u);
          }
          else
          {
LABEL_317:
            v181 = (_QWORD *)((char *)this + 544);
            *((_DWORD *)this + 142) = 0;
            DynArrayImpl<0>::ShrinkToSize((char *)this + 544, 8LL);
          }
          if ( (unsigned int)v334 < *((_DWORD *)this + 142) && (_DWORD)v334 )
            DynArray<CD2DLayer *,0>::ShiftLeft(v181);
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x18B4u);
          }
          else if ( *((_BYTE *)this + 6410) )
          {
            *(_WORD *)((char *)this + 6409) = 1;
          }
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x13A3u);
            goto LABEL_700;
          }
          v182 = *((unsigned int *)this + 97);
          v183 = 0LL;
          v4 = 0;
          LODWORD(v397) = 3;
          *((_QWORD *)&v397 + 1) = v8;
          v343 = 0LL;
          if ( *((_DWORD *)this + 96) != (_DWORD)v182 )
            goto LABEL_324;
          v330 = 0;
          Size = 0;
          v295 = ULongLongToUInt(2 * v182, &v330);
          v4 = v295;
          if ( v295 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v295, 0x4Cu);
          }
          else
          {
            v296 = v330;
            if ( v330 <= 0x40 )
              v296 = 64;
            v330 = v296;
            v297 = WPF::HrMalloc((WPF *)0x40, 16LL, v296, (unsigned __int64)&v343, v321);
            v4 = v297;
            if ( v297 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v297, 0x54u);
            }
            else
            {
              v298 = ULongLongToUInt(16LL * *((unsigned int *)this + 96), &Size);
              v4 = v298;
              if ( v298 >= 0 )
              {
                v299 = v343;
                memcpy_0(v343, *((const void **)this + 50), Size);
                (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                  WPF::g_pProcessHeap,
                  *((_QWORD *)this + 50));
                v300 = v330;
                *((_QWORD *)this + 50) = v299;
                v183 = 0LL;
                v343 = 0LL;
                *((_DWORD *)this + 97) = v300;
LABEL_324:
                *(_OWORD *)(*((_QWORD *)this + 50) + 16LL * (unsigned int)(*((_DWORD *)this + 96))++) = v397;
                v184 = *((_DWORD *)this + 102);
                if ( v184 <= *((_DWORD *)this + 96) )
                  v184 = *((_DWORD *)this + 96);
                *((_DWORD *)this + 102) = v184;
                goto LABEL_327;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v298, 0x56u);
            }
            v183 = v343;
          }
LABEL_327:
          v185 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v185 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v183);
          else
            v185(WPF::g_pProcessHeap, v183);
          if ( v4 >= 0 )
          {
            v385 = 0;
            v186 = 1;
            v382[0] = 1;
            v383 = 0LL;
            if ( v179 )
            {
              v187 = *v179;
              v188 = v179[1];
              v385 = *((_DWORD *)v179 + 16);
              v384[0] = v187;
              v189 = v179[2];
              v384[1] = v188;
              v190 = v179[3];
              v384[2] = v189;
              v384[3] = v190;
            }
            else
            {
              CMILMatrix::SetToIdentity((CMILMatrix *)v384);
            }
            v191 = DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet((char *)this + 792, v382);
            v4 = v191;
            if ( v191 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v191, 0x3Cu);
            if ( v4 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x13ACu);
              v192 = 0;
            }
            else
            {
              v192 = 1;
            }
LABEL_336:
            if ( v4 < 0 )
            {
              if ( v192 )
                --*((_DWORD *)this + 204);
              if ( v186 )
                CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 96, 0LL);
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2247u);
              goto LABEL_139;
            }
            v95 = *((_DWORD *)this + 52) == 0;
            v193 = (unsigned int *)((char *)this + 384);
            v325 = 0;
            LODWORD(v397) = 1;
            v194 = *((unsigned int *)this + 97);
            v195 = !v95;
            v196 = 0LL;
            v329[1] = v195;
            v4 = 0;
            *((_QWORD *)&v397 + 1) = v8;
            v337 = 0LL;
            if ( *((_DWORD *)this + 96) != (_DWORD)v194 )
              goto LABEL_338;
            v331 = 0;
            Size_4 = 0;
            v301 = ULongLongToUInt(2 * v194, &v331);
            v4 = v301;
            if ( v301 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v301, 0x4Cu);
            }
            else
            {
              v302 = v331;
              if ( v331 <= 0x40 )
                v302 = 64;
              v331 = v302;
              v303 = WPF::HrMalloc((WPF *)0x40, 16LL, v302, (unsigned __int64)&v337, v321);
              v4 = v303;
              if ( v303 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v303, 0x54u);
              }
              else
              {
                v304 = ULongLongToUInt(16LL * *v193, &Size_4);
                v4 = v304;
                if ( v304 >= 0 )
                {
                  v305 = v337;
                  memcpy_0(v337, *((const void **)this + 50), Size_4);
                  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                    WPF::g_pProcessHeap,
                    *((_QWORD *)this + 50));
                  v306 = v331;
                  v196 = 0LL;
                  *((_QWORD *)this + 50) = v305;
                  v195 = v329[1];
                  v337 = 0LL;
                  *((_DWORD *)this + 97) = v306;
LABEL_338:
                  *(_OWORD *)(*((_QWORD *)this + 50) + 16LL * *((unsigned int *)this + 96)) = v397;
                  ++*v193;
                  v197 = *((_DWORD *)this + 102);
                  if ( v197 <= *v193 )
                    v197 = *v193;
                  *((_DWORD *)this + 102) = v197;
LABEL_341:
                  v198 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
                  if ( (char *)v198 == (char *)WPF::ProcessHeapImpl::Free )
                    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v196);
                  else
                    v198();
                  if ( v4 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x133Fu);
                    goto LABEL_368;
                  }
                  v325 = 1;
                  if ( v195 == 1 )
                  {
                    v199 = 0x7FFFFFFF;
                    v200 = *(float *)&v396 - 0.5;
                    if ( (float)(*(float *)&v396 - 0.5) < -2147483600.0 )
                    {
                      v201 = 0x80000000;
                    }
                    else if ( v200 >= 2147483600.0 )
                    {
                      v201 = 0x7FFFFFFF;
                    }
                    else
                    {
                      v201 = (int)ceilf_0(v200);
                    }
                    v202 = *((float *)&v396 + 1) - 0.5;
                    v203 = (float)v201;
                    if ( (float)(*((float *)&v396 + 1) - 0.5) < -2147483600.0 )
                    {
                      v204 = 0x80000000;
                    }
                    else if ( v202 >= 2147483600.0 )
                    {
                      v204 = 0x7FFFFFFF;
                    }
                    else
                    {
                      v204 = (int)ceilf_0(v202);
                    }
                    v205 = *((float *)&v396 + 2) - 0.5;
                    v206 = (float)v204;
                    if ( (float)(*((float *)&v396 + 2) - 0.5) < -2147483600.0 )
                    {
                      v207 = 0x80000000;
                    }
                    else if ( v205 >= 2147483600.0 )
                    {
                      v207 = 0x7FFFFFFF;
                    }
                    else
                    {
                      v207 = (int)ceilf_0(v205);
                    }
                    v208 = *((float *)&v396 + 3) - 0.5;
                    v209 = (float)v207;
                    if ( (float)(*((float *)&v396 + 3) - 0.5) < -2147483600.0 )
                    {
                      v199 = 0x80000000;
                    }
                    else if ( v208 < 2147483600.0 )
                    {
                      v199 = (int)ceilf_0(v208);
                    }
                    v210 = (float)v199;
                  }
                  else
                  {
                    LODWORD(v203) = v396;
                    v206 = *((float *)&v396 + 1);
                    v209 = *((float *)&v396 + 2);
                    v210 = *((float *)&v396 + 3);
                  }
                  v211 = *((unsigned int *)this + 717);
                  v212 = 0LL;
                  v4 = 0;
                  *(_QWORD *)&v397 = __PAIR64__(LODWORD(v206), LODWORD(v203));
                  *((_QWORD *)&v397 + 1) = __PAIR64__(LODWORD(v210), LODWORD(v209));
                  v344 = 0LL;
                  if ( *((_DWORD *)this + 716) != (_DWORD)v211 )
                    goto LABEL_359;
                  v332 = 0;
                  v340 = 0;
                  v307 = ULongLongToUInt(2 * v211, &v332);
                  v4 = v307;
                  if ( v307 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v307, 0x4Cu);
                  }
                  else
                  {
                    v308 = v332;
                    if ( v332 <= 8 )
                      v308 = 8;
                    v332 = v308;
                    v309 = WPF::HrMalloc((WPF *)8, 16LL, v308, (unsigned __int64)&v344, v321);
                    v4 = v309;
                    if ( v309 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v309, 0x54u);
                    }
                    else
                    {
                      v310 = ULongLongToUInt(16LL * *((unsigned int *)this + 716), &v340);
                      v4 = v310;
                      if ( v310 >= 0 )
                      {
                        v311 = v344;
                        memcpy_0(v344, *((const void **)this + 360), v340);
                        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                          WPF::g_pProcessHeap,
                          *((_QWORD *)this + 360));
                        v312 = v332;
                        *((_QWORD *)this + 360) = v311;
                        v212 = 0LL;
                        v344 = 0LL;
                        *((_DWORD *)this + 717) = v312;
LABEL_359:
                        *(_OWORD *)(*((_QWORD *)this + 360) + 16LL * *((unsigned int *)this + 716)) = v397;
                        v213 = *((_DWORD *)this + 722);
                        v214 = ++*((_DWORD *)this + 716);
                        if ( v213 > v214 )
                          v214 = v213;
                        *((_DWORD *)this + 722) = v214;
                        goto LABEL_362;
                      }
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v310, 0x56u);
                    }
                    v212 = v344;
                  }
LABEL_362:
                  v215 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
                  if ( v215 == WPF::ProcessHeapImpl::Free )
                    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v212);
                  else
                    v215(WPF::g_pProcessHeap, v212);
                  if ( v4 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xF2u);
                  }
                  else
                  {
                    v216 = 10LL * (unsigned int)(*((_DWORD *)this + 204) - 1);
                    ++*(_DWORD *)(*((_QWORD *)this + 99) + 8 * v216 + 4);
                  }
                  if ( v4 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1346u);
                  else
                    *((_BYTE *)this + 6409) = 1;
LABEL_368:
                  if ( v4 < 0 )
                  {
                    if ( v325 )
                      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 96, 0LL);
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2248u);
                    goto LABEL_139;
                  }
                  goto LABEL_111;
                }
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v304, 0x56u);
              }
            }
            v196 = v337;
            goto LABEL_341;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x13A8u);
LABEL_700:
          v192 = 0;
          v186 = 0;
          goto LABEL_336;
        }
        v178 = *(_OWORD *)(*((_QWORD *)this + 360) + 16LL * (unsigned int)(v177 - 1));
      }
      else
      {
        v178 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      v396 = v178;
      goto LABEL_310;
    }
  }
LABEL_111:
  if ( *((_DWORD *)this + 1591) )
    goto LABEL_772;
  if ( *((_BYTE *)this + 6412) )
    CDrawingContext::UpdateMoveOptimizations((char *)this - 120, v76, &v398);
  v79 = (int *)((char *)this + 3024);
  v80 = 0LL;
  v81 = *((_DWORD *)this + 756);
  if ( v81 )
    v80 = *((_QWORD *)this + 380) + 16LL * (unsigned int)(v81 - 1);
  BYTE1(v329[0]) = *(_BYTE *)(v80 + 8);
  v324 = 0;
  v86 = Windows::Foundation::Numerics::determinant(
          (Windows::Foundation::Numerics *)&v349,
          (const struct Windows::Foundation::Numerics::float4x4 *)v76);
  v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v86 - 0.0)) & _xmm);
  if ( v87 >= 0.00000011920929 )
  {
    if ( _finite((float)(1.0 / v86)) )
    {
      if ( (float)((float)((float)((float)((float)(*((float *)&v349 + 1) * *((float *)&v350 + 3))
                                         - (float)(*((float *)&v349 + 3) * *((float *)&v350 + 1)))
                                 * *(float *)&v352)
                         + (float)((float)((float)(*((float *)&v349 + 3) * *(float *)&v350)
                                         - (float)(*((float *)&v350 + 3) * *(float *)&v349))
                                 * *((float *)&v352 + 1)))
                 + (float)((float)((float)(*((float *)&v350 + 1) * *(float *)&v349)
                                 - (float)(*((float *)&v349 + 1) * *(float *)&v350))
                         * *((float *)&v352 + 3))) < 0.0 != v86 < 0.0 )
      {
        v85 = 0;
        v324 = 0;
      }
      else
      {
        v85 = 1;
        v324 = 1;
      }
    }
    else
    {
      v85 = 0;
    }
  }
  v88 = *(_DWORD *)(*(_QWORD *)(v8 + 272) + 4LL);
  if ( (v88 & 0x8000000) == 0 )
  {
    LOBYTE(v83) = *(_DWORD *)(v8 + 160) != 1;
    v89 = v360;
    LOBYTE(v82) = v360 && *((_DWORD *)v360 + 40) == 1;
    v90 = *(_QWORD *)(v8 + 136);
    if ( (v90 & 2) != 0 )
      v90 = *(_QWORD *)(v90 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v90) = v90 & 1;
    LOBYTE(v84) = (_DWORD)v90 != 0;
    if ( *(_DWORD *)(v8 + 160) == 1 )
      goto LABEL_744;
    if ( !(_BYTE)v82 )
      goto LABEL_128;
    if ( !(_DWORD)v90 )
    {
LABEL_744:
      if ( !(_BYTE)v82 || (v88 & 0x10000) == 0 )
        goto LABEL_128;
    }
  }
  v165 = *((unsigned int *)this + 757);
  v4 = 0;
  *(_QWORD *)&v397 = v8;
  BYTE8(v397) = v85;
  v345 = 0LL;
  if ( *v79 != (_DWORD)v165 )
    goto LABEL_285;
  v333 = 0;
  v341 = 0;
  v313 = ULongLongToUInt(2 * v165, &v333);
  v4 = v313;
  if ( v313 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v313, 0x4Cu);
  }
  else
  {
    v314 = v333;
    if ( v333 <= 0x40 )
      v314 = 64;
    v333 = v314;
    v315 = WPF::HrMalloc((WPF *)0x40, 16LL, v314, (unsigned __int64)&v345, v321);
    v4 = v315;
    if ( v315 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v315, 0x54u);
    }
    else
    {
      v316 = ULongLongToUInt(16LL * (unsigned int)*v79, &v341);
      v4 = v316;
      if ( v316 >= 0 )
      {
        v317 = v345;
        memcpy_0(v345, *((const void **)this + 380), v341);
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 380));
        *((_DWORD *)this + 757) = v333;
        *((_QWORD *)this + 380) = v317;
        v345 = 0LL;
LABEL_285:
        *(_OWORD *)(*((_QWORD *)this + 380) + 16LL * (unsigned int)(*v79)++) = v397;
        v166 = *v79;
        if ( *((_DWORD *)this + 762) > (unsigned int)*v79 )
          v166 = *((_DWORD *)this + 762);
        *((_DWORD *)this + 762) = v166;
        goto LABEL_288;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v316, 0x56u);
    }
    v3 = v345;
  }
LABEL_288:
  v167 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v167 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v3);
  else
    v167(WPF::g_pProcessHeap, v3);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2263u);
    goto LABEL_139;
  }
  v89 = v360;
LABEL_128:
  v91 = *(_DWORD *)(v8 + 160) == 1;
  v92 = v89 && *((_DWORD *)v89 + 40) == 1;
  v93 = *(_QWORD *)(v8 + 272);
  if ( (*(_DWORD *)(v93 + 4) & 0x8000000) == 0 )
    goto LABEL_132;
  v168 = *(unsigned int *)(v93 + 12);
  for ( k = (unsigned int *)(v93 + 12); (*k & 0x7F000000) != 0x5000000; v168 = *k )
    k = (unsigned int *)((char *)k + (v168 & 0xFFFFFF) + 4);
  v372 = *(_QWORD *)(k + 1);
  v170 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v372 + 48LL);
  v171 = v170 == CEffectGroup::IsOfType
       ? CEffectGroup::IsOfType(v372, 9)
       : ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))v170)(v372, 9LL, v168, v84);
  if ( v171 )
    v94 = 1;
  else
LABEL_132:
    v94 = 0;
  if ( v91 )
  {
    if ( v92 )
    {
      if ( !v94 )
        goto LABEL_134;
    }
    else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v8 + 136)) )
    {
      goto LABEL_134;
    }
    if ( CVisual::HasBspPolygonList((CVisual *)v8) )
    {
      v105 = CDrawingContext::DrawBspPolygonList((CDrawingContext *)((char *)this - 120), (struct CVisual *)v8, v360);
      v4 = v105;
      if ( v105 < 0 )
      {
        v322 = 8838;
        goto LABEL_582;
      }
    }
LABEL_763:
    *v336 = 0;
    goto LABEL_139;
  }
LABEL_134:
  v95 = *((_DWORD *)this + 55) == 0;
  v326 = 0;
  if ( v95 || (v82 = v324, v83 = BYTE1(v329[0]), BYTE1(v329[0]) == v324) )
  {
    v96 = *(_BOOL8 (__fastcall **)(CVisual *))(*(_QWORD *)v8 + 184LL);
    if ( v96 == CVisual::HasContent )
    {
      if ( !*(_QWORD *)(v8 + 304) )
        goto LABEL_139;
    }
    else if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))v96)(v8, v82, v83, v84) )
    {
      goto LABEL_155;
    }
    v100 = (CDrawingContext *)((char *)this - 120);
    v101 = *(__int64 (__fastcall **)(CVisual *, struct CDrawingContext *, bool *))(*(_QWORD *)v8 + 176LL);
    if ( v101 == CVisual::RenderContent )
    {
      v102 = CVisual::RenderContent((CVisual *)v8, v100, &v326);
    }
    else if ( v101 == CWindowNode::RenderContent )
    {
      v102 = CWindowNode::RenderContent((CWindowNode *)v8, v100, &v326);
    }
    else
    {
      v102 = ((__int64 (__fastcall *)(__int64, struct CDrawingContext *, bool *, __int64))v101)(v8, v100, &v326, v84);
    }
    v4 = v102;
    if ( v102 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v102, 0x2272u);
      goto LABEL_139;
    }
LABEL_155:
    if ( v326 )
      goto LABEL_763;
    goto LABEL_139;
  }
  v318 = *(_DWORD *)(*(_QWORD *)(v8 + 272) + 4LL);
  if ( (v318 & 0x8000000) != 0 || (v318 & 0x10000) != 0 )
  {
    if ( v324 )
    {
      TopByReference = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(
                         (char *)this + 3024,
                         v324,
                         BYTE1(v329[0]),
                         v84);
      if ( *(_BYTE *)(TopByReference + 8) != v320 )
      {
        v326 = 1;
        goto LABEL_763;
      }
    }
  }
LABEL_139:
  result = (unsigned int)v4;
  *(_BYTE *)(v8 + 155) = 0;
  return result;
}
