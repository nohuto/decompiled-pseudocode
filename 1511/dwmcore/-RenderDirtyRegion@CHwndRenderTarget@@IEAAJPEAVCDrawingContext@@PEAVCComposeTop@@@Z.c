/*
 * XREFs of ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18000B2BC (-UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F0F0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180036A10 (-IsFullyCovered@CArrayBasedCoverageSet@@UEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x180044B58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180044C40 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180044FA0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCOverlayContext@@@Z @ 0x18005524C (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800556AC (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180070778 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x180073DB0 (-NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z.c)
 *     ?NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800740C0 (-NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18007D438 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x18007F5C0 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008C5F0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800A8A98 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800AAB70 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800ADA08 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800ADF3C (-SubtractOverdraw@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 *     floorf_0 @ 0x1800BC87E (floorf_0.c)
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800F38F0 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800F3D6C (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800F7A84 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     Template_qdffff @ 0x1801065E0 (Template_qdffff.c)
 *     Template_xqq @ 0x18010671C (Template_xqq.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180108FAC (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?AssignDbgRedrawRects@CDrawingContext@@QEAAXPEBUMilRectF@@I@Z @ 0x18010B318 (-AssignDbgRedrawRects@CDrawingContext@@QEAAXPEBUMilRectF@@I@Z.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDirtyRegion(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  CHwndRenderTarget *v3; // r12
  int v4; // esi
  __int64 v5; // rax
  const struct MilRectF *v6; // r15
  bool v7; // zf
  unsigned int v8; // r14d
  __int64 v9; // rax
  unsigned __int8 v10; // r13
  __int64 v11; // rdi
  void (__fastcall *v12)(CHwFullScreenRenderTarget *, __int64); // rdi
  unsigned __int64 v13; // rcx
  __int128 v14; // xmm4
  unsigned int v15; // edx
  unsigned int v16; // edi
  float v17; // xmm1_4
  COverlayContext *v18; // rcx
  int v19; // eax
  char v20; // r15
  __int64 v21; // rdi
  struct COcclusionContext **v22; // rbx
  __int64 *v23; // r15
  int v24; // eax
  __int64 v25; // rcx
  int v26; // r14d
  struct COcclusionContext *v27; // rdi
  __int64 v28; // r12
  unsigned int v29; // edx
  COcclusionContext *v30; // rcx
  COcclusionContext *v31; // rbx
  COverlayContext *v32; // rcx
  int v33; // eax
  char v34; // r14
  CDrawingContext *v35; // r15
  char v36; // r10
  unsigned int v37; // r15d
  __int64 v38; // r14
  __m128 v39; // xmm2
  __int64 v40; // rdx
  struct COcclusionContext **v41; // r8
  __int64 v42; // rax
  unsigned int v43; // xmm8_4
  unsigned int v44; // xmm7_4
  unsigned int v45; // xmm6_4
  _QWORD *v46; // r13
  _QWORD *v47; // r15
  COcclusionContext *v48; // r12
  _QWORD *v49; // r14
  __int64 v50; // rax
  _QWORD *v51; // rsi
  _DWORD *v52; // rdi
  unsigned int v53; // esi
  float v54; // xmm3_4
  __int64 v55; // rbx
  char (__fastcall *v56)(__int64, __int64); // rdi
  char v57; // al
  int v58; // eax
  int v59; // edx
  int v60; // r9d
  char v61; // r9
  char HasVirtualModeScale; // al
  CDisplay *v63; // rcx
  CDrawingContext *v64; // rbx
  int v65; // eax
  float v66; // xmm6_4
  float v67; // xmm8_4
  float v68; // xmm9_4
  float v69; // xmm7_4
  float *v70; // rcx
  float v71; // xmm6_4
  float v72; // xmm8_4
  float v73; // xmm9_4
  float v74; // xmm7_4
  float v75; // xmm1_4
  float v76; // xmm1_4
  float v77; // xmm1_4
  __int128 *v78; // rsi
  __int64 (__fastcall *v79)(__int64, __int64); // rdi
  int v80; // eax
  COcclusionContext *v82; // rax
  int v83; // eax
  CVisual **v84; // rsi
  struct COcclusionInfo *OcclusionInfo; // rdi
  int CurrentRealizationAsRenderTarget; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  __int64 v90; // r8
  _QWORD *v91; // rcx
  _QWORD *v92; // rax
  float *v93; // rax
  __int64 v94; // rcx
  float v95; // xmm0_4
  int v96; // r9d
  unsigned int v97; // [rsp+28h] [rbp-E0h]
  unsigned int v98; // [rsp+28h] [rbp-E0h]
  __int64 v99; // [rsp+38h] [rbp-D0h]
  __int64 v100; // [rsp+38h] [rbp-D0h]
  char v101; // [rsp+58h] [rbp-B0h]
  int v102; // [rsp+59h] [rbp-AFh] BYREF
  char v103; // [rsp+5Dh] [rbp-ABh] BYREF
  unsigned int v104; // [rsp+60h] [rbp-A8h]
  char v105; // [rsp+64h] [rbp-A4h]
  CDrawingContext *v106; // [rsp+68h] [rbp-A0h]
  __int64 v107; // [rsp+70h] [rbp-98h]
  COcclusionContext *v108; // [rsp+78h] [rbp-90h] BYREF
  __int64 v109; // [rsp+80h] [rbp-88h]
  int v110; // [rsp+88h] [rbp-80h]
  CHwndRenderTarget *v111; // [rsp+90h] [rbp-78h]
  struct IRenderTarget *v112; // [rsp+98h] [rbp-70h] BYREF
  bool v113[8]; // [rsp+A0h] [rbp-68h]
  struct CComposeTop *v114; // [rsp+A8h] [rbp-60h]
  __int128 v115; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v116; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v117; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v118; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD v119[4]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v120; // [rsp+100h] [rbp-8h] BYREF
  float v121[8]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD v122[10]; // [rsp+130h] [rbp+28h]
  __int64 v123[2]; // [rsp+158h] [rbp+50h] BYREF

  v3 = this;
  v111 = this;
  v4 = 0;
  v5 = *((_QWORD *)this + 14);
  v114 = a3;
  v106 = a2;
  if ( *(_BYTE *)(v5 + 1012) )
    v6 = (const struct MilRectF *)(v5 + 996);
  else
    v6 = (const struct MilRectF *)(v5 + 280);
  v7 = (*((_DWORD *)this + 50) & 0x10000) == 0;
  v8 = *(_DWORD *)(v5 + 440);
  v112 = 0LL;
  LOWORD(v102) = *(unsigned __int8 *)(v5 + 1012);
  v9 = *((_QWORD *)this + 2);
  v104 = 0;
  v108 = 0LL;
  v105 = 0;
  v10 = *(_BYTE *)(*(_QWORD *)(v9 + 32) + 111LL);
  HIWORD(v102) = v10;
  v101 = !v7 && !v10;
  v11 = *((_QWORD *)this + 11);
  v110 = 0x7FFFFFFF;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 64LL))(v11, &v116);
  v12 = *(void (__fastcall **)(CHwFullScreenRenderTarget *, __int64))(**((_QWORD **)v3 + 11) + 448LL);
  if ( v12 == CHwFullScreenRenderTarget::NotifySwapChainFullScreen )
    CHwFullScreenRenderTarget::NotifySwapChainFullScreen(*((CHwFullScreenRenderTarget **)v3 + 11), 0LL);
  else
    v12(*((CHwFullScreenRenderTarget **)v3 + 11), 0LL);
  v14 = v116;
  if ( (_BYTE)v102 )
  {
    v16 = 1;
    *(_OWORD *)v123 = v116;
    v122[0] = 0;
  }
  else
  {
    v15 = 0;
    v16 = 0;
    if ( !v8 )
      goto LABEL_24;
    v13 = (unsigned __int64)v6 + 8;
    do
    {
      v17 = *(float *)&v116;
      v118 = *(_OWORD *)(v13 - 8);
      *(_OWORD *)&v123[2 * v16] = v118;
      if ( v17 > *(float *)&v123[2 * v16] )
        *(float *)&v123[2 * v16] = v17;
      if ( *((float *)&v116 + 1) > *((float *)&v123[2 * v16] + 1) )
        HIDWORD(v123[2 * v16]) = DWORD1(v116);
      if ( *(float *)&v123[2 * v16 + 1] > *((float *)&v116 + 2) )
        LODWORD(v123[2 * v16 + 1]) = DWORD2(v116);
      if ( *((float *)&v123[2 * v16 + 1] + 1) > *((float *)&v116 + 3) )
        HIDWORD(v123[2 * v16 + 1]) = HIDWORD(v116);
      if ( *(float *)&v123[2 * v16 + 1] <= *(float *)&v123[2 * v16]
        || *((float *)&v123[2 * v16 + 1] + 1) <= *((float *)&v123[2 * v16] + 1) )
      {
        v123[2 * v16 + 1] = 0LL;
        v123[2 * v16] = 0LL;
      }
      else
      {
        v122[v16++] = v15;
      }
      ++v15;
      v13 += 16LL;
    }
    while ( v15 < v8 );
  }
  v104 = v16;
LABEL_24:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xqq(v13, (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (_DWORD)v106, 0, v16);
    v14 = v116;
  }
  if ( !v16 )
  {
LABEL_117:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v64 = v106;
      Template_x(v13, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, v106);
      goto LABEL_119;
    }
    goto LABEL_118;
  }
  if ( *(_DWORD *)(*((_QWORD *)v3 + 2) + 1120LL) )
  {
    v16 = 1;
    LOBYTE(v102) = 1;
    v104 = 1;
    *(_OWORD *)v123 = v14;
    v122[0] = 0;
    CDrawingContext::AssignDbgRedrawRects(v106, v6, v8);
  }
  v18 = (COverlayContext *)*((_QWORD *)v3 + 68);
  if ( v18 )
  {
    v19 = COverlayContext::BeginOverlayCandidateCollection(v18);
    v4 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x2D6u);
      goto LABEL_121;
    }
  }
  v20 = v101;
  if ( !v101 )
  {
    v31 = v108;
    goto LABEL_47;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xd(v18, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, v106, 0LL);
  v21 = *((_QWORD *)v3 + 68);
  v22 = (struct COcclusionContext **)((char *)v106 + 5776);
  v23 = (__int64 *)*((_QWORD *)v3 + 7);
  *(_QWORD *)v113 = (char *)v106 + 5776;
  if ( !*((_QWORD *)v106 + 722) )
  {
    v83 = COcclusionContext::Create(*((struct CComposition **)v106 + 3), v22);
    v26 = v83;
    if ( v83 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180178EF4, 1u, v83, 0x24F4u);
LABEL_42:
      v16 = v104;
      goto LABEL_43;
    }
  }
  v100 = v21;
  v16 = v104;
  v24 = COcclusionContext::Compute(
          (__int64)*v22,
          v23,
          v104,
          (const struct MilRectF *)v123,
          0,
          (CDrawingContext *)((char *)v106 + 2744),
          v100);
  v26 = v24;
  if ( v24 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v25, &EVTDESC_RENDER_CVIPASS_Start);
    v27 = *v22;
    v28 = 0LL;
    if ( *((_DWORD *)*v22 + 190) )
    {
      do
      {
        v109 = *((_QWORD *)v27 + 92);
        v103 = *(_BYTE *)(v109 + 40 * v28 + 16);
        v82 = *(COcclusionContext **)(v109 + 40 * v28);
        v107 = *(_QWORD *)(v109 + 40 * v28 + 8);
        v108 = v82;
        if ( (int)CThreadContext::RegisterGraphWalkRoot(v82) >= 0 )
        {
          if ( v103 || !(unsigned __int8)CDrawingContext::IsNodeOccluded(v106, v23, v108, v109 + 20 + 40 * v28) )
            CCachedVisualImage::UpdateRenderTargetIfDirty(v107, *((_QWORD *)v106 + 48), *((_DWORD *)v106 + 98));
          CThreadContext::UnregisterGraphWalkRoot();
        }
        v28 = (unsigned int)(v28 + 1);
      }
      while ( (unsigned int)v28 < *((_DWORD *)v27 + 190) );
      v22 = *(struct COcclusionContext ***)v113;
      v10 = BYTE2(v102);
    }
    *((_DWORD *)v27 + 190) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)v27 + 92, 0x28u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v30, &EVTDESC_RENDER_CVIPASS_Stop);
    v3 = v111;
    goto LABEL_42;
  }
  MilInstrumentationCheckHR(0x14u, &dword_180178EF4, 1u, v24, 0x2506u);
LABEL_43:
  if ( v26 < 0 )
  {
    v30 = *v22;
    if ( *v22 )
    {
      COcclusionContext::`scalar deleting destructor'(v30, v29);
      *v22 = 0LL;
    }
  }
  v31 = *v22;
  v108 = v31;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xd(v30, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, v106, 0LL);
  v20 = v101;
LABEL_47:
  v32 = (COverlayContext *)*((_QWORD *)v3 + 68);
  if ( v32 )
  {
    *(_WORD *)((char *)&v102 + 1) = 0;
    v103 = 0;
    v33 = COverlayContext::EndOverlayCandidateCollection(
            v32,
            (__int64)v123,
            (__int64)v31,
            (__int64)&v102 + 2,
            (__int64)&v102 + 1,
            (__int64)&v103,
            (__int64)&v102 + 3);
    v4 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x304u);
      goto LABEL_121;
    }
    v34 = HIBYTE(v102);
    if ( !HIWORD(v102) || (_BYTE)v102 )
    {
      v35 = v106;
      if ( v103 )
      {
        v16 = 0;
        v104 = 0;
      }
    }
    else
    {
      LOBYTE(v102) = 1;
      v16 = 1;
      v122[0] = 0;
      v7 = v20 == 0;
      *(_OWORD *)v123 = v116;
      v35 = v106;
      v104 = 1;
      if ( !v7 )
      {
        CDrawingContext::CalculateOcclusion(
          (struct CComposition **)v106,
          *((struct CVisualTree **)v3 + 7),
          1u,
          (__int64)&v116,
          0,
          0LL,
          &v108);
        v31 = v108;
      }
    }
    if ( v34 )
    {
      v84 = *(CVisual ***)(*((_QWORD *)v3 + 68) + 712LL);
      OcclusionInfo = CVisual::GetOcclusionInfo(v84[3], *((const struct CVisualTree **)v3 + 7));
      v110 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
      CurrentRealizationAsRenderTarget = CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
                                           (CDirectFlipInfo *)v84,
                                           &v112);
      v4 = CurrentRealizationAsRenderTarget;
      if ( CurrentRealizationAsRenderTarget < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentRealizationAsRenderTarget, 0x342u);
        goto LABEL_121;
      }
      v87 = CDrawingContext::PushRenderTarget(v35, v112);
      v4 = v87;
      if ( v87 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v87, 0x344u);
        goto LABEL_121;
      }
      v31 = v108;
      v16 = v104;
    }
    else
    {
      if ( !BYTE1(v102) )
      {
LABEL_54:
        BYTE1(v102) = *(_BYTE *)(*((_QWORD *)v3 + 68) + 841LL);
        goto LABEL_55;
      }
      v88 = CDrawingContext::PushRenderTarget(v35, *((struct IRenderTarget **)v3 + 11));
      v4 = v88;
      if ( v88 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0x350u);
        goto LABEL_121;
      }
    }
    v105 = 1;
    goto LABEL_54;
  }
LABEL_55:
  if ( v31 )
  {
    v36 = v101;
  }
  else
  {
    v36 = 0;
    v101 = 0;
  }
  if ( v10 )
    goto LABEL_167;
  v13 = (unsigned __int8)v102;
  if ( !(_BYTE)v102 )
    goto LABEL_59;
  if ( !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                           *((_QWORD *)v3 + 10) + 88LL,
                           *((_QWORD *)v3 + 10) + 104LL) )
  {
LABEL_167:
    v64 = v106;
    v89 = CDrawingContext::Clear((struct ID2D1PrivateCompositorRenderer ***)v106, &stru_180183A40);
    v4 = v89;
    if ( v89 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v89, 0x36Cu);
      goto LABEL_119;
    }
    LOBYTE(v90) = 1;
    v65 = CHwndRenderTarget::NotifyRenderedRect(v3, 0LL, v90);
    v4 = v65;
    if ( v65 < 0 )
    {
      v97 = 882;
      goto LABEL_200;
    }
    v36 = v101;
    v13 = (unsigned __int8)v102;
    if ( v10 )
      v16 = 0;
    v104 = v16;
  }
  else
  {
    v13 = (unsigned __int8)v102;
  }
LABEL_59:
  LODWORD(v107) = 0;
  v37 = 0;
  if ( !v16 )
    goto LABEL_117;
  v38 = 0LL;
  v109 = 0LL;
  while ( 1 )
  {
    DWORD1(v115) = HIDWORD(v123[2 * v38]);
    v39 = *(__m128 *)&v123[2 * v38];
    LODWORD(v115) = v39.m128_i32[0];
    HIDWORD(v115) = HIDWORD(v123[2 * v38 + 1]);
    DWORD2(v115) = _mm_shuffle_ps(v39, v39, 170).m128_u32[0];
    if ( !(_BYTE)v13 && v36 )
    {
      v40 = *((_QWORD *)v3 + 14);
      v41 = (struct COcclusionContext **)*((_QWORD *)v3 + 7);
      v42 = (unsigned int)v122[v38];
      *(_QWORD *)v113 = v41;
      if ( *(_BYTE *)(v40 + 1012) )
      {
        v117 = *(_OWORD *)(v40 + 996);
        v43 = DWORD2(v117);
        v44 = DWORD1(v117);
        v45 = v117;
      }
      else
      {
        v43 = 0;
        HIDWORD(v117) = 0;
        v44 = 0;
        v45 = 0;
        if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 440) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x368u);
        }
        else
        {
          v46 = (_QWORD *)(v40 + 16 * (*(unsigned int *)(v40 + 4 * v42 + 408) + 28LL));
          v117 = *(_OWORD *)(v40 + 16LL * *(unsigned int *)(v40 + 4 * v42 + 408) + 152);
          v47 = (_QWORD *)*v46;
          if ( (_QWORD *)*v46 != v46 )
          {
            v48 = v108;
            while ( 1 )
            {
              v49 = v47;
              v50 = v47[2];
              v47 = (_QWORD *)*v47;
              if ( *((_BYTE *)v41 + 32) )
              {
                v51 = (_QWORD *)(v50 + 432);
              }
              else
              {
                v91 = (_QWORD *)(v50 + 416);
                v92 = *(_QWORD **)(v50 + 416);
                if ( v92 == v91 )
                  goto LABEL_178;
                while ( 1 )
                {
                  v51 = v92 - 33;
                  if ( (struct COcclusionContext **)v92[4] == v41 )
                    break;
                  v92 = (_QWORD *)*v92;
                  if ( v92 == v91 )
                    goto LABEL_178;
                }
              }
              if ( !v51 )
                goto LABEL_178;
              if ( !v51[4] )
                v51[4] = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v51[3] + 248LL))(v51[3]);
              v52 = (_DWORD *)v51[4];
              if ( !v52 )
              {
LABEL_178:
                v53 = 0;
                goto LABEL_75;
              }
              if ( *((_BYTE *)v49 + 24) )
                v53 = v52[3];
              else
                v53 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v52 + 24LL))(v51[4]);
LABEL_75:
              v54 = _mm_shuffle_ps(*(__m128 *)((char *)v49 + 28), *(__m128 *)((char *)v49 + 28), 170).m128_f32[0];
              *(_OWORD *)v121 = *(_OWORD *)((char *)v49 + 28);
              if ( v54 > v121[0] && v121[3] > v121[1] )
              {
                v55 = *((_QWORD *)v48 + 12);
                *(_QWORD *)&v118 = *(_QWORD *)v121;
                *((_QWORD *)&v118 + 1) = __PAIR64__(LODWORD(v121[3]), LODWORD(v54));
                v56 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 40LL);
                v57 = v56 == CArrayBasedCoverageSet::IsFullyCovered
                    ? CArrayBasedCoverageSet::IsFullyCovered(v55, (__int64)&v118)
                    : ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD))v56)(v55, &v118, v53);
                if ( !v57 )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v117, v121);
              }
              v41 = *(struct COcclusionContext ***)v113;
              if ( v47 == v46 )
              {
                v3 = v111;
                v38 = v109;
                v16 = v104;
                break;
              }
            }
          }
          if ( *((float *)&v116 + 2) <= *(float *)&v116
            || *((float *)&v116 + 3) <= *((float *)&v116 + 1)
            || (v45 = v117, v44 = DWORD1(v117), v43 = DWORD2(v117), *(float *)&v116 >= *(float *)&v117)
            && *((float *)&v116 + 1) >= *((float *)&v117 + 1)
            && *((float *)&v117 + 2) >= *((float *)&v116 + 2)
            && *((float *)&v117 + 3) >= *((float *)&v116 + 3) )
          {
            v45 = v116;
            v44 = DWORD1(v116);
            v43 = DWORD2(v116);
            HIDWORD(v117) = HIDWORD(v116);
          }
          v37 = v107;
        }
      }
      *(_QWORD *)&v115 = __PAIR64__(v44, v45);
      *((_QWORD *)&v115 + 1) = __PAIR64__(HIDWORD(v117), v43);
    }
    v58 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, __int128 *))(*(_QWORD *)v3 + 256LL))(v3, &v115);
    v4 = v58;
    if ( v58 < 0 )
    {
      v98 = 919;
      goto LABEL_196;
    }
    if ( *((float *)&v115 + 2) > *(float *)&v115 && *((float *)&v115 + 3) > *((float *)&v115 + 1) )
      break;
LABEL_116:
    ++v37;
    ++v38;
    LODWORD(v107) = v37;
    v109 = v38;
    if ( v37 >= v16 )
      goto LABEL_117;
    v36 = v101;
    LOBYTE(v13) = v102;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    Template_qdffff(v13, v59, v122[v38], v60, v115, SBYTE4(v115), SBYTE8(v115), SBYTE12(v115));
  v61 = HIBYTE(v102) == 0;
  HasVirtualModeScale = *((_BYTE *)v3 + 552);
  if ( !HasVirtualModeScale )
  {
    v63 = (CDisplay *)*((_QWORD *)v3 + 10);
    if ( v63 )
      HasVirtualModeScale = CDisplay::HasVirtualModeScale(v63);
  }
  v64 = v106;
  v65 = CHwndRenderTarget::DrawVisualTree((__int64)v3, v106, &v115, v110, HasVirtualModeScale, v101, v99, v61);
  v4 = v65;
  if ( v65 >= 0 )
  {
    if ( BYTE1(v102) )
    {
      v78 = &v115;
    }
    else
    {
      v66 = *(float *)&v115;
      v67 = *((float *)&v115 + 1);
      v68 = *((float *)&v115 + 2);
      v69 = *((float *)&v115 + 3);
      v120 = v115;
      if ( CBaseMatrix::IsExactlyPureTranslate((CHwndRenderTarget *)((char *)v3 + 132)) )
      {
        v71 = v66 + v70[12];
        v72 = v67 + v70[13];
        v73 = v68 + v70[12];
        v74 = v69 + v70[13];
      }
      else
      {
        CBaseMatrix::Transform2DRectToPerspective(
          (CBaseMatrix *)v70,
          (const struct MilRectF *)&v120,
          (struct MilPoint2F *const)v121);
        v93 = &v121[3];
        v107 = *(_QWORD *)v121;
        v94 = 3LL;
        v74 = v121[1];
        v73 = v121[0];
        v109 = *(_QWORD *)v121;
        v72 = v121[1];
        v71 = v121[0];
        do
        {
          v95 = *(v93 - 1);
          if ( v71 > v95 )
            v71 = *(v93 - 1);
          if ( v72 > *v93 )
            v72 = *v93;
          if ( v95 > v73 )
            v73 = *(v93 - 1);
          if ( *v93 > v74 )
            v74 = *v93;
          v93 += 2;
          --v94;
        }
        while ( v94 );
      }
      v75 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v71) & _xmm);
      if ( v75 < 8388608.0 )
        v71 = (float)(int)floorf_0(v71);
      v76 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v72) & _xmm);
      if ( v76 < 8388608.0 )
        v72 = (float)(int)floorf_0(v72);
      v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v73) & _xmm);
      if ( v77 < 8388608.0 )
        v73 = (float)(int)ceilf_0(v73);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v74) & _xmm) < 8388608.0 )
        v74 = (float)(int)ceilf_0(v74);
      *(float *)v119 = v71;
      v78 = (__int128 *)v119;
      *(float *)&v119[1] = v72;
      *(float *)&v119[2] = v73;
      *(float *)&v119[3] = v74;
    }
    v79 = *(__int64 (__fastcall **)(__int64, __int64))(**((_QWORD **)v3 + 11) + 208LL);
    if ( v79 == CHwFullScreenRenderTarget::NotifyRenderedRect )
      v80 = CHwFullScreenRenderTarget::NotifyRenderedRect(*((_QWORD *)v3 + 11), (__int64)v78);
    else
      v80 = v79(*((_QWORD *)v3 + 11), (__int64)v78);
    v4 = v80;
    if ( v80 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v80, 0x9C0u);
    else
      *((_BYTE *)v3 + 557) = 1;
    if ( v4 < 0 )
    {
      v98 = 946;
      v96 = v4;
      goto LABEL_198;
    }
    if ( v114 )
    {
      v58 = CComposeTop::SubtractOverdraw(v114, &v115);
      v4 = v58;
      if ( v58 < 0 )
      {
        v98 = 954;
LABEL_196:
        v96 = v58;
LABEL_198:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v96, v98);
LABEL_118:
        v64 = v106;
        goto LABEL_119;
      }
    }
    v16 = v104;
    goto LABEL_116;
  }
  v97 = 939;
LABEL_200:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, v97);
LABEL_119:
  if ( v105 )
    CDrawingContext::PopRenderTargetInternal(v64, 0);
LABEL_121:
  if ( v112 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v112 + 16LL))(v112);
  return (unsigned int)v4;
}
