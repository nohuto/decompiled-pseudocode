/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x18000DC74 (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18001B4BC (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV-$CMatrix@UBaseSampling@Co.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18001C410 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18001C480 (-CalculateSubtractionRectangles@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18002E670 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18003C6AC (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18003C848 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18003EC30 (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18003FD48 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18003FE38 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x180042E18 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046ED0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18004D87C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18004DB78 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DC10 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18004E154 (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18004E440 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?Top@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEBAJPEAVCBaseMatrix@@I@Z @ 0x18005DDC8 (-Top@-$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEBAJPEAVCBaseMatrix@@I@Z.c)
 *     ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005F068 (-ClipAgainstMargins@CWindowNode@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065E14 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180065E68 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     MatrixAppendScale2D @ 0x180068D90 (MatrixAppendScale2D.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x1800F73A8 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18010B37C (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x18010B8B4 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18010CEB8 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18010E170 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x1801176A0 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 *     ?GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x180120934 (-GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?Deflate@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1801235C8 (-Deflate@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?ClipWithRect@CShape@@SAJPEBV1@PEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAPEAV1@@Z @ 0x180158830 (-ClipWithRect@CShape@@SAJPEBV1@PEBV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderImage(
        struct CWindowNode *a1,
        CDrawingContext *this,
        __int64 a3,
        CBitmapResource *a4,
        CShape *a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        unsigned __int8 a10,
        char a11,
        char a12,
        struct _D3DCOLORVALUE *a13)
{
  CDrawingContext *v14; // r13
  int v16; // eax
  int v17; // esi
  float v18; // xmm9_4
  float v19; // xmm8_4
  signed int v20; // eax
  __m128i v21; // xmm7
  int v22; // eax
  LONG v23; // xmm7_4
  float v24; // xmm6_4
  __int64 (__fastcall *v25)(CRegionShape *, __int64, CBaseMatrix *); // rbx
  int TightBounds; // eax
  __int64 v27; // rdx
  __int64 v28; // r9
  int v29; // edx
  unsigned int v30; // r8d
  __int64 i; // rbx
  int v32; // edi
  bool v33; // zf
  int v34; // r15d
  int v35; // r12d
  int v36; // r13d
  LONG v37; // edx
  LONG v38; // r8d
  LONG v39; // eax
  int v40; // eax
  int v41; // r8d
  int v42; // r9d
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // xmm6_4
  unsigned int v47; // ebx
  char v48; // r10
  int v49; // eax
  __int64 v50; // r8
  unsigned int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // r15d
  int v56; // r13d
  int v57; // r12d
  CDrawingContext *v58; // rdi
  float v59; // xmm7_4
  float v60; // xmm10_4
  float v61; // xmm14_4
  float v62; // xmm15_4
  RECT *p_rcSrc1; // rax
  LONG left; // xmm5_4
  LONG top; // xmm4_4
  char v66; // dl
  LONG v67; // xmm1_4
  LONG v68; // xmm2_4
  unsigned int j; // ecx
  int v70; // r8d
  __int128 v71; // xmm0
  int v72; // eax
  __int64 v73; // rdi
  HWND v74; // r8
  CBitmapResource *v75; // rbx
  int v76; // eax
  int v77; // eax
  __int32 right; // xmm11_4
  int v79; // r15d
  float v80; // xmm9_4
  bool v81; // bl
  bool v82; // di
  unsigned int bottom; // xmm13_4
  float v84; // xmm8_4
  int v85; // eax
  int v86; // xmm2_4
  float v87; // xmm0_4
  int v88; // eax
  int v89; // eax
  float v90; // xmm14_4
  int v91; // xmm11_4
  int (__fastcall ***v92)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rbx
  int v93; // eax
  int v94; // xmm1_4
  int v95; // xmm2_4
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  __int64 v100; // r8
  unsigned int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  __int64 v105; // r15
  struct CShape *v106; // rdi
  int v107; // eax
  struct CShape *v108; // rax
  int (__fastcall ***v109)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rdi
  int v110; // eax
  char v111; // bl
  char v112; // di
  float v113; // xmm2_4
  float v114; // xmm4_4
  float v115; // xmm3_4
  float v116; // xmm5_4
  float v117; // xmm7_4
  int v118; // eax
  struct CShape *v119; // rcx
  int v120; // eax
  struct CShape *v121; // rbx
  int v122; // eax
  struct CShape *v123; // rcx
  int v124; // eax
  int v125; // eax
  struct CShape *v126; // rcx
  int v127; // eax
  int (__fastcall **v128)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rax
  char IsOverlayAssigned; // si
  char v130; // al
  int v131; // eax
  int (__fastcall ***v132)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rax
  int v133; // eax
  bool v134; // bl
  int v135; // eax
  __int64 v136; // rcx
  int (__fastcall ***v137)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rax
  HWND v138; // r8
  bool v139; // bl
  __int64 v140; // rcx
  int (__fastcall ***v141)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rax
  int v142; // edx
  int v143; // ecx
  int v144; // eax
  float v145; // xmm0_4
  __m128i v146; // xmm3
  unsigned int v147; // eax
  LONG v148; // xmm3_4
  __m128i v149; // xmm2
  int v150; // eax
  LONG v151; // xmm2_4
  int v152; // r8d
  int v153; // eax
  struct tagRECT *MoveRects; // rax
  float v155; // xmm7_4
  unsigned int *p_right; // rbx
  float v157; // xmm8_4
  __int64 v158; // rdi
  __m128i v159; // xmm4
  __m128i v160; // xmm5
  __m128i v161; // xmm6
  __m128i v162; // xmm0
  float v163; // xmm2_4
  float v164; // xmm3_4
  float v165; // xmm4_4
  float v166; // xmm5_4
  float v167; // xmm6_4
  float v168; // xmm1_4
  HRGN PreviousFrameVisibleRegion; // rax
  __int64 v170; // rcx
  int (__fastcall ***v171)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rax
  int v172; // eax
  int v174; // [rsp+28h] [rbp-E0h]
  RECT *v175; // [rsp+30h] [rbp-D8h]
  bool v176[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v177; // [rsp+50h] [rbp-B8h] BYREF
  CDrawingContext *v178; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v179; // [rsp+60h] [rbp-A8h]
  CBitmapResource *v180; // [rsp+68h] [rbp-A0h]
  unsigned int v181[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _D3DCOLORVALUE *v182; // [rsp+78h] [rbp-90h] BYREF
  __int64 v183; // [rsp+80h] [rbp-88h]
  struct CShape *v184; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v185; // [rsp+90h] [rbp-78h]
  struct CShape *v186; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v187; // [rsp+A0h] [rbp-68h]
  struct ISwapChainContent *v188; // [rsp+A8h] [rbp-60h] BYREF
  struct CSolidColorLegacyMilBrush *v189; // [rsp+B0h] [rbp-58h] BYREF
  struct CShape *v190; // [rsp+B8h] [rbp-50h] BYREF
  struct CShape *v191; // [rsp+C0h] [rbp-48h] BYREF
  int v192; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v193; // [rsp+CCh] [rbp-3Ch]
  __int64 v194; // [rsp+D4h] [rbp-34h]
  __int64 v195; // [rsp+DCh] [rbp-2Ch]
  __int64 v196; // [rsp+E4h] [rbp-24h]
  __int64 v197; // [rsp+ECh] [rbp-1Ch]
  struct CShape *v198[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v199; // [rsp+108h] [rbp+0h] BYREF
  RECT rcSrc1; // [rsp+118h] [rbp+10h] BYREF
  RECT v201; // [rsp+128h] [rbp+20h] BYREF
  __int128 v202; // [rsp+138h] [rbp+30h] BYREF
  __m256i v203; // [rsp+148h] [rbp+40h] BYREF
  __m256i v204; // [rsp+168h] [rbp+60h]
  float v205; // [rsp+188h] [rbp+80h] BYREF
  float v206; // [rsp+18Ch] [rbp+84h]
  float v207; // [rsp+190h] [rbp+88h]
  float v208; // [rsp+194h] [rbp+8Ch]
  unsigned __int64 v209; // [rsp+198h] [rbp+90h] BYREF
  float v210; // [rsp+1A0h] [rbp+98h]
  __int64 v211; // [rsp+1A4h] [rbp+9Ch]
  __int128 v212; // [rsp+1ACh] [rbp+A4h]
  __int64 v213; // [rsp+1BCh] [rbp+B4h]
  __int128 v214; // [rsp+1C8h] [rbp+C0h] BYREF
  float v215; // [rsp+1D8h] [rbp+D0h] BYREF
  float v216; // [rsp+1DCh] [rbp+D4h]
  float v217; // [rsp+1E0h] [rbp+D8h]
  float v218; // [rsp+1E4h] [rbp+DCh]
  __int64 v219[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  _DWORD v220[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int128 v221; // [rsp+208h] [rbp+100h] BYREF
  char v222[64]; // [rsp+218h] [rbp+110h] BYREF

  v14 = this;
  v178 = this;
  v180 = a4;
  *(_QWORD *)&rcSrc1.left = a3;
  *(_QWORD *)&v201.left = a8;
  v182 = a13;
  v188 = 0LL;
  v184 = 0LL;
  v186 = 0LL;
  v177 = 0LL;
  v190 = 0LL;
  v191 = 0LL;
  v189 = 0LL;
  v176[0] = 0;
  v176[3] = 0;
  v16 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xDFAu);
    goto LABEL_338;
  }
  v17 = 0;
  v176[1] = 0;
  v18 = 0.0;
  *(_QWORD *)&v202 = 0LL;
  v19 = 0.0;
  v176[4] = 0;
  if ( a4 )
  {
    v20 = *((_DWORD *)a1 + 228) - *((_DWORD *)a1 + 226);
    if ( v20 < 0 )
      v20 = 0;
    v21 = _mm_cvtsi32_si128(v20);
    v22 = *((_DWORD *)a1 + 229) - *((_DWORD *)a1 + 227);
    v23 = _mm_cvtepi32_ps(v21).m128_u32[0];
    if ( v22 < 0 )
      v22 = 0;
    v24 = (float)v22;
  }
  else
  {
    v24 = 0.0;
    v23 = 0;
  }
  *((_QWORD *)&v202 + 1) = __PAIR64__(LODWORD(v24), v23);
  if ( !a5 )
    goto LABEL_33;
  v25 = *(__int64 (__fastcall **)(CRegionShape *, __int64, CBaseMatrix *))(*(_QWORD *)a5 + 24LL);
  if ( v25 == CShape::GetTightBounds )
    TightBounds = CShape::GetTightBounds(a5, (__int64)&v214, 0LL);
  else
    TightBounds = v25(a5, (__int64)&v214, 0LL);
  v17 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0xAE4u);
    v176[4] = v176[3];
    v176[1] = v176[3];
    goto LABEL_34;
  }
  if ( *(float *)&v214 < 0.0
    || *((float *)&v214 + 2) > *(float *)&v23
    || *((float *)&v214 + 1) < 0.0
    || *((float *)&v214 + 3) > v24 )
  {
    v176[4] = 1;
  }
  if ( *(float *)&v214 > 0.0 )
  {
    LODWORD(v18) = v214;
    LODWORD(v202) = v214;
  }
  if ( *((float *)&v214 + 1) > 0.0 )
  {
    v19 = *((float *)&v214 + 1);
    DWORD1(v202) = DWORD1(v214);
  }
  if ( *(float *)&v23 > *((float *)&v214 + 2) )
  {
    v23 = DWORD2(v214);
    DWORD2(v202) = DWORD2(v214);
  }
  if ( v24 > *((float *)&v214 + 3) )
  {
    v24 = *((float *)&v214 + 3);
    HIDWORD(v202) = HIDWORD(v214);
  }
  if ( *(float *)&v23 <= v18 || v24 <= v19 )
  {
    v24 = 0.0;
    v23 = 0;
    v19 = 0.0;
    v18 = 0.0;
    v202 = 0uLL;
  }
  if ( CShape::IsAxisAlignedRectangle(a5) )
LABEL_33:
    v176[1] = 1;
LABEL_34:
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xE00u);
    goto LABEL_338;
  }
  if ( *((_BYTE *)v14 + 5968) )
  {
    if ( qword_1801A39E8 )
    {
      v27 = 0LL;
      if ( *((_DWORD *)qword_1801A39E8 + 18) )
      {
        v28 = *((_QWORD *)qword_1801A39E8 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v28 + 8 * v27)) )
        {
          v27 = (unsigned int)(v29 + 1);
          if ( (unsigned int)v27 >= v30 )
            goto LABEL_45;
        }
        *(_QWORD *)&v199 = __PAIR64__(LODWORD(v19), LODWORD(v18));
        *((_QWORD *)&v199 + 1) = __PAIR64__(LODWORD(v24), v23);
        CBaseMatrixStack::Top((CDrawingContext *)((char *)v14 + 456), (struct CBaseMatrix *)&v203);
        CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v203, (const struct MilRectF *)&v199, (struct MilRectF *)v219);
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v14 + 1432); i = (unsigned int)(i + 1) )
          CVisual::ExcludeFromVisibleRegion(*(CVisual **)(*((_QWORD *)v14 + 713) + 8 * i), (__int64)v219, v14);
      }
    }
  }
LABEL_45:
  (*(void (__fastcall **)(CBitmapResource *, char *, float *))(*(_QWORD *)a4 + 56LL))(a4, v222, &v205);
  if ( (float)(v207 - v205) == 0.0 || (float)(v208 - v206) == 0.0 )
    goto LABEL_338;
  if ( (a6 & 2) == 0 && v176[1] && !a11 && !a12 )
  {
    v183 = 0LL;
    v182 = (struct _D3DCOLORVALUE *)&CRegionShape::`vftable';
    v32 = (int)v18;
    v33 = *((_DWORD *)a1 + 277) == 0;
    LODWORD(v179) = (a6 & 1) != 0;
    v34 = (int)v19;
    LODWORD(v199) = (int)v18;
    v35 = (int)*(float *)&v23;
    DWORD1(v199) = (int)v19;
    v36 = (int)v24;
    DWORD2(v199) = (int)*(float *)&v23;
    HIDWORD(v199) = (int)v24;
    v214 = v199;
    LODWORD(v199) = (int)v18;
    DWORD1(v199) = (int)v19;
    DWORD2(v199) = (int)*(float *)&v23;
    HIDWORD(v199) = (int)v24;
    *(_OWORD *)v198 = v199;
    if ( !v33 || *((_DWORD *)a1 + 279) || *((_DWORD *)a1 + 278) || *((_DWORD *)a1 + 280) )
    {
      v37 = *((_DWORD *)a1 + 279) + *((_DWORD *)a1 + 211);
      v38 = *((_DWORD *)a1 + 213) - *((_DWORD *)a1 + 280);
      v39 = *((_DWORD *)a1 + 277) + *((_DWORD *)a1 + 210);
      rcSrc1.right = *((_DWORD *)a1 + 212) - *((_DWORD *)a1 + 278);
      rcSrc1.top = v37;
      rcSrc1.bottom = v38;
      rcSrc1.left = v39;
      IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)((char *)a1 + 904));
      if ( !EqualRect(&rcSrc1, (const RECT *)((char *)a1 + 904)) )
      {
        OffsetRect(&rcSrc1, -*((_DWORD *)a1 + 226), -*((_DWORD *)a1 + 227));
        *(RECT *)v219 = rcSrc1;
        TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v214, v219);
      }
    }
    if ( *(_QWORD *)&v201.left )
    {
      v40 = **(_DWORD **)&v201.left;
      if ( **(_DWORD **)&v201.left
        || *(_DWORD *)(*(_QWORD *)&v201.left + 8LL)
        || *(_DWORD *)(*(_QWORD *)&v201.left + 4LL)
        || *(_DWORD *)(*(_QWORD *)&v201.left + 12LL) )
      {
        v41 = v32 + v40;
        v42 = v34 + *(_DWORD *)(*(_QWORD *)&v201.left + 8LL);
        LODWORD(v198[0]) = v32 + v40;
        HIDWORD(v198[0]) = v42;
        v43 = v35 - *(_DWORD *)(*(_QWORD *)&v201.left + 4LL);
        v44 = v36 - *(_DWORD *)(*(_QWORD *)&v201.left + 12LL);
        if ( a10 )
        {
          v41 = v40;
          v42 -= v34;
          v45 = *((_DWORD *)a1 + 228) - *((_DWORD *)a1 + 226) - v35;
          v198[0] = (struct CShape *)__PAIR64__(v42, v41);
          v43 += v45;
          v44 += *((_DWORD *)a1 + 229) - *((_DWORD *)a1 + 227) - v36;
        }
        if ( v43 <= v41 )
          v43 = v41;
        LODWORD(v198[1]) = v43;
        if ( v44 <= v42 )
          v44 = v42;
        HIDWORD(v198[1]) = v44;
      }
    }
    TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(v198, &v214);
    v46 = _xmm;
    v47 = 4;
    if ( v48 && !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEquivalentTo(v198, &v214) )
    {
      v14 = v178;
      if ( (_BYTE)v179 && v180 == *((CBitmapResource **)a1 + 124) && *((_QWORD *)v178 + 45) && *((_BYTE *)v178 + 5633) )
      {
        v209 = 0xFF00000100000002uLL;
        v210 = 0.0;
        v211 = 0LL;
        v212 = 0uLL;
        v213 = 0LL;
        v49 = CDrawingContext::PushRenderOptionsInternal(v178, 0LL, (const struct MilRenderOptions *)&v209, 1);
        v17 = v49;
        if ( v49 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x105Bu);
          CRegionShape::~CRegionShape((CRegionShape *)&v182);
          goto LABEL_338;
        }
        v176[0] = 1;
      }
      if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v198) )
      {
        v53 = CRegionShape::BuildFromRects((CRegionShape *)&v182, (const struct tagRECT *)&v214, 1u);
        v17 = v53;
        if ( v53 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x107Cu);
          goto LABEL_81;
        }
      }
      else
      {
        `vector constructor iterator'(
          (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)&v203,
          0x10uLL,
          4,
          TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
        v51 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(&v214, v198, v50, &v203);
        v52 = CRegionShape::BuildFromRects((CRegionShape *)&v182, (const struct tagRECT *)&v203, v51);
        v17 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x1078u);
LABEL_81:
          CRegionShape::~CRegionShape((CRegionShape *)&v182);
          goto LABEL_153;
        }
      }
      v204.m256i_i32[4] = LODWORD(v205) ^ _xmm;
      *(__int64 *)((char *)&v204.m256i_i64[2] + 4) = LODWORD(v206) ^ (unsigned int)_xmm;
      v204.m256i_i64[1] = 1065353216LL;
      v204.m256i_i64[0] = 0LL;
      v203.m256i_i64[3] = 0LL;
      *(_OWORD *)((char *)v203.m256i_i64 + 4) = 0uLL;
      v204.m256i_i32[7] = 1065353216;
      v203.m256i_i32[5] = 1065353216;
      v203.m256i_i32[0] = 1065353216;
      v54 = CDrawingContext::FillShapeWithBitmap(
              v178,
              (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))v180,
              (CBaseMatrix *)&v203,
              (CShape *)&v182,
              0,
              0LL);
      v17 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x1086u);
        goto LABEL_81;
      }
    }
    v55 = (int)v198[1];
    v56 = (int)v198[0];
    if ( SLODWORD(v198[1]) <= SLODWORD(v198[0]) )
      goto LABEL_195;
    v57 = HIDWORD(v198[1]);
    if ( SHIDWORD(v198[1]) <= SHIDWORD(v198[0]) )
      goto LABEL_195;
    v58 = v178;
    v59 = (float)SLODWORD(v198[0]);
    v33 = *((_BYTE *)v178 + 5967) == 0;
    v60 = (float)SHIDWORD(v198[0]);
    *(float *)v181 = (float)SLODWORD(v198[0]);
    *(float *)&v185 = (float)SHIDWORD(v198[0]);
    v61 = (float)SLODWORD(v198[1]);
    v62 = (float)SHIDWORD(v198[1]);
    if ( v33 || !*((_QWORD *)v178 + 722) )
    {
LABEL_146:
      *(float *)&rcSrc1.left = v59;
      *(float *)&rcSrc1.top = v60;
      *(float *)&rcSrc1.right = (float)v55;
      *(float *)&v201.right = v207 - v205;
      *(float *)&v201.bottom = v208 - v206;
      *(float *)&rcSrc1.bottom = (float)v57;
      v176[3] = 0;
      *(_QWORD *)&v201.left = 0LL;
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&rcSrc1, (__int64)&v201) )
      {
        v215 = *(float *)&rcSrc1.left + v205;
        v217 = v205 + *(float *)&rcSrc1.right;
        v216 = v206 + *(float *)&rcSrc1.top;
        v218 = v206 + *(float *)&rcSrc1.bottom;
        if ( v176[0] )
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Deflate(&v215);
        v75 = v180;
        v76 = CDrawingContext::DrawBitmap(
                v58,
                (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))v180,
                (__int64)&v215,
                (float *)&rcSrc1.left,
                a9,
                a6,
                (__int64)&v176[3]);
        v17 = v76;
        if ( v76 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x10CDu);
