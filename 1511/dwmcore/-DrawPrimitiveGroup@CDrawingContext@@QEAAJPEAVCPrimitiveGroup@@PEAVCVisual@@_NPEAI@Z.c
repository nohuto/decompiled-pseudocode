/*
 * XREFs of ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091920 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180015B54 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800209A0 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180024C6C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?Create@CHWDrawListCache@@SAJPEAPEAV1@@Z @ 0x18002B9C0 (-Create@CHWDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036D60 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x180041A3C (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180047400 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ?ReleaseShape@CpuClipShape@@AEAAXXZ @ 0x180058C84 (-ReleaseShape@CpuClipShape@@AEAAXXZ.c)
 *     ??0CpuClipShape@@QEAA@XZ @ 0x180058CE0 (--0CpuClipShape@@QEAA@XZ.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x180058D48 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180076E90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800775D4 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800926CC (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800A95D0 (-Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?Create@?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z @ 0x1800A96B0 (-Create@-$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z.c)
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x1800B1AD0 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV-$CD3DVertexBuffer@VCVertexXYWColorDUV.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?Premultiply@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1800BCCB8 (-Premultiply@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x1800FCF78 (--1CpuClipShape@@QEAA@XZ.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 *     Template_ffff @ 0x18010EC0C (Template_ffff.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x180117800 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPrimitiveGroup(
        CDrawingContext *this,
        struct CPrimitiveGroup *a2,
        struct CVisual *a3,
        char a4,
        unsigned int *a5)
{
  CDrawingContext *v6; // r12
  char v7; // di
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // rbx
  CBaseMatrix *TopByReference; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  int v18; // esi
  unsigned int *v19; // rcx
  float v20; // xmm8_4
  char *v21; // r9
  float *v22; // rax
  unsigned int v23; // edx
  char v24; // r8
  unsigned int i; // ecx
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  bool DoesContain; // al
  int v31; // eax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rcx
  __int64 v35; // rax
  __int128 v36; // xmm1
  __int64 v37; // r8
  struct CHWDrawListCache *v38; // rdi
  __int64 v39; // r15
  enum D2D1_ANTIALIAS_MODE v40; // ebx
  char *v41; // rcx
  char *v42; // rbx
  unsigned int v43; // edx
  unsigned int v44; // ecx
  __int64 v45; // rdi
  int v46; // eax
  _QWORD *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // ecx
  int v50; // ebx
  int v51; // eax
  int NewGenerator; // eax
  unsigned __int64 v53; // r10
  int v54; // ecx
  int v55; // eax
  float *v56; // rcx
  float v57; // xmm1_4
  char v58; // al
  __int64 v59; // r8
  _QWORD *v60; // rax
  CBaseMatrix *v61; // r8
  unsigned __int64 v62; // rdi
  __int64 v63; // rax
  struct CTreeData *TreeData; // rax
  int v65; // eax
  unsigned int v66; // r13d
  bool v67; // al
  int updated; // eax
  int v69; // eax
  int v70; // eax
  __int64 v71; // r14
  int v72; // ecx
  char v73; // al
  unsigned int v74; // ebx
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // rax
  __int64 v78; // r9
  __int64 v79; // r8
  __m128 v80; // xmm6
  struct _D3DCOLORVALUE *v81; // rax
  __int64 v82; // r10
  CDrawListPrimitive *v83; // rcx
  __m128 v84; // xmm3
  __m128 v85; // xmm2
  _BYTE *v86; // r15
  unsigned int *v87; // rdi
  __int64 v88; // rax
  __m128 v89; // xmm1
  __int64 v90; // rdx
  __int64 v91; // rax
  int v92; // ecx
  unsigned __int64 v93; // xmm0_8
  __m128 v94; // xmm1
  bool v95; // zf
  float v96; // xmm12_4
  float v97; // xmm13_4
  float v98; // xmm10_4
  float v99; // xmm11_4
  float v100; // xmm9_4
  int v101; // ecx
  float v102; // xmm8_4
  __int64 v103; // rax
  float v104; // xmm7_4
  float v105; // xmm6_4
  float v106; // xmm1_4
  float v107; // xmm4_4
  float v108; // xmm3_4
  float v109; // xmm5_4
  int v110; // ecx
  __int64 v111; // rdx
  __int64 v112; // r14
  int v113; // ecx
  int v114; // ecx
  unsigned int v115; // esi
  __int128 v116; // xmm1
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  void (__fastcall *v119)(__int64, CDrawingContext *, __int128 *); // rbx
  __int64 v120; // r15
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // r14
  CD2DTarget *v124; // rsi
  __int64 v125; // rcx
  unsigned int j; // ebx
  CD2DTarget *v127; // rdi
  int v128; // eax
  __int64 v129; // r14
  unsigned int v130; // eax
  unsigned int v131; // edx
  int v132; // eax
  int v133; // edx
  float v134; // xmm1_4
  int v135; // eax
  __int128 v136; // xmm0
  CMILRefCountBase *v137; // rax
  __int128 v138; // xmm1
  __int128 v139; // xmm0
  __int128 v140; // xmm1
  __int64 v141; // rax
  unsigned int v142; // edx
  _OWORD *v143; // rcx
  CMILRefCountBase **v144; // rax
  _OWORD *v145; // rcx
  __int128 v146; // xmm1
  __int64 v147; // r12
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // r14
  CD2DTarget *v151; // rsi
  __int64 v152; // rcx
  unsigned int k; // ebx
  CD2DTarget *v154; // rdi
  struct CD3DDeviceLevel1 *v155; // rax
  unsigned int v156; // edx
  int v157; // eax
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 v160; // r8
  int v161; // eax
  __int64 v162; // rax
  int v163; // eax
  unsigned int v164; // eax
  unsigned int v165; // edx
  int v166; // ebx
  __int64 v167; // r8
  unsigned int v168; // eax
  int v169; // eax
  __int64 v170; // r9
  __int64 v171; // rcx
  __int64 v172; // r10
  unsigned int v173; // eax
  unsigned int v174; // edx
  int v175; // eax
  int v176; // eax
  unsigned __int8 v178; // [rsp+48h] [rbp-C0h]
  unsigned int v179; // [rsp+4Ch] [rbp-BCh]
  char v180; // [rsp+50h] [rbp-B8h]
  __int64 v181; // [rsp+58h] [rbp-B0h]
  struct CHWDrawListCache *v182; // [rsp+68h] [rbp-A0h]
  __int64 v183; // [rsp+70h] [rbp-98h] BYREF
  __int64 v184; // [rsp+78h] [rbp-90h]
  __int64 v185; // [rsp+80h] [rbp-88h] BYREF
  __int64 v186; // [rsp+88h] [rbp-80h] BYREF
  __int128 v187; // [rsp+90h] [rbp-78h]
  float v188; // [rsp+A0h] [rbp-68h]
  CDrawingContext *v189; // [rsp+A8h] [rbp-60h]
  CMILRefCountBase **v190; // [rsp+B0h] [rbp-58h] BYREF
  struct CHWDrawListCache *v191; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v192; // [rsp+C0h] [rbp-48h]
  struct _D3DCOLORVALUE v193; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v194; // [rsp+E0h] [rbp-28h] BYREF
  float v195; // [rsp+F0h] [rbp-18h]
  float v196; // [rsp+F4h] [rbp-14h]
  float v197; // [rsp+F8h] [rbp-10h]
  float v198; // [rsp+FCh] [rbp-Ch]
  unsigned int *v199; // [rsp+100h] [rbp-8h]
  __int128 v200; // [rsp+108h] [rbp+0h]
  struct _D3DCOLORVALUE v201; // [rsp+118h] [rbp+10h] BYREF
  struct _D3DCOLORVALUE v202; // [rsp+128h] [rbp+20h] BYREF
  CMILRefCountBase *v203[2]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v204; // [rsp+148h] [rbp+40h]
  __int128 v205; // [rsp+158h] [rbp+50h]
  __int128 v206; // [rsp+168h] [rbp+60h]
  __int128 v207; // [rsp+178h] [rbp+70h]
  _OWORD v208[8]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v209; // [rsp+208h] [rbp+100h]
  float v210; // [rsp+218h] [rbp+110h] BYREF
  float v211; // [rsp+21Ch] [rbp+114h]
  float v212; // [rsp+220h] [rbp+118h]
  float v213; // [rsp+224h] [rbp+11Ch]
  __int128 v214; // [rsp+228h] [rbp+120h] BYREF
  __int128 v215; // [rsp+238h] [rbp+130h] BYREF
  __int128 v216; // [rsp+248h] [rbp+140h]
  __int128 v217; // [rsp+258h] [rbp+150h]
  __int128 v218; // [rsp+268h] [rbp+160h]
  int v219; // [rsp+278h] [rbp+170h] BYREF
  int v220; // [rsp+280h] [rbp+178h]
  int v221; // [rsp+284h] [rbp+17Ch]
  __int128 v222; // [rsp+288h] [rbp+180h] BYREF
  __int128 v223; // [rsp+298h] [rbp+190h] BYREF
  __int128 v224; // [rsp+2A8h] [rbp+1A0h] BYREF
  struct CShape *v225; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v226[40]; // [rsp+2C0h] [rbp+1B8h] BYREF
  _BYTE v227[16]; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int128 v228; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _D3DCOLORVALUE v229; // [rsp+308h] [rbp+200h] BYREF
  _BYTE v230[48]; // [rsp+318h] [rbp+210h] BYREF
  float v231; // [rsp+348h] [rbp+240h]
  float v232; // [rsp+34Ch] [rbp+244h]
  float v233; // [rsp+358h] [rbp+250h] BYREF
  float v234; // [rsp+35Ch] [rbp+254h]
  float v235; // [rsp+360h] [rbp+258h]
  float v236; // [rsp+364h] [rbp+25Ch]
  float v237; // [rsp+368h] [rbp+260h]
  float v238; // [rsp+36Ch] [rbp+264h]
  float v239; // [rsp+370h] [rbp+268h]
  float v240; // [rsp+374h] [rbp+26Ch]
  _QWORD v241[4]; // [rsp+378h] [rbp+270h]

  v6 = this;
  v7 = 1;
  v199 = a5;
  v179 = 0;
  v10 = 0;
  v11 = *(_QWORD *)a2;
  v189 = this;
  v12 = *(__int64 (__fastcall **)())(v11 + 120);
  if ( v12 == CPrimitiveGroup::GetBounds )
    v224 = *(_OWORD *)((char *)a2 + 68);
  else
    ((void (__fastcall *)(struct CPrimitiveGroup *, _QWORD, _QWORD, __int128 *))v12)(a2, 0LL, 0LL, &v224);
  if ( *((_BYTE *)v6 + 2616) || *((_DWORD *)v6 + 1447) )
  {
    v200 = _xmm;
    v176 = CDrawingContext::DrawSolidRectangle(v6);
    v18 = v176;
    if ( v176 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v176, 0x9DAu);
    goto LABEL_311;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 18LL, *((unsigned int *)v6 + 1446));
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v228 = v224;
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)v6 + 456));
    CBaseMatrix::Transform2DBounds(TopByReference, (const struct MilRectF *)&v228, (struct MilRectF *)&v219);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v14, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v15, v16, v220, v221);
  }
  if ( a4 )
  {
    v10 = *((_DWORD *)a2 + 105);
    v7 = *((_BYTE *)a2 + 424);
    v214 = *(_OWORD *)((char *)a2 + 404);
    v179 = v10;
  }
  v17 = *((_DWORD *)v6 + 646);
  if ( !v17 )
  {
    v18 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x9F8u);
    goto LABEL_311;
  }
  v20 = *(float *)(*((_QWORD *)v6 + 325) + 4LL * (unsigned int)(v17 - 1));
  v188 = v20;
  if ( !v10 )
    goto LABEL_56;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v21 = 0LL;
    v179 = 0;
    goto LABEL_57;
  }
  if ( v7 )
  {
LABEL_56:
    v21 = 0LL;
  }
  else
  {
    CBaseMatrixStack::Top((CDrawingContext *)((char *)v6 + 456), (struct CBaseMatrix *)v230);
    if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)v230) )
    {
      if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v230) )
      {
        v22 = &v210;
        v23 = 4;
        v24 = 1;
        v210 = v231 + *(float *)&v214;
        v211 = *((float *)&v214 + 1) + v232;
        v212 = *((float *)&v214 + 2) + v231;
        v213 = *((float *)&v214 + 3) + v232;
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)v230,
          (const struct MilRectF *)&v214,
          (struct MilPoint2F *const)&v233);
        v24 = 0;
        v22 = &v233;
        v23 = 8;
      }
      for ( i = 0; i < v23; ++i )
        ++v22;
      if ( !v24 )
      {
        v26 = v235;
        if ( v233 <= v235 )
          v27 = v233;
        else
          v27 = v235;
        v28 = v234;
        if ( v234 > v236 )
          v28 = v236;
        if ( v235 <= v233 )
          v26 = v233;
        v29 = v234;
        if ( v236 > v234 )
          v29 = v236;
        if ( v27 > v237 )
          v27 = v237;
        if ( v28 > v238 )
          v28 = v238;
        if ( v237 > v26 )
          v26 = v237;
        if ( v238 > v29 )
          v29 = v238;
        if ( v27 > v239 )
          v27 = v239;
        if ( v28 > v240 )
          v28 = v240;
        if ( v239 > v26 )
          v26 = v239;
        if ( v240 > v29 )
          v29 = v240;
        v210 = v27;
        v211 = v28;
        v212 = v26;
        v213 = v29;
      }
      CScopedClipStack::GetTopClipBoundsInScope((char *)v6 + 680, v227);
      DoesContain = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)&v210, (__int64)v227);
      v21 = 0LL;
      if ( !DoesContain )
        v10 = 0;
      v179 = v10;
    }
    else
    {
      v21 = 0LL;
      v179 = 0;
    }
  }
LABEL_57:
  v31 = *((_DWORD *)v6 + 114);
  if ( v31 )
  {
    v34 = (unsigned int)(v31 - 1);
    v35 = *((_QWORD *)v6 + 59);
    v34 <<= 6;
    v36 = *(_OWORD *)(v34 + v35 + 16);
    v215 = *(_OWORD *)(v34 + v35);
    v32 = *(_OWORD *)(v34 + v35 + 32);
    v216 = v36;
    v33 = *(_OWORD *)(v34 + v35 + 48);
  }
  else
  {
    v215 = IdentityMatrix;
    v32 = xmmword_18019E9D0;
    v216 = xmmword_18019E9C0;
    v33 = xmmword_18019E9E0;
  }
  v37 = *((_QWORD *)v6 + 695);
  v38 = 0LL;
  v39 = *((_QWORD *)v6 + 44);
  v18 = -2003292412;
  v218 = v33;
  v40 = D2D1_ANTIALIAS_MODE_ALIASED;
  v217 = v32;
  v182 = 0LL;
  if ( *(_BYTE *)(v37 + 32) )
  {
    v41 = (char *)a3 + 432;
  }
  else
  {
    v47 = (_QWORD *)*((_QWORD *)a3 + 52);
    if ( v47 == (_QWORD *)((char *)a3 + 416) )
      goto LABEL_91;
    while ( 1 )
    {
      v41 = (char *)(v47 - 33);
      if ( v47[4] == v37 )
        break;
      v47 = (_QWORD *)*v47;
      if ( v47 == (_QWORD *)((char *)a3 + 416) )
        goto LABEL_91;
    }
  }
  if ( !v41 )
    goto LABEL_91;
  v42 = v41 + 120;
  v18 = 0;
  v43 = *((_DWORD *)v41 + 36);
  v44 = 0;
  if ( v43 )
  {
    v45 = *(_QWORD *)v42;
    while ( *(_QWORD *)(v45 + 16LL * v44 + 8) != v39 )
    {
      if ( ++v44 >= v43 )
        goto LABEL_67;
    }
    v38 = *(struct CHWDrawListCache **)(v45 + 16LL * v44);
  }
  else
  {
LABEL_67:
    v38 = 0LL;
  }
  v191 = 0LL;
  if ( !v38 )
  {
    v46 = CHWDrawListCache::Create(&v191);
    v38 = v191;
    v18 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x1B5u);
LABEL_85:
      if ( v38 )
        (*(void (__fastcall **)(struct CHWDrawListCache *))(*(_QWORD *)v38 + 8LL))(v38);
      v38 = 0LL;
      goto LABEL_88;
    }
    v48 = *((unsigned int *)v42 + 6);
    *((_QWORD *)&v194 + 1) = v39;
    *(_QWORD *)&v194 = v191;
    v49 = v48 + 1;
    if ( (int)v48 + 1 < (unsigned int)v48 )
    {
      v50 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v18 = -2147024362;
LABEL_84:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x1BAu);
      goto LABEL_85;
    }
    v18 = 0;
    if ( v49 > *((_DWORD *)v42 + 5) )
    {
      v51 = DynArrayImpl<0>::AddMultipleAndSet(v42, 16LL, 1LL, &v194);
      v50 = v51;
      if ( v51 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0xC0u);
      v18 = v50;
      if ( v50 < 0 )
        goto LABEL_84;
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v42 + 16 * v48) = v194;
      *((_DWORD *)v42 + 6) = v49;
    }
  }
  v182 = v38;
LABEL_88:
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x91u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x4E3u);
  }
  v21 = 0LL;
  v40 = D2D1_ANTIALIAS_MODE_ALIASED;
LABEL_91:
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xA30u);
    goto LABEL_311;
  }
  v18 = 0;
  if ( !*((_QWORD *)a2 + 17) )
  {
    NewGenerator = CPrimitiveGroup::CreateNewGenerator(a2, (struct CPrimitiveGroupDrawListGenerator **)a2 + 17);
    v18 = NewGenerator;
    if ( NewGenerator < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, NewGenerator, 0x1E6u);
    v21 = 0LL;
  }
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xA37u);
    goto LABEL_311;
  }
  if ( CCommonRegistryData::m_fDisableDrawListCaching )
    goto LABEL_126;
  v53 = *((_QWORD *)v38 + 4);
  if ( !v53 )
    goto LABEL_126;
  v54 = *((_DWORD *)v6 + 62);
  if ( *((_DWORD *)v38 + 10) != (v54 != 0) )
    goto LABEL_126;
  if ( v54
    || !*(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)v6 + 176) - 1) + *((_QWORD *)v6 + 85))
    || (v55 = *((_DWORD *)v6 + 176)) != 0
    && *(_DWORD *)(76LL * (unsigned int)(v55 - 1) + *((_QWORD *)v6 + 85) + 8)
    && *(_BYTE *)(104LL * (unsigned int)(*((_DWORD *)v6 + 374) - 1) + *((_QWORD *)v6 + 184) + 96)
    && (unsigned int)CBaseMatrix::Is2DAffine(
                       (CBaseMatrix *)(*((_QWORD *)v6 + 85) + 12LL + 76LL * (unsigned int)(*((_DWORD *)v6 + 176) - 1)),
                       1)
    && ((v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v56[1]) & _xmm), v57 < 0.00012207031)
     && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v56[4]) & _xmm) < 0.00012207031
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v56) & _xmm) < 0.00012207031
     && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v56[5]) & _xmm) < 0.00012207031) )
  {
    v58 = (char)v21;
  }
  else
  {
    v58 = 1;
  }
  if ( *((_BYTE *)v38 + 62) != v58 )
    goto LABEL_126;
  v59 = *((_QWORD *)v6 + 695);
  if ( *(_BYTE *)(v59 + 32) )
  {
    v21 = (char *)a3 + 432;
  }
  else
  {
    v60 = (_QWORD *)*((_QWORD *)a3 + 52);
    if ( v60 != (_QWORD *)((char *)a3 + 416) )
    {
      while ( v60[4] != v59 )
      {
        v60 = (_QWORD *)*v60;
        if ( v60 == (_QWORD *)((char *)a3 + 416) )
          goto LABEL_122;
      }
      v21 = (char *)(v60 - 33);
    }
  }
LABEL_122:
  if ( v53 < *((_QWORD *)v21 + 31)
    && (*((_BYTE *)v38 + 61)
     || *(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)v6 + 176) - 1) + *((_QWORD *)v6 + 85))
     && (v61 = (CBaseMatrix *)*((_QWORD *)CVisual::FindTreeData(a3, *((const struct CVisualTree **)v6 + 695)) + 25),
         v223 = *(_OWORD *)((char *)v38 + 44),
         CScopedClipStack::IsCpuClippedInScope(
           (CDrawingContext *)((char *)v6 + 680),
           (const struct MilRectF *)&v223,
           v61))) )
  {
LABEL_126:
    v62 = *((_QWORD *)CVisual::FindTreeData(a3, *((const struct CVisualTree **)v6 + 695)) + 31);
    v63 = *((_QWORD *)a2 + 17);
    if ( *(_QWORD *)(v63 + 32) > v62 )
      v62 = *(_QWORD *)(v63 + 32);
    CpuClipShape::CpuClipShape((CpuClipShape *)&v225);
    if ( *(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)v6 + 176) - 1) + *((_QWORD *)v6 + 85)) )
    {
      TreeData = CVisual::FindTreeData(a3, *((const struct CVisualTree **)v6 + 695));
      v65 = CpuClipShape::Initialize(
              &v225,
              (CDrawingContext *)((char *)v6 + 680),
              *((const struct CMILMatrix **)TreeData + 25));
      v18 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0xA45u);
LABEL_131:
        CpuClipShape::~CpuClipShape((CpuClipShape *)&v225);
        goto LABEL_311;
      }
    }
    v66 = 0;
    if ( !*((_DWORD *)v6 + 62) )
      v40 = D2D1_ANTIALIAS_MODE_PER_PRIMITIVE;
    v67 = CDrawingContext::UseAntialiasingForCpuClipping(v6);
    updated = CPrimitiveGroupDrawListGenerator::UpdateHWDrawListCache(
                *((CPrimitiveGroupDrawListGenerator **)a2 + 17),
                v62,
                (CDrawingContext *)((char *)v6 + 3360),
                v40,
                (const struct CMILMatrix *)&v215,
                v225,
                v67,
                v182);
    v18 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xA50u);
      goto LABEL_131;
    }
    CpuClipShape::ReleaseShape((CpuClipShape *)&v225);
    CRectangleShape::~CRectangleShape((CRectangleShape *)v226);
    v38 = v182;
  }
  else
  {
    v66 = 0;
  }
  if ( *(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)v6 + 176) - 1) + *((_QWORD *)v6 + 85)) && *((_BYTE *)v38 + 60) )
  {
    v69 = CDrawingContext::ApplyRenderStateInternal(v6, 1);
    v18 = v69;
    if ( v69 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0xA58u);
      goto LABEL_311;
    }
  }
  else
  {
    v70 = CDrawingContext::ApplyRenderStateInternal(v6, 0);
    v18 = v70;
    if ( v70 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, 0xA5Cu);
      goto LABEL_311;
    }
  }
  switch ( *((_DWORD *)v6 + 61) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      v178 = 0;
      break;
    default:
      v178 = 1;
      break;
  }
  v71 = *((_QWORD *)v6 + 47);
  v72 = *((_DWORD *)v6 + 63);
  v18 = 0;
  LODWORD(v184) = v72;
  v181 = v71;
  if ( v20 <= 0.0 )
    goto LABEL_306;
  v73 = 0;
  v180 = 0;
  if ( *((_BYTE *)v38 + 63) )
  {
    v74 = 0;
    if ( *((_DWORD *)v38 + 6) )
    {
      do
      {
        v75 = *((_QWORD *)v38 + 2);
        v76 = 48LL * v74;
        v77 = *(_QWORD *)(v76 + v75 + 32);
        if ( v77 && *(_QWORD *)(v76 + v75) )
        {
          *(struct _D3DCOLORVALUE *)&v229.r = *(struct _D3DCOLORVALUE *)(v77 + 96);
          v80 = *(__m128 *)&Premultiply(&v202, &v229)->r;
          v81 = Premultiply(&v201, (const struct _D3DCOLORVALUE *)(v79 + v78 + 16));
          v83 = *(CDrawListPrimitive **)(v82 + 16);
          v84 = *(__m128 *)&v81->r;
          v85 = *(__m128 *)&v81->r;
          v193.r = COERCE_FLOAT(*(_OWORD *)&v81->r) * v80.m128_f32[0];
          v193.g = _mm_shuffle_ps(v84, v84, 85).m128_f32[0] * _mm_shuffle_ps(v80, v80, 85).m128_f32[0];
          v193.b = _mm_shuffle_ps(v85, v84, 170).m128_f32[0] * _mm_shuffle_ps(v80, v80, 170).m128_f32[0];
          v193.a = _mm_shuffle_ps(v84, v84, 255).m128_f32[0] * _mm_shuffle_ps(v80, v80, 255).m128_f32[0];
          CDrawListPrimitive::UpdatePremultipliedColor(v83, &v193);
        }
        ++v74;
      }
      while ( v74 < *((_DWORD *)v38 + 6) );
      v73 = 0;
      v72 = v184;
    }
  }
  if ( v20 == 1.0 )
  {
    if ( !v72 )
      v73 = 1;
    v180 = v73;
  }
  if ( !*((_DWORD *)v38 + 6) )
    goto LABEL_306;
  while ( 1 )
  {
    v86 = (_BYTE *)(*((_QWORD *)v38 + 2) + 48LL * v66);
    v87 = *(unsigned int **)(*(_QWORD *)v86 + 16LL);
    v88 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 184LL))(v71);
    v89 = (__m128)v87[5];
    v90 = v88;
    v192 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v91 = 0LL;
    v92 = *(_DWORD *)(v90 + 192);
    v241[0] = _mm_unpacklo_ps((__m128)v87[4], v89).m128_u64[0];
    v93 = _mm_unpacklo_ps((__m128)v87[6], v89).m128_u64[0];
    v94 = (__m128)v87[7];
    v241[1] = v93;
    v241[2] = _mm_unpacklo_ps((__m128)v87[4], v94).m128_u64[0];
    v241[3] = _mm_unpacklo_ps((__m128)v87[6], v94).m128_u64[0];
    if ( v92 )
      v91 = *(_QWORD *)(*(_QWORD *)(v90 + 168) + 8LL * (unsigned int)(v92 - 1));
    v95 = *(_DWORD *)(v91 + 76) == 1;
    v187 = *(_OWORD *)(v91 + 60);
    if ( v95 )
    {
      v96 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v187 - 0.5);
      v195 = v96;
      v97 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v187 + 1) - 0.5);
      v196 = v97;
      v98 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v187 + 2) - 0.5);
      v197 = v98;
      v99 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v187 + 3) - 0.5);
      v198 = v99;
    }
    else
    {
      v99 = *((float *)&v187 + 3);
      v98 = *((float *)&v187 + 2);
      v97 = *((float *)&v187 + 1);
      v96 = *(float *)&v187;
    }
    v100 = *((float *)&v192 + 3);
    v101 = 0;
    v102 = *((float *)&v192 + 2);
    v103 = 0LL;
    v104 = *((float *)&v192 + 1);
    v105 = *(float *)&v192;
    do
    {
      v106 = *(float *)&v241[v103];
      v107 = (float)((float)(*(float *)&v215 * v106) + (float)(*((float *)&v241[v103] + 1) * *(float *)&v216))
           + *(float *)&v218;
      v108 = (float)((float)(*((float *)&v241[v103] + 1) * *((float *)&v216 + 1)) + (float)(v106 * *((float *)&v215 + 1)))
           + *((float *)&v218 + 1);
      v109 = (float)((float)(*((float *)&v241[v103] + 1) * *((float *)&v216 + 3)) + (float)(v106 * *((float *)&v215 + 3)))
           + *((float *)&v218 + 3);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v109) & _xmm) >= 0.00012207031
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v109 - 1.0)) & _xmm) >= 0.00012207031 )
      {
        v107 = v107 / v109;
        v108 = v108 / v109;
      }
      if ( v100 <= v108 )
        v100 = v108;
      if ( v102 <= v107 )
        v102 = v107;
      if ( v108 <= v104 )
        v104 = v108;
      if ( v107 <= v105 )
        v105 = v107;
      v103 = ++v101;
    }
    while ( (unsigned __int64)v101 < 4 );
    if ( v98 <= v105 || v99 <= v104 || v102 <= v96 || v100 <= v97 )
      goto LABEL_300;
    v110 = v184;
    if ( v86[40] && v180 )
      v110 = 1;
    v111 = *(_QWORD *)v86;
    v112 = *(_QWORD *)v86 + 28LL;
    if ( !*(_DWORD *)(*(_QWORD *)v86 + 144LL) )
    {
      if ( v110 )
      {
        v113 = v110 - 1;
        if ( !v113 )
        {
          v115 = 5;
          goto LABEL_194;
        }
        v114 = v113 - 1;
        if ( !v114 )
        {
          v115 = 21;
          goto LABEL_194;
        }
        if ( v114 == 2 )
        {
          v115 = 22;
LABEL_194:
          v116 = v216;
          *(_OWORD *)(v111 + 76) = v215;
          *(_DWORD *)(v111 + 24) = v115;
          v117 = v217;
          *(_OWORD *)(v111 + 92) = v116;
          v118 = v218;
          *(_OWORD *)(v111 + 108) = v117;
          *(float *)(v111 + 140) = v188;
          *(_OWORD *)(v111 + 124) = v118;
          (*(void (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)v112 + 8LL))(v112, v86 + 8, v178, v115);
          goto LABEL_196;
        }
      }
      v115 = 0;
      goto LABEL_194;
    }
    (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v112 + 16LL))(*(_QWORD *)v86 + 28LL, v86 + 8, v178);
LABEL_196:
    if ( v86[42] )
    {
      v119 = *(void (__fastcall **)(__int64, CDrawingContext *, __int128 *))(*(_QWORD *)v112 + 40LL);
      v222 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)v86 + 16LL) + 16LL);
      v119(v112, v6, &v222);
    }
    if ( !v86[41] || !v180 )
      break;
    v120 = *(_QWORD *)v86;
    v121 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v181 + 184LL))(v181);
    v123 = v121;
    if ( *(_QWORD *)(v121 + 336) )
      CD2DContext::FlushDrawList((struct ID2D1PrivateCompositorRenderer **)v121);
    if ( !*(_BYTE *)(v123 + 376) )
    {
      v124 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v122, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v123 + 40) + 384LL))(*(_QWORD *)(v123 + 40));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v125, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( j = 0; j < *(_DWORD *)(v123 + 192); v124 = v127 )
      {
        v127 = *(CD2DTarget **)(*(_QWORD *)(v123 + 168) + 8LL * j);
        if ( v124 )
          *((_BYTE *)v124 + 48) = 0;
        CD2DTarget::ApplyState(v127, (struct CD2DContext *)v123);
        ++j;
      }
      *(_BYTE *)(v123 + 376) = 1;
    }
    *(_BYTE *)(v123 + 377) = 1;
    v128 = CD2DContext::EnsureHwCallbackRenderer((CD2DContext *)v123);
    v18 = v128;
    if ( v128 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v128, 0x1E7u);
      goto LABEL_242;
    }
    v129 = *(_QWORD *)(v123 + 296);
    v185 = v120;
    v130 = *(_DWORD *)(v129 + 56);
    v131 = v130 + 1;
    if ( v130 + 1 >= v130 )
    {
      v18 = 0;
      if ( v131 <= *(_DWORD *)(v129 + 52) )
      {
        *(_QWORD *)(*(_QWORD *)(v129 + 32) + 8LL * *(unsigned int *)(v129 + 56)) = v185;
        *(_DWORD *)(v129 + 56) = v131;
LABEL_218:
        _InterlockedIncrement((volatile signed __int32 *)(v185 + 8));
        ++*(_DWORD *)(v185 + 144);
        goto LABEL_219;
      }
      v132 = DynArrayImpl<0>::AddMultipleAndSet(v129 + 32, 8LL, 1LL, &v185);
      v18 = v132;
      if ( v132 >= 0 )
        goto LABEL_218;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v132, 0xC0u);
    }
    else
    {
      v18 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x8Eu);
LABEL_219:
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x78u);
      goto LABEL_240;
    }
    if ( CCommonRegistryData::m_fEnableMegaRects )
    {
      if ( (unsigned int)CBaseMatrix::Is2DAffine((CBaseMatrix *)(v120 + 76), 1)
        && ((v134 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v120 + 80)) & _xmm), v134 < 0.00012207031)
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v120 + 92)) & _xmm) < 0.00012207031
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v120 + 76)) & _xmm) < 0.00012207031
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v120 + 96)) & _xmm) < 0.00012207031) )
      {
        v135 = v133;
      }
      else
      {
        v135 = 0;
      }
      if ( v135 )
      {
        *(_QWORD *)&v208[0] = 0LL;
        memset_0((char *)v208 + 8, 0, 0x80uLL);
        v136 = *(_OWORD *)(v120 + 76);
        v137 = *(CMILRefCountBase **)(v120 + 16);
        v138 = *(_OWORD *)(v120 + 92);
        v203[0] = (CMILRefCountBase *)v120;
        v204 = v136;
        v139 = *(_OWORD *)(v120 + 108);
        v203[1] = v137;
        v205 = v138;
        v140 = *(_OWORD *)(v120 + 124);
        v206 = v139;
        v207 = v140;
        _InterlockedIncrement((volatile signed __int32 *)(v120 + 8));
        (**(void (__fastcall ***)(CMILRefCountBase *))v203[1])(v203[1]);
        v141 = *(unsigned int *)(v129 + 144);
        v142 = v141 + 1;
        if ( (int)v141 + 1 < (unsigned int)v141 )
        {
          v18 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          goto LABEL_247;
        }
        v18 = 0;
        if ( v142 <= *(_DWORD *)(v129 + 140) )
        {
          v143 = (_OWORD *)(*(_QWORD *)(v129 + 120) + 216 * v141);
          *v143 = *(_OWORD *)v203;
          v143[1] = v204;
          v143[2] = v205;
          v143[3] = v206;
          v143[4] = v207;
          v143[5] = v208[0];
          v143[6] = v208[1];
          v143 += 8;
          *(v143 - 1) = v208[2];
          *v143 = v208[3];
          v143[1] = v208[4];
          v143[2] = v208[5];
          v143[3] = v208[6];
          v143[4] = v208[7];
          *((_QWORD *)v143 + 10) = v209;
          *(_DWORD *)(v129 + 144) = v142;
          goto LABEL_237;
        }
        v190 = v203;
        v18 = DynArrayImpl<0>::Grow((int)v129 + 120, 216, 1, 0, (__int64)&v190);
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
LABEL_247:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x135u);
          if ( v203[0] )
            CMILRefCountBase::Release(v203[0]);
          if ( v203[1] )
            (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v203[1] + 8LL))(v203[1]);
        }
        else
        {
          v144 = v190;
          v145 = (_OWORD *)(*(_QWORD *)(v129 + 120) + (unsigned int)(216 * *(_DWORD *)(v129 + 144)));
          *v145 = *(_OWORD *)v190;
          v145[1] = *((_OWORD *)v144 + 1);
          v145[2] = *((_OWORD *)v144 + 2);
          v145[3] = *((_OWORD *)v144 + 3);
          v145[4] = *((_OWORD *)v144 + 4);
          v145[5] = *((_OWORD *)v144 + 5);
          v145[6] = *((_OWORD *)v144 + 6);
          v145 += 8;
          v146 = *((_OWORD *)v144 + 7);
          v144 += 16;
          *(v145 - 1) = v146;
          *v145 = *(_OWORD *)v144;
          v145[1] = *((_OWORD *)v144 + 1);
          v145[2] = *((_OWORD *)v144 + 2);
          v145[3] = *((_OWORD *)v144 + 3);
          v145[4] = *((_OWORD *)v144 + 4);
          *((_QWORD *)v145 + 10) = v144[10];
          ++*(_DWORD *)(v129 + 144);
LABEL_237:
          *(_OWORD *)v203 = 0LL;
        }
        if ( v18 >= 0 )
          goto LABEL_299;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x7Du);
      }
    }
LABEL_240:
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1EBu);
LABEL_242:
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xFFu);
        goto LABEL_306;
      }
    }
LABEL_299:
    v71 = v181;
LABEL_300:
    v38 = v182;
    if ( ++v66 >= *((_DWORD *)v182 + 6) )
      goto LABEL_306;
  }
  v147 = *(_QWORD *)v86;
  v148 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v181 + 184LL))(v181);
  v150 = v148;
  if ( *(_QWORD *)(v148 + 336) )
    CD2DContext::FlushDrawList((struct ID2D1PrivateCompositorRenderer **)v148);
  if ( !*(_BYTE *)(v150 + 376) )
  {
    v151 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v149, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v150 + 40) + 384LL))(*(_QWORD *)(v150 + 40));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v152, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( k = 0; k < *(_DWORD *)(v150 + 192); v151 = v154 )
    {
      v154 = *(CD2DTarget **)(*(_QWORD *)(v150 + 168) + 8LL * k);
      if ( v151 )
        *((_BYTE *)v151 + 48) = 0;
      CD2DTarget::ApplyState(v154, (struct CD2DContext *)v150);
      ++k;
    }
    *(_BYTE *)(v150 + 376) = 1;
  }
  *(_BYTE *)(v150 + 377) = 1;
  v18 = 0;
  v183 = 0LL;
  if ( !*(_QWORD *)(v150 + 296) )
  {
    if ( !*(_QWORD *)(v150 + 280) )
    {
      v155 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v150 + 184LL))(v150);
      v157 = CD3DIndexBuffer::Create(v155, v156, (struct CD3DIndexBuffer **)(v150 + 280));
      v18 = v157;
      if ( v157 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v157, 0x21Bu);
        goto LABEL_287;
      }
    }
    if ( !*(_QWORD *)(v150 + 272) )
    {
      v158 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v150 + 184LL))(v150);
      v161 = CD3DVertexBuffer<CVertexXYWColorDUV2>::Create(v158, v159, v160, v150 + 272);
      v18 = v161;
      if ( v161 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v161, 0x225u);
        goto LABEL_287;
      }
    }
    if ( !*(_DWORD *)(v150 + 328) )
    {
      v162 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v150 + 184LL))(v150);
      v163 = CHWCallbackRenderer::Create(v162, *(_QWORD *)(v150 + 272), *(_QWORD *)(v150 + 280), &v183);
      v18 = v163;
      if ( v163 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v163, 0x22Fu);
        goto LABEL_287;
      }
      v164 = *(_DWORD *)(v150 + 328);
      v165 = v164 + 1;
      if ( v164 + 1 < v164 )
      {
        v166 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v18 = -2147024362;
LABEL_283:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v166, 0x231u);
        goto LABEL_287;
      }
      v18 = 0;
      if ( v165 > *(_DWORD *)(v150 + 324) )
      {
        v169 = DynArrayImpl<0>::AddMultipleAndSet(v150 + 304, 8LL, 1LL, &v183);
        v166 = v169;
        if ( v169 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v169, 0xC0u);
        v18 = v166;
        if ( v166 < 0 )
          goto LABEL_283;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v150 + 304) + 8LL * *(unsigned int *)(v150 + 328)) = v183;
        *(_DWORD *)(v150 + 328) = v165;
      }
      v183 = 0LL;
    }
    v167 = (unsigned int)(*(_DWORD *)(v150 + 328) - 1);
    *(_QWORD *)(v150 + 296) = *(_QWORD *)(*(_QWORD *)(v150 + 304) + 8 * v167);
    v168 = *(_DWORD *)(v150 + 328);
    if ( (unsigned int)v167 < v168 )
    {
      v170 = *(_QWORD *)(v150 + 304);
      if ( (unsigned int)v167 < v168 - 1 )
      {
        do
        {
          v171 = (unsigned int)v167;
          LODWORD(v167) = v167 + 1;
          *(_QWORD *)(v170 + 8 * v171) = *(_QWORD *)(v170 + 8LL * (unsigned int)v167);
        }
        while ( (unsigned int)v167 < *(_DWORD *)(v150 + 328) - 1 );
      }
      --*(_DWORD *)(v150 + 328);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
    }
LABEL_287:
    if ( v183 )
      CMILRefCountBase::Release((CMILRefCountBase *)(v183 + 8));
  }
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x203u);
    goto LABEL_305;
  }
  v172 = *(_QWORD *)(v150 + 296);
  v186 = v147;
  v173 = *(_DWORD *)(v172 + 56);
  v174 = v173 + 1;
  if ( v173 + 1 < v173 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_304;
  }
  v18 = 0;
  if ( v174 <= *(_DWORD *)(v172 + 52) )
  {
    *(_QWORD *)(*(_QWORD *)(v172 + 32) + 8LL * *(unsigned int *)(v172 + 56)) = v186;
    *(_DWORD *)(v172 + 56) = v174;
    goto LABEL_295;
  }
  v175 = DynArrayImpl<0>::AddMultipleAndSet(v172 + 32, 8LL, 1LL, &v186);
  v18 = v175;
  if ( v175 >= 0 )
  {
LABEL_295:
    _InterlockedIncrement((volatile signed __int32 *)(v186 + 8));
    ++*(_DWORD *)(v186 + 144);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v175, 0xC0u);
LABEL_304:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x8Eu);
  }
  if ( v18 >= 0 )
  {
    v6 = v189;
    goto LABEL_299;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x207u);
LABEL_305:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x105u);
LABEL_306:
  if ( v18 >= 0 )
  {
    v19 = v199;
    v6 = v189;
    *v199 = v179;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xA65u);
    v6 = v189;
  }
LABEL_311:
  if ( !*((_BYTE *)v6 + 2616) && !*((_DWORD *)v6 + 1447) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v19, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 18LL, *((unsigned int *)v6 + 1446));
  return (unsigned int)v18;
}
