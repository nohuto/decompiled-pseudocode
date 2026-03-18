/*
 * XREFs of ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800299D8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004BAA8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18004BCA8 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x180053DA4 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0774 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CAnalogRenderTarget@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180127054 (-RenderDirtyRegion@CAnalogRenderTarget@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18001EFF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001F284 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z @ 0x180022EA8 (-GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180027F54 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?PopLayer@CDrawingContext@@AEAAJXZ @ 0x180028020 (-PopLayer@CDrawingContext@@AEAAJXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18002976C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002F290 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180031500 (--$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawin.c)
 *     ?GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800456C0 (-GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18004DCF0 (-IsFullyCovered@CArrayBasedCoverageSet@@UEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004E010 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E148 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x18008DE74 (-PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ceilf_0 @ 0x180099B5A (ceilf_0.c)
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     ?BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E7B98 (-BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV-$TMilRect_.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F336C (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetDebugClearColor@CoRenderHost@@QEAAJPEAU_D3DCOLORVALUE@@@Z @ 0x1800F3AA4 (-GetDebugClearColor@CoRenderHost@@QEAAJPEAU_D3DCOLORVALUE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@@Z @ 0x1800F3FA4 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x1800F40AC (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisualTree(
        CDrawingContext *this,
        __int64 a2,
        float *a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  __int128 v12; // xmm12
  unsigned int v13; // ebx
  char v14; // r14
  __int128 v15; // xmm13
  char v16; // r13
  __int128 v18; // xmm14
  __int128 v20; // xmm15
  char v21; // al
  unsigned int v22; // ecx
  bool v23; // al
  CHwDisplayRenderTarget *v24; // rbx
  void (__fastcall *v25)(CHwDisplayRenderTarget *__hidden, struct MilRectF *); // rdi
  float v26; // xmm3_4
  D3DVALUE v27; // xmm4_4
  D3DVALUE v28; // xmm5_4
  float v29; // xmm10_4
  float *v30; // rcx
  float v31; // xmm4_4
  float v32; // xmm5_4
  float r; // xmm8_4
  float g; // xmm9_4
  float b; // xmm7_4
  float a; // xmm6_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  float v39; // xmm1_4
  int v40; // eax
  int v41; // eax
  __int64 v42; // r14
  CoRenderHost *v43; // rcx
  __int64 v44; // r10
  __int64 (__fastcall *v45)(_QWORD, struct _D3DCOLORVALUE *, __int64); // rdi
  const struct D2DMatrix *v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int128 v51; // xmm1
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  int v58; // eax
  int v59; // eax
  __int128 v60; // xmm0
  __int64 v62; // rcx
  int v63; // eax
  float *v64; // rax
  __int64 v65; // rcx
  float v66; // xmm0_4
  int v67; // eax
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int64 v71; // rax
  int v72; // eax
  float *v73; // rcx
  float v74; // xmm5_4
  float v75; // xmm4_4
  float v76; // xmm0_4
  int v77; // ecx
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  struct _D3DCOLORVALUE v82; // [rsp+30h] [rbp-D0h] BYREF
  struct _D3DCOLORVALUE v83; // [rsp+40h] [rbp-C0h] BYREF
  struct _D3DCOLORVALUE v84; // [rsp+50h] [rbp-B0h] BYREF
  float v85; // [rsp+60h] [rbp-A0h] BYREF
  float v86; // [rsp+64h] [rbp-9Ch]
  float v87; // [rsp+68h] [rbp-98h]
  float v88; // [rsp+6Ch] [rbp-94h]
  __m256i v89; // [rsp+70h] [rbp-90h] BYREF
  __m256i v90; // [rsp+90h] [rbp-70h]
  __int128 v91; // [rsp+B0h] [rbp-50h]
  __int128 v92; // [rsp+100h] [rbp+0h]

  v12 = *((_OWORD *)this + 346);
  LOBYTE(v91) = *((_BYTE *)this + 5520);
  v13 = 0;
  v14 = 0;
  v15 = *((_OWORD *)this + 347);
  BYTE1(v91) = *((_BYTE *)this + 5521);
  v16 = 1;
  v18 = *((_OWORD *)this + 348);
  *((_QWORD *)&v91 + 1) = *((_QWORD *)this + 691);
  v20 = *((_OWORD *)this + 349);
  LOWORD(v92) = *((_WORD *)this + 2800);
  DWORD1(v92) = *((_DWORD *)this + 1401);
  v21 = *((_BYTE *)this + 5608);
  *((_WORD *)this + 2760) = 1;
  *((_QWORD *)this + 691) = a2;
  BYTE8(v92) = v21;
  *((_BYTE *)this + 5601) = a7;
  v22 = *(float *)(*(_QWORD *)(a2 + 24) + 176LL) <= *(float *)(*(_QWORD *)(a2 + 24) + 172LL);
  if ( *(float *)(*(_QWORD *)(a2 + 24) + 164LL) <= *(float *)(*(_QWORD *)(a2 + 24) + 156LL) )
    ++v22;
  if ( *(float *)(*(_QWORD *)(a2 + 24) + 168LL) <= *(float *)(*(_QWORD *)(a2 + 24) + 160LL) )
    ++v22;
  if ( v22 > 1 )
    goto LABEL_82;
  *((_BYTE *)this + 5931) = a8 && *((_QWORD *)this + 718);
  v23 = a4 && *(_BYTE *)(a4 + 825);
  v24 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 45);
  *((_BYTE *)this + 5608) = v23;
  if ( v24 )
  {
    v25 = *(void (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct MilRectF *))(*(_QWORD *)v24 + 256LL);
    if ( v25 == CHwDisplayRenderTarget::GetDeviceBounds )
      CHwDisplayRenderTarget::GetDeviceBounds(v24, (struct MilRectF *)&v85);
    else
      v25(v24, (struct MilRectF *)&v85);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 44) + 64LL))(*((_QWORD *)this + 44), &v85);
  }
  if ( a11 || *((_BYTE *)this + 5608) )
  {
    *(struct _D3DCOLORVALUE *)&v83.r = *(struct _D3DCOLORVALUE *)a3;
    a = v83.a;
    b = v83.b;
    g = v83.g;
    r = v83.r;
  }
  else
  {
    v26 = *a3;
    v27 = a3[1];
    v28 = a3[2];
    v29 = a3[3];
    v82.a = v29;
    v82.r = v26;
    v82.g = v27;
    v82.b = v28;
    if ( CBaseMatrix::IsExactlyPureTranslate((CDrawingContext *)((char *)this + 2712)) )
    {
      r = v30[12] + v26;
      g = v30[13] + v31;
      b = v30[12] + v32;
      a = v30[13] + v29;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v30,
        (const struct MilRectF *)&v82,
        (struct MilPoint2F *const)&v89);
      v64 = (float *)&v89.m256i_i32[3];
      *(_QWORD *)&v84.r = v89.m256i_i64[0];
      v65 = 3LL;
      a = *(float *)&v89.m256i_i32[1];
      b = *(float *)v89.m256i_i32;
      *(_QWORD *)&v82.r = v89.m256i_i64[0];
      g = *(float *)&v89.m256i_i32[1];
      r = *(float *)v89.m256i_i32;
      do
      {
        v66 = *(v64 - 1);
        if ( r > v66 )
          r = *(v64 - 1);
        if ( g > *v64 )
          g = *v64;
        if ( v66 > b )
          b = *(v64 - 1);
        if ( *v64 > a )
          a = *v64;
        v64 += 2;
        --v65;
      }
      while ( v65 );
    }
    v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(r) & _xmm);
    if ( v37 < 8388608.0 )
      r = (float)(int)floorf_0(r);
    v83.r = r;
    v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(g) & _xmm);
    if ( v38 < 8388608.0 )
      g = (float)(int)floorf_0(g);
    v83.g = g;
    v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(b) & _xmm);
    if ( v39 < 8388608.0 )
      b = (float)(int)ceilf_0(b);
    v83.b = b;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a) & _xmm) < 8388608.0 )
      a = (float)(int)ceilf_0(a);
    v83.a = a;
  }
  if ( v85 > r )
  {
    r = v85;
    v83.r = v85;
  }
  if ( v86 > g )
  {
    g = v86;
    v83.g = v86;
  }
  if ( b > v87 )
  {
    b = v87;
    v83.b = v87;
  }
  if ( a > v88 )
  {
    a = v88;
    v83.a = v88;
  }
  if ( b <= r || a <= g )
    *(struct _D3DCOLORVALUE *)&v83.r = (struct _D3DCOLORVALUE)0LL;
  if ( !*((_BYTE *)this + 5608) )
  {
    v40 = CDrawingContext::PushTransformInternal(this, 0LL, (CDrawingContext *)((char *)this + 2712), 1, 1);
    v13 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x1AD9u);
      goto LABEL_82;
    }
  }
  v41 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, &v83.r, 1, 0, 0);
  v13 = v41;
  if ( v41 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x1AE3u);
    goto LABEL_82;
  }
  if ( *((_QWORD *)this + 347) )
  {
    v67 = CDrawingContext::PushColorTransformLayer(this, 0LL);
    v13 = v67;
    if ( v67 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x1AEAu);
      goto LABEL_82;
    }
  }
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1439) )
  {
    v42 = *(_QWORD *)(*((_QWORD *)this + 3) + 512LL);
    if ( v42 )
    {
      if ( *((_BYTE *)this + 5608) )
      {
        *(__int64 *)((char *)&v90.m256i_i64[2] + 4) = 0LL;
        *(__int64 *)((char *)&v90.m256i_i64[1] + 4) = 0LL;
        v90.m256i_i64[0] = 0LL;
        v89.m256i_i64[3] = 0LL;
        *(_OWORD *)((char *)v89.m256i_i64 + 4) = 0uLL;
        v90.m256i_i32[7] = 1065353216;
        v90.m256i_i32[2] = 1065353216;
        v89.m256i_i32[5] = 1065353216;
        v89.m256i_i32[0] = 1065353216;
      }
      else
      {
        v68 = *(_OWORD *)((char *)this + 2728);
        *(_OWORD *)v89.m256i_i8 = *(_OWORD *)((char *)this + 2712);
        v69 = *(_OWORD *)((char *)this + 2744);
        *(_OWORD *)&v89.m256i_u64[2] = v68;
        v70 = *(_OWORD *)((char *)this + 2760);
        *(_OWORD *)v90.m256i_i8 = v69;
        *(_OWORD *)&v90.m256i_u64[2] = v70;
      }
      v71 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 44) + 120LL))(*((_QWORD *)this + 44));
      v72 = CoRenderHost::BeginRender(v42, *((_QWORD *)this + 50), v71, &v89, &v83);
      v13 = v72;
      if ( v72 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0x1B07u);
        goto LABEL_82;
      }
      *((_QWORD *)this + 724) = v42;
    }
    if ( a6 )
    {
      CScopedClipStack::GetTopClipBoundsInScope((char *)this + 680, &v82);
      if ( !*((_BYTE *)this + 5931)
        || (v62 = *((_QWORD *)this + 718)) == 0
        || !COcclusionContext::IsOccluded(v62, (__int64)&v82, *((_BYTE *)this + 5608) == 0, *(_DWORD *)(v62 + 652)) )
      {
        *(struct _D3DCOLORVALUE *)&v82.r = *(struct _D3DCOLORVALUE *)((char *)this + 408);
        v63 = CDrawingContext::Clear(this, &v82);
        v13 = v63;
        if ( v63 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x1B30u);
          goto LABEL_82;
        }
      }
      goto LABEL_59;
    }
    if ( a10 && v83.b > v83.r && v83.a > v83.g )
    {
      v43 = (CoRenderHost *)*((_QWORD *)this + 724);
      if ( v43 )
      {
        if ( (int)CoRenderHost::GetDebugClearColor(v43, &v84) >= 0 )
        {
          CDrawingContext::GetTargetDeviceBounds(this, (struct MilRectF *)&v82);
          if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v83, &v82) )
          {
            CDrawingContext::Clear(this, &v84);
            goto LABEL_59;
          }
        }
      }
      else
      {
        if ( !*((_BYTE *)this + 5931) )
          goto LABEL_59;
        v44 = *((_QWORD *)this + 718);
        if ( !v44 )
          goto LABEL_59;
        if ( !*((_BYTE *)this + 5608) && *(_BYTE *)(v44 + 520) )
        {
          CBaseMatrix::Transform2DBounds(
            (CBaseMatrix *)(v44 + 588),
            (const struct MilRectF *)&v83,
            (struct MilRectF *)&v84);
          *(struct _D3DCOLORVALUE *)&v82.r = *(struct _D3DCOLORVALUE *)&v84.r;
        }
        else
        {
          *(struct _D3DCOLORVALUE *)&v82.r = *(struct _D3DCOLORVALUE *)&v83.r;
        }
        v45 = *(__int64 (__fastcall **)(_QWORD, struct _D3DCOLORVALUE *, __int64))(**(_QWORD **)(v44 + 96) + 40LL);
        if ( !((char *)v45 == (char *)CArrayBasedCoverageSet::IsFullyCovered
             ? CArrayBasedCoverageSet::IsFullyCovered(*(_QWORD *)(v44 + 96), &v82, 0x7FFFFFFFLL)
             : (unsigned __int8)v45(*(_QWORD *)(v44 + 96), &v82, 0x7FFFFFFFLL)) )
          goto LABEL_59;
      }
      (*(void (__fastcall **)(_QWORD, struct _D3DCOLORVALUE *))(**((_QWORD **)this + 44) + 144LL))(
        *((_QWORD *)this + 44),
        &v83);
    }
LABEL_59:
    v14 = 0;
  }
  *((_DWORD *)this + 1438) = 0;
  if ( a9
    && !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(*(_QWORD *)(*((_QWORD *)this + 691)
                                                                                                  + 24LL) + 156LL) )
  {
    v74 = v73[2] - *v73;
    v75 = v73[3] - v73[1];
    *(_QWORD *)&v82.r = 0LL;
    v76 = (float)(v74 * 0.5) + 6291456.25;
    v77 = (int)(LODWORD(v76) << 10) >> 11;
    v84.r = (float)(v75 * 0.5) + 6291456.25;
    v78 = (int)(LODWORD(v84.r) << 10) >> 11;
    if ( v77 > 2048 )
      v77 = 2048;
    LODWORD(v82.b) = v77;
    if ( v78 > 2048 )
      v78 = 2048;
    LODWORD(v82.a) = v78;
    v79 = CDrawingContext::PushLinearInterpolationLayer(
            this,
            (const struct MilPointAndSizeL *)&v82,
            (float)v77 / v74,
            (float)v78 / v75);
    v13 = v79;
    if ( v79 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0x1B5Cu);
      goto LABEL_82;
    }
    v14 = 1;
  }
  v47 = (CDrawingContext *)((char *)this + 5536);
  *((_DWORD *)this + 1401) = a5;
  *((_QWORD *)this + 723) = a4;
  v48 = *((_DWORD *)this + 114);
  if ( v48 )
  {
    v49 = (unsigned int)(v48 - 1);
    v50 = *((_QWORD *)this + 59);
    v49 <<= 6;
    *(_OWORD *)v47 = *(_OWORD *)(v49 + v50);
    *((_OWORD *)this + 347) = *(_OWORD *)(v49 + v50 + 16);
    *((_OWORD *)this + 348) = *(_OWORD *)(v49 + v50 + 32);
    v51 = *(_OWORD *)(v49 + v50 + 48);
  }
  else
  {
    *(_OWORD *)v47 = IdentityMatrix;
    *((_OWORD *)this + 347) = xmmword_180190B10;
    *((_OWORD *)this + 348) = xmmword_180190B20;
    v51 = xmmword_180190B30;
  }
  *((_OWORD *)this + 349) = v51;
  if ( !D2DMatrixIsIdentity(v47) )
    v16 = 0;
  v52 = *((_QWORD *)this + 691);
  v53 = *((_QWORD *)this + 329);
  *((_BYTE *)this + 5600) = v16;
  *((_BYTE *)this + 5521) = 1;
  v54 = CGraphIterator::WalkSubtree<CDrawingContext>(v53, v52, *(_QWORD *)(v52 + 24), this, 3);
  v13 = v54;
  if ( v54 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x1B71u);
  }
  else
  {
    *((_BYTE *)this + 5521) = 0;
    if ( v14 && (v80 = CDrawingContext::PopLayerInternal((__int64)this), v13 = v80, v80 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v80, 0x1B77u);
    }
    else if ( g_fDirtyRegion_ShowDirtyRegions
           && (v81 = CDrawingContext::DrawRectangleOverlay(this, a3), v13 = v81, v81 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, 0x1B80u);
    }
    else
    {
      if ( *((_QWORD *)this + 347) )
        CDrawingContext::PopLayer(this);
      v55 = *((_DWORD *)this + 638);
      if ( v55 )
        *((_DWORD *)this + 638) = v55 - 1;
      v56 = 76LL * (unsigned int)(*((_DWORD *)this + 176) - 1);
      --*(_DWORD *)(v56 + *((_QWORD *)this + 85) + 4);
      *(_WORD *)((char *)this + 5929) = 257;
      if ( !*((_BYTE *)this + 5608) )
      {
        v57 = *((_DWORD *)this + 106);
        if ( v57 )
          *((_DWORD *)this + 106) = v57 - 1;
        v58 = *((_DWORD *)this + 114);
        if ( v58 )
          *((_DWORD *)this + 114) = v58 - 1;
        v59 = *((_DWORD *)this + 122);
        if ( v59 )
          *((_DWORD *)this + 122) = v59 - 1;
        *((_BYTE *)this + 5928) = 1;
      }
      if ( *((_BYTE *)this + 5936) )
        CDrawingContext::PushWindowMetaDataToRenderTarget(this);
    }
  }
LABEL_82:
  *((_OWORD *)this + 345) = v91;
  *((_QWORD *)this + 723) = 0LL;
  v60 = v92;
  *((_OWORD *)this + 346) = v12;
  *((_OWORD *)this + 347) = v15;
  *((_OWORD *)this + 348) = v18;
  *((_OWORD *)this + 349) = v20;
  *((_OWORD *)this + 350) = v60;
  *((_QWORD *)this + 725) = 0LL;
  *((_QWORD *)this + 726) = 0LL;
  *((_QWORD *)this + 728) = 0LL;
  *((_QWORD *)this + 727) = 0LL;
  *((_QWORD *)this + 730) = 0LL;
  *((_QWORD *)this + 729) = 0LL;
  *((_QWORD *)this + 732) = 0LL;
  *((_QWORD *)this + 731) = 0LL;
  *((_QWORD *)this + 734) = 0LL;
  *((_QWORD *)this + 733) = 0LL;
  *((_QWORD *)this + 736) = 0LL;
  *((_QWORD *)this + 735) = 0LL;
  *((_QWORD *)this + 738) = 0LL;
  *((_QWORD *)this + 737) = 0LL;
  *((_QWORD *)this + 740) = 0LL;
  *((_QWORD *)this + 739) = 0LL;
  return v13;
}