LABEL_151:
          CRegionShape::~CRegionShape((CRegionShape *)&v182);
LABEL_152:
          v14 = v178;
          goto LABEL_153;
        }
      }
      else
      {
        v75 = v180;
      }
      if ( v176[0] )
      {
        CDrawingContext::PopRenderOptionsInternal(v58, 1);
        v176[0] = 0;
      }
      if ( v75 == *((CBitmapResource **)a1 + 124) )
      {
        if ( (_BYTE)v179 )
        {
          CDrawingContext::RecordWindowMoveOptimization(v58, a1, v74, 0LL);
          *((_BYTE *)a1 + 1236) = 0;
          CWindowNode::ClipAgainstMargins((__int64)a1, (__int64)&v202);
          v77 = CDrawingContext::VisualWasRendered((__int64)v58, &v202, (__int64)a1);
          v17 = v77;
          if ( v77 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x10F1u);
            goto LABEL_151;
          }
        }
      }
      right = v201.right;
      v79 = v55 - v56;
      v80 = *(float *)&v201.right - *(float *)&v201.left;
      v14 = v178;
      v81 = 0;
      v82 = 0;
      if ( (float)v79 > (float)(*(float *)&v201.right - *(float *)&v201.left) )
      {
        *(_QWORD *)&v202 = __PAIR64__(LODWORD(v60), v201.right);
        *((float *)&v202 + 2) = v61;
        *((float *)&v202 + 3) = (float)v57;
        v81 = CDrawingContext::IsOccluded((__int64)v178, &v202, a9) == 0;
      }
      bottom = v201.bottom;
      v84 = *(float *)&v201.bottom - *(float *)&v201.top;
      if ( (float)(v57 - HIDWORD(v198[0])) > (float)(*(float *)&v201.bottom - *(float *)&v201.top) )
      {
        v198[0] = (struct CShape *)__PAIR64__(v201.bottom, LODWORD(v59));
        *(float *)&v198[1] = v61;
        *((float *)&v198[1] + 1) = (float)v57;
        v82 = CDrawingContext::IsOccluded((__int64)v14, v198, a9) == 0;
      }
      if ( v81 || v82 )
      {
        v210 = 0.0;
        v209 = 2LL;
        v211 = 0LL;
        v212 = 0uLL;
        v213 = 0LL;
        v85 = CDrawingContext::PushRenderOptionsInternal(v14, 0LL, (const struct MilRenderOptions *)&v209, 1);
        v17 = v85;
        if ( v85 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0x1133u);
          goto LABEL_81;
        }
        if ( v81 )
        {
          v86 = DWORD1(v202) ^ v46;
          v204.m256i_i32[4] = right;
          LODWORD(v87) = v202 ^ v46;
          v204.m256i_i64[1] = 1065353216LL;
          v204.m256i_i64[0] = 0LL;
          v203.m256i_i64[3] = 0LL;
          *(__int64 *)((char *)&v203.m256i_i64[1] + 4) = 0LL;
          *(float *)&v202 = *(float *)&v202 + COERCE_FLOAT(v202 ^ v46);
          *((float *)&v202 + 2) = *((float *)&v202 + 2) + v87;
          *((float *)&v202 + 1) = *((float *)&v202 + 1) + COERCE_FLOAT(DWORD1(v202) ^ v46);
          *((float *)&v202 + 3) = *((float *)&v202 + 3) + *(float *)&v86;
          *(__int64 *)((char *)&v204.m256i_i64[2] + 4) = v185;
          *(__int64 *)((char *)v203.m256i_i64 + 4) = 0LL;
          v204.m256i_i32[7] = 1065353216;
          v203.m256i_i32[5] = 1065353216;
          v203.m256i_i32[0] = 1065353216;
          v88 = CDrawingContext::PushTransformInternal(v14, 0LL, (const struct CMILMatrix *)&v203, 1, 1);
          v17 = v88;
          if ( v88 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0x1142u);
LABEL_177:
            CRegionShape::~CRegionShape((CRegionShape *)&v182);
            goto LABEL_154;
          }
          v89 = CDrawingContext::ApplyRenderStateInternal(v14, 0);
          v17 = v89;
          if ( v89 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v89, 0x1148u);
