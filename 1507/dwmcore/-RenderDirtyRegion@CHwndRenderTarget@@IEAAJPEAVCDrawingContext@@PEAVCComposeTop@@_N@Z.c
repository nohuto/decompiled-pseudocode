/*
 * XREFs of ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?RegisterGraphWalkRoot@CGraphWalker@@SAJPEAVIGraphNode@@@Z @ 0x18000EC84 (-RegisterGraphWalkRoot@CGraphWalker@@SAJPEAVIGraphNode@@@Z.c)
 *     ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18000EE8C (-UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180011654 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x180012DF0 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCOverlayContext@@@Z @ 0x18001F420 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18001F840 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002F290 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18004BCA8 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004E0D0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180057B50 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?UnregisterGraphWalkRoot@CGraphWalker@@SAXXZ @ 0x18005C018 (-UnregisterGraphWalkRoot@CGraphWalker@@SAXXZ.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005ED78 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ceilf_0 @ 0x180099B5A (ceilf_0.c)
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800DC290 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800DC3EC (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800DCDD8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_qdffff @ 0x1800EABC0 (Template_qdffff.c)
 *     Template_xqq @ 0x1800EACFC (Template_xqq.c)
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800EEF9C (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?AssignDbgRedrawRects@CDrawingContext@@QEAAXPEBUMilRectF@@I@Z @ 0x1800F1408 (-AssignDbgRedrawRects@CDrawingContext@@QEAAXPEBUMilRectF@@I@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800F765C (-Reset@COverlayContext@@QEAAXXZ.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011A264 (-SubtractOverdraw@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDirtyRegion(
        CHwndRenderTarget *this,
        struct CComposition **a2,
        struct CComposeTop *a3,
        char a4)
{
  CHwndRenderTarget *v4; // r12
  struct CComposition **v5; // r13
  int v6; // esi
  __int64 v7; // rax
  const struct MilRectF *v8; // r15
  bool v9; // zf
  unsigned int v10; // r14d
  __int64 v11; // rdi
  int v12; // ecx
  COverlayContext *v13; // rcx
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  __int128 v18; // xmm0
  unsigned int v19; // ebx
  char *v20; // r8
  __int64 *v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // r10
  COverlayContext *v25; // rcx
  int v26; // eax
  __int64 v27; // rbx
  __int64 *v28; // rdi
  __int64 v29; // r15
  int v30; // eax
  int v31; // r14d
  unsigned int v32; // edx
  COcclusionContext *v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r13
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // r14
  __int64 v40; // r15
  char v41; // r12
  struct IGraphNode *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  struct CVisualTree *v46; // rdx
  CVisual **v47; // rsi
  struct COcclusionInfo *OcclusionInfo; // rdi
  int CurrentRealizationAsRenderTarget; // eax
  int v50; // eax
  __int64 v51; // r14
  __int64 v52; // r15
  char v53; // di
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r14
  unsigned int v57; // xmm6_4
  unsigned int v58; // xmm7_4
  unsigned int v59; // xmm8_4
  _QWORD *v60; // r13
  _QWORD *v61; // r12
  _QWORD *v62; // r15
  __int64 v63; // rcx
  _QWORD *v64; // rsi
  _DWORD *v65; // rdi
  unsigned int v66; // esi
  _QWORD *v67; // rcx
  _QWORD *v68; // rax
  float v69; // xmm2_4
  __int64 v70; // rdi
  int v71; // eax
  int v72; // edx
  int v73; // ecx
  int v74; // r9d
  char HasVirtualModeScale; // al
  char v76; // r9
  CDisplay *v77; // rcx
  __int128 *v78; // rsi
  float v79; // xmm3_4
  float v80; // xmm10_4
  float *v81; // rcx
  float v82; // xmm4_4
  float v83; // xmm5_4
  float v84; // xmm9_4
  float v85; // xmm8_4
  float v86; // xmm6_4
  float v87; // xmm7_4
  float v88; // xmm1_4
  float v89; // xmm1_4
  float v90; // xmm1_4
  int v91; // eax
  unsigned int v92; // [rsp+28h] [rbp-E0h]
  __int64 v93; // [rsp+38h] [rbp-D0h]
  __int64 v94; // [rsp+38h] [rbp-D0h]
  char v95; // [rsp+58h] [rbp-B0h]
  char v96; // [rsp+59h] [rbp-AFh] BYREF
  char v97; // [rsp+5Ah] [rbp-AEh]
  char v98; // [rsp+5Bh] [rbp-ADh]
  unsigned int v99; // [rsp+5Ch] [rbp-ACh]
  char v100; // [rsp+60h] [rbp-A8h]
  char v101[15]; // [rsp+61h] [rbp-A7h] BYREF
  __int64 v102; // [rsp+70h] [rbp-98h]
  __int64 v103; // [rsp+78h] [rbp-90h]
  struct CComposition **v104; // [rsp+80h] [rbp-88h]
  CHwndRenderTarget *v105; // [rsp+88h] [rbp-80h]
  int v106; // [rsp+90h] [rbp-78h]
  struct IRenderTarget *v107; // [rsp+98h] [rbp-70h] BYREF
  struct CComposeTop *v108; // [rsp+A0h] [rbp-68h]
  __int128 v109; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v110; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v111; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v112; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v113; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v114[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v115; // [rsp+108h] [rbp+0h] BYREF
  float v116; // [rsp+110h] [rbp+8h]
  int v117; // [rsp+114h] [rbp+Ch]
  struct _D3DCOLORVALUE v118; // [rsp+128h] [rbp+20h] BYREF
  __int64 v119; // [rsp+138h] [rbp+30h] BYREF
  float v120; // [rsp+140h] [rbp+38h]
  float v121; // [rsp+144h] [rbp+3Ch]
  float v122; // [rsp+148h] [rbp+40h]
  float v123; // [rsp+14Ch] [rbp+44h]
  float v124; // [rsp+150h] [rbp+48h]
  float v125; // [rsp+154h] [rbp+4Ch]
  _DWORD v126[8]; // [rsp+158h] [rbp+50h]
  __int64 v127[2]; // [rsp+178h] [rbp+70h] BYREF

  v4 = this;
  v5 = a2;
  v105 = this;
  v6 = 0;
  v7 = *((_QWORD *)this + 14);
  v97 = a4;
  v108 = a3;
  v8 = (const struct MilRectF *)(v7 + 996);
  v104 = a2;
  LODWORD(v102) = 0;
  if ( !*(_BYTE *)(v7 + 1012) )
    v8 = (const struct MilRectF *)(v7 + 280);
  v9 = (*((_DWORD *)this + 50) & 0x10000) == 0;
  v10 = *(_DWORD *)(v7 + 440);
  v107 = 0LL;
  *(_QWORD *)&v101[7] = 0LL;
  v98 = 0;
  v96 = 0;
  v100 = 0;
  if ( !v9 || (v95 = 0, g_fForceOcclusionOptimization) )
    v95 = 1;
  v11 = *((_QWORD *)this + 11);
  v106 = 0x7FFFFFFF;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 64LL))(v11, &v112);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v4 + 11) + 440LL))(*((_QWORD *)v4 + 11), 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq(v12, (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (_DWORD)v5, 0, v10);
  v13 = *(COverlayContext **)(*((_QWORD *)v4 + 2) + 32LL);
  if ( *((_BYTE *)v13 + 118) )
  {
    *(struct _D3DCOLORVALUE *)&v118.r = (struct _D3DCOLORVALUE)_xmm;
    v14 = CDrawingContext::Clear((CDrawingContext *)v5, &v118);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2E8u);
      goto LABEL_20;
    }
    LOBYTE(v15) = 1;
    v16 = CHwndRenderTarget::NotifyRenderedRect(v4, 0LL, v15);
    v6 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2EDu);
      goto LABEL_20;
    }
    v13 = (COverlayContext *)*((_QWORD *)v4 + 69);
    if ( v13 )
      COverlayContext::Reset(v13);
    goto LABEL_16;
  }
  if ( v97 )
  {
    v18 = v112;
    v19 = 1;
    v126[0] = 0;
    v99 = 1;
    *(_OWORD *)v127 = v112;
  }
  else
  {
    if ( !v10 )
      goto LABEL_16;
    v20 = (char *)v8 + 8;
    v19 = 0;
    do
    {
      v21 = &v127[2 * v19];
      v109 = *(_OWORD *)(v20 - 8);
      *(_OWORD *)v21 = v109;
      if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v21, &v112) )
      {
        v126[v24] = v23;
        ++v19;
      }
      v20 = (char *)(v22 + 16);
    }
    while ( v23 + 1 < v10 );
    v99 = v19;
    if ( !v19 )
      goto LABEL_16;
    v18 = v112;
  }
  if ( *(_DWORD *)(*((_QWORD *)v4 + 2) + 1152LL) )
  {
    v19 = 1;
    v97 = 1;
    v99 = 1;
    *(_OWORD *)v127 = v18;
    v126[0] = 0;
    CDrawingContext::AssignDbgRedrawRects((CDrawingContext *)v5, v8, v10);
  }
  v25 = (COverlayContext *)*((_QWORD *)v4 + 69);
  if ( v25 )
  {
    v26 = COverlayContext::BeginOverlayCandidateCollection(v25);
    LODWORD(v102) = v26;
    v6 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x32Au);
      goto LABEL_20;
    }
  }
  if ( !v95 )
    goto LABEL_68;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xd(v25, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, v5, 0LL);
  v27 = *((_QWORD *)v4 + 69);
  v28 = (__int64 *)(v5 + 718);
  v9 = v5[718] == 0LL;
  v29 = *((_QWORD *)v4 + 7);
  *(_QWORD *)&v111 = v5 + 718;
  if ( v9 )
  {
    v30 = COcclusionContext::Create(v5[3], v5 + 718);
    v31 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016AB1C, 1u, v30, 0x25C1u);
LABEL_62:
      v19 = v99;
      goto LABEL_63;
    }
  }
  v94 = v27;
  v19 = v99;
  v34 = COcclusionContext::Compute(
          *v28,
          v29,
          v99,
          (const struct MilRectF *)v127,
          0,
          (struct D2DMatrix *)(v5 + 339),
          v94);
  *(_DWORD *)&v101[7] = v34;
  v31 = v34;
  if ( v34 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v35, &EVTDESC_RENDER_CVIPASS_Start);
    v36 = *v28;
    v37 = 0LL;
    if ( *(_DWORD *)(*v28 + 760) )
    {
      v38 = v29;
      do
      {
        v39 = *(_QWORD *)(v36 + 736);
        v40 = *(_QWORD *)(v39 + 40 * v37);
        v41 = *(_BYTE *)(v39 + 40 * v37 + 16);
        v103 = *(_QWORD *)(v39 + 40 * v37 + 8);
        if ( v40 )
          v42 = (struct IGraphNode *)(v40 + 64);
        else
          v42 = 0LL;
        if ( (int)CGraphWalker::RegisterGraphWalkRoot(v42) >= 0 )
        {
          if ( v41 || !(unsigned __int8)CDrawingContext::IsNodeOccluded(v104, v38, v40, v39 + 20 + 40 * v37) )
            CCachedVisualImage::UpdateRenderTargetIfDirty(v103, (__int64)v104[48], *((_DWORD *)v104 + 98));
          CGraphWalker::UnregisterGraphWalkRoot();
        }
        v37 = (unsigned int)(v37 + 1);
      }
      while ( (unsigned int)v37 < *(_DWORD *)(v36 + 760) );
      v6 = v102;
      v28 = (__int64 *)v111;
      v31 = *(_DWORD *)&v101[7];
      v4 = v105;
    }
    *(_DWORD *)(v36 + 760) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v36 + 736), 0x28u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v33, &EVTDESC_RENDER_CVIPASS_Stop);
    v5 = v104;
    goto LABEL_62;
  }
  MilInstrumentationCheckHR(0x14u, &dword_18016AB1C, 1u, v34, 0x25D3u);
LABEL_63:
  if ( v31 < 0 )
  {
    v33 = (COcclusionContext *)*v28;
    if ( *v28 )
    {
      COcclusionContext::`scalar deleting destructor'(v33, v32);
      *v28 = 0LL;
    }
  }
  v43 = *v28;
  *(_QWORD *)&v101[7] = *v28;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xd(v33, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, v5, 0LL);
LABEL_68:
    v43 = *(_QWORD *)&v101[7];
  }
  v13 = (COverlayContext *)*((_QWORD *)v4 + 69);
  if ( v13 )
  {
    v101[0] = 0;
    *(_WORD *)&v101[1] = 0;
    v44 = COverlayContext::EndOverlayCandidateCollection(
            v13,
            *((const struct CVisualTree **)v4 + 7),
            (__int64)v4 + 132,
            v19,
            (__int64)v127,
            v43,
            v101,
            &v101[2],
            &v101[1],
            &v96);
    v6 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x358u);
      goto LABEL_20;
    }
    if ( v101[0] || v96 )
    {
      v46 = (struct CVisualTree *)*((_QWORD *)v4 + 7);
      v126[0] = 0;
      v97 = 1;
      v99 = 1;
      *(_OWORD *)v127 = v112;
      CDrawingContext::CalculateOcclusion(v5, v46, 1u, (const struct MilRectF *)&v112, 0, 0LL, (__int64 *)&v101[7]);
      if ( v96 )
      {
        v47 = *(CVisual ***)(*((_QWORD *)v4 + 69) + 624LL);
        OcclusionInfo = CVisual::GetOcclusionInfo(v47[3], *((const struct CVisualTree **)v4 + 7));
        v106 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
        CurrentRealizationAsRenderTarget = CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
                                             (CDirectFlipInfo *)v47,
                                             &v107);
        v6 = CurrentRealizationAsRenderTarget;
        if ( CurrentRealizationAsRenderTarget < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentRealizationAsRenderTarget, 0x38Du);
          goto LABEL_20;
        }
        v50 = CDrawingContext::PushRenderTarget((CDrawingContext *)v5, v107);
        v6 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x38Fu);
          goto LABEL_20;
        }
        goto LABEL_84;
      }
    }
    else if ( v101[1] )
    {
      v99 = 0;
    }
    if ( !v101[2] )
    {
LABEL_85:
      v100 = *(_BYTE *)(*((_QWORD *)v4 + 69) + 825LL);
      goto LABEL_86;
    }
    v45 = CDrawingContext::PushRenderTarget((CDrawingContext *)v5, *((struct IRenderTarget **)v4 + 11));
    v6 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x39Cu);
      goto LABEL_20;
    }
LABEL_84:
    v98 = 1;
    goto LABEL_85;
  }
LABEL_86:
  LODWORD(v102) = 0;
  if ( !v99 )
    goto LABEL_16;
  v51 = 0LL;
  v52 = *(_QWORD *)&v101[7];
  v103 = 0LL;
  while ( 1 )
  {
    v53 = v95;
    v111 = *(_OWORD *)&v127[2 * v51];
    if ( v95 )
    {
      if ( v52 )
      {
        if ( !v97 )
        {
          v54 = *((_QWORD *)v4 + 14);
          v55 = (unsigned int)v126[v51];
          v56 = *((_QWORD *)v4 + 7);
          if ( *(_BYTE *)(v54 + 1012) )
          {
            v109 = *(_OWORD *)(v54 + 996);
            v57 = DWORD2(v109);
            v58 = DWORD1(v109);
            v59 = v109;
LABEL_124:
            v51 = v103;
            *(_QWORD *)&v110 = __PAIR64__(v58, v59);
            *((_QWORD *)&v110 + 1) = __PAIR64__(HIDWORD(v109), v57);
            goto LABEL_127;
          }
          v57 = 0;
          HIDWORD(v109) = 0;
          v58 = 0;
          v59 = 0;
          if ( (unsigned int)v55 >= *(_DWORD *)(v54 + 440) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x368u);
            goto LABEL_124;
          }
          _mm_lfence();
          v60 = (_QWORD *)(v54 + 16 * (*(unsigned int *)(v54 + 4 * v55 + 408) + 28LL));
          v109 = *(_OWORD *)(v54 + 16LL * *(unsigned int *)(v54 + 4 * v55 + 408) + 152);
          v61 = (_QWORD *)*v60;
          if ( (_QWORD *)*v60 != v60 )
          {
            while ( 1 )
            {
              v62 = v61;
              v63 = v61[2];
              v61 = (_QWORD *)*v61;
              if ( *(_BYTE *)(v56 + 32) )
              {
                v64 = (_QWORD *)(v63 + 448);
              }
              else
              {
                v67 = (_QWORD *)(v63 + 432);
                v68 = (_QWORD *)*v67;
                if ( (_QWORD *)*v67 == v67 )
                  goto LABEL_106;
                while ( 1 )
                {
                  v64 = v68 - 33;
                  if ( v68[4] == v56 )
                    break;
                  v68 = (_QWORD *)*v68;
                  if ( v68 == v67 )
                    goto LABEL_106;
                }
              }
              if ( v64 )
              {
                if ( !v64[4] )
                  v64[4] = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v64[3] + 240LL))(v64[3]);
                v65 = (_DWORD *)v64[4];
                if ( v65 )
                {
                  if ( *((_BYTE *)v62 + 24) )
                    v66 = v65[3];
                  else
                    v66 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v65 + 24LL))(v64[4]);
                  goto LABEL_107;
                }
              }
LABEL_106:
              v66 = 0;
LABEL_107:
              v69 = _mm_shuffle_ps(*(__m128 *)((char *)v62 + 28), *(__m128 *)((char *)v62 + 28), 170).m128_f32[0];
              v111 = *(_OWORD *)((char *)v62 + 28);
              if ( v69 > *(float *)&v111 && *((float *)&v111 + 3) > *((float *)&v111 + 1) )
              {
                v115 = v111;
                v116 = v69;
                v70 = *(_QWORD *)(*(_QWORD *)&v101[7] + 96LL);
                v117 = HIDWORD(v111);
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v70 + 40LL))(
                        v70,
                        &v115,
                        v66) )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v109, &v111);
              }
              if ( v61 == v60 )
              {
                v53 = v95;
                break;
              }
            }
          }
          if ( *((float *)&v112 + 2) > *(float *)&v112 && *((float *)&v112 + 3) > *((float *)&v112 + 1) )
          {
            v59 = v109;
            v58 = DWORD1(v109);
            v57 = DWORD2(v109);
            if ( *(float *)&v112 < *(float *)&v109
              || *((float *)&v112 + 1) < *((float *)&v109 + 1)
              || *((float *)&v109 + 2) < *((float *)&v112 + 2) )
            {
              goto LABEL_122;
            }
            if ( *((float *)&v109 + 3) < *((float *)&v112 + 3) )
            {
              v4 = v105;
              v52 = *(_QWORD *)&v101[7];
              goto LABEL_124;
            }
          }
          HIDWORD(v109) = HIDWORD(v112);
          v59 = v112;
          v58 = DWORD1(v112);
          v57 = DWORD2(v112);
LABEL_122:
          v4 = v105;
          v52 = *(_QWORD *)&v101[7];
          goto LABEL_124;
        }
      }
      else
      {
        v53 = 0;
        v95 = 0;
      }
    }
    v110 = v111;
LABEL_127:
    v71 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, __int128 *))(*(_QWORD *)v4 + 248LL))(v4, &v110);
    v6 = v71;
    if ( v71 < 0 )
    {
      v92 = 971;
      goto LABEL_181;
    }
    if ( *((float *)&v110 + 2) > *(float *)&v110 && *((float *)&v110 + 3) > *((float *)&v110 + 1) )
      break;
    v5 = v104;
LABEL_184:
    ++v51;
    v13 = (COverlayContext *)(unsigned int)(v102 + 1);
    v103 = v51;
    LODWORD(v102) = (_DWORD)v13;
    if ( (unsigned int)v13 >= v99 )
    {
LABEL_16:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v13, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, v5);
      goto LABEL_18;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    Template_qdffff(v73, v72, v126[v51], v74, v110, SBYTE4(v110), SBYTE8(v110), SBYTE12(v110));
  HasVirtualModeScale = *((_BYTE *)v4 + 240);
  v76 = v96 == 0;
  if ( !HasVirtualModeScale )
  {
    v77 = (CDisplay *)*((_QWORD *)v4 + 10);
    if ( v77 )
      HasVirtualModeScale = CDisplay::HasVirtualModeScale(v77);
  }
  v5 = v104;
  v71 = CHwndRenderTarget::DrawVisualTree(
          (__int64)v4,
          (CDrawingContext *)v104,
          (float *)&v110,
          v106,
          HasVirtualModeScale,
          v53,
          v93,
          v76);
  v6 = v71;
  if ( v71 < 0 )
  {
    v92 = 991;
    goto LABEL_181;
  }
  if ( v100 )
  {
    v78 = &v110;
  }
  else
  {
    v79 = *(float *)&v110;
    v80 = *((float *)&v110 + 3);
    v113 = v110;
    if ( CBaseMatrix::IsExactlyPureTranslate((CHwndRenderTarget *)((char *)v4 + 132)) )
    {
      v84 = v81[12] + v79;
      v85 = v81[13] + v82;
      v86 = v81[12] + v83;
      v87 = v81[13] + v80;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v81,
        (const struct MilRectF *)&v113,
        (struct MilPoint2F *const)&v119);
      v86 = v120;
      v103 = v119;
      *(_QWORD *)&v111 = v119;
      if ( *(float *)&v119 <= v120 )
        v84 = *(float *)&v111;
      else
        v84 = v120;
      v85 = *((float *)&v111 + 1);
      if ( *((float *)&v111 + 1) > v121 )
        v85 = v121;
      if ( v120 <= *(float *)&v119 )
        v86 = *(float *)&v103;
      v87 = *((float *)&v103 + 1);
      if ( v121 > *((float *)&v103 + 1) )
        v87 = v121;
      if ( v84 > v122 )
        v84 = v122;
      if ( v85 > v123 )
        v85 = v123;
      if ( v122 > v86 )
        v86 = v122;
      if ( v123 > v87 )
        v87 = v123;
      if ( v84 > v124 )
        v84 = v124;
      if ( v85 > v125 )
        v85 = v125;
      if ( v124 > v86 )
        v86 = v124;
      if ( v125 > v87 )
        v87 = v125;
    }
    v88 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v84) & _xmm);
    if ( v88 < 8388608.0 )
      v84 = (float)(int)floorf_0(v84);
    v89 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v85) & _xmm);
    if ( v89 < 8388608.0 )
      v85 = (float)(int)floorf_0(v85);
    v90 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v86) & _xmm);
    if ( v90 < 8388608.0 )
      v86 = (float)(int)ceilf_0(v86);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v87) & _xmm) < 8388608.0 )
      v87 = (float)(int)ceilf_0(v87);
    *(float *)v114 = v84;
    v78 = (__int128 *)v114;
    *(float *)&v114[1] = v85;
    *(float *)&v114[2] = v86;
    *(float *)&v114[3] = v87;
  }
  v91 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v4 + 11) + 208LL))(*((_QWORD *)v4 + 11), v78);
  v6 = v91;
  if ( v91 >= 0 )
    *((_BYTE *)v4 + 564) = 1;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0xA0Bu);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3E6u);
    goto LABEL_18;
  }
  if ( !v108 )
    goto LABEL_184;
  v71 = CComposeTop::SubtractOverdraw(v108, &v110);
  v6 = v71;
  if ( v71 >= 0 )
    goto LABEL_184;
  v92 = 1006;
LABEL_181:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v71, v92);
LABEL_18:
  if ( v98 )
    CDrawingContext::PopRenderTargetInternal((CDrawingContext *)v104, 0);
LABEL_20:
  if ( v107 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v107 + 16LL))(v107);
  return (unsigned int)v6;
}
