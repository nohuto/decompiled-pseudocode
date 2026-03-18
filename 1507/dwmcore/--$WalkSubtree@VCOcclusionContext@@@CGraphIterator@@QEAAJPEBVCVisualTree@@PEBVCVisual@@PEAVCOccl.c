/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCOverlayContext@@@Z @ 0x18001F420 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1800026A0 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180003A74 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012890 (-NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x18001FF00 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18003C7E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003FE30 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Add@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18004DDC0 (-Add@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAXXZ @ 0x180051BFC (-Optimize@-$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAXXZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800597D4 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180059FD0 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?BeginWalk@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@_N@Z @ 0x18005BE78 (-BeginWalk@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@_N@Z.c)
 *     ?UnregisterGraphWalkRoot@CGraphWalker@@SAXXZ @ 0x18005C018 (-UnregisterGraphWalkRoot@CGraphWalker@@SAXXZ.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18006E3A0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006E400 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ceilf_0 @ 0x180099B5A (ceilf_0.c)
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1800F7408 (-RemoveAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x1800F77B8 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     Template_dffffq @ 0x1800FAC5C (Template_dffffq.c)
 */

__int64 __fastcall CGraphIterator::WalkSubtree<COcclusionContext>(
        __int64 a1,
        struct CVisualTree *a2,
        __int64 a3,
        struct COcclusionContext *a4,
        int a5)
{
  COcclusionContext *v5; // rsi
  struct CVisualTree *v6; // rdi
  __int64 v7; // r12
  int v8; // eax
  int v9; // r13d
  _QWORD *v10; // r15
  float v11; // xmm8_4
  __int64 v12; // xmm9_8
  int (*v13)(CVisual *__hidden, const struct CVisualTree *); // rbx
  _QWORD *v14; // rax
  int v15; // eax
  int v16; // edx
  int v17; // r9d
  __int64 v18; // rbx
  unsigned int (__fastcall *v19)(CVisual *__hidden); // rdi
  __int64 v20; // r14
  void *v21; // rbx
  __int64 v22; // rax
  WPF *v23; // rcx
  unsigned int v24; // eax
  void (__fastcall *v25)(WPF::ProcessHeapImpl *, void *); // rdi
  _QWORD *v26; // rbx
  unsigned __int64 v27; // rsi
  struct IGraphNode *(__fastcall *v28)(CVisual *__hidden, unsigned int); // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r15
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r15
  __int64 v34; // rax
  struct COcclusionContext *v35; // r12
  char v36; // r14
  float *v37; // rcx
  float *v38; // r15
  float *v39; // rsi
  struct COcclusionInfo *v40; // rbx
  int v41; // edi
  void (__fastcall *v42)(CVisualOcclusionInfo *, int); // rsi
  int v43; // eax
  __int64 v44; // rax
  unsigned int (__fastcall ***v45)(_QWORD); // rsi
  int v46; // edi
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rbx
  float v52; // xmm6_4
  float v53; // xmm0_4
  float v54; // xmm1_4
  bool (__fastcall *v55)(CVisual *__hidden); // rbx
  _QWORD *v56; // rbx
  bool (__fastcall *v57)(CPrimitiveGroup *__hidden); // rdi
  float *v58; // rbx
  unsigned int v59; // eax
  float v60; // xmm15_4
  float v61; // xmm2_4
  float v62; // xmm14_4
  float v63; // xmm1_4
  char v64; // al
  float v65; // xmm4_4
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int64 v72; // rdi
  __int64 (__fastcall *v73)(_QWORD, __int64); // rsi
  unsigned int v74; // r15d
  unsigned int v75; // r12d
  float v76; // xmm6_4
  float *v77; // r13
  float v78; // xmm7_4
  float v79; // xmm11_4
  float v80; // xmm8_4
  float v81; // xmm12_4
  float v82; // xmm13_4
  float v83; // xmm14_4
  float v84; // xmm15_4
  float v85; // xmm9_4
  float v86; // xmm10_4
  float *v87; // rax
  float v88; // xmm1_4
  float v89; // xmm5_4
  float v90; // xmm3_4
  unsigned int v91; // edx
  float v92; // xmm2_4
  char v93; // r8
  unsigned int i; // ecx
  unsigned int v95; // edi
  __int64 v96; // rbx
  float v97; // xmm0_4
  float v98; // xmm0_4
  float v99; // xmm0_4
  __int64 v100; // rbx
  __int64 v101; // rax
  unsigned int v102; // ecx
  __int64 v103; // rsi
  _QWORD *v104; // rbx
  struct IGraphNode *(__fastcall *v105)(CVisual *__hidden, unsigned int); // rdi
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // r15
  unsigned __int64 v109; // rcx
  unsigned __int64 v110; // r15
  struct CContentBounder *v111; // rsi
  __int64 (__fastcall *v112)(CVisual *__hidden, struct CContentBounder *, struct COcclusionContext *, struct COcclusionInfo *); // rdi
  __int64 v113; // rdi
  CRenderData *v114; // rdi
  __int64 (__fastcall *v115)(CPrimitiveGroup *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *); // rsi
  int v116; // eax
  __int64 v117; // rsi
  char *v118; // rdi
  __int64 v119; // r14
  int v120; // eax
  int v121; // eax
  int v122; // eax
  float v123; // xmm2_4
  float v124; // xmm1_4
  float v125; // xmm1_4
  float v126; // xmm7_4
  float v127; // xmm4_4
  float v128; // xmm1_4
  float v129; // xmm2_4
  float v130; // xmm1_4
  float v131; // xmm1_4
  float v132; // xmm1_4
  float v133; // xmm1_4
  float v134; // xmm1_4
  float v135; // xmm2_4
  float v136; // xmm5_4
  float v137; // xmm8_4
  unsigned __int64 *v138; // rax
  unsigned int v139; // edx
  char v140; // r8
  unsigned int j; // ecx
  float v142; // xmm4_4
  float v143; // xmm3_4
  float v144; // xmm1_4
  float v145; // xmm2_4
  int v146; // eax
  __int64 (__fastcall *v147)(_QWORD, __int64); // rdi
  unsigned int v148; // r13d
  float v149; // xmm8_4
  float v150; // xmm1_4
  float v151; // xmm7_4
  float v152; // xmm1_4
  float v153; // xmm6_4
  float v154; // xmm1_4
  float v155; // xmm2_4
  __int64 v156; // r15
  __int64 (__fastcall *v157)(__int64, _DWORD *, _QWORD); // r12
  int v158; // eax
  int v159; // eax
  int v160; // eax
  float *v161; // rax
  float v162; // xmm0_4
  float v163; // xmm5_4
  unsigned int v164; // edx
  char v165; // r8
  unsigned int k; // ecx
  float *v167; // rax
  float v168; // xmm5_4
  __int64 v169; // rcx
  float v170; // xmm6_4
  float v171; // xmm0_4
  float v172; // xmm0_4
  int v174; // edi
  float v175; // xmm3_4
  float v176; // xmm2_4
  float v177; // xmm4_4
  float v178; // xmm2_4
  char v179; // al
  float *v180; // rax
  _QWORD *v181; // rcx
  CVisualTreeData *v182; // rbx
  LPVOID (__fastcall *v183)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  CTreeData *v184; // rax
  _QWORD *v185; // rcx
  void (__fastcall *v186)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *); // rdi
  __int64 (__fastcall *v187)(_QWORD, __int64); // rsi
  char v188; // al
  unsigned int v189; // r12d
  int v190; // eax
  unsigned __int64 v191; // rax
  unsigned __int64 v192; // rsi
  __int64 v193; // rax
  CFilterEffect *v194; // rcx
  __int128 v195; // xmm1
  __int128 v196; // xmm0
  __int128 v197; // xmm1
  __int64 v198; // rcx
  float *v199; // r12
  __int64 *v200; // r14
  __int64 v201; // rcx
  __int64 v202; // rsi
  COverlayContext::OverlayPlaneInfo *v203; // rcx
  float v204; // xmm1_4
  float v205; // xmm1_4
  float v206; // xmm1_4
  float v207; // xmm2_4
  float v208; // xmm1_4
  float v209; // xmm1_4
  float v210; // xmm1_4
  void **v211; // [rsp+28h] [rbp-E0h]
  unsigned int v212; // [rsp+28h] [rbp-E0h]
  int v213; // [rsp+48h] [rbp-C0h]
  float v214; // [rsp+48h] [rbp-C0h]
  int v215; // [rsp+48h] [rbp-C0h]
  float v216; // [rsp+4Ch] [rbp-BCh]
  float v217; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v218; // [rsp+58h] [rbp-B0h]
  float v219; // [rsp+60h] [rbp-A8h]
  float v220; // [rsp+64h] [rbp-A4h]
  bool v221[8]; // [rsp+68h] [rbp-A0h] BYREF
  float *v222; // [rsp+70h] [rbp-98h]
  float *v223; // [rsp+78h] [rbp-90h]
  unsigned __int64 p_rcSrc1; // [rsp+80h] [rbp-88h] BYREF
  struct COcclusionContext *v225; // [rsp+88h] [rbp-80h]
  __int64 v226; // [rsp+90h] [rbp-78h]
  struct CVisualTree *v227; // [rsp+98h] [rbp-70h]
  float *v228; // [rsp+A0h] [rbp-68h]
  struct IGraphNode *v229; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v230; // [rsp+B0h] [rbp-58h]
  float v231; // [rsp+C0h] [rbp-48h] BYREF
  float v232; // [rsp+C4h] [rbp-44h]
  float v233; // [rsp+C8h] [rbp-40h]
  float v234; // [rsp+CCh] [rbp-3Ch]
  __int128 v235; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v236; // [rsp+E0h] [rbp-28h] BYREF
  float v237; // [rsp+F0h] [rbp-18h]
  float v238; // [rsp+F4h] [rbp-14h]
  unsigned __int64 v239; // [rsp+F8h] [rbp-10h] BYREF
  float v240; // [rsp+100h] [rbp-8h]
  float v241; // [rsp+104h] [rbp-4h]
  __int128 v242; // [rsp+108h] [rbp+0h] BYREF
  __int128 v243; // [rsp+118h] [rbp+10h]
  __int128 v244; // [rsp+128h] [rbp+20h]
  __int128 v245; // [rsp+138h] [rbp+30h]
  RECT rcSrc1; // [rsp+148h] [rbp+40h] BYREF
  _DWORD v247[4]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v248; // [rsp+168h] [rbp+60h] BYREF
  _DWORD v249[4]; // [rsp+178h] [rbp+70h] BYREF
  _OWORD v250[4]; // [rsp+188h] [rbp+80h] BYREF
  struct tagRECT rcDst; // [rsp+1C8h] [rbp+C0h] BYREF
  float *v252; // [rsp+1D8h] [rbp+D0h] BYREF
  float v253; // [rsp+1E0h] [rbp+D8h]
  float v254; // [rsp+1E4h] [rbp+DCh]
  float v255; // [rsp+1E8h] [rbp+E0h]
  float v256; // [rsp+1ECh] [rbp+E4h]
  float v257; // [rsp+1F0h] [rbp+E8h]
  float v258; // [rsp+1F4h] [rbp+ECh]
  float v259; // [rsp+1F8h] [rbp+F0h] BYREF
  char v260; // [rsp+1FCh] [rbp+F4h] BYREF

  v5 = a4;
  v6 = a2;
  v225 = a4;
  v7 = a1;
  v227 = a2;
  v226 = a1;
  if ( a3 )
    v229 = (struct IGraphNode *)(a3 + 64);
  else
    v229 = 0LL;
  *(_QWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 72) = a5;
  v8 = CGraphWalker::BeginWalk((CGraphWalker *)a1, &v229, 1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *(_QWORD **)(v7 + 8);
    v11 = FLOAT_1_0;
    v12 = _xmm;
    *(float *)&v223 = v234;
    v216 = v231;
    v220 = v241;
    v219 = v240;
    v218 = v239;
    v217 = v233;
    *(float *)&v222 = v232;
    while ( 1 )
    {
      v13 = *(int (**)(CVisual *__hidden, const struct CVisualTree *))(*v10 + 16LL);
      if ( v13 != CVisual::VisitNode )
      {
        v9 = ((__int64 (__fastcall *)(_QWORD *, struct CVisualTree *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v13)(
               v10,
               v6,
               WPF::ProcessHeapImpl::Alloc);
        goto LABEL_9;
      }
      v9 = 0;
      if ( *((_BYTE *)v6 + 32) )
        break;
      v181 = (_QWORD *)v10[46];
      if ( v181 != v10 + 46 )
      {
        while ( 1 )
        {
          v14 = v181 - 33;
          if ( (struct CVisualTree *)v181[4] == v6 )
            break;
          v181 = (_QWORD *)*v181;
          if ( v181 == v10 + 46 )
            goto LABEL_340;
        }
LABEL_8:
        if ( v14 )
          goto LABEL_9;
      }
LABEL_340:
      v182 = (CVisualTreeData *)v10[82];
      if ( v182 )
      {
        v10[82] = 0LL;
LABEL_345:
        v186 = *(void (__fastcall **)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *))(*(_QWORD *)v182 + 8LL);
        if ( v186 == CVisualTreeData::Initialize )
        {
          v6 = v227;
          CVisualTreeData::Initialize(v182, v227, (struct CVisual *)(v10 - 8));
        }
        else
        {
          v186(v182, v227, (struct CVisual *)(v10 - 8));
          v6 = v227;
        }
        goto LABEL_9;
      }
      v183 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v183 == WPF::ProcessHeapImpl::Alloc )
        v184 = (CTreeData *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x130uLL);
      else
        v184 = (CTreeData *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v183)(
                              WPF::g_pProcessHeap,
                              304LL,
                              WPF::ProcessHeapImpl::Alloc);
      v182 = v184;
      if ( v184 )
      {
        CTreeData::CTreeData(v184);
        v185[37] = 0LL;
        *v185 = &CVisualTreeData::`vftable';
        goto LABEL_345;
      }
      v9 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xF26u);
      v6 = v227;
LABEL_9:
      if ( v9 < 0 )
      {
        v212 = 103;
        goto LABEL_452;
      }
      v15 = COcclusionContext::PreSubgraph(v5, v6, v221);
      v9 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x69u);
        goto LABEL_292;
      }
      if ( v221[0] )
      {
        v18 = *(_QWORD *)(v7 + 8);
        v10 = 0LL;
        v19 = **(unsigned int (__fastcall ***)(CVisual *__hidden))v18;
        if ( v19 == CVisual::GetChildrenCount )
        {
          v20 = *(_QWORD *)(v18 + 8);
          if ( (v20 & 2) != 0 )
            v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v20) = v20 & 1;
        }
        else
        {
          LODWORD(v20) = v19(*(CVisual **)(v7 + 8));
        }
        if ( !(_DWORD)v20 )
        {
          v9 = 1;
          goto LABEL_38;
        }
        v21 = 0LL;
        v22 = *(unsigned int *)(v7 + 36);
        v9 = 0;
        *(_QWORD *)&v230 = *(_QWORD *)(v7 + 16);
        v23 = (WPF *)*(unsigned int *)(v7 + 24);
        DWORD2(v230) = *(_DWORD *)(v7 + 24);
        p_rcSrc1 = 0LL;
        if ( *(_DWORD *)(v7 + 32) != (_DWORD)v22 )
          goto LABEL_17;
        v189 = 2 * v22;
        if ( (unsigned __int64)(2 * v22) > 0xFFFFFFFF )
        {
          v9 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
          v7 = v226;
        }
        else
        {
          if ( v189 <= 0x40 )
            v189 = 64;
          v190 = WPF::HrMalloc(v23, 16LL, v189, (unsigned __int64)&p_rcSrc1, v211);
          v9 = v190;
          if ( v190 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v190, 0x54u);
            v21 = (void *)p_rcSrc1;
            v7 = v226;
          }
          else
          {
            v191 = 16LL * *(unsigned int *)(v226 + 32);
            if ( v191 <= 0xFFFFFFFF )
            {
              v9 = 0;
              v192 = p_rcSrc1;
              memcpy_0((void *)p_rcSrc1, *(const void **)(v226 + 48), (unsigned int)v191);
              (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                *(_QWORD *)(v226 + 48));
              v193 = v226;
              v21 = 0LL;
              *(_DWORD *)(v226 + 36) = v189;
              v7 = v193;
              *(_QWORD *)(v193 + 48) = v192;
LABEL_17:
              *(_OWORD *)(*(_QWORD *)(v7 + 48) + 16LL * (unsigned int)(*(_DWORD *)(v7 + 32))++) = v230;
              v24 = *(_DWORD *)(v7 + 56);
              if ( v24 <= *(_DWORD *)(v7 + 32) )
                v24 = *(_DWORD *)(v7 + 32);
              *(_DWORD *)(v7 + 56) = v24;
              goto LABEL_20;
            }
            v9 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
            v21 = (void *)p_rcSrc1;
            v7 = v226;
          }
        }
LABEL_20:
        v25 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v25 == WPF::ProcessHeapImpl::Free )
        {
          if ( v21 )
            HeapFree(g_hProcessHeap, 0, v21);
        }
        else
        {
          v25(WPF::g_pProcessHeap, v21);
        }
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x88u);
          v5 = v225;
        }
        else
        {
          if ( *(_DWORD *)(v7 + 28) == 1 )
            *(_DWORD *)(v7 + 24) = 0;
          else
            *(_DWORD *)(v7 + 24) = v20 - 1;
          v26 = *(_QWORD **)(v7 + 8);
          v27 = *(unsigned int *)(v7 + 24);
          v28 = *(struct IGraphNode *(__fastcall **)(CVisual *__hidden, unsigned int))(*v26 + 8LL);
          if ( v28 == CVisual::GetChildAt )
          {
            v29 = v26[1];
            if ( (v29 & 2) != 0 )
              v30 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v30 = v26[1] & 1LL;
            if ( v30 > v27 )
            {
              v31 = v26[1];
              if ( (v31 & 2) != 0 )
                v32 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCuLL);
              else
                v32 = v26[1] & 1LL;
              if ( v27 >= v32 )
                goto LABEL_407;
              v33 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
              if ( v32 != 1 )
                v33 = *(_QWORD *)(v33 + 8 * v27 + 16);
              if ( v33 )
                v10 = (_QWORD *)(v33 + 64);
              else
LABEL_407:
                v10 = 0LL;
            }
          }
          else
          {
            v10 = (_QWORD *)v28(*(CVisual **)(v7 + 8), v27);
          }
          v34 = *(_QWORD *)(v7 + 8);
          ++*(_DWORD *)(v7 + 4);
          v5 = v225;
          *(_QWORD *)(v7 + 16) = v34;
          *(_QWORD *)(v7 + 8) = v10;
        }
LABEL_38:
        if ( v9 < 0 )
        {
          v212 = 111;
LABEL_452:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v212);
          goto LABEL_292;
        }
        if ( !v10 )
          goto LABEL_66;
        v6 = v227;
      }
      else
      {
        while ( 2 )
        {
          v35 = v225;
          v9 = 0;
          v36 = 0;
          v37 = *(float **)(*((_QWORD *)v225 + 6) + 8LL);
          if ( v37 )
            v38 = v37 - 16;
          else
            v38 = 0LL;
          v228 = v38;
          if ( *((_BYTE *)v6 + 32) )
          {
            v39 = v38 + 112;
          }
          else
          {
            v37 = v38 + 108;
            v180 = (float *)*((_QWORD *)v38 + 54);
            if ( v180 == v38 + 108 )
              goto LABEL_56;
            while ( 1 )
            {
              v39 = v180 - 66;
              if ( *((struct CVisualTree **)v180 + 4) == v6 )
                break;
              v180 = *(float **)v180;
              if ( v180 == v37 )
                goto LABEL_56;
            }
          }
          if ( v39 )
          {
            if ( !*((_QWORD *)v39 + 4) )
              *((_QWORD *)v39 + 4) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v39 + 3) + 240LL))(*((_QWORD *)v39 + 3));
            v40 = (struct COcclusionInfo *)*((_QWORD *)v39 + 4);
            if ( v40 )
            {
              v41 = *((_DWORD *)v35 + 163);
              v42 = *(void (__fastcall **)(CVisualOcclusionInfo *, int))(*(_QWORD *)v40 + 16LL);
              if ( v42 == CVisualOcclusionInfo::SetZ )
              {
                *((_DWORD *)v40 + 4) = v41;
              }
              else if ( v42 == CWindowOcclusionInfo::SetZ )
              {
                *((_DWORD *)v40 + 4) = v41;
                *((_DWORD *)v40 + 9) = v41;
                *((_DWORD *)v40 + 8) = v41;
                *((_DWORD *)v40 + 7) = v41;
                *((_DWORD *)v40 + 6) = v41;
              }
              else
              {
                v42(v40, v41);
              }
              v43 = *((_DWORD *)v35 + 164);
              if ( v43 )
              {
                *((_DWORD *)v35 + 164) = v43 - 1;
                goto LABEL_53;
              }
              if ( (*((_BYTE *)v40 + 8) & 1) != 0 )
                goto LABEL_56;
              v111 = (struct CContentBounder *)*((_QWORD *)v35 + 91);
              *((_QWORD *)v35 + 64) = v38;
              v112 = *(__int64 (__fastcall **)(CVisual *__hidden, struct CContentBounder *, struct COcclusionContext *, struct COcclusionInfo *))(*(_QWORD *)v38 + 160LL);
              if ( v112 == CVisual::CollectOcclusion )
              {
                v215 = 0;
                if ( *((_QWORD *)v38 + 47) )
                {
                  v113 = *((_QWORD *)v38 + 51);
                  if ( !v113
                    || ((v187 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v113 + 48LL),
                         v187 != CEffectGroup::IsOfType)
                      ? (v188 = v187(*((_QWORD *)v38 + 51), 9LL))
                      : (v188 = CEffectGroup::IsOfType(*((_QWORD *)v38 + 51), 9LL)),
                        !v188
                     || (v194 = (CFilterEffect *)*((_QWORD *)v38 + 51)) == 0LL
                     || CFilterEffect::IsOpaque(v194, (const struct CVisual *)v38)) )
                  {
                    v114 = (CRenderData *)*((_QWORD *)v38 + 47);
                    v115 = *(__int64 (__fastcall **)(CPrimitiveGroup *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v114 + 96LL);
                    if ( v115 == CRenderData::AddOcclusionInformation )
                    {
                      v116 = CRenderData::Draw(v114, (struct COcclusionContext *)((char *)v35 + 8));
                    }
                    else if ( v115 == CPrimitiveGroup::AddOcclusionInformation )
                    {
                      v116 = CPrimitiveGroup::AddOcclusionInformation(v114, v35, (const struct D2D_SIZE_F *)(v38 + 37));
                    }
                    else
                    {
                      v116 = v115(*((CPrimitiveGroup **)v38 + 47), v35, (const struct D2D_SIZE_F *)(v38 + 37));
                    }
                    v215 = v116;
                    v9 = v116;
                    if ( v116 >= 0 )
                    {
LABEL_169:
                      LODWORD(v117) = *((_DWORD *)v35 + 32);
                      v118 = (char *)v35 + 104;
                      v119 = *((_QWORD *)v35 + 13);
                      if ( !(_DWORD)v117 )
                        goto LABEL_170;
                      while ( 1 )
                      {
                        v148 = *((_DWORD *)v35 + 163);
                        v117 = (unsigned int)(v117 - 1);
                        *((_DWORD *)v35 + 163) = v148 + 2;
                        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                          Template_dffffq(
                            (_DWORD)v37,
                            v16,
                            v148,
                            v17,
                            *(_DWORD *)(v119 + 20 * v117 + 4),
                            *(_DWORD *)(v119 + 20 * v117 + 8),
                            *(_DWORD *)(v119 + 20 * v117 + 12),
                            *(_DWORD *)(v119 + 20 * v117 + 16));
                        if ( !*(_DWORD *)(v119 + 20 * v117 + 16) )
                        {
                          v149 = *(float *)(v119 + 20 * v117);
                          v150 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v149) & v12);
                          if ( v150 < 8388608.0 )
                            v149 = (float)(int)ceilf_0(*(float *)(v119 + 20 * v117));
                          v151 = *(float *)(v119 + 20 * v117 + 4);
                          *(float *)v247 = v149;
                          v152 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v151) & v12);
                          if ( v152 < 8388608.0 )
                            v151 = (float)(int)ceilf_0(v151);
                          v153 = *(float *)(v119 + 20 * v117 + 8);
                          *(float *)&v247[1] = v151;
                          v154 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v153) & v12);
                          if ( v154 < 8388608.0 )
                            v153 = (float)(int)floorf_0(v153);
                          v155 = *(float *)(v119 + 20 * v117 + 12);
                          *(float *)&v247[2] = v153;
                          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v155) & v12) < 8388608.0 )
                            v155 = (float)(int)floorf_0(v155);
                          *(float *)&v247[3] = v155;
                          if ( v153 > v149 && v155 > v151 )
                          {
                            v156 = *((_QWORD *)v35 + 12);
                            v157 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v156 + 24LL);
                            if ( (char *)v157 == (char *)CArrayBasedCoverageSet::Add )
                              v158 = CArrayBasedCoverageSet::Add(v156, v247, v148);
                            else
                              v158 = v157(v156, v247, v148);
                            if ( v158 < 0 )
                            {
                              MilInstrumentationCheckHR(0x14u, 0LL, 0, v158, 0x317u);
                              v35 = v225;
LABEL_253:
                              v38 = v228;
                              v9 = v215;
                              v11 = FLOAT_1_0;
LABEL_170:
                              *((_DWORD *)v118 + 6) = 0;
                              DynArrayImpl<0>::ShrinkToSize(v118, 20LL);
LABEL_171:
                              *((_QWORD *)v35 + 64) = 0LL;
                              if ( v9 < 0 )
                              {
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x251u);
                                goto LABEL_56;
                              }
                              v120 = *((_DWORD *)v35 + 174);
                              if ( v120 )
                                *((_DWORD *)v35 + 174) = v120 - 1;
                              if ( (*((_BYTE *)v40 + 8) & 4) != 0 )
                              {
                                v122 = *((_DWORD *)v35 + 4);
                                if ( v122 )
                                  *((_DWORD *)v35 + 4) = v122 - 1;
                              }
                              if ( (*((_BYTE *)v40 + 8) & 2) != 0 )
                              {
                                v160 = COcclusionContext::Pop((struct COcclusionContext *)((char *)v35 + 8));
                                v9 = v160;
                                if ( v160 < 0 )
                                {
                                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v160, 0x267u);
                                  goto LABEL_56;
                                }
                              }
                              v36 = 1;
LABEL_53:
                              v44 = *((_QWORD *)v35 + 96);
                              if ( !v44 || !*(_BYTE *)(v44 + 816) || *((_DWORD *)v35 + 164) )
                                goto LABEL_56;
                              v51 = *((_QWORD *)v38 + 51);
                              v52 = v11;
                              if ( v51 )
                              {
                                v147 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v51 + 48LL);
                                if ( v147 == CEffectGroup::IsOfType || (unsigned __int8)v147(*((_QWORD *)v38 + 51), 8LL) )
                                {
                                  v52 = *(double *)(*((_QWORD *)v38 + 51) + 40LL);
                                  if ( v52 > v11 )
                                  {
                                    v52 = v11;
                                  }
                                  else if ( v52 < 0.0 )
                                  {
                                    v52 = 0.0;
                                  }
                                }
                              }
                              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v52) & v12) < 0.0000011920929 )
                                goto LABEL_56;
                              v53 = v38[100];
                              if ( v53 > v11 )
                              {
                                v53 = v11;
                              }
                              else if ( v53 < 0.0 )
                              {
                                v53 = 0.0;
                              }
                              v54 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v53) & v12);
                              if ( v54 < 0.0000011920929 )
                                goto LABEL_56;
                              v55 = *(bool (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v38 + 184LL);
                              if ( v55 == CVisual::HasNonEmptyContent )
                              {
                                v56 = (_QWORD *)*((_QWORD *)v38 + 47);
                                if ( !v56 )
                                  goto LABEL_182;
                                v57 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden))(*v56 + 136LL);
                                if ( v57 == CPrimitiveGroup::IsEmptyDrawing )
                                {
                                  if ( !v56[47] )
                                    goto LABEL_182;
                                }
                                else
                                {
                                  if ( !v57(*((CPrimitiveGroup **)v38 + 47)) )
                                    goto LABEL_77;
LABEL_182:
                                  if ( v36 )
                                    goto LABEL_56;
                                }
                              }
                              else if ( !v55((CVisual *)v38) )
                              {
                                goto LABEL_182;
                              }
LABEL_77:
                              v58 = v38 + 39;
                              v9 = 0;
                              v213 = 0;
                              v59 = v38[44] <= v38[43];
                              if ( v38[41] <= v38[39] )
                                ++v59;
                              if ( v38[42] <= v38[40] )
                                ++v59;
                              if ( v59 > 1 )
                                goto LABEL_56;
                              if ( *((_DWORD *)v35 + 16) )
                              {
                                v159 = *((_DWORD *)v35 + 16);
                                if ( v159 )
                                  v235 = *(_OWORD *)(*((_QWORD *)v35 + 10) + 16LL * (unsigned int)(v159 - 1));
                                v61 = *((float *)&v235 + 1);
                                v60 = *(float *)&v235;
                                v62 = *((float *)&v235 + 2);
                              }
                              else
                              {
                                v60 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                                v61 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
                                v62 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
                                v235 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                              }
                              if ( *((_BYTE *)v35 + 520) )
                              {
                                CBaseMatrix::Transform2DBounds(
                                  (struct COcclusionContext *)((char *)v35 + 524),
                                  (const struct MilRectF *)&v235,
                                  (struct MilRectF *)&v248);
                                v61 = *((float *)&v248 + 1);
                                v60 = *(float *)&v248;
                                v62 = *((float *)&v248 + 2);
                                v235 = v248;
                              }
                              v236 = *(_OWORD *)(*((_QWORD *)v35 + 96) + 40LL);
                              if ( *(float *)&v236 > v60 )
                              {
                                v60 = *(float *)&v236;
                                LODWORD(v235) = v236;
                              }
                              if ( *((float *)&v236 + 1) > v61 )
                              {
                                v61 = *((float *)&v236 + 1);
                                DWORD1(v235) = DWORD1(v236);
                              }
                              if ( v62 > *((float *)&v236 + 2) )
                              {
                                v62 = *((float *)&v236 + 2);
                                DWORD2(v235) = DWORD2(v236);
                              }
                              v63 = *((float *)&v235 + 3);
                              if ( *((float *)&v235 + 3) > *((float *)&v236 + 3) )
                              {
                                v63 = *((float *)&v236 + 3);
                                HIDWORD(v235) = HIDWORD(v236);
                              }
                              if ( v62 <= v60 || v63 <= v61 )
                              {
                                v65 = 0.0;
                                v64 = 1;
                                v62 = 0.0;
                                v60 = 0.0;
                                v235 = 0uLL;
                              }
                              else
                              {
                                v64 = 0;
                                v65 = 0.0;
                              }
                              if ( v64 )
                                goto LABEL_142;
                              v66 = *((_DWORD *)v35 + 4);
                              if ( v66 )
                              {
                                v67 = (unsigned int)(v66 - 1);
                                v68 = *((_QWORD *)v35 + 4);
                                v67 <<= 6;
                                v69 = *(_OWORD *)(v67 + v68 + 16);
                                v242 = *(_OWORD *)(v67 + v68);
                                v70 = *(_OWORD *)(v67 + v68 + 32);
                                v243 = v69;
                                v71 = *(_OWORD *)(v67 + v68 + 48);
                              }
                              else
                              {
                                v242 = IdentityMatrix;
                                v70 = xmmword_180190B20;
                                v243 = xmmword_180190B10;
                                v71 = xmmword_180190B30;
                              }
                              v245 = v71;
                              v244 = v70;
                              if ( *((_BYTE *)v35 + 520) )
                              {
                                v195 = *(_OWORD *)((char *)v35 + 540);
                                v250[0] = *(_OWORD *)((char *)v35 + 524);
                                v196 = *(_OWORD *)((char *)v35 + 556);
                                v250[1] = v195;
                                v197 = *(_OWORD *)((char *)v35 + 572);
                                v250[2] = v196;
                                v250[3] = v197;
                                D2DMatrixMultiply(
                                  (struct D2DMatrix *)&v242,
                                  (const struct D2DMatrix *)&v242,
                                  (const struct D2DMatrix *)v250);
                              }
                              if ( v38[44] == v65 && v38[43] == v65 )
                              {
                                v72 = *((_QWORD *)v38 + 47);
                                if ( v72
                                  && (v73 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v72 + 48LL),
                                      (char *)v73 != (char *)&CRenderData::IsOfType)
                                  && (v73 != CPrimitiveGroup::IsOfType
                                    ? (v179 = v73(*((_QWORD *)v38 + 47), 96LL))
                                    : (v179 = CPrimitiveGroup::IsOfType(*((_QWORD *)v38 + 47), 96LL)),
                                      v65 = 0.0,
                                      v179) )
                                {
                                  v198 = *(_QWORD *)(*((_QWORD *)v38 + 47) + 72LL);
                                  v58 = *(float **)v198;
                                  v74 = *(_DWORD *)(v198 + 24);
                                }
                                else
                                {
                                  v74 = 1;
                                }
                                v75 = 0;
                                LODWORD(p_rcSrc1) = 0;
                                if ( !v74 )
                                  goto LABEL_141;
                                v76 = *((float *)&v245 + 1);
                                v77 = v58 + 2;
                                v78 = *(float *)&v245;
                                v79 = *((float *)&v244 + 3);
                                v80 = *((float *)&v244 + 2);
                                v81 = *((float *)&v244 + 1);
                                v82 = *(float *)&v244;
                                v83 = *((float *)&v243 + 3);
                                v84 = *((float *)&v243 + 2);
                                v85 = *((float *)&v243 + 1);
                                v86 = *(float *)&v242;
                                *(_QWORD *)&v236 = v58 + 2;
                                while ( 1 )
                                {
                                  if ( v86 == 1.0
                                    && *((float *)&v242 + 1) == v65
                                    && *((float *)&v242 + 2) == v65
                                    && *((float *)&v242 + 3) == v65
                                    && *(float *)&v243 == v65
                                    && v85 == 1.0
                                    && v84 == v65
                                    && v83 == v65
                                    && v82 == v65
                                    && v81 == v65
                                    && v80 == 1.0
                                    && v79 == v65 )
                                  {
                                    v87 = &v231;
                                    v88 = v78 + *(v77 - 2);
                                    v89 = v76 + *(v77 - 1);
                                    v90 = v78 + *v77;
                                    v91 = 4;
                                    v92 = v76 + v77[1];
                                    v216 = v88;
                                    v93 = 1;
                                    v231 = v88;
                                    *(float *)&v222 = v89;
                                    v232 = v89;
                                    v217 = v90;
                                    v233 = v90;
                                    *(float *)&v223 = v92;
                                    v234 = v92;
                                  }
                                  else
                                  {
                                    CBaseMatrix::Transform2DRectToPerspective(
                                      (CBaseMatrix *)&v242,
                                      (const struct MilRectF *)(v77 - 2),
                                      (struct MilPoint2F *const)&v252);
                                    v92 = *(float *)&v223;
                                    v87 = (float *)&v252;
                                    v90 = v217;
                                    v93 = 0;
                                    v89 = *(float *)&v222;
                                    v65 = 0.0;
                                    v88 = v216;
                                    v91 = 8;
                                  }
                                  for ( i = 0; i < v91; ++i )
                                    ++v87;
                                  if ( !v93 )
                                  {
                                    v90 = v253;
                                    v217 = v253;
                                    v223 = v252;
                                    v222 = v252;
                                    if ( *(float *)&v252 > v253 )
                                      v216 = v253;
                                    else
                                      v216 = *(float *)&v222;
                                    v89 = *((float *)&v222 + 1);
                                    LODWORD(v222) = HIDWORD(v222);
                                    if ( *((float *)&v222 + 1) > v254 )
                                    {
                                      v89 = v254;
                                      *(float *)&v222 = v254;
                                    }
                                    if ( v253 <= *(float *)&v252 )
                                    {
                                      v90 = *(float *)&v223;
                                      v217 = *(float *)&v223;
                                    }
                                    v92 = *((float *)&v223 + 1);
                                    LODWORD(v223) = HIDWORD(v223);
                                    if ( v254 > *((float *)&v223 + 1) )
                                    {
                                      v92 = v254;
                                      *(float *)&v223 = v254;
                                    }
                                    if ( v216 > v255 )
                                      v216 = v255;
                                    if ( v89 > v256 )
                                    {
                                      v89 = v256;
                                      *(float *)&v222 = v256;
                                    }
                                    if ( v255 > v90 )
                                    {
                                      v90 = v255;
                                      v217 = v255;
                                    }
                                    if ( v256 > v92 )
                                    {
                                      v92 = v256;
                                      *(float *)&v223 = v256;
                                    }
                                    if ( v216 > v257 )
                                      v216 = v257;
                                    if ( v89 > v258 )
                                    {
                                      v89 = v258;
                                      *(float *)&v222 = v258;
                                    }
                                    if ( v257 > v90 )
                                    {
                                      v90 = v257;
                                      v217 = v257;
                                    }
                                    if ( v258 > v92 )
                                    {
                                      v92 = v258;
                                      *(float *)&v223 = v258;
                                    }
                                    v88 = v216;
                                    v234 = v92;
                                    v233 = v90;
                                    v232 = v89;
                                    v231 = v216;
                                  }
                                  if ( *(float *)&v235 > v88 )
                                  {
                                    v88 = *(float *)&v235;
                                    v216 = *(float *)&v235;
                                    v231 = *(float *)&v235;
                                  }
                                  if ( *((float *)&v235 + 1) > v89 )
                                  {
                                    v89 = *((float *)&v235 + 1);
                                    LODWORD(v222) = DWORD1(v235);
                                    v232 = *((float *)&v235 + 1);
                                  }
                                  if ( v90 > *((float *)&v235 + 2) )
                                  {
                                    v90 = *((float *)&v235 + 2);
                                    v217 = *((float *)&v235 + 2);
                                    v233 = *((float *)&v235 + 2);
                                  }
                                  if ( v92 > *((float *)&v235 + 3) )
                                  {
                                    v92 = *((float *)&v235 + 3);
                                    LODWORD(v223) = HIDWORD(v235);
                                    v234 = *((float *)&v235 + 3);
                                  }
                                  if ( v90 <= v88 || v92 <= v89 )
                                  {
                                    *(float *)&v223 = v65;
                                    v234 = v65;
                                    v217 = v65;
                                    v233 = v65;
                                    *(float *)&v222 = v65;
                                    v232 = v65;
                                    v216 = v65;
                                    v231 = v65;
                                  }
                                  else
                                  {
                                    v95 = 0;
                                    v96 = *((_QWORD *)v225 + 96);
                                    v97 = v88 + 6291456.25;
                                    rcSrc1.left = (int)(LODWORD(v97) << 10) >> 11;
                                    v98 = v89 + 6291456.25;
                                    rcSrc1.top = (int)(LODWORD(v98) << 10) >> 11;
                                    v99 = v90 + 6291456.25;
                                    rcSrc1.right = (int)(LODWORD(v99) << 10) >> 11;
                                    v214 = v92 + 6291456.25;
                                    rcSrc1.bottom = (int)(LODWORD(v214) << 10) >> 11;
                                    if ( *(_DWORD *)(v96 + 160) )
                                    {
                                      v199 = v228;
                                      v200 = (__int64 *)(v96 + 136);
                                      do
                                      {
                                        v201 = *v200;
                                        v202 = 240LL * v95;
                                        if ( *(float **)(v202 + *v200) != v199
                                          && *(_BYTE *)(v202 + v201 + 153)
                                          && !*(_BYTE *)(v202 + v201 + 157)
                                          && IntersectRect(&rcDst, &rcSrc1, (const RECT *)(v202 + v201 + 68)) )
                                        {
                                          v203 = (COverlayContext::OverlayPlaneInfo *)(v202 + *v200);
                                          if ( *((_BYTE *)v203 + 155) )
                                          {
                                            *((_BYTE *)v203 + 156) = 0;
                                          }
                                          else
                                          {
                                            COverlayContext::OverlayPlaneInfo::Reset(v203);
                                            DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(v96 + 136, v95--);
                                          }
                                        }
                                        ++v95;
                                      }
                                      while ( v95 < *(_DWORD *)(v96 + 160) );
                                      v77 = (float *)v236;
                                      v75 = p_rcSrc1;
                                    }
                                    v100 = v96 + 704;
                                    v101 = *(unsigned int *)(v100 + 24);
                                    v102 = v101 + 1;
                                    if ( (int)v101 + 1 < (unsigned int)v101 )
                                    {
                                      v174 = -2147024362;
                                      v213 = -2147024362;
                                      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_431:
                                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v174, 0x572u);
                                      v9 = v213;
                                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v213, 0x8BAu);
                                      v12 = _xmm;
LABEL_141:
                                      v35 = v225;
LABEL_142:
                                      if ( v9 < 0 )
                                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x293u);
                                      v11 = FLOAT_1_0;
                                      goto LABEL_56;
                                    }
                                    v213 = 0;
                                    if ( v102 > *(_DWORD *)(v100 + 20) )
                                    {
                                      p_rcSrc1 = (unsigned __int64)&rcSrc1;
                                      v213 = DynArrayImpl<0>::Grow(v100, 16, 1, 0, (__int64)&p_rcSrc1);
                                      v174 = v213;
                                      if ( v213 < 0 )
                                      {
                                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v213, 0xC0u);
                                        goto LABEL_431;
                                      }
                                      *(_OWORD *)(*(_QWORD *)v100 + (unsigned int)(16 * (*(_DWORD *)(v100 + 24))++)) = *(_OWORD *)p_rcSrc1;
                                    }
                                    else
                                    {
                                      *(RECT *)(*(_QWORD *)v100 + 16 * v101) = rcSrc1;
                                      *(_DWORD *)(v100 + 24) = v102;
                                    }
                                  }
                                  ++v75;
                                  v77 += 4;
                                  LODWORD(p_rcSrc1) = v75;
                                  *(_QWORD *)&v236 = v77;
                                  if ( v75 >= v74 )
                                  {
                                    v12 = _xmm;
                                    v9 = v213;
                                    goto LABEL_141;
                                  }
                                  v65 = 0.0;
                                }
                              }
                              v123 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v242 + 2)) & v12);
                              if ( v123 >= 0.00012207031 )
                                goto LABEL_441;
                              v124 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v243 + 2)) & _xmm);
                              if ( v124 < 0.00012207031 )
                              {
                                v125 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v245 + 2)) & _xmm);
                                if ( v125 < 0.00012207031 )
                                  goto LABEL_196;
                              }
                              if ( v123 < 0.00012207031
                                && (v204 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v243 + 2)) & _xmm),
                                    v204 < 0.00012207031)
                                && (v205 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v244) & _xmm),
                                    v205 < 0.00012207031)
                                && (v206 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v244 + 1)) & _xmm),
                                    v206 < 0.00012207031)
                                && ((v207 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v244 + 2) - v11)) & _xmm),
                                     v207 < 0.00012207031)
                                 || (v208 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v244 + 2)) & _xmm),
                                     v208 < 0.00012207031))
                                && (v209 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v244 + 3)) & _xmm),
                                    v209 < 0.00012207031)
                                && (v210 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v245 + 2)) & _xmm),
                                    v210 < 0.00012207031) )
                              {
LABEL_196:
                                v126 = *((float *)&v243 + 3);
                                v127 = *((float *)&v242 + 3);
                                v128 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v242 + 3)) & _xmm);
                                v129 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v243 + 3)) & _xmm)
                                             * 40960.0)
                                     + (float)(v128 * 40960.0);
                                v130 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v245 + 3)) & _xmm);
                                v131 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v129 + v130) - v11)) & _xmm);
                                if ( v131 >= 0.00012207031 )
                                  goto LABEL_260;
                                v132 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v38[44]) & _xmm);
                                if ( v132 >= 0.00012207031 )
                                  goto LABEL_260;
                                v133 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v38[43]) & _xmm);
                                if ( v133 >= 0.00012207031 )
                                  goto LABEL_260;
                                v134 = *v58;
                                v135 = v38[41];
                                v136 = v38[40];
                                v137 = v38[42];
                                *(float *)v249 = *v58;
                                *(float *)&v249[2] = v135;
                                *(float *)&v249[1] = v136;
                                *(float *)&v249[3] = v137;
                                if ( *(float *)&v242 == 1.0
                                  && *((float *)&v242 + 1) == 0.0
                                  && *((float *)&v242 + 2) == 0.0
                                  && *((float *)&v242 + 3) == 0.0
                                  && *(float *)&v243 == 0.0
                                  && *((float *)&v243 + 1) == 1.0
                                  && *((float *)&v243 + 2) == 0.0
                                  && *((float *)&v243 + 3) == 0.0
                                  && *(float *)&v244 == 0.0
                                  && *((float *)&v244 + 1) == 0.0
                                  && *((float *)&v244 + 2) == 1.0
                                  && *((float *)&v244 + 3) == 0.0 )
                                {
                                  v138 = &v239;
                                  v139 = 4;
                                  v140 = 1;
                                  *(float *)&v218 = *(float *)&v245 + v134;
                                  *(float *)&v239 = *(float *)&v245 + v134;
                                  v219 = *(float *)&v245 + v135;
                                  v240 = *(float *)&v245 + v135;
                                  *((float *)&v218 + 1) = *((float *)&v245 + 1) + v136;
                                  *((float *)&v239 + 1) = *((float *)&v245 + 1) + v136;
                                  v220 = *((float *)&v245 + 1) + v137;
                                  v241 = *((float *)&v245 + 1) + v137;
                                }
                                else
                                {
                                  CBaseMatrix::Transform2DRectToPerspective(
                                    (CBaseMatrix *)&v242,
                                    (const struct MilRectF *)v249,
                                    (struct MilPoint2F *const)&v252);
                                  v140 = 0;
                                  v138 = (unsigned __int64 *)&v252;
                                  v139 = 8;
                                }
                                for ( j = 0; j < v139; ++j )
                                  v138 = (unsigned __int64 *)((char *)v138 + 4);
                                if ( !v140 )
                                {
                                  v175 = v253;
                                  v219 = v253;
                                  v228 = v252;
                                  *(_QWORD *)&v236 = v252;
                                  if ( *(float *)&v252 > v253 )
                                    v176 = v253;
                                  else
                                    LODWORD(v176) = v236;
                                  v218 = __PAIR64__(DWORD1(v236), LODWORD(v176));
                                  if ( *((float *)&v236 + 1) > v254 )
                                    *((float *)&v218 + 1) = v254;
                                  if ( v253 <= *(float *)&v252 )
                                  {
                                    v175 = *(float *)&v228;
                                    v219 = *(float *)&v228;
                                  }
                                  v177 = *((float *)&v228 + 1);
                                  v220 = *((float *)&v228 + 1);
                                  if ( v254 > *((float *)&v228 + 1) )
                                  {
                                    v177 = v254;
                                    v220 = v254;
                                  }
                                  if ( v176 > v255 )
                                    *(float *)&v218 = v255;
                                  v178 = *((float *)&v218 + 1);
                                  if ( *((float *)&v218 + 1) > v256 )
                                  {
                                    v178 = v256;
                                    *((float *)&v218 + 1) = v256;
                                  }
                                  if ( v255 > v175 )
                                  {
                                    v175 = v255;
                                    v219 = v255;
                                  }
                                  if ( v256 > v177 )
                                  {
                                    v177 = v256;
                                    v220 = v256;
                                  }
                                  if ( *(float *)&v218 > v257 )
                                    *(float *)&v218 = v257;
                                  if ( v178 > v258 )
                                  {
                                    v178 = v258;
                                    *((float *)&v218 + 1) = v258;
                                  }
                                  if ( v257 > v175 )
                                  {
                                    v175 = v257;
                                    v219 = v257;
                                  }
                                  if ( v258 > v177 )
                                  {
                                    v177 = v258;
                                    v220 = v258;
                                  }
                                  v239 = __PAIR64__(LODWORD(v178), v218);
                                  v241 = v177;
                                  v240 = v175;
                                }
                                v142 = *(float *)&v218;
                                v143 = *((float *)&v218 + 1);
                                v144 = v219;
                                v145 = v220;
                              }
                              else
                              {
LABEL_441:
                                v126 = *((float *)&v243 + 3);
                                v127 = *((float *)&v242 + 3);
LABEL_260:
                                if ( *(float *)&v242 == v11
                                  && *((float *)&v242 + 1) == 0.0
                                  && *((float *)&v242 + 2) == 0.0
                                  && v127 == 0.0
                                  && *(float *)&v243 == 0.0
                                  && *((float *)&v243 + 1) == v11
                                  && *((float *)&v243 + 2) == 0.0
                                  && v126 == 0.0
                                  && *(float *)&v244 == 0.0
                                  && *((float *)&v244 + 1) == 0.0
                                  && *((float *)&v244 + 2) == v11
                                  && *((float *)&v244 + 3) == 0.0 )
                                {
                                  v161 = (float *)&v236;
                                  v142 = *(float *)&v245 + *v58;
                                  v144 = *(float *)&v245 + v38[41];
                                  v143 = *((float *)&v245 + 1) + v38[40];
                                  v162 = *((float *)&v245 + 2) + v38[43];
                                  v145 = *((float *)&v245 + 1) + v38[42];
                                  v163 = *((float *)&v245 + 2) + v38[44];
                                  *(float *)&v236 = v142;
                                  v164 = 6;
                                  *(_QWORD *)((char *)&v236 + 4) = __PAIR64__(LODWORD(v144), LODWORD(v143));
                                  v165 = 1;
                                  v237 = v162;
                                  *((float *)&v236 + 3) = v145;
                                  v238 = v163;
                                }
                                else
                                {
                                  CBaseMatrix::Transform3DRectToPerspective((float *)&v242, v38 + 39, &v259);
                                  v145 = *((float *)&v236 + 3);
                                  v161 = &v259;
                                  v144 = *((float *)&v236 + 2);
                                  v164 = 24;
                                  v143 = *((float *)&v236 + 1);
                                  v165 = 0;
                                  v142 = *(float *)&v236;
                                }
                                for ( k = 0; k < v164; ++k )
                                  ++v161;
                                if ( !v165 )
                                {
                                  v167 = (float *)&v260;
                                  v168 = FLOAT_3_4028235e38;
                                  v169 = 8LL;
                                  v170 = FLOAT_N3_4028235e38;
                                  v236 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
                                  v145 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
                                  v144 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
                                  v143 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
                                  v142 = *(float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff;
                                  do
                                  {
                                    v171 = *(v167 - 1);
                                    if ( v142 > v171 )
                                      v142 = *(v167 - 1);
                                    if ( v171 > v144 )
                                      v144 = *(v167 - 1);
                                    if ( v143 > *v167 )
                                      v143 = *v167;
                                    if ( *v167 > v145 )
                                      v145 = *v167;
                                    v172 = v167[1];
                                    if ( v168 > v172 )
                                      v168 = v167[1];
                                    if ( v172 > v170 )
                                      v170 = v167[1];
                                    v167 += 3;
                                    --v169;
                                  }
                                  while ( v169 );
                                }
                              }
                              v231 = v142;
                              v232 = v143;
                              v233 = v144;
                              v234 = v145;
                              if ( v60 > v142 )
                              {
                                v142 = v60;
                                v231 = v60;
                              }
                              if ( *((float *)&v235 + 1) > v143 )
                              {
                                v143 = *((float *)&v235 + 1);
                                v232 = *((float *)&v235 + 1);
                              }
                              if ( v144 > v62 )
                              {
                                v144 = v62;
                                v233 = v62;
                              }
                              if ( v145 > *((float *)&v235 + 3) )
                              {
                                v145 = *((float *)&v235 + 3);
                                v234 = *((float *)&v235 + 3);
                              }
                              if ( v144 <= v142 || v145 <= v143 )
                              {
                                v12 = _xmm;
                                LODWORD(v223) = 0;
                                v234 = 0.0;
                                v217 = 0.0;
                                v233 = 0.0;
                                LODWORD(v222) = 0;
                                v232 = 0.0;
                                v216 = 0.0;
                                v231 = 0.0;
                              }
                              else
                              {
                                v146 = COverlayContext::NotifyVisitedContent(
                                         *((_QWORD *)v35 + 96),
                                         (__int64)v38,
                                         (__int64)&v231);
                                v9 = v146;
                                if ( v146 < 0 )
                                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v146, 0x8D0u);
                                v12 = _xmm;
                                *(float *)&v223 = v234;
                                v216 = v231;
                                v217 = v233;
                                *(float *)&v222 = v232;
                              }
                              goto LABEL_142;
                            }
                            v35 = v225;
                          }
                        }
                        if ( !(_DWORD)v117 )
                          goto LABEL_253;
                      }
                    }
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v116, 0xBB5u);
                  }
                }
              }
              else
              {
                if ( v112 == CWindowNode::CollectOcclusion )
                  v121 = CWindowNode::CollectOcclusion((CWindowNode *)v38, v111, v35, v40);
                else
                  v121 = v112((CVisual *)v38, v111, v35, v40);
                v215 = v121;
                v9 = v121;
              }
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2C4u);
                goto LABEL_171;
              }
              goto LABEL_169;
            }
          }
LABEL_56:
          *((_DWORD *)v35 + 163) += 2;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x87u);
            v7 = v226;
            goto LABEL_292;
          }
          v7 = v226;
          v9 = 0;
          v45 = *(unsigned int (__fastcall ****)(_QWORD))(v226 + 16);
          if ( !v45
            || (*(_DWORD *)(v226 + 28) != 1
             || *(_DWORD *)(v226 + 24) == -1
             || (v46 = *(_DWORD *)(v226 + 24), v46 + 1 >= (**v45)(*(_QWORD *)(v226 + 16))))
            && (*(_DWORD *)(v7 + 28) || (v46 = *(_DWORD *)(v7 + 24)) == 0) )
          {
            v9 = 1;
LABEL_62:
            if ( !*(_DWORD *)(v7 + 4) )
              goto LABEL_292;
            v47 = *(_DWORD *)(v7 + 32);
            v48 = 0LL;
            v16 = 0;
            if ( v47 )
            {
              v49 = (unsigned int)(v47 - 1);
              *(_DWORD *)(v7 + 32) = v49;
              v236 = *(_OWORD *)(*(_QWORD *)(v7 + 48) + 16 * v49);
              v16 = DWORD2(v236);
              v48 = v236;
            }
            v50 = *(_QWORD *)(v7 + 16);
            *(_QWORD *)(v7 + 16) = v48;
            --*(_DWORD *)(v7 + 4);
            *(_QWORD *)(v7 + 8) = v50;
            *(_DWORD *)(v7 + 24) = v16;
            if ( !v50 )
              goto LABEL_292;
LABEL_66:
            v6 = v227;
            continue;
          }
          break;
        }
        if ( *(_DWORD *)(v7 + 28) == 1 )
          v103 = (unsigned int)(v46 + 1);
        else
          v103 = (unsigned int)(v46 - 1);
        v104 = *(_QWORD **)(v7 + 16);
        v105 = *(struct IGraphNode *(__fastcall **)(CVisual *__hidden, unsigned int))(*v104 + 8LL);
        if ( v105 == CVisual::GetChildAt )
        {
          v106 = v104[1];
          if ( (v106 & 2) != 0 )
            v107 = *(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v107 = v104[1] & 1LL;
          if ( v107 <= (unsigned int)v103 )
            goto LABEL_446;
          v108 = v104[1];
          v109 = (v108 & 2) != 0 ? *(_QWORD *)(v108 & 0xFFFFFFFFFFFFFFFCuLL) : v104[1] & 1LL;
          if ( (unsigned int)v103 >= v109 )
            goto LABEL_446;
          v110 = v108 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v109 != 1 )
            v110 = *(_QWORD *)(v110 + 8 * v103 + 16);
          if ( v110 )
            v10 = (_QWORD *)(v110 + 64);
          else
LABEL_446:
            v10 = 0LL;
        }
        else
        {
          v10 = (_QWORD *)v105(*(CVisual **)(v7 + 16), v103);
        }
        *(_QWORD *)(v7 + 8) = v10;
        *(_DWORD *)(v7 + 24) = v103;
        if ( !v10 )
          goto LABEL_62;
        v5 = v225;
        v6 = v227;
      }
    }
    v14 = v10 + 48;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x59u);
LABEL_292:
  if ( v9 == 1 || v9 == -2147467260 )
    v9 = 0;
  if ( v229 )
    CGraphWalker::UnregisterGraphWalkRoot();
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 8) = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  CWatermarkStack<CGraphWalker::CFrame,64,2,10>::Optimize();
  return (unsigned int)v9;
}