LABEL_192:
            CRegionShape::~CRegionShape((CRegionShape *)&v182);
            CDrawingContext::PopTransformInternal(v14, 1);
            goto LABEL_154;
          }
          v90 = FLOAT_1_0;
          v91 = _xmm;
          v204.m256i_i64[1] = 1065353216LL;
          v204.m256i_i64[0] = 0LL;
          v203.m256i_i64[3] = 0LL;
          *(__int64 *)((char *)&v203.m256i_i64[1] + 4) = 0LL;
          *(__int64 *)((char *)v203.m256i_i64 + 4) = 0LL;
          v204.m256i_i32[7] = 1065353216;
          v203.m256i_i32[5] = 1065353216;
          v203.m256i_i32[0] = 1065353216;
          *(__int64 *)((char *)&v204.m256i_i64[2] + 4) = LODWORD(v206) ^ (unsigned int)_xmm;
          *(float *)&v204.m256i_i32[4] = 1.0 - (float)(v205 + v80);
          MatrixAppendScale2D((struct D2DMatrix *)&v203);
          v209 = (unsigned __int64)&CRectangleShape::`vftable';
          *(_QWORD *)((char *)&v212 + 4) = 0LL;
          CRectangleShape::Set((CRectangleShape *)&v209, (const struct MilRectF *)&v202);
          v92 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))v180;
          v93 = CDrawingContext::FillShapeWithBitmap(
                  v14,
                  (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))v180,
                  (CBaseMatrix *)&v203,
                  (CShape *)&v209,
                  a6,
                  0LL);
          v17 = v93;
          if ( v93 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v93, 0x115Du);
LABEL_191:
            CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
            goto LABEL_192;
          }
          CDrawingContext::PopTransformInternal(v14, 1);
          CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
        }
        else
        {
          v91 = _xmm;
          v90 = FLOAT_1_0;
          v92 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))v180;
        }
        if ( v82 )
        {
          v94 = LODWORD(v198[0]) ^ v91;
          *(__int64 *)((char *)&v204.m256i_i64[2] + 4) = bottom;
          v95 = HIDWORD(v198[0]) ^ v91;
          v204.m256i_i64[1] = 1065353216LL;
          v204.m256i_i64[0] = 0LL;
          v203.m256i_i64[3] = 0LL;
          *(float *)v198 = *(float *)v198 + COERCE_FLOAT(LODWORD(v198[0]) ^ v91);
          *(__int64 *)((char *)&v203.m256i_i64[1] + 4) = 0LL;
          *((float *)v198 + 1) = *((float *)v198 + 1) + COERCE_FLOAT(HIDWORD(v198[0]) ^ v91);
          *((float *)&v198[1] + 1) = *((float *)&v198[1] + 1) + *(float *)&v95;
          *(__int64 *)((char *)v203.m256i_i64 + 4) = 0LL;
          v204.m256i_i32[7] = 1065353216;
          *(float *)&v198[1] = *(float *)&v198[1] + *(float *)&v94;
          v204.m256i_i32[4] = v181[0];
          v203.m256i_i32[5] = 1065353216;
          v203.m256i_i32[0] = 1065353216;
          v96 = CDrawingContext::PushTransformInternal(v14, 0LL, (const struct CMILMatrix *)&v203, 1, 1);
          v17 = v96;
          if ( v96 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v96, 0x116Fu);
            goto LABEL_177;
          }
          v97 = CDrawingContext::ApplyRenderStateInternal(v14, 0);
          v17 = v97;
          if ( v97 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v97, 0x1175u);
            goto LABEL_192;
          }
          v204.m256i_i64[1] = 1065353216LL;
          v204.m256i_i64[0] = 0LL;
          v203.m256i_i64[3] = 0LL;
          *(__int64 *)((char *)&v203.m256i_i64[1] + 4) = 0LL;
          *(__int64 *)((char *)v203.m256i_i64 + 4) = 0LL;
          v204.m256i_i32[7] = 1065353216;
          v203.m256i_i32[5] = 1065353216;
          v203.m256i_i32[0] = 1065353216;
          v204.m256i_i32[4] = LODWORD(v205) ^ v91;
          *(__int64 *)((char *)&v204.m256i_i64[2] + 4) = COERCE_UNSIGNED_INT(v90 - (float)(v206 + v84));
          MatrixAppendScale2D((struct D2DMatrix *)&v203);
          v209 = (unsigned __int64)&CRectangleShape::`vftable';
          *(_QWORD *)((char *)&v212 + 4) = 0LL;
          CRectangleShape::Set((CRectangleShape *)&v209, (const struct MilRectF *)v198);
          v98 = CDrawingContext::FillShapeWithBitmap(v14, v92, (CBaseMatrix *)&v203, (CShape *)&v209, a6, 0LL);
          v17 = v98;
          if ( v98 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v98, 0x118Au);
            goto LABEL_191;
          }
          CDrawingContext::PopTransformInternal(v14, 1);
          CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
        }
        CDrawingContext::PopRenderOptionsInternal(v14, 1);
        v176[0] = 0;
      }
