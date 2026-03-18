/*
 * XREFs of ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisualImage@@_NAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180003688 (-UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisual.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180005658 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x1800346B8 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x18005C180 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBV-$CMatrix@UPageInPixels@CoordinateSpace@@UDevice.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18005F9E4 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x18006D184 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006D550 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180070E8C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180074BBC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x1800787BC (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 *     ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x18007AE40 (-NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z.c)
 *     ?NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007AFE0 (-NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA8B8 (-SubtractOverdraw@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800ACBEC (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801079E8 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1801098FC (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     Template_qdffff @ 0x18011CA90 (Template_qdffff.c)
 *     Template_xqq @ 0x18011CBCC (Template_xqq.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18012D01C (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@@Z @ 0x1801319A0 (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDirtyRegion(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  __int64 v3; // rax
  unsigned int v5; // r14d
  int v6; // ebx
  __int64 v7; // r15
  bool v8; // zf
  __int64 v9; // rsi
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // r13
  __int64 v14; // rcx
  CHwFullScreenRenderTarget *v15; // rcx
  void (__fastcall *v16)(CHwFullScreenRenderTarget *__hidden, bool); // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  float v20; // xmm4_4
  float v21; // xmm3_4
  unsigned int v22; // r15d
  float v23; // xmm2_4
  float v24; // xmm5_4
  __int64 v25; // rax
  char *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // r15
  unsigned int i; // r12d
  __int64 v31; // rcx
  int v32; // eax
  char v33; // al
  CDirtyRegion *v34; // rcx
  CDrawingContext *v35; // r12
  unsigned __int8 v36; // r10
  __m128 *v37; // rsi
  unsigned int *v38; // r13
  __m128 v39; // xmm2
  __int64 v40; // rdx
  __int64 v41; // rax
  const struct CVisualTree *v42; // r12
  D3DVALUE v43; // xmm8_4
  D3DVALUE v44; // xmm7_4
  D3DVALUE v45; // xmm6_4
  __int64 v46; // rcx
  _QWORD **v47; // rsi
  _QWORD *v48; // r15
  int v49; // eax
  int v50; // r9d
  char v51; // bl
  char HasVirtualModeScale; // al
  CDisplay *v53; // rcx
  __int64 v54; // rax
  char *v55; // rcx
  float v56; // xmm8_4
  float v57; // xmm1_4
  float v58; // xmm7_4
  float v59; // xmm1_4
  float v60; // xmm6_4
  float v61; // xmm1_4
  float v62; // xmm2_4
  __int64 *v63; // rcx
  __int64 v64; // rax
  __int64 (__fastcall *v65)(__int64 *, __int128 *); // rax
  int v66; // eax
  CDrawingContext *v67; // rdi
  __int64 v69; // rcx
  CVisual **v70; // rbx
  struct COcclusionInfo *OcclusionInfo; // rax
  int CurrentRealizationAsRenderTarget; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  __int64 v76; // r8
  _QWORD *v77; // rbx
  unsigned int v78; // eax
  int v79; // r9d
  unsigned int v80; // [rsp+28h] [rbp-E0h]
  __int64 v81; // [rsp+38h] [rbp-D0h]
  char v82; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v83; // [rsp+49h] [rbp-BFh]
  bool v84; // [rsp+4Ah] [rbp-BEh] BYREF
  char v85; // [rsp+4Bh] [rbp-BDh]
  int v86; // [rsp+4Ch] [rbp-BCh]
  bool v87[8]; // [rsp+50h] [rbp-B8h] BYREF
  CDrawingContext *v88; // [rsp+58h] [rbp-B0h]
  __m128 *v89; // [rsp+60h] [rbp-A8h]
  __int64 v90; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v91; // [rsp+70h] [rbp-98h] BYREF
  __int64 v92; // [rsp+78h] [rbp-90h]
  struct IRenderTargetBitmap *v93; // [rsp+80h] [rbp-88h] BYREF
  struct CComposeTop *v94; // [rsp+88h] [rbp-80h]
  __int128 v95; // [rsp+90h] [rbp-78h] BYREF
  __int128 v96; // [rsp+A0h] [rbp-68h] BYREF
  struct _D3DCOLORVALUE v97; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v98; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v99; // [rsp+D0h] [rbp-38h] BYREF
  float X; // [rsp+E0h] [rbp-28h] BYREF
  float v101; // [rsp+E4h] [rbp-24h]
  float v102; // [rsp+E8h] [rbp-20h]
  float v103; // [rsp+ECh] [rbp-1Ch]
  _OWORD v104[8]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v105[8]; // [rsp+178h] [rbp+70h] BYREF

  v3 = *((_QWORD *)this + 23);
  v5 = 0;
  v6 = 0;
  v94 = a3;
  v88 = a2;
  if ( *(_BYTE *)(v3 + 2724) )
    v7 = v3 + 2708;
  else
    v7 = v3 + 416;
  v8 = (*((_DWORD *)this + 86) & 0x10000) == 0;
  v9 = 0LL;
  v10 = *(_DWORD *)(v3 + 576);
  v93 = 0LL;
  v82 = *(_BYTE *)(v3 + 2724);
  v11 = *((_QWORD *)this + 2);
  v86 = 0;
  v91 = 0LL;
  LODWORD(v90) = 0;
  v12 = *(_QWORD *)(v11 + 32);
  v85 = 0;
  v13 = *(_BYTE *)(v12 + 111);
  v84 = v13;
  v83 = !v8 && !v13;
  v14 = *((_QWORD *)this + 20);
  LODWORD(v92) = 0x7FFFFFFF;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 64LL))(v14, &v98);
  v15 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 20);
  v16 = *(void (__fastcall **)(CHwFullScreenRenderTarget *__hidden, bool))(*(_QWORD *)v15 + 448LL);
  if ( v16 == CHwFullScreenRenderTarget::NotifySwapChainFullScreen )
    CHwFullScreenRenderTarget::NotifySwapChainFullScreen(v15, 0);
  else
    v16(v15, 0);
  if ( v82 )
  {
    v22 = 1;
    v105[0] = 0;
    v86 = 1;
    v104[0] = v98;
  }
  else
  {
    v17 = 0LL;
    if ( v10 )
    {
      v20 = *((float *)&v98 + 3);
      v18 = v7 + 8;
      v21 = *((float *)&v98 + 2);
      v22 = 0;
      v23 = *((float *)&v98 + 1);
      v24 = *(float *)&v98;
      do
      {
        v99 = *(_OWORD *)(v18 - 8);
        v19 = v22;
        v104[v22] = v99;
        if ( v24 > *(float *)&v104[v22] )
          *(float *)&v104[v22] = v24;
        if ( v23 > *((float *)&v104[v22] + 1) )
          *((float *)&v104[v22] + 1) = v23;
        if ( *((float *)&v104[v22] + 2) > v21 )
          *((float *)&v104[v22] + 2) = v21;
        if ( *((float *)&v104[v22] + 3) > v20 )
          *((float *)&v104[v22] + 3) = v20;
        if ( *((float *)&v104[v22] + 2) <= *(float *)&v104[v22]
          || *((float *)&v104[v22] + 3) <= *((float *)&v104[v22] + 1) )
        {
          *((_QWORD *)&v104[v22] + 1) = 0LL;
          *(_QWORD *)&v104[v22] = 0LL;
        }
        else
        {
          v105[v22++] = v17;
        }
        v17 = (unsigned int)(v17 + 1);
        v18 += 16LL;
      }
      while ( (unsigned int)v17 < v10 );
      v86 = v22;
    }
    else
    {
      v22 = 0;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq(v18, (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (_DWORD)v88, 0, v22);
  if ( v22 )
  {
    if ( v83 )
    {
      v9 = *((_QWORD *)v88 + 808);
      v91 = v9;
      if ( v9 )
      {
        v25 = *((_QWORD *)this + 92);
        if ( v25 && *(_BYTE *)(v25 + 1089) )
          v26 = (char *)this + 272;
        else
          v26 = (char *)this + 204;
        COcclusionContext::SetDeviceTransform(v9, (__int64)v26);
        v28 = *((_QWORD *)this + 16);
        if ( *((_QWORD *)v88 + 808) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            TemplateEventDescriptor(v27, &EVTDESC_RENDER_CVIPASS_Start);
          v29 = *((_QWORD *)v88 + 808);
          for ( i = 0; i < *(_DWORD *)(v29 + 992); ++i )
            CDrawingContext::UpdateNodeCVIRenderTarget(
              (__int64)v88,
              v28,
              *(void **)(*(_QWORD *)(v29 + 968) + 40LL * i),
              *(_QWORD *)(*(_QWORD *)(v29 + 968) + 40LL * i + 8),
              *(_BYTE *)(*(_QWORD *)(v29 + 968) + 40LL * i + 16),
              *(_QWORD *)(v29 + 968) + 40LL * i + 20);
          *(_DWORD *)(v29 + 992) = 0;
          DynArrayImpl<0>::ShrinkToSize(v29 + 968, 40LL);
          v6 = 0;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            TemplateEventDescriptor(v31, &EVTDESC_RENDER_CVIPASS_Stop);
          v22 = v86;
        }
        v13 = v84;
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xd(v18, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, v88, 0LL);
        CDrawingContext::CalculateOcclusion(v88, *((struct CVisualTree **)this + 16), v22, (__int64)v104, 0, &v91);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xd(v69, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, v88, 0LL);
        v9 = v91;
      }
    }
    v18 = *((_QWORD *)this + 92);
    if ( !v18 )
      goto LABEL_136;
    v84 = 0;
    v87[0] = 0;
    v32 = COverlayContext::ApplyOverlayOrDirectFlipConfiguration(
            (COverlayContext *)v18,
            &v84,
            v87,
            (enum DirectFlipMode::Enum *)&v90);
    v6 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x34Fu);
      goto LABEL_96;
    }
    v33 = v82;
    if ( v82 )
      goto LABEL_44;
    v34 = (CDirtyRegion *)*((_QWORD *)this + 23);
    if ( !v84
      || *((_BYTE *)v34 + 2724)
      || (v17 = v83, v33 = 1, v82 = 1, v22 = 1, v104[0] = v98, v86 = 1, v105[0] = 0, !v83) )
    {
LABEL_44:
      v35 = v88;
    }
    else
    {
      CDirtyRegion::SetFullDirty(v34);
      CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)(*((_QWORD *)this + 22) + 152LL), 0);
      v35 = v88;
      v33 = 1;
      v9 = *((_QWORD *)v88 + 808);
      v91 = v9;
    }
    v18 = (unsigned int)v90;
    if ( !(_DWORD)v90 )
    {
      if ( !v87[0] )
      {
LABEL_47:
        if ( v9 )
        {
          v36 = v83;
        }
        else
        {
          v36 = 0;
          v83 = 0;
        }
        if ( v13 )
          goto LABEL_138;
        if ( !v33 )
          goto LABEL_51;
        if ( !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                 *((_QWORD *)this + 19) + 88LL,
                                 *((_QWORD *)this + 19) + 72LL) )
        {
LABEL_138:
          v75 = CDrawingContext::Clear((CD2DContext **)v88, &stru_1801C74E0);
          v6 = v75;
          if ( v75 < 0 )
          {
            v80 = 953;
            v79 = v75;
            goto LABEL_157;
          }
          LOBYTE(v76) = 1;
          v49 = CHwndRenderTarget::NotifyRenderedRect(this, 0LL, v76);
          v6 = v49;
          if ( v49 < 0 )
          {
            v80 = 959;
            goto LABEL_154;
          }
          v36 = v83;
          if ( v13 )
            v22 = 0;
          v86 = v22;
        }
        v33 = v82;
LABEL_51:
        if ( v22 )
        {
          v37 = (__m128 *)v104;
          v38 = v105;
          v89 = (__m128 *)v104;
          while ( 1 )
          {
            v39 = *v37;
            LODWORD(v97.r) = *(__m128 *)v37->m128_f32;
            LODWORD(v97.a) = _mm_shuffle_ps(v39, v39, 255).m128_u32[0];
            LODWORD(v97.g) = _mm_shuffle_ps(v39, v39, 85).m128_u32[0];
            LODWORD(v97.b) = _mm_shuffle_ps(v39, v39, 170).m128_u32[0];
            if ( !v33 )
            {
              if ( v36 )
                break;
            }
LABEL_63:
            v49 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, struct _D3DCOLORVALUE *))(*(_QWORD *)this + 272LL))(
                    this,
                    &v97);
            v6 = v49;
            if ( v49 < 0 )
            {
              v80 = 996;
LABEL_154:
              v79 = v49;
LABEL_157:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, v80);
LABEL_93:
              v67 = v88;
              goto LABEL_94;
            }
            if ( v97.b > v97.r && v97.a > v97.g )
            {
              v51 = 1;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
                Template_qdffff(v18, v17, *v38, v50, SLOBYTE(v97.r), SLOBYTE(v97.g), SLOBYTE(v97.b), SLOBYTE(v97.a));
              if ( (_DWORD)v90 == 2 )
                v51 = 0;
              HasVirtualModeScale = *((_BYTE *)this + 744);
              if ( !HasVirtualModeScale )
              {
                v53 = (CDisplay *)*((_QWORD *)this + 19);
                if ( v53 )
                  HasVirtualModeScale = CDisplay::HasVirtualModeScale(v53);
              }
              v49 = CHwndRenderTarget::DrawVisualTree((__int64)this, v88, &v97, v92, HasVirtualModeScale, v83, v81, v51);
              v6 = v49;
              if ( v49 < 0 )
              {
                v80 = 1026;
                goto LABEL_154;
              }
              v54 = *((_QWORD *)this + 92);
              if ( v54 && *(_BYTE *)(v54 + 1089) )
                v55 = (char *)this + 272;
              else
                v55 = (char *)this + 204;
              CMILMatrix::Transform2DBoundsHelper<0>((__int64)v55, (__int64)&v97, &X);
              v56 = X;
              v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(X) & _xmm);
              if ( v57 < 8388608.0 )
                v56 = (float)(int)floorf_0(X);
              v58 = v101;
              X = v56;
              v59 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v101) & _xmm);
              if ( v59 < 8388608.0 )
                v58 = (float)(int)floorf_0(v101);
              v60 = v102;
              v101 = v58;
              v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v102) & _xmm);
              if ( v61 < 8388608.0 )
                v60 = (float)(int)ceilf_0(v102);
              v62 = v103;
              v102 = v60;
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v103) & _xmm) < 8388608.0 )
                v62 = (float)(int)ceilf_0(v103);
              v63 = (__int64 *)*((_QWORD *)this + 20);
              *(_QWORD *)&v99 = __PAIR64__(LODWORD(v58), LODWORD(v56));
              *((_QWORD *)&v99 + 1) = __PAIR64__(LODWORD(v62), LODWORD(v60));
              v64 = *v63;
              v103 = v62;
              v65 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v64 + 216);
              if ( (char *)v65 == (char *)CHwFullScreenRenderTarget::NotifyRenderedRect )
                v66 = CHwFullScreenRenderTarget::NotifyRenderedRect(v63, &v99);
              else
                v66 = v65(v63, &v99);
              v6 = v66;
              if ( v66 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0xA45u);
              else
                *((_BYTE *)this + 750) = 1;
              if ( v6 < 0 )
              {
                v80 = 1033;
                v79 = v6;
                goto LABEL_157;
              }
              if ( v94 )
              {
                v49 = CComposeTop::SubtractOverdraw(v94, &v97);
                v6 = v49;
                if ( v49 < 0 )
                {
                  v80 = 1041;
                  goto LABEL_154;
                }
              }
            }
            ++v37;
            ++v5;
            ++v38;
            v89 = v37;
            if ( v5 >= v22 )
              goto LABEL_92;
            v33 = v82;
            v36 = v83;
          }
          v40 = *((_QWORD *)this + 23);
          v41 = *v38;
          v42 = (const struct CVisualTree *)*((_QWORD *)this + 16);
          if ( *(_BYTE *)(v40 + 2724) )
          {
            v96 = *(_OWORD *)(v40 + 2708);
            v43 = *((float *)&v96 + 2);
            v44 = *((float *)&v96 + 1);
            v45 = *(float *)&v96;
            goto LABEL_62;
          }
          v43 = 0.0;
          HIDWORD(v96) = 0;
          v44 = 0.0;
          v45 = 0.0;
          if ( (unsigned int)v41 >= *(_DWORD *)(v40 + 576) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x383u);
            goto LABEL_62;
          }
          _mm_lfence();
          v46 = 16LL * *(unsigned int *)(v40 + 4 * v41 + 544);
          v47 = (_QWORD **)(v46 + v40 + 584);
          v48 = *v47;
          v96 = *(_OWORD *)(v46 + v40 + 152);
          while ( v48 != v47 )
          {
            v77 = v48;
            v48 = (_QWORD *)*v48;
            v78 = CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)v77, v42);
            v95 = *(_OWORD *)((char *)v77 + 28);
            if ( !COcclusionContext::IsOccluded(v91, (float *)&v95, 0LL, v78) )
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v96, (float *)&v95);
          }
          if ( *((float *)&v98 + 2) > *(float *)&v98 && *((float *)&v98 + 3) > *((float *)&v98 + 1) )
          {
            v45 = *(float *)&v96;
            v44 = *((float *)&v96 + 1);
            v43 = *((float *)&v96 + 2);
            if ( *(float *)&v98 < *(float *)&v96
              || *((float *)&v98 + 1) < *((float *)&v96 + 1)
              || *((float *)&v96 + 2) < *((float *)&v98 + 2) )
            {
              goto LABEL_61;
            }
            if ( *((float *)&v96 + 3) < *((float *)&v98 + 3) )
            {
              v37 = v89;
              v22 = v86;
              goto LABEL_62;
            }
          }
          HIDWORD(v96) = HIDWORD(v98);
          v45 = *(float *)&v98;
          v44 = *((float *)&v98 + 1);
          v43 = *((float *)&v98 + 2);
LABEL_61:
          v37 = v89;
          v22 = v86;
LABEL_62:
          v97.a = *((D3DVALUE *)&v96 + 3);
          v97.r = v45;
          v97.g = v44;
          v97.b = v43;
          goto LABEL_63;
        }
        goto LABEL_92;
      }
      v74 = CDrawingContext::PushRenderTarget(v35, *((struct IRenderTarget **)this + 20));
      v6 = v74;
      if ( v74 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0x398u);
        goto LABEL_96;
      }
      goto LABEL_135;
    }
    v18 = (unsigned int)(v90 - 1);
    if ( (_DWORD)v90 == 1 )
    {
      v22 = 0;
      v86 = 0;
    }
    else if ( (_DWORD)v90 == 2 )
    {
      v70 = *(CVisual ***)(*((_QWORD *)this + 92) + 960LL);
      OcclusionInfo = CVisual::GetOcclusionInfo(v70[3], *((const struct CVisualTree **)this + 16));
      LODWORD(v92) = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
      CurrentRealizationAsRenderTarget = CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
                                           (CDirectFlipInfo *)v70,
                                           &v93);
      v6 = CurrentRealizationAsRenderTarget;
      if ( CurrentRealizationAsRenderTarget < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentRealizationAsRenderTarget, 0x388u);
        goto LABEL_96;
      }
      v73 = CDrawingContext::PushRenderTarget(v35, v93);
      v6 = v73;
      if ( v73 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v73, 0x389u);
        goto LABEL_96;
      }
LABEL_135:
      v85 = 1;
    }
LABEL_136:
    v33 = v82;
    goto LABEL_47;
  }
LABEL_92:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
    goto LABEL_93;
  v67 = v88;
  Template_x(v18, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, v88);
LABEL_94:
  if ( v85 )
    CDrawingContext::PopRenderTargetInternal(v67, 0);
LABEL_96:
  if ( v93 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, __int64, __int64))(*(_QWORD *)v93 + 16LL))(v93, v17, v19);
  return (unsigned int)v6;
}
