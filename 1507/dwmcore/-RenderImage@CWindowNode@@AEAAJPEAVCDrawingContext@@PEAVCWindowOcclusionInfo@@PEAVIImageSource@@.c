/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007B490 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008F40 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18000DCE0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18000DD28 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18000DD70 (-CalculateSubtractionRectangles@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18000E0A0 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV-$CMatrix@UBaseSampling@Co.c)
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z @ 0x1800102B8 (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z.c)
 *     ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x180013994 (-D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z.c)
 *     MatrixAppendScale2D @ 0x1800139C8 (MatrixAppendScale2D.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180027DB0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18002A028 (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002AFC4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18002B104 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002C9D0 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z @ 0x18002DA28 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180030040 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180031110 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18004DCF0 (-IsFullyCovered@CArrayBasedCoverageSet@@UEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180054CAC (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180078740 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18007885C (--1CRegionShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180078D28 (--0CRectangleShape@@QEAA@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079DFC (-ClipAgainstMargins@CWindowNode@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x1800DBF8C (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x1800DC8AC (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x1800F146C (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 *     ?CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x1800F19A4 (-CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVIImageSource@@PEAVCShape@@_N2@Z @ 0x1800F23A8 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVIImageSource@@PEAVCShape@@_N2@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x1800F448C (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x1800FE618 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18010380C (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x180103A28 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18010417C (-GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?Deflate@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180104D44 (-Deflate@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?ClipWithRect@CShape@@SAJPEBV1@PEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAPEAV1@@Z @ 0x18014A3B0 (-ClipWithRect@CShape@@SAJPEBV1@PEBV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderImage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct IImageSource *a4,
        CShape *a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        unsigned int a9,
        unsigned __int8 a10,
        char a11,
        char a12,
        __int64 a13)
{
  int v13; // esi
  int v16; // eax
  unsigned int v17; // ebx
  bool v18; // r15
  float v19; // xmm9_4
  float v20; // xmm8_4
  signed int v21; // eax
  __m128i v22; // xmm7
  int v23; // eax
  float v24; // xmm7_4
  float v25; // xmm6_4
  __int64 (__fastcall *v26)(CComplexShape *, __int64, CBaseMatrix *); // rbx
  int TightBounds; // eax
  char v28; // si
  char v29; // di
  int v30; // ebx
  char v31; // r10
  bool v32; // zf
  int v33; // edi
  int v34; // esi
  int v35; // r15d
  LONG bottom; // r9d
  unsigned __int64 right; // r8
  LONG top; // edx
  LONG left; // ecx
  signed int v40; // r14d
  int v41; // r12d
  int v42; // r15d
  int v43; // r11d
  float v44; // xmm6_4
  unsigned int v45; // r13d
  CDrawingContext *v46; // rsi
  float v47; // xmm9_4
  float v48; // xmm15_4
  float v49; // xmm11_4
  float v50; // xmm14_4
  __int64 v51; // rbx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  RECT *p_rcSrc1; // rax
  LONG v59; // xmm8_4
  float v60; // xmm7_4
  char v61; // dl
  LONG v62; // xmm6_4
  LONG v63; // xmm5_4
  unsigned int j; // ecx
  float v65; // xmm4_4
  float v66; // xmm3_4
  float v67; // xmm2_4
  float v68; // xmm0_4
  int v69; // r8d
  int v70; // eax
  __int64 v71; // rbx
  char (__fastcall *v72)(__int64, __int64); // rdi
  int v73; // r13d
  char v74; // al
  float v75; // xmm0_4
  float v76; // xmm5_4
  float v77; // xmm12_4
  float v78; // xmm13_4
  float v79; // xmm3_4
  float v80; // xmm4_4
  int v81; // edi
  int v82; // eax
  int v83; // r13d
  struct CVisual *v84; // rdi
  float v85; // xmm7_4
  bool v86; // bl
  char v87; // di
  float v88; // xmm9_4
  float v89; // xmm6_4
  float v90; // xmm8_4
  struct CSolidColorBrush *v91; // r14
  struct CShape *v92; // rsi
  struct CShape *v93; // rdi
  void (__fastcall ***v94)(_QWORD, __int64); // r15
  LONG v96; // edx
  LONG v97; // r8d
  LONG v98; // eax
  int v99; // r11d
  CBitmapResource *v100; // rbx
  __int64 v101; // r8
  unsigned int v102; // eax
  int v103; // eax
  struct CVisual *v104; // rbx
  __int64 v105; // r13
  __int64 v106; // r12
  __int64 v107; // r14
  int v108; // eax
  char IsOverlayAssigned; // r14
  char v110; // al
  struct IImageSource *v111; // rax
  CBitmapResource *v112; // r14
  __int64 v113; // rcx
  CBitmapResource *v114; // rax
  __int64 v115; // rcx
  CBitmapResource *v116; // rax
  __int64 v117; // rcx
  CBitmapResource *v118; // rax
  int v119; // eax
  float v120; // xmm11_4
  float v121; // xmm10_4
  int v122; // eax
  int v123; // eax
  float v124; // xmm12_4
  CBitmapResource *v125; // rbx
  int v126; // eax
  float *v127; // rax
  __int64 v128; // rcx
  float v129; // xmm0_4
  float v130; // xmm1_4
  float v131; // xmm2_4
  float v132; // xmm10_4
  float v133; // xmm8_4
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  __int64 i; // rbx
  int v140; // eax
  int v141; // eax
  int v142; // eax
  unsigned int v143; // ebx
  int v144; // r9d
  __int64 v145; // rcx
  __int64 v146; // rax
  float v147; // xmm3_4
  float v148; // xmm2_4
  float v149; // xmm1_4
  float v150; // xmm0_4
  unsigned int v151; // eax
  unsigned int v152; // edx
  int v153; // eax
  int v154; // eax
  __int64 v155; // r8
  unsigned int v156; // eax
  int v157; // eax
  int v158; // eax
  int v159; // eax
  struct CShape *v160; // rax
  char v161; // r14
  int v162; // ecx
  float v163; // xmm2_4
  float v164; // xmm4_4
  float v165; // xmm3_4
  __m128i v166; // xmm5
  int v167; // eax
  char v168; // bl
  float v169; // xmm5_4
  __int64 v170; // rcx
  CDrawingContext *v171; // rbx
  __int64 v172; // rcx
  int v173; // eax
  __int64 v174; // rcx
  int v175; // eax
  bool v176; // r9
  HWND v177; // r8
  int v178; // edx
  int v179; // ecx
  int v180; // eax
  float v181; // xmm0_4
  __m128i v182; // xmm3
  unsigned int v183; // eax
  float v184; // xmm3_4
  __m128i v185; // xmm2
  int v186; // eax
  float v187; // xmm2_4
  int v188; // r8d
  struct tagRECT *MoveRects; // rax
  struct CDrawingContext *v190; // rsi
  unsigned int *p_right; // rbx
  struct CVisual *v192; // r12
  __int64 v193; // r14
  __m128i v194; // xmm4
  __m128i v195; // xmm5
  __m128i v196; // xmm6
  __m128i v197; // xmm0
  float v198; // xmm2_4
  float v199; // xmm3_4
  float v200; // xmm4_4
  float v201; // xmm5_4
  float v202; // xmm6_4
  float v203; // xmm1_4
  struct CDrawingContext *v204; // rdx
  CVisual *v205; // rcx
  HRGN PreviousFrameVisibleRegion; // rax
  int v207; // [rsp+20h] [rbp-E0h]
  unsigned int v208; // [rsp+20h] [rbp-E0h]
  unsigned int v209; // [rsp+20h] [rbp-E0h]
  float *v210; // [rsp+28h] [rbp-D8h]
  char v211; // [rsp+40h] [rbp-C0h]
  bool v212; // [rsp+41h] [rbp-BFh] BYREF
  bool v213[6]; // [rsp+42h] [rbp-BEh] BYREF
  struct CShape *v214; // [rsp+48h] [rbp-B8h] BYREF
  bool v215; // [rsp+50h] [rbp-B0h]
  void (__fastcall ***v216)(_QWORD, __int64); // [rsp+58h] [rbp-A8h] BYREF
  struct CShape *v217; // [rsp+60h] [rbp-A0h] BYREF
  struct CSolidColorBrush *v218; // [rsp+68h] [rbp-98h] BYREF
  struct IImageSource *v219; // [rsp+70h] [rbp-90h]
  CDrawingContext *v220; // [rsp+78h] [rbp-88h]
  struct CVisual *v221; // [rsp+80h] [rbp-80h]
  unsigned int v222; // [rsp+88h] [rbp-78h] BYREF
  struct IBitmapSource *v223; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v224; // [rsp+98h] [rbp-68h]
  struct CShape *v225; // [rsp+A0h] [rbp-60h] BYREF
  void (__fastcall ***v226)(_QWORD, __int64); // [rsp+A8h] [rbp-58h] BYREF
  __int128 v227; // [rsp+B0h] [rbp-50h] BYREF
  RECT rcSrc1; // [rsp+C0h] [rbp-40h] BYREF
  struct CShape *v229; // [rsp+D0h] [rbp-30h] BYREF
  void (__fastcall ***v230)(_QWORD, __int64); // [rsp+D8h] [rbp-28h]
  __int128 v231; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v232; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v233; // [rsp+100h] [rbp+0h] BYREF
  __int128 v234; // [rsp+110h] [rbp+10h] BYREF
  __int128 v235; // [rsp+120h] [rbp+20h] BYREF
  float v236; // [rsp+130h] [rbp+30h] BYREF
  float v237; // [rsp+134h] [rbp+34h]
  float v238; // [rsp+138h] [rbp+38h]
  float v239; // [rsp+13Ch] [rbp+3Ch]
  float v240; // [rsp+140h] [rbp+40h] BYREF
  float v241; // [rsp+144h] [rbp+44h]
  float v242; // [rsp+148h] [rbp+48h]
  float v243; // [rsp+14Ch] [rbp+4Ch]
  unsigned __int64 v244; // [rsp+150h] [rbp+50h] BYREF
  char v245; // [rsp+15Ch] [rbp+5Ch] BYREF
  __m256i v246; // [rsp+180h] [rbp+80h] BYREF
  __m256i v247; // [rsp+1A0h] [rbp+A0h]
  float v248; // [rsp+1C0h] [rbp+C0h] BYREF
  float v249; // [rsp+1C4h] [rbp+C4h]
  float v250; // [rsp+1C8h] [rbp+C8h]
  float v251; // [rsp+1CCh] [rbp+CCh]
  __int64 v252[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  float v253[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  float v254; // [rsp+1E8h] [rbp+E8h]
  float v255; // [rsp+1ECh] [rbp+ECh]
  _DWORD v256[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v257[64]; // [rsp+200h] [rbp+100h] BYREF
  int v258; // [rsp+240h] [rbp+140h] BYREF
  int v259[11]; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v260; // [rsp+270h] [rbp+170h]
  float v261; // [rsp+274h] [rbp+174h]

  v13 = 0;
  v220 = (CDrawingContext *)a2;
  v221 = (struct CVisual *)a1;
  v219 = a4;
  *(_QWORD *)&v232 = a3;
  *(_QWORD *)&rcSrc1.left = a13;
  v216 = 0LL;
  v217 = 0LL;
  v214 = 0LL;
  v225 = 0LL;
  v226 = 0LL;
  v218 = 0LL;
  v211 = 0;
  v213[0] = 0;
  v16 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 0);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xE2Du);
    return v17;
  }
  v18 = 0;
  v19 = 0.0;
  v20 = 0.0;
  *(_QWORD *)&v227 = 0LL;
  LODWORD(v231) = 0;
  v215 = 0;
  if ( v219 )
  {
    v21 = *(_DWORD *)(a1 + 960) - *(_DWORD *)(a1 + 952);
    if ( v21 < 0 )
      v21 = 0;
    v22 = _mm_cvtsi32_si128(v21);
    v23 = *(_DWORD *)(a1 + 964) - *(_DWORD *)(a1 + 956);
    LODWORD(v24) = _mm_cvtepi32_ps(v22).m128_u32[0];
    *((float *)&v227 + 2) = v24;
    if ( v23 < 0 )
      v23 = 0;
    v25 = (float)v23;
  }
  else
  {
    v24 = 0.0;
    v25 = 0.0;
    DWORD2(v227) = 0;
  }
  *((float *)&v227 + 3) = v25;
  if ( !a5 )
    goto LABEL_27;
  v26 = *(__int64 (__fastcall **)(CComplexShape *, __int64, CBaseMatrix *))(*(_QWORD *)a5 + 24LL);
  if ( v26 == CShape::GetTightBounds )
    TightBounds = CShape::GetTightBounds(a5, (__int64)&v229, 0LL);
  else
    TightBounds = v26(a5, (__int64)&v229, 0LL);
  LODWORD(v231) = TightBounds;
  v13 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0xAE3u);
    v18 = v213[0];
    v215 = v213[0];
  }
  else
  {
    if ( *(float *)&v229 < 0.0 || *(float *)&v230 > v24 || *((float *)&v229 + 1) < 0.0 || *((float *)&v230 + 1) > v25 )
      v215 = 1;
    if ( *(float *)&v229 > 0.0 )
    {
      LODWORD(v19) = (_DWORD)v229;
      LODWORD(v227) = (_DWORD)v229;
    }
    if ( *((float *)&v229 + 1) > 0.0 )
    {
      v20 = *((float *)&v229 + 1);
      DWORD1(v227) = HIDWORD(v229);
    }
    if ( v24 > *(float *)&v230 )
    {
      LODWORD(v24) = (_DWORD)v230;
      DWORD2(v227) = (_DWORD)v230;
    }
    if ( v25 > *((float *)&v230 + 1) )
    {
      v25 = *((float *)&v230 + 1);
      HIDWORD(v227) = HIDWORD(v230);
    }
    if ( v24 <= v19 || v25 <= v20 )
    {
      v25 = 0.0;
      v24 = 0.0;
      v20 = 0.0;
      v19 = 0.0;
      v227 = 0uLL;
    }
    if ( CShape::IsAxisAlignedRectangle(a5) )
LABEL_27:
      v18 = 1;
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xE33u);
    return (unsigned int)v13;
  }
  if ( *(_BYTE *)(a2 + 5936) )
  {
    if ( qword_1801930E8 )
    {
      if ( CDisplaySet::NeedsDesktopMoves(qword_1801930E8) )
      {
        *(_QWORD *)&v233 = __PAIR64__(LODWORD(v20), LODWORD(v19));
        *((_QWORD *)&v233 + 1) = __PAIR64__(LODWORD(v25), LODWORD(v24));
        CBaseMatrixStack::Top((CBaseMatrixStack *)(a2 + 456), (struct CBaseMatrix *)&v246);
        CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v246, (const struct MilRectF *)&v233, (struct MilRectF *)v252);
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 5696); i = (unsigned int)(i + 1) )
          CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*(_QWORD *)(a2 + 5672) + 8 * i), v252, a2);
      }
    }
  }
  (*(void (__fastcall **)(struct IImageSource *, char *, float *))(*(_QWORD *)v219 + 112LL))(v219, v257, &v236);
  if ( (float)(v238 - v236) == 0.0 || (float)(v239 - v237) == 0.0 )
    return (unsigned int)v13;
  if ( (a6 & 2) != 0 || !v18 )
  {
    v29 = a12;
    v28 = a11;
  }
  else
  {
    v28 = a11;
    v29 = a12;
    if ( !a11 && !a12 )
    {
      v230 = 0LL;
      v229 = (struct CShape *)&CRegionShape::`vftable';
      v30 = (int)v19;
      v31 = 0;
      v32 = *(_DWORD *)(a1 + 1156) == 0;
      v224 = (a6 & 1) != 0;
      v33 = (int)v20;
      LODWORD(v233) = (int)v19;
      v34 = (int)v24;
      DWORD1(v233) = (int)v20;
      v35 = (int)v25;
      DWORD2(v233) = (int)v24;
      HIDWORD(v233) = (int)v25;
      v235 = v233;
      LODWORD(v233) = (int)v19;
      DWORD1(v233) = (int)v20;
      DWORD2(v233) = (int)v24;
      HIDWORD(v233) = (int)v25;
      v232 = v233;
      if ( !v32 || *(_DWORD *)(a1 + 1164) || *(_DWORD *)(a1 + 1160) || *(_DWORD *)(a1 + 1168) )
      {
        v96 = *(_DWORD *)(a1 + 1164) + *(_DWORD *)(a1 + 892);
        v97 = *(_DWORD *)(a1 + 900) - *(_DWORD *)(a1 + 1168);
        v98 = *(_DWORD *)(a1 + 1156) + *(_DWORD *)(a1 + 888);
        rcSrc1.right = *(_DWORD *)(a1 + 896) - *(_DWORD *)(a1 + 1160);
        rcSrc1.top = v96;
        rcSrc1.bottom = v97;
        rcSrc1.left = v98;
        IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)(a1 + 952));
        if ( EqualRect(&rcSrc1, (const RECT *)(a1 + 952)) )
        {
          bottom = HIDWORD(v235);
          right = DWORD2(v235);
          top = DWORD1(v235);
          left = v235;
        }
        else
        {
          OffsetRect(&rcSrc1, -*(_DWORD *)(a1 + 952), -*(_DWORD *)(a1 + 956));
          left = v235;
          if ( rcSrc1.left > (int)v235 )
          {
            left = rcSrc1.left;
            LODWORD(v235) = rcSrc1.left;
          }
          top = DWORD1(v235);
          if ( rcSrc1.top > SDWORD1(v235) )
          {
            top = rcSrc1.top;
            DWORD1(v235) = rcSrc1.top;
          }
          right = DWORD2(v235);
          if ( rcSrc1.right < SDWORD2(v235) )
          {
            right = (unsigned int)rcSrc1.right;
            DWORD2(v235) = rcSrc1.right;
          }
          bottom = HIDWORD(v235);
          if ( rcSrc1.bottom < SHIDWORD(v235) )
          {
            bottom = rcSrc1.bottom;
            HIDWORD(v235) = rcSrc1.bottom;
          }
          if ( (int)right <= left || bottom <= top )
          {
            bottom = 0;
            top = 0;
            right = 0LL;
            v235 = 0uLL;
            left = 0;
          }
        }
        v31 = 0;
      }
      else
      {
        bottom = HIDWORD(v235);
        right = DWORD2(v235);
        top = DWORD1(v235);
        left = v235;
      }
      if ( a8 && (*a8 || a8[2] || a8[1] || a8[3]) )
      {
        v99 = v30 + *a8;
        v41 = v34 - a8[1];
        v31 = 1;
        *(_QWORD *)&v232 = __PAIR64__(v33 + a8[2], v99);
        v40 = v35 - a8[3];
        *((_QWORD *)&v232 + 1) = __PAIR64__(v40, v41);
        v222 = v40;
        if ( a10 )
        {
          v140 = *(_DWORD *)(a1 + 960) - *(_DWORD *)(a1 + 952) - v34;
          LODWORD(v232) = v99 - v30;
          v41 += v140;
          v43 = DWORD1(v232) - v33;
          v141 = *(_DWORD *)(a1 + 964) - *(_DWORD *)(a1 + 956) - v35;
          DWORD1(v232) -= v33;
          v40 += v141;
          *((_QWORD *)&v232 + 1) = __PAIR64__(v40, v41);
        }
        else
        {
          v43 = DWORD1(v232);
        }
        v42 = v232;
        if ( v41 <= (int)v232 )
        {
          v41 = v232;
          DWORD2(v232) = v232;
        }
        if ( v40 <= v43 )
        {
          v40 = v43;
          HIDWORD(v232) = v43;
        }
      }
      else
      {
        v40 = HIDWORD(v232);
        v41 = DWORD2(v232);
        v42 = v232;
        v43 = DWORD1(v232);
      }
      if ( left > v42 )
      {
        v42 = left;
        LODWORD(v232) = left;
      }
      if ( top > v43 )
        v43 = top;
      DWORD1(v232) = v43;
      if ( (int)right < v41 )
      {
        v41 = right;
        DWORD2(v232) = right;
      }
      if ( bottom < v40 )
      {
        v40 = bottom;
        HIDWORD(v232) = bottom;
      }
      if ( v41 <= v42 || v40 <= v43 )
      {
        v40 = 0;
        v43 = 0;
        v41 = 0;
        v232 = 0uLL;
        v42 = 0;
      }
      v44 = FLOAT_1_0;
      v45 = 4;
      if ( !v31 || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEquivalentTo(&v232, &v235) )
      {
        v46 = v220;
LABEL_59:
        if ( v41 > v42 && v40 > v43 )
        {
          v32 = *((_BYTE *)v46 + 5931) == 0;
          v47 = (float)v42;
          *(float *)&v222 = (float)v42;
          v48 = (float)v43;
          v49 = (float)v41;
          v50 = (float)v40;
          if ( v32 || (v51 = *((_QWORD *)v46 + 718)) == 0 )
          {
            v73 = a9;
LABEL_99:
            v75 = (float)v42;
            v213[0] = 0;
            v76 = v48;
            v77 = v238 - v236;
            v78 = v239 - v237;
            v79 = (float)v41;
            *(float *)&rcSrc1.left = (float)v42;
            v80 = (float)v40;
            *(float *)&rcSrc1.top = v48;
            *(float *)&rcSrc1.right = (float)v41;
            *(float *)&rcSrc1.bottom = (float)v40;
            if ( v47 < 0.0 )
            {
              v75 = 0.0;
              rcSrc1.left = 0;
            }
            if ( v48 < 0.0 )
            {
              v76 = 0.0;
              rcSrc1.top = 0;
            }
            if ( v49 > v77 )
            {
              v79 = v238 - v236;
              *(float *)&rcSrc1.right = v238 - v236;
            }
            if ( v50 > v78 )
            {
              v80 = v239 - v237;
              *(float *)&rcSrc1.bottom = v239 - v237;
            }
            if ( v79 <= v75 || v80 <= v76 )
            {
              v83 = v231;
LABEL_120:
              if ( v211 )
              {
                CDrawingContext::PopRenderOptionsInternal(v46, 1);
                v211 = 0;
              }
              v84 = v221;
              if ( (_BYTE)v224 && v219 == *((struct IImageSource **)v221 + 130) )
              {
                CDrawingContext::RecordWindowMoveOptimization(v46, v221, (HWND)right, 0LL);
                *((_BYTE *)v84 + 1284) = 0;
                CWindowNode::ClipAgainstMargins((__int64)v84, (__int64)&v227);
                v32 = *((_BYTE *)v46 + 5936) == 0;
                v223 = v84;
                if ( !v32
                  && qword_1801930E8
                  && CDisplaySet::NeedsDesktopMoves(qword_1801930E8)
                  && (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)v84 + 216LL))(v84) )
                {
                  v233 = v227;
                  CBaseMatrixStack::Top((CDrawingContext *)((char *)v46 + 456), (struct CBaseMatrix *)&v246);
                  CBaseMatrix::Transform2DBounds(
                    (CBaseMatrix *)&v246,
                    (const struct MilRectF *)&v233,
                    (struct MilRectF *)&v248);
                  CScopedClipStack::GetTopClipBoundsInScope((__int64 *)v46 + 85, (__int64)&v227);
                  v147 = *(float *)&v227;
                  if ( v248 > *(float *)&v227 )
                  {
                    v147 = v248;
                    *(float *)&v227 = v248;
                  }
                  v148 = *((float *)&v227 + 1);
                  if ( v249 > *((float *)&v227 + 1) )
                  {
                    v148 = v249;
                    *((float *)&v227 + 1) = v249;
                  }
                  v149 = *((float *)&v227 + 2);
                  if ( *((float *)&v227 + 2) > v250 )
                  {
                    v149 = v250;
                    *((float *)&v227 + 2) = v250;
                  }
                  v150 = *((float *)&v227 + 3);
                  if ( *((float *)&v227 + 3) > v251 )
                  {
                    v150 = v251;
                    *((float *)&v227 + 3) = v251;
                  }
                  if ( v149 <= v147 || v150 <= v148 )
                    v227 = 0uLL;
                  CVisual::AddToVisibleRegion(v223, &v227, v46);
                  v151 = *((_DWORD *)v46 + 1424);
                  v152 = v151 + 1;
                  if ( v151 + 1 >= v151 )
                  {
                    if ( v152 > *((_DWORD *)v46 + 1423) )
                    {
                      v153 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v46 + 5672, 8u, 1, &v223);
                      if ( v153 < 0 )
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v153, 0xC0u);
                    }
                    else
                    {
                      *(_QWORD *)(*((_QWORD *)v46 + 709) + 8LL * *((unsigned int *)v46 + 1424)) = v223;
                      *((_DWORD *)v46 + 1424) = v152;
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
                  }
                }
                v83 = 0;
              }
              v85 = v77 - 0.0;
              v86 = 0;
              v87 = 0;
              v88 = (float)(v41 - v42);
              if ( v88 > (float)(v77 - 0.0) )
              {
                *(_QWORD *)&v227 = __PAIR64__(LODWORD(v48), LODWORD(v77));
                *((float *)&v227 + 2) = (float)v41;
                *((float *)&v227 + 3) = (float)v40;
                v86 = CDrawingContext::IsOccluded((__int64)v46, &v227, a9) == 0;
              }
              v89 = v78 - 0.0;
              v90 = (float)(v40 - DWORD1(v232));
              if ( v90 > (float)(v78 - 0.0) )
              {
                *(_QWORD *)&v232 = __PAIR64__(LODWORD(v78), v222);
                *((float *)&v232 + 2) = (float)v41;
                *((float *)&v232 + 3) = (float)v40;
                if ( !CDrawingContext::IsOccluded((__int64)v46, &v232, a9) )
                  v87 = 1;
              }
              if ( !v86 && !v87 )
                goto LABEL_131;
              memset_0((char *)&v244 + 4, 0, 0x28uLL);
              v244 = 16LL;
              v119 = CDrawingContext::PushRenderOptionsInternal(v46, 0LL, (const struct MilRenderOptions *)&v244, 1);
              v83 = v119;
              if ( v119 >= 0 )
              {
                if ( v86 )
                {
                  v120 = *(float *)&v227 + COERCE_FLOAT(v227 ^ _xmm);
                  v121 = *((float *)&v227 + 2) + COERCE_FLOAT(v227 ^ _xmm);
                  *(float *)&v227 = v120;
                  *((float *)&v227 + 2) = v121;
                  *((float *)&v227 + 3) = *((float *)&v227 + 3) + COERCE_FLOAT(DWORD1(v227) ^ _xmm);
                  *((float *)&v227 + 1) = *((float *)&v227 + 1) + COERCE_FLOAT(DWORD1(v227) ^ _xmm);
                  D2DMatrixIdentity((struct D2DMatrix *)&v258);
                  v260 = LODWORD(v77);
                  v261 = v48;
                  v122 = CDrawingContext::PushTransformInternal(v46, 0LL, (const struct CMILMatrix *)&v258, 1, 1);
                  v83 = v122;
                  if ( v122 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v122, 0x116Du);
                    goto LABEL_304;
                  }
                  v123 = CDrawingContext::ApplyRenderStateInternal(v46, 0);
                  v83 = v123;
                  if ( v123 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v123, 0x1173u);
                    goto LABEL_307;
                  }
                  D2DMatrixIdentity((struct D2DMatrix *)&v246);
                  v124 = FLOAT_1_0;
                  v247.m256i_i32[5] = LODWORD(v237) ^ _xmm;
                  *(float *)&v247.m256i_i32[4] = 1.0 - (float)(v236 + v85);
                  MatrixAppendScale2D((struct D2DMatrix *)&v246, v121 - v120, v90 / v89);
                  CRectangleShape::CRectangleShape((CRectangleShape *)&v244, (const struct MilRectF *)&v227);
                  v125 = v219;
                  v126 = CDrawingContext::FillShapeWithBitmap(v46, v219, &v246, (CShape *)&v244, a6, 0LL);
                  v83 = v126;
                  if ( v126 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v126, 0x1188u);
LABEL_306:
                    CRectangleShape::~CRectangleShape((CRectangleShape *)&v244);
LABEL_307:
                    CRegionShape::~CRegionShape((CRegionShape *)&v229);
                    CDrawingContext::PopTransformInternal(v46, 1);
                    goto LABEL_308;
                  }
                  CDrawingContext::PopTransformInternal(v46, 1);
                  CRectangleShape::~CRectangleShape((CRectangleShape *)&v244);
                }
                else
                {
                  v124 = FLOAT_1_0;
                  v125 = v219;
                }
                if ( !v87 )
                {
LABEL_215:
                  CDrawingContext::PopRenderOptionsInternal(v46, 1);
                  v211 = 0;
                  goto LABEL_131;
                }
                LODWORD(v130) = v232 ^ _xmm;
                LODWORD(v131) = DWORD1(v232) ^ _xmm;
                v132 = *((float *)&v232 + 1) + COERCE_FLOAT(DWORD1(v232) ^ _xmm);
                v133 = *((float *)&v232 + 3) + COERCE_FLOAT(DWORD1(v232) ^ _xmm);
                *(float *)&v232 = *(float *)&v232 + COERCE_FLOAT(v232 ^ _xmm);
                *((float *)&v232 + 1) = v132;
                *((float *)&v232 + 3) = *((float *)&v232 + 3) + v131;
                *((float *)&v232 + 2) = *((float *)&v232 + 2) + v130;
                D2DMatrixIdentity((struct D2DMatrix *)&v258);
                v260 = v222;
                v261 = v78;
                v134 = CDrawingContext::PushTransformInternal(v46, 0LL, (const struct CMILMatrix *)&v258, 1, 1);
                v83 = v134;
                if ( v134 >= 0 )
                {
                  v135 = CDrawingContext::ApplyRenderStateInternal(v46, 0);
                  v83 = v135;
                  if ( v135 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v135, 0x11A0u);
                    goto LABEL_307;
                  }
                  D2DMatrixIdentity((struct D2DMatrix *)&v246);
                  v247.m256i_i32[4] = LODWORD(v236) ^ _xmm;
                  *(float *)&v247.m256i_i32[5] = v124 - (float)(v237 + v89);
                  MatrixAppendScale2D((struct D2DMatrix *)&v246, v88 / v85, v133 - v132);
                  CRectangleShape::CRectangleShape((CRectangleShape *)&v244, (const struct MilRectF *)&v232);
                  v136 = CDrawingContext::FillShapeWithBitmap(v46, v125, &v246, (CShape *)&v244, a6, 0LL);
                  v83 = v136;
                  if ( v136 >= 0 )
                  {
                    CDrawingContext::PopTransformInternal(v46, 1);
                    CRectangleShape::~CRectangleShape((CRectangleShape *)&v244);
                    goto LABEL_215;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v136, 0x11B5u);
                  goto LABEL_306;
                }
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v134, 0x119Au);
LABEL_304:
                CRegionShape::~CRegionShape((CRegionShape *)&v229);
LABEL_308:
                v91 = v218;
                v93 = v214;
                v94 = v216;
LABEL_415:
                CDrawingContext::PopRenderOptionsInternal(v46, 1);
                v92 = v217;
                goto LABEL_136;
              }
              v208 = 4446;
              v144 = v119;
LABEL_265:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v144, v208);
              CRegionShape::~CRegionShape((CRegionShape *)&v229);
              goto LABEL_133;
            }
            v240 = v75 + v236;
            v242 = v236 + v79;
            v241 = v237 + v76;
            v243 = v237 + v80;
            if ( v211 )
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Deflate(&v240);
            v81 = *((_DWORD *)v46 + 68);
            v223 = 0LL;
            *(_QWORD *)&v231 = 0LL;
            if ( (int)CDrawingContext::BitmapResourceToD2DBitmap((__int64)v46, v219, 0LL, a6 & 1, 0LL, &v231) >= 0
              && (_QWORD)v231 )
            {
              v82 = CDrawingContext::DrawD2DBitmapWithPartialOcclusion(
                      (__int64)v46,
                      (struct ID2D1Bitmap1 *)v231,
                      (unsigned int *)&v240,
                      (float *)&rcSrc1.left,
                      v44,
                      v73,
                      v81);
              v83 = v82;
              if ( v82 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v82, 0xD3Eu);
            }
            else
            {
              v137 = CDrawingContext::ImageSourceToBitmapSource(v46, v219, 0LL, v252, &v223);
              v83 = v137;
              if ( v137 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v137, 0xD47u);
              }
              else
              {
                if ( !v223 )
                {
LABEL_117:
                  if ( (_QWORD)v231 )
                    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v231 + 16LL))(v231);
                  if ( v83 >= 0 )
                    goto LABEL_120;
                  v208 = 4344;
LABEL_263:
                  v144 = v83;
                  goto LABEL_265;
                }
                v138 = CDrawingContext::DrawBitmapSource(
                         v46,
                         (__int64)v223,
                         (__int64)&v240,
                         (float *)&rcSrc1.left,
                         a9,
                         a6,
                         *((_DWORD *)v46 + 68),
                         (__int64)v213);
                v83 = v138;
                if ( v138 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v138, 0xD51u);
              }
            }
            if ( v223 )
              (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v223 + 16LL))(v223);
            goto LABEL_117;
          }
          v52 = *((_DWORD *)v46 + 114);
          *(float *)&v233 = (float)v42;
          *((float *)&v233 + 1) = (float)v43;
          *((float *)&v233 + 2) = (float)v41;
          *((float *)&v233 + 3) = (float)v40;
          if ( v52 )
          {
            v53 = (unsigned int)(v52 - 1);
            v54 = *((_QWORD *)v46 + 59);
            v53 <<= 6;
            v55 = *(_OWORD *)(v53 + v54 + 16);
            *(_OWORD *)v246.m256i_i8 = *(_OWORD *)(v53 + v54);
            v56 = *(_OWORD *)(v53 + v54 + 32);
            *(_OWORD *)&v246.m256i_u64[2] = v55;
            v57 = *(_OWORD *)(v53 + v54 + 48);
          }
          else
          {
            v246 = IdentityMatrix;
            v56 = xmmword_180190B20;
            v57 = xmmword_180190B30;
          }
          *(_OWORD *)&v247.m256i_u64[2] = v57;
          *(_OWORD *)v247.m256i_i8 = v56;
          if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v246) )
          {
            p_rcSrc1 = &rcSrc1;
            *(float *)&v59 = *(float *)&v247.m256i_i32[4] + v47;
            v60 = *(float *)&v247.m256i_i32[5] + v48;
            v61 = 1;
            *(float *)&v62 = *(float *)&v247.m256i_i32[4] + v49;
            *(float *)&v63 = *(float *)&v247.m256i_i32[5] + v50;
            *(float *)&rcSrc1.left = *(float *)&v247.m256i_i32[4] + v47;
            *(float *)&rcSrc1.top = *(float *)&v247.m256i_i32[5] + v48;
            *(float *)&rcSrc1.right = *(float *)&v247.m256i_i32[4] + v49;
            *(float *)&rcSrc1.bottom = *(float *)&v247.m256i_i32[5] + v50;
          }
          else
          {
            CBaseMatrix::Transform2DRectToPerspective(
              (CBaseMatrix *)&v246,
              (const struct MilRectF *)&v233,
              (struct MilPoint2F *const)&v244);
            v63 = rcSrc1.bottom;
            p_rcSrc1 = (RECT *)&v244;
            v62 = rcSrc1.right;
            v61 = 0;
            v60 = *(float *)&rcSrc1.top;
            v45 = 8;
            v59 = rcSrc1.left;
          }
          for ( j = 0; j < v45; ++j )
            p_rcSrc1 = (RECT *)((char *)p_rcSrc1 + 4);
          if ( v61 )
          {
            v65 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
            v66 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
            v67 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
            v68 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          }
          else
          {
            v127 = (float *)&v245;
            *(_QWORD *)&v234 = v244;
            v128 = 3LL;
            v63 = HIDWORD(v244);
            v62 = v244;
            v223 = (struct IBitmapSource *)v244;
            v60 = *((float *)&v244 + 1);
            v59 = v244;
            do
            {
              v129 = *(v127 - 1);
              if ( *(float *)&v59 > v129 )
                v59 = *((_DWORD *)v127 - 1);
              if ( v60 > *v127 )
                v60 = *v127;
              if ( v129 > *(float *)&v62 )
                v62 = *((_DWORD *)v127 - 1);
              if ( *v127 > *(float *)&v63 )
                v63 = *(_DWORD *)v127;
              v127 += 2;
              --v128;
            }
            while ( v128 );
            v65 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
            v66 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
            v67 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
            v68 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            rcSrc1.bottom = v63;
            rcSrc1.right = v62;
            *(float *)&rcSrc1.top = v60;
            rcSrc1.left = v59;
          }
          if ( *(float *)&v62 > *(float *)&v59 && *(float *)&v63 > v60 )
          {
            v69 = *((_DWORD *)v46 + 176);
            if ( v69 )
            {
              if ( *(_DWORD *)(76LL * (unsigned int)(v69 - 1) + *((_QWORD *)v46 + 85) + 4) && *((_DWORD *)v46 + 638) )
              {
                v70 = *((_DWORD *)v46 + 638);
                if ( v70 )
                  v234 = *(_OWORD *)(*((_QWORD *)v46 + 321) + 16LL * (unsigned int)(v70 - 1));
                v68 = *(float *)&v234;
                v67 = *((float *)&v234 + 1);
                v66 = *((float *)&v234 + 2);
                v65 = *((float *)&v234 + 3);
              }
              if ( *(_DWORD *)(76LL * (unsigned int)(v69 - 1) + *((_QWORD *)v46 + 85) + 8) )
              {
                v145 = 104LL * (unsigned int)(*((_DWORD *)v46 + 374) - 1);
                v146 = *((_QWORD *)v46 + 184);
                if ( *(float *)(v145 + v146 + 80) > v68 )
                  v68 = *(float *)(v145 + v146 + 80);
                if ( *(float *)(v145 + v146 + 84) > v67 )
                  v67 = *(float *)(v145 + v146 + 84);
                if ( v66 > *(float *)(v145 + v146 + 88) )
                  v66 = *(float *)(v145 + v146 + 88);
                if ( v65 > *(float *)(v145 + v146 + 92) )
                  v65 = *(float *)(v145 + v146 + 92);
                if ( v66 <= v68 || v65 <= v67 )
                {
                  v65 = 0.0;
                  v66 = 0.0;
                  v67 = 0.0;
                  v68 = 0.0;
                }
              }
            }
            if ( v68 > *(float *)&v59 )
            {
              v59 = LODWORD(v68);
              *(float *)&rcSrc1.left = v68;
            }
            if ( v67 > v60 )
            {
              v60 = v67;
              *(float *)&rcSrc1.top = v67;
            }
            if ( *(float *)&v62 > v66 )
            {
              v62 = LODWORD(v66);
              *(float *)&rcSrc1.right = v66;
            }
            if ( *(float *)&v63 > v65 )
            {
              v63 = LODWORD(v65);
              *(float *)&rcSrc1.bottom = v65;
            }
            if ( *(float *)&v62 <= *(float *)&v59 || *(float *)&v63 <= v60 )
            {
              v63 = 0;
              v62 = 0;
              v60 = 0.0;
              rcSrc1.bottom = 0;
              v59 = 0;
              rcSrc1.right = 0;
              rcSrc1.top = 0;
              rcSrc1.left = 0;
            }
            if ( *(float *)&v62 > *(float *)&v59 && *(float *)&v63 > v60 )
            {
              if ( !*((_BYTE *)v46 + 5608) && *(_BYTE *)(v51 + 520) )
              {
                CBaseMatrix::Transform2DBounds(
                  (CBaseMatrix *)(v51 + 588),
                  (const struct MilRectF *)&rcSrc1,
                  (struct MilRectF *)&v233);
                v234 = v233;
              }
              else
              {
                *((_QWORD *)&v234 + 1) = __PAIR64__(v63, v62);
                *(_QWORD *)&v234 = __PAIR64__(LODWORD(v60), v59);
              }
              v71 = *(_QWORD *)(v51 + 96);
              v72 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v71 + 40LL);
              v73 = a9;
              v74 = v72 == CArrayBasedCoverageSet::IsFullyCovered
                  ? CArrayBasedCoverageSet::IsFullyCovered(v71, (__int64)&v234)
                  : ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD))v72)(v71, &v234, a9);
              if ( !v74 )
              {
                v44 = FLOAT_1_0;
                goto LABEL_99;
              }
            }
          }
        }
        v83 = v231;
        ++*((_DWORD *)v221 + 319);
LABEL_131:
        v229 = (struct CShape *)&CRegionShape::`vftable';
        if ( v230 )
          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64)))(*v230)[2])(v230);
        goto LABEL_133;
      }
      v100 = v219;
      v46 = v220;
      if ( (_BYTE)v224
        && v219 == *((struct IImageSource **)v221 + 130)
        && *((_QWORD *)v220 + 45)
        && *((_BYTE *)v220 + 5601) )
      {
        memset_0((char *)&v244 + 4, 0, 0x28uLL);
        v244 = 0xFF00000100000010uLL;
        v142 = CDrawingContext::PushRenderOptionsInternal(v220, 0LL, (const struct MilRenderOptions *)&v244, 1);
        v143 = v142;
        if ( v142 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v142, 0x1086u);
          CRegionShape::~CRegionShape((CRegionShape *)&v229);
          return v143;
        }
        v100 = v219;
        v211 = 1;
      }
      if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v232) )
      {
        v103 = CRegionShape::BuildFromRects((CRegionShape *)&v229, (__int64)&v235, 1u);
        if ( v103 < 0 )
        {
          v208 = 4263;
          goto LABEL_261;
        }
      }
      else
      {
        `vector constructor iterator'(
          (Mesh::MeshLine *)&v258,
          16LL,
          4,
          (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
        v102 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(
                 &v235,
                 &v232,
                 v101,
                 &v258);
        v103 = CRegionShape::BuildFromRects((CRegionShape *)&v229, (__int64)&v258, v102);
        if ( v103 < 0 )
        {
          v208 = 4259;
          goto LABEL_261;
        }
      }
      v247.m256i_i32[4] = LODWORD(v236) ^ _xmm;
      *(__int64 *)((char *)&v247.m256i_i64[2] + 4) = LODWORD(v237) ^ (unsigned int)_xmm;
      v247.m256i_i64[1] = 1065353216LL;
      v247.m256i_i64[0] = 0LL;
      v246.m256i_i64[3] = 0LL;
      *(__int64 *)((char *)&v246.m256i_i64[1] + 4) = 0LL;
      *(__int64 *)((char *)v246.m256i_i64 + 4) = 0LL;
      v247.m256i_i32[7] = 1065353216;
      v246.m256i_i32[5] = 1065353216;
      v246.m256i_i32[0] = 1065353216;
      v103 = CDrawingContext::FillShapeWithBitmap(v220, v100, &v246, (CShape *)&v229, 0, 0LL);
      LODWORD(v231) = v103;
      if ( v103 >= 0 )
      {
        v43 = DWORD1(v232);
        goto LABEL_59;
      }
      v208 = 4273;
LABEL_261:
      v83 = v103;
      goto LABEL_263;
    }
  }
  v224 = 2;
  `vector constructor iterator'(
    (Mesh::MeshLine *)&v223,
    4LL,
    2,
    (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  v104 = v221;
  if ( !a10 )
    goto LABEL_183;
  if ( v18 )
    goto LABEL_183;
  v210 = &v240;
  if ( !(unsigned __int8)CWindowNode::GetAlphaMarginsRects(v221, a10, a8, &v227, v252) )
    goto LABEL_183;
  CRectangleShape::CRectangleShape((CRectangleShape *)&v244, 0.0, 0.0, 0.0, 0.0);
  *(float *)&v233 = (float)SLODWORD(v240);
  *((float *)&v233 + 1) = (float)SLODWORD(v241);
  *((float *)&v233 + 2) = (float)SLODWORD(v242);
  *((float *)&v233 + 3) = (float)SLODWORD(v243);
  CRectangleShape::Set((CRectangleShape *)&v244, (const struct MilRectF *)&v233);
  v154 = CShape::Combine((__int64)&v244, 0LL, (__int64)a5, 0LL, 1, &v225);
  if ( v154 < 0 )
  {
    v83 = v154;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v154, 0xE9Du);
    CRectangleShape::~CRectangleShape((CRectangleShape *)&v244);
    goto LABEL_144;
  }
  v230 = 0LL;
  v229 = (struct CShape *)&CRegionShape::`vftable';
  if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v240) )
  {
    v158 = CRegionShape::BuildFromRects((CRegionShape *)&v229, (__int64)v252, 1u);
    v83 = v158;
    if ( v158 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v158, 0xEBEu);
      goto LABEL_320;
    }
  }
  else
  {
    `vector constructor iterator'(
      (Mesh::MeshLine *)&v246,
      16LL,
      4,
      (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
    v156 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(v252, &v240, v155, &v246);
    v157 = CRegionShape::BuildFromRects((CRegionShape *)&v229, (__int64)&v246, v156);
    v83 = v157;
    if ( v157 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v157, 0xEBAu);
LABEL_320:
      CRegionShape::~CRegionShape((CRegionShape *)&v229);
      CRectangleShape::~CRectangleShape((CRectangleShape *)&v244);
      goto LABEL_144;
    }
  }
  v159 = CShape::Combine((__int64)&v229, 0LL, (__int64)a5, 0LL, 1, &v226);
  v83 = v159;
  if ( v159 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v159, 0xECAu);
    goto LABEL_320;
  }
  CRegionShape::~CRegionShape((CRegionShape *)&v229);
  CRectangleShape::~CRectangleShape((CRectangleShape *)&v244);
  if ( v225 && v226 )
  {
    v229 = v225;
    v230 = v226;
    HIDWORD(v223) = 0;
    v252[1] = 0LL;
  }
  else
  {
LABEL_183:
    v224 = 1;
    v229 = a5;
  }
  v105 = 0LL;
  v106 = 0LL;
  LODWORD(v223) = a6;
  v252[0] = a7;
  *(_QWORD *)&v235 = 0LL;
  while ( 1 )
  {
    CRectangleShape::CRectangleShape((CRectangleShape *)&v244, 0.0, 0.0, 0.0, 0.0);
    v107 = *(__int64 *)((char *)&v229 + v106);
    if ( v107 )
    {
      if ( !v215 )
        goto LABEL_187;
      CRectangleShape::Set((CRectangleShape *)&v244, (const struct MilRectF *)&v227);
      if ( v216 )
      {
        (**v216)(v216, 1LL);
        v104 = v221;
      }
      v216 = 0LL;
      v108 = CShape::Combine((__int64)&v244, 0LL, v107, 0LL, 1, &v216);
      if ( v108 < 0 )
      {
        v209 = 3850;
        goto LABEL_413;
      }
      v160 = (struct CShape *)v216;
    }
    else
    {
      CRectangleShape::Set((CRectangleShape *)&v244, (const struct MilRectF *)&v227);
      v160 = (struct CShape *)&v244;
    }
    *(struct CShape **)((char *)&v229 + v106) = v160;
LABEL_187:
    *(__int64 *)((char *)&v247.m256i_i64[2] + 4) = 0LL;
    *(__int64 *)((char *)&v247.m256i_i64[1] + 4) = 0LL;
    v247.m256i_i64[0] = 0LL;
    v246.m256i_i64[3] = 0LL;
    *(__int64 *)((char *)&v246.m256i_i64[1] + 4) = 0LL;
    *(__int64 *)((char *)v246.m256i_i64 + 4) = 0LL;
    v247.m256i_i32[7] = 1065353216;
    v247.m256i_i32[2] = 1065353216;
    v246.m256i_i32[5] = 1065353216;
    v246.m256i_i32[0] = 1065353216;
    v108 = CWindowNode::ApplyTextureToLocalTransform((__int64)v104, (__int64)v219, (CBaseMatrix *)&v246);
    if ( v108 < 0 )
      break;
    if ( v29 )
    {
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v246, (const struct MilRectF *)&v236, (struct MilRectF *)&v233);
      v161 = 0;
      v162 = *((_DWORD *)v104 + 239);
      v163 = *((float *)&v233 + 2) - *(float *)&v233;
      v164 = (float)(*((_DWORD *)v104 + 234) - *((_DWORD *)v104 + 238));
      v165 = (float)(*((_DWORD *)v104 + 235) - v162);
      v166 = _mm_cvtsi32_si128(*((_DWORD *)v104 + 236) - *((_DWORD *)v104 + 238));
      v167 = *((_DWORD *)v104 + 237);
      v168 = 0;
      v169 = _mm_cvtepi32_ps(v166).m128_f32[0];
      if ( (float)(v169 - v164) > (float)(*((float *)&v233 + 2) - *(float *)&v233) )
      {
        v168 = 1;
        if ( *((_BYTE *)v221 + 1274) )
        {
          v253[0] = v164;
          v254 = v169 - v163;
        }
        else
        {
          v254 = v169;
          v253[0] = v163 + v164;
        }
        v253[1] = v165;
        v255 = (float)(*((float *)&v233 + 3) - *((float *)&v233 + 1)) + v165;
      }
      if ( (float)((float)(v167 - v162) - v165) > (float)(*((float *)&v233 + 3) - *((float *)&v233 + 1)) )
      {
        *(float *)v256 = v164;
        *(float *)&v256[2] = v169;
        v161 = 1;
        *(float *)&v256[3] = (float)(v167 - v162);
        *(float *)&v256[1] = (float)(*((float *)&v233 + 3) - *((float *)&v233 + 1)) + v165;
      }
      if ( v168 || v161 )
      {
        if ( !v218 )
        {
          v108 = CSolidColorBrush::CreateFromColor(
                   &v218,
                   *((struct CComposition **)v221 + 2),
                   *(struct _D3DCOLORVALUE **)&rcSrc1.left);
          if ( v108 < 0 )
          {
            v209 = 3959;
            goto LABEL_413;
          }
        }
        if ( v168 )
        {
          if ( v214 )
            (**(void (__fastcall ***)(struct CShape *, __int64))v214)(v214, 1LL);
          v170 = *(__int64 *)((char *)&v229 + v106);
          v214 = 0LL;
          v108 = CShape::ClipWithRect(v170, v253, &v214);
          if ( v108 < 0 )
          {
            v209 = 3975;
            goto LABEL_413;
          }
          v171 = v220;
          v108 = CDrawingContext::DrawShape(v220, v214, v218);
          if ( v108 < 0 )
          {
            v209 = 3978;
            goto LABEL_413;
          }
        }
        else
        {
          v171 = v220;
        }
        if ( v161 )
        {
          if ( v214 )
          {
            (**(void (__fastcall ***)(struct CShape *, __int64))v214)(v214, 1LL);
            v171 = v220;
          }
          v172 = *(__int64 *)((char *)&v229 + v106);
          v214 = 0LL;
          v108 = CShape::ClipWithRect(v172, v256, &v214);
          if ( v108 < 0 )
          {
            v209 = 3990;
            goto LABEL_413;
          }
          v91 = v218;
          v173 = CDrawingContext::DrawShape(v171, v214, v218);
          if ( v173 < 0 )
          {
            v83 = v173;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v173, 0xF99u);
            CRectangleShape::~CRectangleShape((CRectangleShape *)&v244);
            goto LABEL_134;
          }
        }
        else
        {
          v91 = v218;
        }
        v231 = v233;
        if ( v217 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v217)(v217, 1LL);
        v174 = *(__int64 *)((char *)&v229 + v106);
        v217 = 0LL;
        v175 = CShape::ClipWithRect(v174, &v231, &v217);
        if ( v175 < 0 )
        {
          v83 = v175;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v175, 0xFAAu);
          CRectangleShape::~CRectangleShape((CRectangleShape *)&v244);
          v92 = v217;
          goto LABEL_135;
        }
        *(struct CShape **)((char *)&v229 + v106) = v217;
      }
      v104 = v221;
    }
    v212 = 0;
    IsOverlayAssigned = CDrawingContext::IsOverlayAssigned((COverlayContext **)v220, v104, v219, &v212);
    if ( IsOverlayAssigned
      || (v110 = (*(__int64 (__fastcall **)(struct IImageSource *))(*(_QWORD *)v219 + 80LL))(v219), v104 = v221, v110) )
    {
      v176 = IsOverlayAssigned;
      v112 = v219;
      v108 = CDrawingContext::DrawOverlayArea(v220, v219, *(struct CShape **)((char *)&v229 + v106), v176, v212);
      LODWORD(v231) = v108;
      if ( v108 < 0 )
      {
        v209 = 4033;
        goto LABEL_413;
      }
    }
    else
    {
      v111 = (struct IImageSource *)*((_QWORD *)v221 + 150);
      if ( v111 )
        v111 = (struct IImageSource *)((char *)v111 + 40);
      v112 = v219;
      if ( v219 == v111
        && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)v246.m256i_i32 - 1.0)) & _xmm) >= 0.0000011920929
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v246.m256i_i32[5] - 1.0)) & _xmm) >= 0.0000011920929) )
      {
        memset_0(v259, 0, 0x28uLL);
        v258 = 16;
        v259[0] = 1;
        v108 = CDrawingContext::PushRenderOptionsInternal(v220, 0LL, (const struct MilRenderOptions *)&v258, 1);
        if ( v108 < 0 )
        {
          v209 = 4050;
          goto LABEL_413;
        }
        v211 = 1;
      }
      v108 = CDrawingContext::FillShapeWithBitmap(
               v220,
               v112,
               &v246,
               *(struct CShape **)((char *)&v229 + v106),
               *((_DWORD *)&v223 + v105),
               *(__int64 *)((char *)v252 + v106));
      LODWORD(v231) = v108;
      if ( v108 < 0 )
      {
        v209 = 4059;
        goto LABEL_413;
      }
      if ( v211 )
      {
        CDrawingContext::PopRenderOptionsInternal(v220, 1);
        v211 = 0;
      }
    }
    v113 = *((_QWORD *)v104 + 150);
    if ( v113 )
      v114 = (CBitmapResource *)(v113 + 40);
    else
      v114 = 0LL;
    if ( v112 == v114 && CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v113 + 40)) && v18 )
      CDrawingContext::RecordWindowMoveOptimization(v220, v104, v177, v213);
    v115 = *((_QWORD *)v104 + 150);
    if ( v115 )
      v116 = (CBitmapResource *)(v115 + 40);
    else
      v116 = 0LL;
    if ( v112 == v116 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v115 + 40)) )
      {
        if ( v18 )
        {
          if ( *((_BYTE *)v104 + 1284) )
          {
            if ( *((_BYTE *)v104 + 1336) )
            {
              if ( !v213[0] )
              {
                v178 = *((_DWORD *)v104 + 238);
                v179 = *((_DWORD *)v104 + 239);
                v180 = *((_DWORD *)v104 + 234) - v178;
                v212 = 0;
                v181 = (float)v180;
                v182 = _mm_cvtsi32_si128(*((_DWORD *)v104 + 235) - v179);
                v183 = *((_DWORD *)v104 + 236) - v178;
                v248 = v181;
                LODWORD(v184) = _mm_cvtepi32_ps(v182).m128_u32[0];
                v185 = _mm_cvtsi32_si128(v183);
                v186 = *((_DWORD *)v104 + 237) - v179;
                v249 = v184;
                LODWORD(v187) = _mm_cvtepi32_ps(v185).m128_u32[0];
                v250 = v187;
                v251 = (float)v186;
                if ( v28
                  || v29
                  && (float)(v187 - v181) >= (float)(v238 - v236)
                  && (float)((float)v186 - v184) >= (float)(v239 - v237) )
                {
                  if ( (_QWORD)v232 )
                    v188 = *(_DWORD *)(v232 + 36);
                  else
                    v188 = 0;
                  v108 = CDrawingContext::CalcRectFullyVisible(v220, (const struct MilRectF *)&v248, v188, &v212);
                  LODWORD(v231) = v108;
                  if ( v108 < 0 )
                  {
                    v209 = 4107;
                    goto LABEL_413;
                  }
                  if ( v212 )
                  {
                    v212 = 0;
                    v222 = 0;
                    MoveRects = CDwmMetaRegion::GetMoveRects((struct CVisual *)((char *)v104 + 1296), &v222);
                    if ( MoveRects )
                    {
                      if ( v222 )
                      {
                        v190 = v220;
                        p_right = (unsigned int *)&MoveRects->right;
                        v192 = v221;
                        v193 = v222;
                        do
                        {
                          v194 = _mm_cvtsi32_si128(*p_right);
                          v195 = _mm_cvtsi32_si128(p_right[1]);
                          v196 = _mm_cvtsi32_si128(*((_DWORD *)v192 + 328));
                          v197 = _mm_cvtsi32_si128(*((_DWORD *)v192 + 329));
                          v198 = (float)(int)*(p_right - 2);
                          v199 = (float)(int)*(p_right - 1);
                          v240 = v198;
                          v241 = v199;
                          LODWORD(v200) = _mm_cvtepi32_ps(v194).m128_u32[0];
                          LODWORD(v201) = _mm_cvtepi32_ps(v195).m128_u32[0];
                          v242 = v200;
                          v243 = v201;
                          LODWORD(v202) = _mm_cvtepi32_ps(v196).m128_u32[0];
                          *(float *)&v234 = v202;
                          DWORD1(v234) = _mm_cvtepi32_ps(v197).m128_u32[0];
                          if ( v29 && *((_BYTE *)v192 + 1274) )
                          {
                            v241 = v199 + 0.0;
                            v243 = v201 + 0.0;
                            v203 = (float)(v250 - v248) - (float)(v238 - v236);
                            v240 = v198 + v203;
                            v242 = v200 + v203;
                            *(float *)&v234 = v202 + v203;
                          }
                          CDrawingContext::RecordMoveOptimization(v190, v192, v207, (int)v210, (__int64)&v212);
                          p_right += 4;
                          --v193;
                        }
                        while ( v193 );
                        v28 = a11;
                        v106 = v235;
                        v104 = v221;
                        if ( v212 )
                        {
                          v204 = v220;
                          v205 = v221;
                          *((_BYTE *)v221 + 1284) = 0;
                          PreviousFrameVisibleRegion = CVisual::GetPreviousFrameVisibleRegion(v205, v204);
                          if ( PreviousFrameVisibleRegion )
                            DeleteObject(PreviousFrameVisibleRegion);
                        }
                        v112 = v219;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v117 = *((_QWORD *)v104 + 150);
    if ( v117 )
      v118 = (CBitmapResource *)(v117 + 40);
    else
      v118 = 0LL;
    if ( v112 == v118 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v117 + 40)) )
      {
        if ( v18 )
        {
          CWindowNode::ClipAgainstMargins((__int64)v104, (__int64)&v227);
          v108 = CDrawingContext::VisualWasRendered(v220, &v227, v104);
          LODWORD(v231) = v108;
          if ( v108 < 0 )
          {
            v209 = 4183;
            goto LABEL_413;
          }
        }
      }
    }
    CRectangleShape::~CRectangleShape((CRectangleShape *)&v244);
    v106 += 8LL;
    v105 = (unsigned int)(v105 + 1);
    *(_QWORD *)&v235 = v106;
    if ( (unsigned int)v105 >= v224 )
    {
      v83 = v231;
      goto LABEL_133;
    }
  }
  v209 = 3869;
LABEL_413:
  v83 = v108;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v108, v209);
  CRectangleShape::~CRectangleShape((CRectangleShape *)&v244);
LABEL_133:
  v91 = v218;
LABEL_134:
  v92 = v217;
LABEL_135:
  v93 = v214;
  v94 = v216;
  if ( v211 )
  {
    v46 = v220;
    goto LABEL_415;
  }
LABEL_136:
  if ( v91 )
    CMILCOMBase::InternalRelease(v91);
  if ( v94 )
    (**v94)(v94, 1LL);
  if ( v92 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v92)(v92, 1LL);
  if ( v93 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v93)(v93, 1LL);
LABEL_144:
  if ( v225 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v225)(v225, 1LL);
  if ( v226 )
    (**v226)(v226, 1LL);
  return (unsigned int)v83;
}