LABEL_196:
      v182 = (struct _D3DCOLORVALUE *)&CRegionShape::`vftable';
      if ( v183 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v183 + 16LL))(v183);
      goto LABEL_152;
    }
    *(float *)&v199 = (float)SLODWORD(v198[0]);
    v33 = *((_DWORD *)v178 + 114) == 0;
    *((float *)&v199 + 1) = (float)SHIDWORD(v198[0]);
    *((float *)&v199 + 2) = (float)SLODWORD(v198[1]);
    *((float *)&v199 + 3) = (float)SHIDWORD(v198[1]);
    if ( v33 )
    {
      v203 = IdentityMatrix;
      v204 = (__m256i)ymmword_18019E9D0;
    }
    else
    {
      CWatermarkStack<CBaseMatrix,8,2,8>::Top((int *)v178 + 114, &v203);
    }
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)&v203) )
    {
      p_rcSrc1 = &rcSrc1;
      *(float *)&left = *(float *)&v204.m256i_i32[4] + v59;
      *(float *)&top = *(float *)&v204.m256i_i32[5] + v60;
      v66 = 1;
      *(float *)&v67 = *(float *)&v204.m256i_i32[4] + v61;
      *(float *)&v68 = *(float *)&v204.m256i_i32[5] + v62;
      *(float *)&rcSrc1.left = *(float *)&v204.m256i_i32[4] + v59;
      *(float *)&rcSrc1.top = *(float *)&v204.m256i_i32[5] + v60;
      *(float *)&rcSrc1.right = *(float *)&v204.m256i_i32[4] + v61;
      *(float *)&rcSrc1.bottom = *(float *)&v204.m256i_i32[5] + v62;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)&v203,
        (const struct MilRectF *)&v199,
        (struct MilPoint2F *const)&v209);
      v68 = rcSrc1.bottom;
      p_rcSrc1 = (RECT *)&v209;
      v67 = rcSrc1.right;
      v66 = 0;
      top = rcSrc1.top;
      v47 = 8;
      left = rcSrc1.left;
    }
    for ( j = 0; j < v47; ++j )
      p_rcSrc1 = (RECT *)((char *)p_rcSrc1 + 4);
    if ( !v66 )
    {
      *(float *)&v67 = v210;
      *(_QWORD *)&v201.left = v209;
      v187 = v209;
      if ( *(float *)&v209 <= v210 )
        left = v187;
      else
        *(float *)&left = v210;
      top = SHIDWORD(v187);
      if ( *((float *)&v187 + 1) > *(float *)&v211 )
        top = v211;
      if ( v210 <= *(float *)&v209 )
        v67 = v201.left;
      v68 = v201.top;
      if ( *(float *)&v211 > *(float *)&v201.top )
        v68 = v211;
      if ( *(float *)&left > *((float *)&v211 + 1) )
        left = SHIDWORD(v211);
      if ( *(float *)&top > *(float *)&v212 )
        top = v212;
      if ( *((float *)&v211 + 1) > *(float *)&v67 )
        v67 = SHIDWORD(v211);
      if ( *(float *)&v212 > *(float *)&v68 )
        v68 = v212;
      if ( *(float *)&left > *((float *)&v212 + 1) )
        left = SDWORD1(v212);
      if ( *(float *)&top > *((float *)&v212 + 2) )
        top = SDWORD2(v212);
      if ( *((float *)&v212 + 1) > *(float *)&v67 )
        v67 = SDWORD1(v212);
      if ( *((float *)&v212 + 2) > *(float *)&v68 )
        v68 = SDWORD2(v212);
      rcSrc1.bottom = v68;
      rcSrc1.right = v67;
      rcSrc1.top = top;
      rcSrc1.left = left;
    }
    if ( *(float *)&v67 <= *(float *)&left || *(float *)&v68 <= *(float *)&top )
    {
LABEL_195:
      ++*((_DWORD *)a1 + 307);
      goto LABEL_196;
    }
    v70 = *((_DWORD *)v178 + 176);
    if ( v70 && *(_DWORD *)(76LL * (unsigned int)(v70 - 1) + *((_QWORD *)v178 + 85) + 4) )
    {
      if ( *((_DWORD *)v178 + 638) )
      {
        v72 = *((_DWORD *)v178 + 638);
        if ( !v72 )
        {
LABEL_135:
          if ( v70 && *(_DWORD *)(76LL * (unsigned int)(v70 - 1) + *((_QWORD *)v178 + 85) + 8) )
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
              (__int64)&v199,
              104LL * (unsigned int)(*((_DWORD *)v178 + 374) - 1) + *((_QWORD *)v178 + 184) + 80LL);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&rcSrc1, (__int64)&v199);
          v73 = *((_QWORD *)v178 + 722);
          if ( *(float *)&rcSrc1.right > *(float *)&rcSrc1.left && *(float *)&rcSrc1.bottom > *(float *)&rcSrc1.top )
          {
            if ( *((_BYTE *)v178 + 5640) || !*(_BYTE *)(v73 + 520) )
            {
              v201 = rcSrc1;
            }
            else
            {
              CBaseMatrix::Transform2DBounds(
                (CBaseMatrix *)(v73 + 588),
                (const struct MilRectF *)&rcSrc1,
                (struct MilRectF *)&v199);
              v201 = (RECT)v199;
            }
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, RECT *, _QWORD))(**(_QWORD **)(v73 + 96) + 40LL))(
                    *(_QWORD *)(v73 + 96),
                    &v201,
                    a9) )
            {
              v46 = _xmm;
              v59 = *(float *)v181;
              v58 = v178;
              goto LABEL_146;
            }
          }
          goto LABEL_195;
        }
        v71 = *(_OWORD *)(*((_QWORD *)v178 + 321) + 16LL * (unsigned int)(v72 - 1));
      }
      else
      {
        v199 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v71 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
    }
    else
    {
      v71 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v199 = v71;
    goto LABEL_135;
  }
  `vector constructor iterator'(
    (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)&v178,
    4uLL,
    2,
    TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  if ( !a10 )
    goto LABEL_214;
  if ( v176[1] )
    goto LABEL_214;
  v175 = &v201;
  if ( !(unsigned __int8)CWindowNode::GetAlphaMarginsRects(a1, a10, a8, &v202, v219) )
    goto LABEL_214;
  CRectangleShape::CRectangleShape((CRectangleShape *)&v209, 0.0, 0.0, 0.0, 0.0);
  *(float *)&v199 = (float)v201.left;
  *((float *)&v199 + 1) = (float)v201.top;
  *((float *)&v199 + 2) = (float)v201.right;
  *((float *)&v199 + 3) = (float)v201.bottom;
  CRectangleShape::Set((CRectangleShape *)&v209, (const struct MilRectF *)&v199);
  v99 = CShape::Combine((__int64)&v209, 0LL, (__int64)a5, 0LL, 1, &v190);
  v17 = v99;
  if ( v99 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v99, 0xE6Au);
    CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
    goto LABEL_334;
  }
  v198[1] = 0LL;
  v198[0] = (struct CShape *)&CRegionShape::`vftable';
  if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v201) )
  {
    v103 = CRegionShape::BuildFromRects((CRegionShape *)v198, (const struct tagRECT *)v219, 1u);
    v17 = v103;
    if ( v103 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v103, 0xE8Bu);
LABEL_208:
      CRegionShape::~CRegionShape((CRegionShape *)v198);
      CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
      goto LABEL_334;
    }
  }
  else
  {
    `vector constructor iterator'(
      (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)&v203,
      0x10uLL,
      4,
      TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
    v101 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(v219, &v201, v100, &v203);
    v102 = CRegionShape::BuildFromRects((CRegionShape *)v198, (const struct tagRECT *)&v203, v101);
    v17 = v102;
    if ( v102 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v102, 0xE87u);
      CRegionShape::~CRegionShape((CRegionShape *)v198);
      CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
      goto LABEL_334;
    }
  }
  v104 = CShape::Combine((__int64)v198, 0LL, (__int64)a5, 0LL, 1, &v191);
  v17 = v104;
  if ( v104 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v104, 0xE97u);
    goto LABEL_208;
  }
  CRegionShape::~CRegionShape((CRegionShape *)v198);
  CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
  if ( v190 && v191 )
  {
    v198[0] = v190;
    v178 = (CDrawingContext *)a6;
    v219[0] = a7;
    v219[1] = 0LL;
    v185 = 2;
    v198[1] = v191;
  }
  else
  {
LABEL_214:
    LODWORD(v178) = a6;
    v219[0] = a7;
    v185 = 1;
    v198[0] = a5;
  }
  v105 = 0LL;
  LODWORD(v179) = 0;
  while ( 1 )
  {
    CRectangleShape::CRectangleShape((CRectangleShape *)&v209, 0.0, 0.0, 0.0, 0.0);
    v106 = v198[v105];
    if ( v106 )
    {
      if ( !v176[4] )
        goto LABEL_224;
      CRectangleShape::Set((CRectangleShape *)&v209, (const struct MilRectF *)&v202);
      if ( v184 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v184)(v184, 1LL);
      v184 = 0LL;
      v107 = CShape::Combine((__int64)&v209, 0LL, (__int64)v106, 0LL, 1, &v184);
      v17 = v107;
      if ( v107 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v107, 0xED7u);
        CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
        goto LABEL_153;
      }
      v108 = v184;
    }
    else
    {
      CRectangleShape::Set((CRectangleShape *)&v209, (const struct MilRectF *)&v202);
      v108 = (struct CShape *)&v209;
    }
    v198[v105] = v108;
