/*
 * XREFs of ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E1D0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?ForceSamplerModeTypeToNearestNeighbor@@YA?AW4Enum@SamplerMode@@W412@@Z @ 0x18000E5EC (-ForceSamplerModeTypeToNearestNeighbor@@YA-AW4Enum@SamplerMode@@W412@@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180022410 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x18002C7EC (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003FE30 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180040290 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004E010 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18005D92C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x180060FA0 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV-$CD3DVertexBuffer@VCVertexXYWColorDUV.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBounds@CPrimitiveGroup@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E1B0 (-GetBounds@CPrimitiveGroup@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18006E850 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?Create@CHWDrawListCache@@SAJPEAPEAV1@@Z @ 0x180073378 (-Create@CHWDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?ReleaseShape@CpuClipShape@@AEAAXXZ @ 0x180073540 (-ReleaseShape@CpuClipShape@@AEAAXXZ.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800735A4 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180073960 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180091DD8 (-Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?Create@?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z @ 0x180091EB8 (-Create@-$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@IEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x180097AB0 (-GetD2DInterpolationMode@CDrawingContext@@IEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?Premultiply@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x180099FBC (-Premultiply@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x1800DF55C (--1CpuClipShape@@QEAA@XZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     Template_ffff @ 0x1800F4F28 (Template_ffff.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800FEA20 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?UpdateD2D1PrimitiveProperty@CPrimitiveColor@@QEAAJPEAVID2DContext@@@Z @ 0x180107FDC (-UpdateD2D1PrimitiveProperty@CPrimitiveColor@@QEAAJPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPrimitiveGroup(
        const struct CVisualTree **this,
        struct CPrimitiveGroup *a2,
        struct CVisual *a3,
        char a4,
        unsigned int *a5)
{
  unsigned int v7; // r12d
  char v9; // r14
  void (__fastcall *v11)(struct CPrimitiveGroup *, _QWORD, _QWORD, __int128 *); // rbx
  __int64 v12; // rcx
  int v13; // eax
  float v14; // xmm7_4
  char *v15; // r9
  int v16; // r12d
  struct ID2DContext *v17; // rsi
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // rcx
  const struct CVisualTree *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  const struct CVisualTree *v25; // rcx
  const struct CVisualTree *v26; // r14
  char *v27; // rax
  char *v28; // rbx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  __int64 v31; // rsi
  struct CHWDrawListCache *v32; // rsi
  struct CHWDrawListCache *v33; // rbx
  CPrimitiveGroupDrawListGenerator **v34; // rsi
  unsigned __int64 v35; // r8
  int v36; // ecx
  float v37; // xmm14_4
  int v38; // eax
  float *v39; // rcx
  float v40; // xmm1_4
  char v41; // al
  const struct CVisualTree *v42; // rdx
  char *v43; // rax
  int v44; // eax
  const struct CVisualTree *v45; // r15
  unsigned int v46; // esi
  __int64 v47; // rax
  __int64 v48; // r14
  unsigned int *v49; // rdi
  __int64 v50; // rax
  __m128 v51; // xmm1
  __int64 v52; // rdx
  int v53; // ecx
  unsigned __int64 v54; // xmm0_8
  __m128 v55; // xmm1
  __m128 v56; // xmm0
  unsigned int v57; // edi
  __int64 v58; // rax
  bool v59; // zf
  float v60; // xmm11_4
  float v61; // xmm10_4
  float v62; // xmm13_4
  float v63; // xmm12_4
  float v64; // xmm6_4
  int v65; // ecx
  float v66; // xmm9_4
  __int64 v67; // rax
  float v68; // xmm8_4
  float v69; // xmm7_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm4_4
  float v73; // xmm3_4
  float v74; // xmm5_4
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rcx
  _DWORD *v78; // rbx
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  void (__fastcall *v82)(__int64, __int64 *, _QWORD); // rsi
  int v83; // ecx
  __int64 v84; // r14
  CD2DContext *v85; // rax
  __int64 v86; // rcx
  CD2DContext *v87; // rsi
  __int64 v88; // r10
  unsigned int v89; // eax
  unsigned int v90; // edx
  unsigned int *v91; // rcx
  __int64 v93; // r14
  CD2DContext *v94; // rax
  __int64 v95; // rcx
  CD2DContext *v96; // rsi
  __int64 v97; // rsi
  unsigned int v98; // eax
  unsigned int v99; // edx
  float v100; // xmm1_4
  float v101; // xmm1_4
  __int128 v102; // xmm0
  CMILRefCountBase *v103; // rax
  __int128 v104; // xmm1
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int64 v107; // rax
  unsigned int v108; // edx
  _OWORD *v109; // rcx
  CMILRefCountBase **v110; // rax
  _OWORD *v111; // rcx
  __int128 v112; // xmm1
  __int64 v113; // r8
  unsigned int v114; // eax
  __int64 v115; // r9
  __int64 v116; // r8
  unsigned int v117; // eax
  __int64 v118; // r9
  struct CTreeData *TreeData; // rax
  struct CShape *v120; // r9
  const struct CVisualTree *v121; // r10
  struct CShape *v122; // r14
  unsigned __int64 v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rdx
  const struct CVisualTree *v126; // rax
  struct CTreeData *v127; // rax
  int v128; // eax
  enum D2D1_ANTIALIAS_MODE v129; // ebx
  bool v130; // al
  int v131; // eax
  float *v132; // rax
  unsigned int v133; // edx
  char v134; // r8
  unsigned int i; // ecx
  char DoesContain; // al
  CD2DTarget *v137; // r15
  __int64 v138; // rcx
  unsigned int k; // ebx
  CD2DTarget *v140; // rdi
  int v141; // eax
  __int64 v142; // rax
  unsigned int v143; // ecx
  int NewGenerator; // eax
  __int64 v145; // r8
  _QWORD *v146; // rdx
  _QWORD *v147; // rcx
  int v148; // eax
  int v149; // ecx
  int v150; // eax
  int v151; // ebx
  CD2DTarget *v152; // r15
  __int64 v153; // rcx
  unsigned int m; // ebx
  CD2DTarget *v155; // rdi
  float v156; // xmm1_4
  float v157; // xmm3_4
  float v158; // xmm2_4
  float v159; // xmm0_4
  int v160; // eax
  __int64 v161; // rax
  int v162; // eax
  unsigned int v163; // eax
  unsigned int v164; // edx
  int v165; // eax
  __int64 v166; // rax
  int v167; // eax
  unsigned int v168; // eax
  unsigned int v169; // edx
  struct CD3DDeviceLevel1 *v170; // rax
  unsigned int v171; // edx
  int v172; // eax
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 v175; // r8
  int v176; // eax
  int v177; // eax
  int v178; // ebx
  CBaseMatrix *TopByReference; // rax
  int v180; // ecx
  int v181; // r8d
  int v182; // r9d
  int updated; // eax
  unsigned int j; // ebx
  __int64 v185; // r9
  __int64 v186; // r8
  __int64 v187; // rax
  struct _D3DCOLORVALUE *v188; // rax
  __int64 v189; // r9
  __int64 v190; // r8
  D3DVALUE g; // xmm0_4
  __m128 v192; // xmm1
  struct _D3DCOLORVALUE *v193; // rax
  __int64 v194; // r10
  D3DVALUE v195; // xmm0_4
  __m128 v196; // xmm1
  D3DVALUE v197; // xmm2_4
  __int64 v198; // r11
  __int64 v199; // rax
  __int64 v200; // rcx
  struct CD3DDeviceLevel1 *v201; // rax
  unsigned int v202; // edx
  int v203; // eax
  __int64 v204; // rax
  __int64 v205; // rdx
  __int64 v206; // r8
  int v207; // eax
  int v208; // ebx
  int v209; // eax
  __int64 v210; // rcx
  unsigned int v211; // [rsp+28h] [rbp-E0h]
  char v212; // [rsp+48h] [rbp-C0h]
  bool v213; // [rsp+49h] [rbp-BFh]
  unsigned int v214; // [rsp+4Ch] [rbp-BCh]
  struct CHWDrawListCache *v215; // [rsp+50h] [rbp-B8h]
  struct CHWDrawListCache *v216; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v217; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v218; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v219; // [rsp+78h] [rbp-90h]
  __int64 v220; // [rsp+80h] [rbp-88h] BYREF
  int v221; // [rsp+88h] [rbp-80h]
  __int64 v222; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v223; // [rsp+98h] [rbp-70h]
  __int64 v224; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v225; // [rsp+A8h] [rbp-60h] BYREF
  const struct CVisualTree *v226; // [rsp+B0h] [rbp-58h]
  CMILRefCountBase **v227; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int32 v228; // [rsp+C0h] [rbp-48h]
  D3DVALUE a; // [rsp+C4h] [rbp-44h]
  float v230; // [rsp+C8h] [rbp-40h]
  __int128 v231; // [rsp+D0h] [rbp-38h]
  __int128 v232; // [rsp+E0h] [rbp-28h] BYREF
  float v233; // [rsp+F0h] [rbp-18h]
  float v234; // [rsp+F4h] [rbp-14h]
  float v235; // [rsp+F8h] [rbp-10h]
  float v236; // [rsp+FCh] [rbp-Ch]
  unsigned int *v237; // [rsp+100h] [rbp-8h]
  __int64 v238; // [rsp+108h] [rbp+0h]
  __int64 v239; // [rsp+110h] [rbp+8h]
  struct _D3DCOLORVALUE v240; // [rsp+118h] [rbp+10h] BYREF
  struct _D3DCOLORVALUE v241; // [rsp+128h] [rbp+20h] BYREF
  struct _D3DCOLORVALUE v242; // [rsp+138h] [rbp+30h] BYREF
  CMILRefCountBase *v243[2]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v244; // [rsp+158h] [rbp+50h]
  __int128 v245; // [rsp+168h] [rbp+60h]
  __int128 v246; // [rsp+178h] [rbp+70h]
  __int128 v247; // [rsp+188h] [rbp+80h]
  _OWORD v248[8]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v249; // [rsp+218h] [rbp+110h]
  float v250; // [rsp+228h] [rbp+120h] BYREF
  float v251; // [rsp+22Ch] [rbp+124h]
  float v252; // [rsp+230h] [rbp+128h]
  float v253; // [rsp+234h] [rbp+12Ch]
  __int128 v254; // [rsp+238h] [rbp+130h] BYREF
  __int128 v255; // [rsp+248h] [rbp+140h] BYREF
  __int128 v256; // [rsp+258h] [rbp+150h]
  __int128 v257; // [rsp+268h] [rbp+160h]
  __int128 v258; // [rsp+278h] [rbp+170h]
  __int128 v259; // [rsp+288h] [rbp+180h] BYREF
  int v260; // [rsp+298h] [rbp+190h] BYREF
  int v261; // [rsp+2A0h] [rbp+198h]
  int v262; // [rsp+2A4h] [rbp+19Ch]
  __int128 v263; // [rsp+2A8h] [rbp+1A0h] BYREF
  struct CShape *v264; // [rsp+2B8h] [rbp+1B0h] BYREF
  void **v265; // [rsp+2C0h] [rbp+1B8h]
  __int128 v266; // [rsp+2C8h] [rbp+1C0h]
  struct CShape *v267; // [rsp+2D8h] [rbp+1D0h]
  char v268; // [rsp+2E0h] [rbp+1D8h]
  _BYTE v269[16]; // [rsp+2E8h] [rbp+1E0h] BYREF
  struct _D3DCOLORVALUE v270; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int128 v271; // [rsp+308h] [rbp+200h] BYREF
  _BYTE v272[48]; // [rsp+318h] [rbp+210h] BYREF
  float v273; // [rsp+348h] [rbp+240h]
  float v274; // [rsp+34Ch] [rbp+244h]
  struct CHWDrawListCache *v275; // [rsp+358h] [rbp+250h] BYREF
  float v276; // [rsp+360h] [rbp+258h]
  float v277; // [rsp+364h] [rbp+25Ch]
  float v278; // [rsp+368h] [rbp+260h]
  float v279; // [rsp+36Ch] [rbp+264h]
  float v280; // [rsp+370h] [rbp+268h]
  float v281; // [rsp+374h] [rbp+26Ch]
  _QWORD v282[4]; // [rsp+378h] [rbp+270h]

  v237 = a5;
  v7 = 0;
  v214 = 0;
  v9 = 1;
  v11 = *(void (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, __int128 *))(*(_QWORD *)a2 + 112LL);
  if ( (char *)v11 == (char *)CPrimitiveGroup::GetBounds )
    CPrimitiveGroup::GetBounds(a2, 0LL, 0LL, &v263);
  else
    v11(a2, 0LL, 0LL, &v263);
  if ( *((_BYTE *)this + 2616) || *((_DWORD *)this + 1439) )
  {
    v238 = 0x3F8000003F800000LL;
    v239 = 0x3F8000003F800000LL;
    v44 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this);
    v16 = v44;
    if ( v44 >= 0 )
      goto LABEL_99;
    v211 = 2508;
    goto LABEL_354;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v12, &EVTDESC_ETWGUID_DRAWEVENT_Start, 18LL, *((unsigned int *)this + 1438));
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v271 = v263;
    TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(this + 57));
    CBaseMatrix::Transform2DBounds(TopByReference, (const struct MilRectF *)&v271, (struct MilRectF *)&v260);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v180, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v181, v182, v261, v262);
  }
  if ( a4 )
  {
    v7 = *((_DWORD *)a2 + 105);
    v9 = *((_BYTE *)a2 + 424);
    v254 = *(_OWORD *)((char *)a2 + 404);
    v214 = v7;
  }
  v13 = *((_DWORD *)this + 646);
  if ( !v13 )
  {
    v16 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x9EAu);
    goto LABEL_99;
  }
  v14 = *((float *)this[325] + (unsigned int)(v13 - 1));
  v230 = v14;
  if ( !v7 )
    goto LABEL_12;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v15 = 0LL;
    v214 = 0;
  }
  else
  {
    if ( v9 )
    {
LABEL_12:
      v15 = 0LL;
      goto LABEL_13;
    }
    CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 57), (struct CBaseMatrix *)v272);
    if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)v272) )
    {
      if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v272) )
      {
        v132 = &v250;
        v133 = 4;
        v134 = 1;
        v250 = v273 + *(float *)&v254;
        v251 = *((float *)&v254 + 1) + v274;
        v252 = *((float *)&v254 + 2) + v273;
        v253 = *((float *)&v254 + 3) + v274;
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)v272,
          (const struct MilRectF *)&v254,
          (struct MilPoint2F *const)&v275);
        v134 = 0;
        v132 = (float *)&v275;
        v133 = 8;
      }
      for ( i = 0; i < v133; ++i )
        ++v132;
      if ( !v134 )
      {
        v156 = v276;
        v216 = v275;
        v219 = (unsigned __int64)v275;
        if ( *(float *)&v275 > v276 )
          v157 = v276;
        else
          v157 = *(float *)&v219;
        v158 = *((float *)&v219 + 1);
        if ( *((float *)&v219 + 1) > v277 )
          v158 = v277;
        if ( v276 <= *(float *)&v275 )
          v156 = *(float *)&v216;
        v159 = *((float *)&v216 + 1);
        if ( v277 > *((float *)&v216 + 1) )
          v159 = v277;
        if ( v157 > v278 )
          v157 = v278;
        if ( v158 > v279 )
          v158 = v279;
        if ( v278 > v156 )
          v156 = v278;
        if ( v279 > v159 )
          v159 = v279;
        if ( v157 > v280 )
          v157 = v280;
        if ( v158 > v281 )
          v158 = v281;
        if ( v280 > v156 )
          v156 = v280;
        if ( v281 > v159 )
          v159 = v281;
        v250 = v157;
        v251 = v158;
        v252 = v156;
        v253 = v159;
      }
      CScopedClipStack::GetTopClipBoundsInScope(this + 85, v269);
      DoesContain = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v250, v269);
      v15 = 0LL;
      if ( !DoesContain )
        v214 = 0;
    }
    else
    {
      v15 = 0LL;
      v214 = 0;
    }
  }
LABEL_13:
  v16 = 0;
  v17 = this[47];
  v18 = 0;
  if ( *((_DWORD *)a2 + 58) )
  {
    while ( 1 )
    {
      updated = CPrimitiveColor::UpdateD2D1PrimitiveProperty(
                  *(CPrimitiveColor **)(*((_QWORD *)a2 + 26) + 8LL * v18),
                  v17);
      v16 = updated;
      if ( updated < 0 )
        break;
      if ( ++v18 >= *((_DWORD *)a2 + 58) )
        goto LABEL_273;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x3FCu);
LABEL_273:
    v15 = 0LL;
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA19u);
    goto LABEL_99;
  }
  v19 = *((_DWORD *)this + 114);
  if ( v19 )
  {
    v20 = (unsigned int)(v19 - 1);
    v21 = this[59];
    v20 <<= 6;
    v22 = *(_OWORD *)((char *)v21 + v20 + 16);
    v255 = *(_OWORD *)((char *)v21 + v20);
    v23 = *(_OWORD *)((char *)v21 + v20 + 32);
    v256 = v22;
    v24 = *(_OWORD *)((char *)v21 + v20 + 48);
  }
  else
  {
    v255 = IdentityMatrix;
    v23 = xmmword_180190B20;
    v256 = xmmword_180190B10;
    v24 = xmmword_180190B30;
  }
  v25 = this[691];
  v26 = this[44];
  v16 = -2003292412;
  v258 = v24;
  v257 = v23;
  v215 = 0LL;
  if ( *((_BYTE *)v25 + 32) )
  {
    v27 = (char *)a3 + 448;
  }
  else
  {
    v146 = (_QWORD *)*((_QWORD *)a3 + 54);
    if ( v146 == (_QWORD *)((char *)a3 + 432) )
      goto LABEL_287;
    while ( 1 )
    {
      v27 = (char *)(v146 - 33);
      if ( (const struct CVisualTree *)v146[4] == v25 )
        break;
      v146 = (_QWORD *)*v146;
      if ( v146 == (_QWORD *)((char *)a3 + 432) )
        goto LABEL_287;
    }
  }
  if ( !v27 )
  {
LABEL_287:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA24u);
    goto LABEL_99;
  }
  v28 = v27 + 120;
  v16 = 0;
  v29 = *((_DWORD *)v27 + 36);
  v30 = 0;
  if ( v29 )
  {
    v31 = *(_QWORD *)v28;
    while ( *(const struct CVisualTree **)(v31 + 16LL * v30 + 8) != v26 )
    {
      if ( ++v30 >= v29 )
        goto LABEL_180;
    }
    v32 = *(struct CHWDrawListCache **)(v31 + 16LL * v30);
  }
  else
  {
LABEL_180:
    v32 = 0LL;
  }
  v216 = 0LL;
  if ( v32 )
    goto LABEL_25;
  v141 = CHWDrawListCache::Create(&v216);
  v16 = v141;
  if ( v141 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v141, 0x1B4u);
    v32 = v216;
  }
  else
  {
    v142 = *((unsigned int *)v28 + 6);
    v32 = v216;
    *((_QWORD *)&v232 + 1) = v26;
    *(_QWORD *)&v232 = v216;
    v143 = v142 + 1;
    if ( (int)v142 + 1 < (unsigned int)v142 )
    {
      v151 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v16 = -2147024362;
    }
    else
    {
      v15 = 0LL;
      v16 = 0;
      if ( v143 <= *((_DWORD *)v28 + 5) )
      {
        *(_OWORD *)(*(_QWORD *)v28 + 16 * v142) = v232;
        *((_DWORD *)v28 + 6) = v143;
LABEL_25:
        v33 = v32;
        v215 = v32;
        goto LABEL_26;
      }
      v150 = DynArrayImpl<0>::AddMultipleAndSet(v28, 16LL, 1LL, &v232);
      v151 = v150;
      if ( v150 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v150, 0xC0u);
      v16 = v151;
      if ( v151 >= 0 )
      {
        v15 = 0LL;
        goto LABEL_25;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v151, 0x1B9u);
  }
  if ( v32 )
    (*(void (__fastcall **)(struct CHWDrawListCache *))(*(_QWORD *)v32 + 8LL))(v32);
  v33 = 0LL;
  v15 = 0LL;
LABEL_26:
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x8Fu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x521u);
    goto LABEL_287;
  }
  v34 = (CPrimitiveGroupDrawListGenerator **)((char *)a2 + 136);
  v16 = 0;
  if ( !*((_QWORD *)a2 + 17) )
  {
    NewGenerator = CPrimitiveGroup::CreateNewGenerator(a2, (struct CPrimitiveGroupDrawListGenerator **)a2 + 17);
    v16 = NewGenerator;
    if ( NewGenerator < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, NewGenerator, 0x1E2u);
    v15 = 0LL;
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA2Bu);
    goto LABEL_99;
  }
  if ( CCommonRegistryData::m_fDisableDrawListCaching
    || (v35 = *((_QWORD *)v33 + 4)) == 0
    || (v36 = *((_DWORD *)this + 62), *((_DWORD *)v33 + 10) != (v36 != 0)) )
  {
    v37 = FLOAT_0_00012207031;
    goto LABEL_150;
  }
  v37 = FLOAT_0_00012207031;
  if ( v36
    || !*((_BYTE *)this[85] + 76 * (unsigned int)(*((_DWORD *)this + 176) - 1))
    || (v38 = *((_DWORD *)this + 176)) != 0
    && *((_DWORD *)this[85] + 19 * (unsigned int)(v38 - 1) + 2)
    && *((_BYTE *)this[184] + 104 * (unsigned int)(*((_DWORD *)this + 374) - 1) + 96)
    && (unsigned int)CBaseMatrix::Is2DAffine(
                       (const struct CVisualTree *)((char *)this[85]
                                                  + 76 * (unsigned int)(*((_DWORD *)this + 176) - 1)
                                                  + 12),
                       1)
    && ((v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v39[1]) & _xmm), v40 < 0.00012207031)
     && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v39[4]) & _xmm) < 0.00012207031
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v39) & _xmm) < 0.00012207031
     && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v39[5]) & _xmm) < 0.00012207031) )
  {
    v41 = (char)v15;
  }
  else
  {
    v41 = 1;
  }
  if ( *((_BYTE *)v33 + 62) != v41 )
    goto LABEL_150;
  v42 = this[691];
  v43 = v15;
  if ( *((_BYTE *)v42 + 32) )
  {
    v43 = (char *)a3 + 448;
  }
  else
  {
    v147 = (_QWORD *)*((_QWORD *)a3 + 54);
    if ( v147 != (_QWORD *)((char *)a3 + 432) )
    {
      while ( (const struct CVisualTree *)v147[4] != v42 )
      {
        v147 = (_QWORD *)*v147;
        if ( v147 == (_QWORD *)((char *)a3 + 432) )
          goto LABEL_44;
      }
      v43 = (char *)(v147 - 33);
    }
  }
LABEL_44:
  if ( v35 < *((_QWORD *)v43 + 31) )
  {
    if ( *((_BYTE *)v33 + 61)
      || *((_BYTE *)this[85] + 76 * (unsigned int)(*((_DWORD *)this + 176) - 1))
      && (v145 = *((_QWORD *)CVisual::FindTreeData(a3, v42) + 25),
          v259 = *(_OWORD *)((char *)v33 + 44),
          (unsigned __int8)CScopedClipStack::IsCpuClippedInScope(this + 85, &v259, v145)) )
    {
LABEL_150:
      TreeData = CVisual::FindTreeData(a3, this[691]);
      v122 = v120;
      v123 = *((_QWORD *)TreeData + 31);
      if ( *((_QWORD *)*v34 + 4) > v123 )
        v123 = *((_QWORD *)*v34 + 4);
      v265 = &CRectangleShape::`vftable';
      v124 = (unsigned int)(*((_DWORD *)this + 176) - 1);
      v264 = v120;
      v125 = 76 * v124;
      v266 = 0LL;
      v126 = this[85];
      v267 = v120;
      v268 = 0;
      if ( *((_BYTE *)v126 + v125) )
      {
        v127 = CVisual::FindTreeData(a3, v121);
        v128 = CpuClipShape::Initialize(
                 (CpuClipShape *)&v264,
                 (struct CScopedClipStack *)(this + 85),
                 *((const struct CMILMatrix **)v127 + 25));
        v16 = v128;
        if ( v128 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v128, 0xA39u);
          goto LABEL_296;
        }
        v122 = v264;
      }
      v129 = *((_DWORD *)this + 62) != 0;
      v130 = CDrawingContext::UseAntialiasingForCpuClipping((CDrawingContext *)this);
      v131 = CPrimitiveGroupDrawListGenerator::UpdateHWDrawListCache(
               *v34,
               v123,
               (struct CDrawListPrimitiveBuilder *)(this + 416),
               v129,
               (const struct CMILMatrix *)&v255,
               v122,
               v130,
               v215);
      v16 = v131;
      if ( v131 >= 0 )
      {
        CpuClipShape::ReleaseShape((CpuClipShape *)&v264);
        v265 = &CRectangleShape::`vftable';
        if ( v267 )
          (*(void (__fastcall **)(struct CShape *))(*(_QWORD *)v267 + 16LL))(v267);
        v33 = v215;
        goto LABEL_45;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v131, 0xA44u);
LABEL_296:
      CpuClipShape::~CpuClipShape((CpuClipShape *)&v264);
      goto LABEL_99;
    }
  }
LABEL_45:
  if ( !*((_BYTE *)this[85] + 76 * (unsigned int)(*((_DWORD *)this + 176) - 1)) || !*((_BYTE *)v33 + 60) )
  {
    v44 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
    v16 = v44;
    if ( v44 >= 0 )
      goto LABEL_48;
    v211 = 2640;
LABEL_354:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, v211);
    goto LABEL_99;
  }
  v44 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 1);
  v16 = v44;
  if ( v44 < 0 )
  {
    v211 = 2636;
    goto LABEL_354;
  }
LABEL_48:
  v213 = CDrawingContext::GetD2DInterpolationMode((CDrawingContext *)this) == D2D1_INTERPOLATION_MODE_NEAREST_NEIGHBOR;
  v45 = this[47];
  v46 = *((_DWORD *)this + 63);
  v223 = v46;
  v16 = 0;
  v226 = v45;
  if ( v14 <= 0.0 )
    goto LABEL_97;
  v212 = 0;
  if ( *((_BYTE *)v33 + 63) )
  {
    for ( j = 0; j < *((_DWORD *)v215 + 6); ++j )
    {
      v185 = *((_QWORD *)v215 + 2);
      v186 = 48LL * j;
      v187 = *(_QWORD *)(v186 + v185 + 32);
      if ( v187 && *(_QWORD *)(v186 + v185) )
      {
        *(struct _D3DCOLORVALUE *)&v270.r = *(struct _D3DCOLORVALUE *)(v187 + 120);
        v188 = Premultiply(&v241, &v270);
        g = v188->g;
        v192 = *(__m128 *)&v188->r;
        LODWORD(v227) = *(_OWORD *)&v188->r;
        a = v188->a;
        *((D3DVALUE *)&v227 + 1) = g;
        v228 = _mm_shuffle_ps(v192, v192, 170).m128_u32[0];
        v193 = Premultiply(&v242, (const struct _D3DCOLORVALUE *)(v190 + v189 + 16));
        v195 = v193->g;
        v196 = *(__m128 *)&v193->r;
        LODWORD(v218) = *(_OWORD *)&v193->r;
        v197 = v193->a;
        v199 = v198;
        *((D3DVALUE *)&v218 + 3) = v197;
        *((D3DVALUE *)&v218 + 1) = v195;
        DWORD2(v218) = _mm_shuffle_ps(v196, v196, 170).m128_u32[0];
        do
        {
          *(float *)((char *)&v240.r + v199) = *(float *)((char *)&v218 + v199) * *(float *)((char *)&v227 + v199);
          v199 += 4LL;
        }
        while ( v199 < 16 );
        CDrawListPrimitive::UpdatePremultipliedColor(*(CDrawListPrimitive **)(v194 + 16), &v240);
      }
    }
    v33 = v215;
    v45 = v226;
  }
  if ( v14 == 1.0 && !v46 )
    v212 = 1;
  v47 = 0LL;
  v221 = 0;
  if ( !*((_DWORD *)v33 + 6) )
    goto LABEL_97;
  while ( 1 )
  {
    v48 = *((_QWORD *)v33 + 2) + 48 * v47;
    v49 = *(unsigned int **)(*(_QWORD *)v48 + 16LL);
    v50 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v45 + 184LL))(v45);
    v51 = (__m128)v49[5];
    v52 = v50;
    v231 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v53 = *(_DWORD *)(v50 + 192);
    v282[0] = _mm_unpacklo_ps((__m128)v49[4], v51).m128_u64[0];
    v54 = _mm_unpacklo_ps((__m128)v49[6], v51).m128_u64[0];
    v55 = (__m128)v49[7];
    v282[1] = v54;
    v282[2] = _mm_unpacklo_ps((__m128)v49[4], v55).m128_u64[0];
    v56 = (__m128)v49[6];
    v57 = 0;
    v58 = 0LL;
    v282[3] = _mm_unpacklo_ps(v56, v55).m128_u64[0];
    if ( v53 )
      v58 = *(_QWORD *)(*(_QWORD *)(v52 + 168) + 8LL * (unsigned int)(v53 - 1));
    v59 = *(_DWORD *)(v58 + 76) == 1;
    v218 = *(_OWORD *)(v58 + 60);
    if ( v59 )
    {
      v63 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v218 - 0.5);
      v233 = v63;
      v62 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v218 + 1) - 0.5);
      v234 = v62;
      v61 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v218 + 2) - 0.5);
      v235 = v61;
      v60 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v218 + 3) - 0.5);
      v236 = v60;
    }
    else
    {
      v60 = *((float *)&v218 + 3);
      v61 = *((float *)&v218 + 2);
      v62 = *((float *)&v218 + 1);
      v63 = *(float *)&v218;
    }
    v64 = *((float *)&v231 + 3);
    v65 = 0;
    v66 = *((float *)&v231 + 2);
    v67 = 0LL;
    v68 = *((float *)&v231 + 1);
    v69 = *(float *)&v231;
    do
    {
      v70 = *((float *)&v282[v67] + 1);
      v71 = *(float *)&v282[v67];
      v72 = (float)((float)(*(float *)&v256 * v70) + (float)(*(float *)&v255 * v71)) + *(float *)&v258;
      *(float *)&v219 = v72;
      v73 = (float)((float)(*((float *)&v256 + 1) * v70) + (float)(*((float *)&v255 + 1) * v71)) + *((float *)&v258 + 1);
      *((float *)&v219 + 1) = v73;
      v74 = (float)((float)(*((float *)&v256 + 3) * v70) + (float)(*((float *)&v255 + 3) * v71)) + *((float *)&v258 + 3);
      if ( v37 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v74) & _xmm)
        && v37 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v74 - 1.0)) & _xmm) )
      {
        v72 = v72 / v74;
        v73 = v73 / v74;
        v219 = __PAIR64__(LODWORD(v73), LODWORD(v72));
      }
      if ( v64 <= v73 )
        v64 = v73;
      if ( v66 <= v72 )
        v66 = v72;
      if ( v73 <= v68 )
        v68 = v73;
      if ( v72 <= v69 )
        v69 = v72;
      v67 = ++v65;
    }
    while ( (unsigned __int64)v65 < 4 );
    if ( v61 <= v69 || v60 <= v68 || v66 <= v63 || v64 <= v62 )
      goto LABEL_96;
    v75 = v46;
    if ( *(_BYTE *)(v48 + 40) && v212 )
      v75 = 1LL;
    if ( v213 )
    {
      v148 = ForceSamplerModeTypeToNearestNeighbor(*(_DWORD *)(v48 + 8));
      v149 = *(_DWORD *)(v48 + 12);
      LODWORD(v217) = v148;
      v76 = ForceSamplerModeTypeToNearestNeighbor(v149);
    }
    else
    {
      LODWORD(v217) = *(_DWORD *)(v48 + 8);
      v76 = *(_DWORD *)(v48 + 12);
    }
    v77 = *(_QWORD *)v48;
    HIDWORD(v217) = v76;
    v78 = (_DWORD *)(v77 + 28);
    if ( !*(_DWORD *)(v77 + 144) )
    {
      if ( (_DWORD)v75 )
      {
        v75 = (unsigned int)(v75 - 1);
        if ( (_DWORD)v75 )
        {
          v75 = (unsigned int)(v75 - 1);
          if ( (_DWORD)v75 )
          {
            if ( (_DWORD)v75 == 2 )
              v57 = 22;
          }
          else
          {
            v57 = 21;
          }
        }
        else
        {
          v57 = 5;
        }
      }
      v79 = v256;
      *(_OWORD *)(v77 + 76) = v255;
      *(_DWORD *)(v77 + 24) = v57;
      v80 = v257;
      *(_OWORD *)(v77 + 92) = v79;
      v81 = v258;
      *(_OWORD *)(v77 + 108) = v80;
      *(float *)(v77 + 140) = v230;
      *(_OWORD *)(v77 + 124) = v81;
      v82 = *(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v78 + 8LL);
      if ( (char *)v82 == (char *)&CCommonRenderingEffect::OverwriteSamplerAndBlendModes )
      {
        *(_QWORD *)(v77 + 52) = v217;
        v83 = *(_DWORD *)(v77 + 60);
        if ( v57 == 22 )
        {
          if ( v83 < 6 )
            v78[8] = v83 + 6;
        }
        else if ( v83 >= 6 )
        {
          v78[8] = v83 - 6;
        }
      }
      else
      {
        v82(v77 + 28, &v217, v57);
      }
    }
    if ( !*(_BYTE *)(v48 + 41) || !v212 )
      break;
    v93 = *(_QWORD *)v48;
    v94 = (CD2DContext *)(*(__int64 (__fastcall **)(const struct CVisualTree *, __int64))(*(_QWORD *)v45 + 184LL))(
                           v45,
                           v75);
    v96 = v94;
    if ( *((_QWORD *)v94 + 44) )
      CD2DContext::FlushDrawList(v94);
    if ( !*((_BYTE *)v96 + 232) )
    {
      v137 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v95, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v96 + 5) + 384LL))(*((_QWORD *)v96 + 5));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v138, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( k = 0; k < *((_DWORD *)v96 + 48); v137 = v140 )
      {
        v140 = *(CD2DTarget **)(*((_QWORD *)v96 + 21) + 8LL * k);
        if ( v137 )
          *((_BYTE *)v137 + 48) = 0;
        CD2DTarget::ApplyState(v140, v96);
        ++k;
      }
      *((_BYTE *)v96 + 232) = 1;
    }
    v59 = *((_QWORD *)v96 + 39) == 0LL;
    v16 = 0;
    *((_BYTE *)v96 + 244) = 1;
    v222 = 0LL;
    if ( v59 )
    {
      if ( !*((_QWORD *)v96 + 36) )
      {
        v170 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v96 + 184LL))(v96);
        v172 = CD3DIndexBuffer::Create(v170, v171, (struct CD3DIndexBuffer **)v96 + 36);
        v16 = v172;
        if ( v172 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v172, 0x20Au);
          goto LABEL_139;
        }
      }
      if ( !*((_QWORD *)v96 + 35) )
      {
        v173 = (*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v96 + 184LL))(v96);
        v176 = CD3DVertexBuffer<CVertexXYWColorDUV2>::Create(v173, v174, v175, (char *)v96 + 280);
        v16 = v176;
        if ( v176 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v176, 0x214u);
          goto LABEL_139;
        }
      }
      if ( *((_DWORD *)v96 + 86) )
      {
LABEL_136:
        v113 = (unsigned int)(*((_DWORD *)v96 + 86) - 1);
        *((_QWORD *)v96 + 39) = *(_QWORD *)(*((_QWORD *)v96 + 40) + 8 * v113);
        v114 = *((_DWORD *)v96 + 86);
        if ( (unsigned int)v113 >= v114 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        }
        else
        {
          v115 = *((_QWORD *)v96 + 40);
          if ( (unsigned int)v113 < v114 - 1 )
          {
            do
            {
              v200 = (unsigned int)v113;
              LODWORD(v113) = v113 + 1;
              *(_QWORD *)(v115 + 8 * v200) = *(_QWORD *)(v115 + 8LL * (unsigned int)v113);
            }
            while ( (unsigned int)v113 < *((_DWORD *)v96 + 86) - 1 );
          }
          --*((_DWORD *)v96 + 86);
        }
        goto LABEL_139;
      }
      v161 = (*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v96 + 184LL))(v96);
      v162 = CHWCallbackRenderer::Create(v161, *((_QWORD *)v96 + 35), *((_QWORD *)v96 + 36), &v222);
      v16 = v162;
      if ( v162 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v162, 0x21Eu);
      }
      else
      {
        v163 = *((_DWORD *)v96 + 86);
        v164 = v163 + 1;
        if ( v163 + 1 < v163 )
        {
          v178 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v16 = -2147024362;
        }
        else
        {
          v16 = 0;
          if ( v164 <= *((_DWORD *)v96 + 85) )
          {
            *(_QWORD *)(*((_QWORD *)v96 + 40) + 8LL * v163) = v222;
            *((_DWORD *)v96 + 86) = v164;
LABEL_247:
            v222 = 0LL;
            goto LABEL_136;
          }
          v177 = DynArrayImpl<0>::AddMultipleAndSet((char *)v96 + 320, 8LL, 1LL, &v222);
          v178 = v177;
          if ( v177 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v177, 0xC0u);
          v16 = v178;
          if ( v178 >= 0 )
            goto LABEL_247;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v178, 0x220u);
      }
LABEL_139:
      if ( v222 )
        CMILRefCountBase::Release((CMILRefCountBase *)(v222 + 8));
    }
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1D6u);
LABEL_334:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x102u);
      goto LABEL_97;
    }
    v97 = *((_QWORD *)v96 + 39);
    v225 = v93;
    v98 = *(_DWORD *)(v97 + 56);
    v99 = v98 + 1;
    if ( v98 + 1 < v98 )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v16 = 0;
      if ( v99 <= *(_DWORD *)(v97 + 52) )
      {
        *(_QWORD *)(*(_QWORD *)(v97 + 32) + 8LL * v98) = v225;
        *(_DWORD *)(v97 + 56) = v99;
LABEL_117:
        _InterlockedIncrement((volatile signed __int32 *)(v225 + 8));
        ++*(_DWORD *)(v225 + 144);
        goto LABEL_118;
      }
      v165 = DynArrayImpl<0>::AddMultipleAndSet(v97 + 32, 8LL, 1LL, &v225);
      v16 = v165;
      if ( v165 >= 0 )
        goto LABEL_117;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v165, 0xC0u);
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x8Eu);
LABEL_118:
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x78u);
LABEL_332:
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1DAu);
        goto LABEL_334;
      }
      goto LABEL_95;
    }
    if ( !CCommonRegistryData::m_fEnableMegaRects
      || !(unsigned int)CBaseMatrix::Is2DAffine((CBaseMatrix *)(v93 + 76), 1) )
    {
      goto LABEL_332;
    }
    v100 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v93 + 80)) & _xmm);
    if ( v37 <= v100 || (v101 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v93 + 92)) & _xmm), v37 <= v101) )
    {
      if ( v37 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v93 + 76)) & _xmm)
        || v37 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v93 + 96)) & _xmm) )
      {
        goto LABEL_332;
      }
    }
    *(_QWORD *)&v248[0] = 0LL;
    memset_0((char *)v248 + 8, 0, 0x80uLL);
    v102 = *(_OWORD *)(v93 + 76);
    v103 = *(CMILRefCountBase **)(v93 + 16);
    v104 = *(_OWORD *)(v93 + 92);
    v243[0] = (CMILRefCountBase *)v93;
    v244 = v102;
    v105 = *(_OWORD *)(v93 + 108);
    v243[1] = v103;
    v245 = v104;
    v106 = *(_OWORD *)(v93 + 124);
    v246 = v105;
    v247 = v106;
    _InterlockedIncrement((volatile signed __int32 *)(v93 + 8));
    (**(void (__fastcall ***)(CMILRefCountBase *))v243[1])(v243[1]);
    v107 = *(unsigned int *)(v97 + 144);
    v108 = v107 + 1;
    if ( (int)v107 + 1 < (unsigned int)v107 )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v16 = 0;
      if ( v108 <= *(_DWORD *)(v97 + 140) )
      {
        v109 = (_OWORD *)(*(_QWORD *)(v97 + 120) + 216 * v107);
        *v109 = *(_OWORD *)v243;
        v109[1] = v244;
        v109[2] = v245;
        v109[3] = v246;
        v109[4] = v247;
        v109[5] = v248[0];
        v109[6] = v248[1];
        v109 += 8;
        *(v109 - 1) = v248[2];
        *v109 = v248[3];
        v109[1] = v248[4];
        v109[2] = v248[5];
        v109[3] = v248[6];
        v109[4] = v248[7];
        *((_QWORD *)v109 + 10) = v249;
        *(_DWORD *)(v97 + 144) = v108;
LABEL_126:
        *(_OWORD *)v243 = 0LL;
        goto LABEL_127;
      }
      v227 = v243;
      v16 = DynArrayImpl<0>::Grow((int)v97 + 120, 216, 1, 0, (__int64)&v227);
      if ( v16 >= 0 )
      {
        v110 = v227;
        v111 = (_OWORD *)(*(_QWORD *)(v97 + 120) + (unsigned int)(216 * *(_DWORD *)(v97 + 144)));
        *v111 = *(_OWORD *)v227;
        v111[1] = *((_OWORD *)v110 + 1);
        v111[2] = *((_OWORD *)v110 + 2);
        v111[3] = *((_OWORD *)v110 + 3);
        v111[4] = *((_OWORD *)v110 + 4);
        v111[5] = *((_OWORD *)v110 + 5);
        v111[6] = *((_OWORD *)v110 + 6);
        v111 += 8;
        v112 = *((_OWORD *)v110 + 7);
        v110 += 16;
        *(v111 - 1) = v112;
        *v111 = *(_OWORD *)v110;
        v111[1] = *((_OWORD *)v110 + 1);
        v111[2] = *((_OWORD *)v110 + 2);
        v111[3] = *((_OWORD *)v110 + 3);
        v111[4] = *((_OWORD *)v110 + 4);
        *((_QWORD *)v111 + 10) = v110[10];
        ++*(_DWORD *)(v97 + 144);
        goto LABEL_126;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x135u);
    if ( v243[0] )
      CMILRefCountBase::Release(v243[0]);
    if ( v243[1] )
      (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v243[1] + 8LL))(v243[1]);
LABEL_127:
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x7Du);
      goto LABEL_332;
    }
LABEL_95:
    v45 = v226;
    v46 = v223;
LABEL_96:
    v33 = v215;
    v47 = (unsigned int)(v221 + 1);
    v221 = v47;
    if ( (unsigned int)v47 >= *((_DWORD *)v215 + 6) )
      goto LABEL_97;
  }
  v84 = *(_QWORD *)v48;
  v85 = (CD2DContext *)(*(__int64 (__fastcall **)(const struct CVisualTree *, __int64))(*(_QWORD *)v45 + 184LL))(
                         v45,
                         v75);
  v87 = v85;
  if ( *((_QWORD *)v85 + 44) )
    CD2DContext::FlushDrawList(v85);
  if ( !*((_BYTE *)v87 + 232) )
  {
    v152 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v86, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v87 + 5) + 384LL))(*((_QWORD *)v87 + 5));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v153, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( m = 0; m < *((_DWORD *)v87 + 48); v152 = v155 )
    {
      v155 = *(CD2DTarget **)(*((_QWORD *)v87 + 21) + 8LL * m);
      if ( v152 )
        *((_BYTE *)v152 + 48) = 0;
      CD2DTarget::ApplyState(v155, v87);
      ++m;
    }
    *((_BYTE *)v87 + 232) = 1;
  }
  v59 = *((_QWORD *)v87 + 39) == 0LL;
  v16 = 0;
  *((_BYTE *)v87 + 244) = 1;
  v220 = 0LL;
  if ( v59 )
  {
    if ( !*((_QWORD *)v87 + 36) )
    {
      v201 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v87 + 184LL))(v87);
      v203 = CD3DIndexBuffer::Create(v201, v202, (struct CD3DIndexBuffer **)v87 + 36);
      v16 = v203;
      if ( v203 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v203, 0x20Au);
        goto LABEL_147;
      }
    }
    if ( !*((_QWORD *)v87 + 35) )
    {
      v204 = (*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v87 + 184LL))(v87);
      v207 = CD3DVertexBuffer<CVertexXYWColorDUV2>::Create(v204, v205, v206, (char *)v87 + 280);
      v16 = v207;
      if ( v207 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v207, 0x214u);
        goto LABEL_147;
      }
    }
    if ( *((_DWORD *)v87 + 86) )
    {
LABEL_144:
      v116 = (unsigned int)(*((_DWORD *)v87 + 86) - 1);
      *((_QWORD *)v87 + 39) = *(_QWORD *)(*((_QWORD *)v87 + 40) + 8 * v116);
      v117 = *((_DWORD *)v87 + 86);
      if ( (unsigned int)v116 >= v117 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
      }
      else
      {
        v118 = *((_QWORD *)v87 + 40);
        if ( (unsigned int)v116 < v117 - 1 )
        {
          do
          {
            v210 = (unsigned int)v116;
            LODWORD(v116) = v116 + 1;
            *(_QWORD *)(v118 + 8 * v210) = *(_QWORD *)(v118 + 8LL * (unsigned int)v116);
          }
          while ( (unsigned int)v116 < *((_DWORD *)v87 + 86) - 1 );
        }
        --*((_DWORD *)v87 + 86);
      }
      goto LABEL_147;
    }
    v166 = (*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)v87 + 184LL))(v87);
    v167 = CHWCallbackRenderer::Create(v166, *((_QWORD *)v87 + 35), *((_QWORD *)v87 + 36), &v220);
    v16 = v167;
    if ( v167 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v167, 0x21Eu);
    }
    else
    {
      v168 = *((_DWORD *)v87 + 86);
      v169 = v168 + 1;
      if ( v168 + 1 < v168 )
      {
        v208 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v16 = -2147024362;
      }
      else
      {
        v16 = 0;
        if ( v169 <= *((_DWORD *)v87 + 85) )
        {
          *(_QWORD *)(*((_QWORD *)v87 + 40) + 8LL * v168) = v220;
          *((_DWORD *)v87 + 86) = v169;
LABEL_254:
          v220 = 0LL;
          goto LABEL_144;
        }
        v209 = DynArrayImpl<0>::AddMultipleAndSet((char *)v87 + 320, 8LL, 1LL, &v220);
        v208 = v209;
        if ( v209 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v209, 0xC0u);
        v16 = v208;
        if ( v208 >= 0 )
          goto LABEL_254;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v208, 0x220u);
    }
LABEL_147:
    if ( v220 )
      CMILRefCountBase::Release((CMILRefCountBase *)(v220 + 8));
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1F2u);
    goto LABEL_352;
  }
  v88 = *((_QWORD *)v87 + 39);
  v224 = v84;
  v89 = *(_DWORD *)(v88 + 56);
  v90 = v89 + 1;
  if ( v89 + 1 < v89 )
  {
    v16 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_350:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x8Eu);
  }
  else
  {
    v16 = 0;
    if ( v90 <= *(_DWORD *)(v88 + 52) )
    {
      *(_QWORD *)(*(_QWORD *)(v88 + 32) + 8LL * v89) = v224;
      *(_DWORD *)(v88 + 56) = v90;
      goto LABEL_93;
    }
    v160 = DynArrayImpl<0>::AddMultipleAndSet(v88 + 32, 8LL, 1LL, &v224);
    v16 = v160;
    if ( v160 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v160, 0xC0u);
      goto LABEL_350;
    }
LABEL_93:
    _InterlockedIncrement((volatile signed __int32 *)(v224 + 8));
    ++*(_DWORD *)(v224 + 144);
  }
  if ( v16 >= 0 )
    goto LABEL_95;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1F6u);
LABEL_352:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x108u);
LABEL_97:
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA59u);
  }
  else
  {
    v91 = v237;
    *v237 = v214;
  }
LABEL_99:
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1439) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v91, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 18LL, *((unsigned int *)this + 1438));
  return (unsigned int)v16;
}