LABEL_224:
    v109 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))v180;
    *(__int64 *)((char *)&v204.m256i_i64[2] + 4) = 0LL;
    *(__int64 *)((char *)&v204.m256i_i64[1] + 4) = 0LL;
    v204.m256i_i64[0] = 0LL;
    v203.m256i_i64[3] = 0LL;
    *(__int64 *)((char *)&v203.m256i_i64[1] + 4) = 0LL;
    *(__int64 *)((char *)v203.m256i_i64 + 4) = 0LL;
    v204.m256i_i32[7] = 1065353216;
    v204.m256i_i32[2] = 1065353216;
    v203.m256i_i32[5] = 1065353216;
    v203.m256i_i32[0] = 1065353216;
    v110 = CWindowNode::ApplyTextureToLocalTransform((__int64)a1, (__int64)v180, (CBaseMatrix *)&v203);
    v17 = v110;
    if ( v110 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v110, 0xEEAu);
      goto LABEL_319;
    }
    if ( a12 )
      break;
LABEL_254:
    v128 = *v109;
    v176[2] = 0;
    if ( (*v128)((CBitmapResource *)v109, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v188) < 0 )
      goto LABEL_260;
    IsOverlayAssigned = CDrawingContext::IsOverlayAssigned((COverlayContext **)v14, a1, v188, &v176[2]);
    v130 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v188 + 104LL))(v188);
    if ( !IsOverlayAssigned && !v130 )
    {
      v109 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))v180;
LABEL_260:
      v132 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))*((_QWORD *)a1 + 144);
      if ( v132 )
        v132 += 6;
      if ( v109 == v132
        && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)v203.m256i_i32 - 1.0)) & _xmm) >= 0.0000011920929
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v203.m256i_i32[5] - 1.0)) & _xmm) >= 0.0000011920929) )
      {
        v192 = 2;
        v193 = 1LL;
        v194 = 0LL;
        v195 = 0LL;
        v196 = 0LL;
        v197 = 0LL;
        v133 = CDrawingContext::PushRenderOptionsInternal(v14, 0LL, (const struct MilRenderOptions *)&v192, 1);
        v17 = v133;
        if ( v133 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v133, 0xFA7u);
          goto LABEL_319;
        }
        v134 = 1;
        v176[0] = 1;
      }
      else
      {
        v134 = v176[0];
      }
      v135 = CDrawingContext::FillShapeWithBitmap(
               v14,
               v109,
               (CBaseMatrix *)&v203,
               v198[v105],
               *((_DWORD *)&v178 + (unsigned int)v179),
               v219[v105]);
      v17 = v135;
      if ( v135 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v135, 0xFB0u);
        goto LABEL_319;
      }
      if ( v134 )
      {
        CDrawingContext::PopRenderOptionsInternal(v14, 1);
        v176[0] = 0;
      }
      goto LABEL_271;
    }
    v131 = CDrawingContext::DrawOverlayArea(v14, v188, v198[v105], IsOverlayAssigned, v176[2]);
    v17 = v131;
    if ( v131 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v131, 0xF96u);
      goto LABEL_319;
    }
    v109 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))v180;
LABEL_271:
    v136 = *((_QWORD *)a1 + 144);
    if ( v136 )
      v137 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))(v136 + 48);
    else
      v137 = 0LL;
    if ( v109 == v137 )
    {
      v139 = v176[1];
      if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v136 + 48)) && v176[1] )
        CDrawingContext::RecordWindowMoveOptimization(v14, a1, v138, &v176[3]);
    }
    else
    {
      v139 = v176[1];
    }
    v140 = *((_QWORD *)a1 + 144);
    if ( v140 )
      v141 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))(v140 + 48);
    else
      v141 = 0LL;
    if ( v109 == v141 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v140 + 48)) )
      {
        if ( v139 )
        {
          if ( *((_BYTE *)a1 + 1236) )
          {
            if ( *((_BYTE *)a1 + 1288) )
            {
              if ( !v176[3] )
              {
                v142 = *((_DWORD *)a1 + 226);
                v143 = *((_DWORD *)a1 + 227);
                v144 = *((_DWORD *)a1 + 222) - v142;
                v176[2] = 0;
                v145 = (float)v144;
                v146 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 223) - v143);
                v147 = *((_DWORD *)a1 + 224) - v142;
                *(float *)&v214 = v145;
                v148 = _mm_cvtepi32_ps(v146).m128_u32[0];
                v149 = _mm_cvtsi32_si128(v147);
                v150 = *((_DWORD *)a1 + 225) - v143;
                DWORD1(v214) = v148;
                v151 = _mm_cvtepi32_ps(v149).m128_u32[0];
                DWORD2(v214) = v151;
                *((float *)&v214 + 3) = (float)v150;
                if ( a11
                  || a12
                  && (float)(*(float *)&v151 - v145) >= (float)(v207 - v205)
                  && (float)((float)v150 - *(float *)&v148) >= (float)(v208 - v206) )
                {
                  if ( *(_QWORD *)&rcSrc1.left )
                    v152 = *(_DWORD *)(*(_QWORD *)&rcSrc1.left + 36LL);
                  else
                    v152 = 0;
                  v153 = CDrawingContext::CalcRectFullyVisible(v14, (const struct MilRectF *)&v214, v152, &v176[2]);
                  v17 = v153;
                  if ( v153 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v153, 0xFE0u);
                    goto LABEL_319;
                  }
                  if ( v176[2] )
                  {
                    v176[2] = 0;
                    v181[0] = 0;
                    MoveRects = CDwmMetaRegion::GetMoveRects((struct CWindowNode *)((char *)a1 + 1248), v181);
                    if ( MoveRects )
                    {
                      if ( v181[0] )
                      {
                        v155 = *((float *)&v214 + 2);
                        p_right = (unsigned int *)&MoveRects->right;
                        v157 = *(float *)&v214;
                        v158 = v181[0];
                        do
                        {
                          v159 = _mm_cvtsi32_si128(*p_right);
                          v160 = _mm_cvtsi32_si128(p_right[1]);
                          v161 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 316));
                          v162 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 317));
                          v163 = (float)(int)*(p_right - 2);
                          v164 = (float)(int)*(p_right - 1);
                          *(float *)&v201.left = v163;
                          *(float *)&v201.top = v164;
                          LODWORD(v165) = _mm_cvtepi32_ps(v159).m128_u32[0];
                          LODWORD(v166) = _mm_cvtepi32_ps(v160).m128_u32[0];
                          *(_QWORD *)&v201.right = __PAIR64__(LODWORD(v166), LODWORD(v165));
                          LODWORD(v167) = _mm_cvtepi32_ps(v161).m128_u32[0];
                          *(float *)&v187 = v167;
                          HIDWORD(v187) = _mm_cvtepi32_ps(v162).m128_u32[0];
                          if ( a12 && *((_BYTE *)a1 + 1226) )
                          {
                            *(float *)&v201.top = v164 + 0.0;
                            *(float *)&v201.bottom = v166 + 0.0;
                            v168 = (float)(v155 - v157) - (float)(v207 - v205);
                            *(float *)&v201.left = v163 + v168;
                            *(float *)&v201.right = v165 + v168;
                            *(float *)&v187 = v167 + v168;
                          }
                          CDrawingContext::RecordMoveOptimization(v14, a1, v174, (int)v175, (__int64)&v176[2]);
                          p_right += 4;
                          --v158;
                        }
                        while ( v158 );
                        if ( v176[2] )
                        {
                          *((_BYTE *)a1 + 1236) = 0;
                          PreviousFrameVisibleRegion = CVisual::GetPreviousFrameVisibleRegion(a1, v14);
                          if ( PreviousFrameVisibleRegion )
                            DeleteObject(PreviousFrameVisibleRegion);
                        }
                        v109 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))v180;
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
    v170 = *((_QWORD *)a1 + 144);
    if ( v170 )
      v171 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))(v170 + 48);
    else
      v171 = 0LL;
    if ( v109 == v171 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v170 + 48)) )
      {
        if ( v176[1] )
        {
          CWindowNode::ClipAgainstMargins((__int64)a1, (__int64)&v202);
          v172 = CDrawingContext::VisualWasRendered((__int64)v14, &v202, (__int64)a1);
          v17 = v172;
          if ( v172 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v172, 0x102Cu);
            goto LABEL_319;
          }
        }
      }
    }
    CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
    ++v105;
    LODWORD(v179) = v179 + 1;
    if ( (unsigned int)v179 >= v185 )
      goto LABEL_153;
  }
  CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v203, (const struct MilRectF *)&v205, (struct MilRectF *)&v199);
  v111 = 0;
  v112 = 0;
  v113 = *((float *)&v199 + 2) - *(float *)&v199;
  v114 = (float)(*((_DWORD *)a1 + 222) - *((_DWORD *)a1 + 226));
  v115 = (float)(*((_DWORD *)a1 + 223) - *((_DWORD *)a1 + 227));
  v116 = (float)(*((_DWORD *)a1 + 224) - *((_DWORD *)a1 + 226));
  v117 = (float)(*((_DWORD *)a1 + 225) - *((_DWORD *)a1 + 227));
  if ( (float)(v116 - v114) > (float)(*((float *)&v199 + 2) - *(float *)&v199) )
  {
    v111 = 1;
    if ( *((_BYTE *)a1 + 1226) )
    {
      v215 = (float)(*((_DWORD *)a1 + 222) - *((_DWORD *)a1 + 226));
      v217 = v116 - v113;
    }
    else
    {
      v217 = (float)(*((_DWORD *)a1 + 224) - *((_DWORD *)a1 + 226));
      v215 = v113 + v114;
    }
    v216 = v115;
    v218 = (float)(*((float *)&v199 + 3) - *((float *)&v199 + 1)) + v115;
  }
  if ( (float)(v117 - v115) > (float)(*((float *)&v199 + 3) - *((float *)&v199 + 1)) )
  {
    *(float *)v220 = v114;
    *(float *)&v220[2] = v116;
    v112 = 1;
    *(float *)&v220[3] = v117;
    *(float *)&v220[1] = (float)(*((float *)&v199 + 3) - *((float *)&v199 + 1)) + v115;
  }
  if ( !v111 && !v112 )
    goto LABEL_253;
  if ( !v189 )
  {
    v118 = CSolidColorLegacyMilBrush::CreateFromColor(&v189, *((struct CComposition **)a1 + 2), v182);
    v17 = v118;
    if ( v118 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v118, 0xF44u);
      goto LABEL_319;
    }
  }
  if ( v111 )
  {
    if ( v177 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v177)(v177, 1LL);
    v119 = v198[v105];
    v177 = 0LL;
    v120 = CShape::ClipWithRect(v119, &v215, &v177);
    v17 = v120;
    if ( v120 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v120, 0xF54u);
      CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
      goto LABEL_153;
    }
    v121 = v177;
    v122 = CDrawingContext::DrawShape(v14, v177, v189);
    v17 = v122;
    if ( v122 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v122, 0xF57u);
LABEL_319:
      CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
      goto LABEL_153;
    }
  }
  else
  {
    v121 = v177;
  }
  if ( v112 )
  {
    if ( v121 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v121)(v177, 1LL);
    v123 = v198[v105];
    v177 = 0LL;
    v124 = CShape::ClipWithRect(v123, v220, &v177);
    v17 = v124;
    if ( v124 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v124, 0xF63u);
      CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
      goto LABEL_153;
    }
    v125 = CDrawingContext::DrawShape(v14, v177, v189);
    v17 = v125;
    if ( v125 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v125, 0xF66u);
      goto LABEL_319;
    }
  }
  v221 = v199;
  if ( v186 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v186)(v186, 1LL);
  v126 = v198[v105];
  v186 = 0LL;
  v127 = CShape::ClipWithRect(v126, &v221, &v186);
  v17 = v127;
  if ( v127 >= 0 )
  {
    v198[v105] = v186;
LABEL_253:
    v109 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))v180;
    goto LABEL_254;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v127, 0xF77u);
  CRectangleShape::~CRectangleShape((CRectangleShape *)&v209);
LABEL_153:
  if ( v176[0] )
LABEL_154:
    CDrawingContext::PopRenderOptionsInternal(v14, 1);
  if ( v189 )
    CMILCOMBase::InternalRelease(v189);
  if ( v184 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v184)(v184, 1LL);
  if ( v186 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v186)(v186, 1LL);
  if ( v177 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v177)(v177, 1LL);
LABEL_334:
  if ( v190 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v190)(v190, 1LL);
  if ( v191 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v191)(v191, 1LL);
LABEL_338:
  if ( v188 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v188 + 16LL))(v188);
  return (unsigned int)v17;
}
