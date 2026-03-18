/*
 * XREFs of ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18000A1B0 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800299D8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041100 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800493D0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004BAA8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x180053DA4 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0774 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x1800FA6D0 (-PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ.c)
 *     ?RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x1801272F4 (-RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180034D20 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18003C0C0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18003C900 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x18003C95C (-GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ.c)
 *     ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x18003D9E0 (-CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004AF20 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18004B000 (-NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DFC0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x18005C55C (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ??_GCDirtyRegionAnnotation@@QEAAPEAXI@Z @ 0x1800DBB88 (--_GCDirtyRegionAnnotation@@QEAAPEAXI@Z.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 */

__int64 __fastcall CVisualTree::PreCompute(struct CVisualTree *a1, __int128 *a2)
{
  struct CVisualTree *v3; // r13
  LPVOID (__fastcall *v4)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  char *v5; // rax
  char *v6; // r14
  int v7; // edi
  CDirtyRegionAnnotation **v8; // rsi
  __int128 v9; // xmm6
  __int64 v10; // rbx
  char *v11; // rdx
  unsigned int v12; // ebx
  char *v13; // rax
  __int64 v14; // rcx
  int i; // ebx
  __int64 v16; // rcx
  void (*v17)(CHwndRenderTarget *__hidden, const struct CVisualTree *, struct CDirtyRegion *); // rbp
  int v18; // eax
  int v19; // esi
  unsigned int v20; // r8d
  char *j; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  unsigned int k; // ebx
  __int64 v25; // rsi
  char *v26; // rbp
  int v27; // r15d
  unsigned int v28; // r12d
  CVisual *v29; // rbx
  unsigned int v30; // ebp
  int m; // ebx
  __int64 v32; // rcx
  CHwndRenderTarget *v33; // rdi
  void (__fastcall *v34)(CHwndRenderTarget *__hidden, const struct CVisualTree *, const struct CDirtyRegion *); // rsi
  __int64 (__fastcall *v35)(CDirtyRegion *); // rbx
  __int64 v37; // r12
  float *v38; // r15
  float *v39; // r8
  const struct MilRectF *v40; // rdx
  __int64 v41; // r15
  _QWORD *v42; // rdx
  float v43; // xmm4_4
  float v44; // xmm1_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  char *v47; // r9
  bool v48; // cc
  bool v49; // al
  float v50; // xmm2_4
  float v51; // xmm1_4
  __int64 v52; // r11
  float *v53; // r10
  char *v54; // r8
  unsigned int v55; // edx
  __int64 v56; // rcx
  float v57; // xmm1_4
  float v58; // xmm2_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  float v62; // xmm1_4
  char *v63; // rdx
  __int64 v64; // r8
  float *v65; // rcx
  float v66; // xmm1_4
  _QWORD *v67; // rdx
  char *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm2_4
  float v76; // xmm1_4
  float v77; // xmm2_4
  float v78; // xmm2_4
  float v79; // xmm2_4
  const struct CDirtyRegion::DirtyRegionCachedData *v80; // rdx
  CDirtyRegion *v81; // rcx
  float v82; // xmm0_4
  __int64 v83; // rdx
  float *v84; // rcx
  __int64 v85; // r10
  const struct MilRectF *OptimizedDirtyRects; // rsi
  unsigned int v87; // eax
  __int64 v88; // rbp
  CDirtyRegionAnnotation *v89; // rcx
  CDirtyRegionAnnotation **v90; // rax
  int v91; // [rsp+30h] [rbp-A8h]
  __m128 v92; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v93; // [rsp+48h] [rbp-90h]
  struct CVisualTree *v94; // [rsp+50h] [rbp-88h]
  __int128 v95; // [rsp+58h] [rbp-80h]

  v3 = a1;
  v94 = a1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    Template_x(a1, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, a1);
  v4 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v4 == WPF::ProcessHeapImpl::Alloc )
    v5 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x3F8uLL);
  else
    v5 = (char *)v4(WPF::g_pProcessHeap, 1016LL);
  v6 = v5;
  if ( !v5 )
  {
    v30 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBDu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x93u);
    return v30;
  }
  v7 = 0;
  *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
  v8 = (CDirtyRegionAnnotation **)(v5 + 448);
  *((_DWORD *)v5 + 2) = 0;
  *(_QWORD *)v5 = &CDirtyRegion::`vftable';
  *((_QWORD *)v5 + 56) = v5 + 448;
  *((_QWORD *)v5 + 57) = v5 + 448;
  *((_QWORD *)v5 + 59) = v5 + 464;
  *((_QWORD *)v5 + 58) = v5 + 464;
  *((_QWORD *)v5 + 61) = v5 + 480;
  *((_QWORD *)v5 + 60) = v5 + 480;
  *((_QWORD *)v5 + 63) = v5 + 496;
  *((_QWORD *)v5 + 62) = v5 + 496;
  *((_QWORD *)v5 + 65) = v5 + 512;
  *((_QWORD *)v5 + 64) = v5 + 512;
  *((_QWORD *)v5 + 67) = v5 + 528;
  *((_QWORD *)v5 + 66) = v5 + 528;
  *((_QWORD *)v5 + 69) = v5 + 544;
  *((_QWORD *)v5 + 68) = v5 + 544;
  *((_QWORD *)v5 + 71) = v5 + 560;
  *((_QWORD *)v5 + 70) = v5 + 560;
  (**(void (__fastcall ***)(LPVOID))v5)(v5);
  if ( a2 )
  {
    v9 = *a2;
  }
  else
  {
    v95 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v9 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  v10 = *(_QWORD *)(*((_QWORD *)v3 + 2) + 352LL);
  memset_0(v6 + 24, 0, 0x80uLL);
  memset_0(v6 + 576, 0, 0x120uLL);
  *((_QWORD *)v6 + 2) = v10;
  v12 = 0;
  *((_DWORD *)v6 + 248) = 0;
  *((_DWORD *)v6 + 110) = 0;
  *(_WORD *)(v6 + 1013) = 0;
  v6[1012] = 0;
  *(_OWORD *)(v6 + 996) = v9;
  do
  {
    while ( *v8 != (CDirtyRegionAnnotation *)v8 )
    {
      v89 = *v8;
      v90 = *(CDirtyRegionAnnotation ***)*v8;
      if ( *((CDirtyRegionAnnotation ***)*v8 + 1) != v8 || v90[1] != v89 )
        __fastfail(3u);
      *v8 = (CDirtyRegionAnnotation *)v90;
      v90[1] = (CDirtyRegionAnnotation *)v8;
      CDirtyRegionAnnotation::`scalar deleting destructor'(v89, (unsigned int)v11);
    }
    ++v12;
    v8 += 2;
  }
  while ( v12 < 8 );
  v13 = v6 + 160;
  v14 = 8LL;
  do
  {
    *(_QWORD *)v13 = 0LL;
    *((_QWORD *)v13 - 1) = 0LL;
    v13[716] = 1;
    *(_QWORD *)(v13 + 708) = 0LL;
    *((_DWORD *)v13 + 176) = 0;
    *((_QWORD *)v13 - 16) = 0LL;
    *((_QWORD *)v13 - 17) = 0LL;
    v13 += 16;
    --v14;
  }
  while ( v14 );
  if ( *((_BYTE *)v3 + 32) )
  {
    for ( i = *((_DWORD *)v3 + 182); i > 0; --i )
    {
      v16 = (unsigned int)(i - 1);
      v17 = *(void (**)(CHwndRenderTarget *__hidden, const struct CVisualTree *, struct CDirtyRegion *))(**(_QWORD **)(*((_QWORD *)v3 + 88) + 8 * v16) + 32LL);
      if ( v17 == CHwndRenderTarget::AddInvalidRects )
        CHwndRenderTarget::AddInvalidRects(
          *(CHwndRenderTarget **)(*((_QWORD *)v3 + 88) + 8 * v16),
          v3,
          (struct CDirtyRegion *)v6);
      else
        ((void (__fastcall *)(_QWORD, struct CVisualTree *, char *))v17)(
          *(_QWORD *)(*((_QWORD *)v3 + 88) + 8 * v16),
          v3,
          v6);
    }
  }
  v91 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)v3 + 3) + 88LL) & 0xF) != 0 )
  {
    v18 = CPreComputeContext::PreCompute((struct CVisualTree *)((char *)v3 + 64), v3, (struct CDirtyRegion *)v6);
    v91 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC6u);
      goto LABEL_45;
    }
  }
  v19 = 1;
  if ( qword_1801930E8 )
  {
    v20 = *((_DWORD *)qword_1801930E8 + 18);
    for ( j = 0LL; (unsigned int)j < v20; j = (char *)(unsigned int)((_DWORD)j + 1) )
    {
      v11 = *(char **)(*((_QWORD *)qword_1801930E8 + 6) + 8LL * (unsigned int)j);
      if ( v11[288] || *((_DWORD *)v11 + 71) )
        goto LABEL_144;
    }
  }
  j = *(char **)(*((_QWORD *)v3 + 2) + 32LL);
  if ( *((_DWORD *)j + 15) )
LABEL_144:
    v19 = 0;
  v22 = *((_QWORD *)v3 + 2);
  if ( *(_DWORD *)(v22 + 1152) )
    v19 = 0;
  if ( *(_QWORD *)(v22 + 512) )
    v19 = 2;
  if ( v6[1012] )
  {
    *((_DWORD *)v6 + 110) = 1;
  }
  else
  {
    memset_0(v6 + 280, 0, 0x80uLL);
    v23 = v19;
    *(_QWORD *)&v95 = v19;
LABEL_32:
    for ( k = 0; k < 8; ++k )
    {
      v25 = 16LL * k;
      v26 = &v6[v25];
      if ( *(float *)&v6[v25 + 32] > *(float *)&v6[v25 + 24] && *((float *)v26 + 9) > *((float *)v26 + 7) )
      {
        v37 = k + 1;
        v93 = v37;
        if ( (unsigned int)v37 < 8 )
        {
          v38 = (float *)&v6[16 * (unsigned int)v37 + 36];
          v39 = (float *)&v6[32 * v37 + 576 + 4 * k];
          v92.m128_u64[0] = (unsigned __int64)v39;
          do
          {
            if ( *(v38 - 1) > *(v38 - 3) && *v38 > *(v38 - 2) )
            {
              if ( v23 == 2
                || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                      v26 + 24,
                                      &v6[16 * (unsigned int)v37 + 24]) )
              {
LABEL_67:
                v41 = 16 * v37;
                v92 = *(__m128 *)(v26 + 24);
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v92, &v6[16 * v37 + 24]);
                v43 = v92.m128_f32[0];
                v44 = v92.m128_f32[3];
                v45 = v92.m128_f32[1];
                v46 = _mm_shuffle_ps(v92, v92, 170).m128_f32[0];
                v47 = &v6[16 * k + 864];
                v48 = v46 <= v92.m128_f32[0];
                *(__m128 *)(v26 + 24) = v92;
                v49 = v48 || v44 <= v45;
                v47[12] = v49;
                v50 = v46 - v43;
                v51 = v44 - v45;
                *((float *)v47 + 2) = v50 * v51;
                *(float *)v47 = (float)(v50 * 0.5) + v43;
                *((float *)v47 + 1) = (float)(v51 * 0.5) + v45;
                v6[v41 + 876] = 1;
                *(_QWORD *)&v6[v41 + 868] = 0LL;
                *(_DWORD *)&v6[16 * v37 + 864] = 0;
                v42[1] = 0LL;
                *v42 = 0LL;
                if ( k )
                {
                  v80 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v6 + 864);
                  v81 = (CDirtyRegion *)&v6[32 * k + 576];
                  do
                  {
                    v82 = CDirtyRegion::CalcAcceleration(
                            v81,
                            v80,
                            (const struct CDirtyRegion::DirtyRegionCachedData *)v47);
                    v80 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v83 + 16);
                    *v84 = v82;
                    v81 = (CDirtyRegion *)(v84 + 1);
                  }
                  while ( v85 != 1 );
                }
                v52 = v93;
                if ( v93 < 8 )
                {
                  if ( 8 - v93 >= 6 )
                  {
                    v53 = (float *)&v6[32 * v93 + 608 + 4 * k];
                    v54 = &v6[16 * v93 + 868];
                    v55 = (2 - v93) / 6 + 1;
                    v56 = v55;
                    v52 = v93 + 6 * v55;
                    do
                    {
                      v57 = 0.0;
                      if ( v54[8] )
                      {
                        if ( !v47[12] )
                          v57 = FLOAT_3_4028235e38;
                      }
                      else if ( !v47[12] )
                      {
                        v73 = (float)((float)(*(float *)v54 - *((float *)v47 + 1))
                                    * (float)(*(float *)v54 - *((float *)v47 + 1)))
                            + (float)((float)(*((float *)v54 - 1) - *(float *)v47)
                                    * (float)(*((float *)v54 - 1) - *(float *)v47));
                        if ( v73 != 0.0 )
                          v57 = (float)(*((float *)v54 + 1) + *((float *)v47 + 2)) / v73;
                      }
                      *(v53 - 8) = v57;
                      v58 = 0.0;
                      if ( v54[24] )
                      {
                        if ( !v47[12] )
                          v58 = FLOAT_3_4028235e38;
                      }
                      else if ( !v47[12] )
                      {
                        v74 = (float)((float)(*((float *)v54 + 4) - *((float *)v47 + 1))
                                    * (float)(*((float *)v54 + 4) - *((float *)v47 + 1)))
                            + (float)((float)(*((float *)v54 + 3) - *(float *)v47)
                                    * (float)(*((float *)v54 + 3) - *(float *)v47));
                        if ( v74 != 0.0 )
                          v58 = (float)(*((float *)v54 + 5) + *((float *)v47 + 2)) / v74;
                      }
                      *v53 = v58;
                      v59 = 0.0;
                      if ( v54[40] )
                      {
                        if ( !v47[12] )
                          v59 = FLOAT_3_4028235e38;
                      }
                      else if ( !v47[12] )
                      {
                        v75 = (float)((float)(*((float *)v54 + 8) - *((float *)v47 + 1))
                                    * (float)(*((float *)v54 + 8) - *((float *)v47 + 1)))
                            + (float)((float)(*((float *)v54 + 7) - *(float *)v47)
                                    * (float)(*((float *)v54 + 7) - *(float *)v47));
                        if ( v75 != 0.0 )
                          v59 = (float)(*((float *)v54 + 9) + *((float *)v47 + 2)) / v75;
                      }
                      v53[8] = v59;
                      v60 = 0.0;
                      if ( v54[56] )
                      {
                        if ( !v47[12] )
                          v60 = FLOAT_3_4028235e38;
                      }
                      else if ( !v47[12] )
                      {
                        v76 = (float)((float)(*((float *)v54 + 12) - *((float *)v47 + 1))
                                    * (float)(*((float *)v54 + 12) - *((float *)v47 + 1)))
                            + (float)((float)(*((float *)v54 + 11) - *(float *)v47)
                                    * (float)(*((float *)v54 + 11) - *(float *)v47));
                        if ( v76 != 0.0 )
                          v60 = (float)(*((float *)v54 + 13) + *((float *)v47 + 2)) / v76;
                      }
                      v53[16] = v60;
                      v61 = 0.0;
                      if ( v54[72] )
                      {
                        if ( !v47[12] )
                          v61 = FLOAT_3_4028235e38;
                      }
                      else if ( !v47[12] )
                      {
                        v77 = (float)((float)(*((float *)v54 + 16) - *((float *)v47 + 1))
                                    * (float)(*((float *)v54 + 16) - *((float *)v47 + 1)))
                            + (float)((float)(*((float *)v54 + 15) - *(float *)v47)
                                    * (float)(*((float *)v54 + 15) - *(float *)v47));
                        if ( v77 != 0.0 )
                          v61 = (float)(*((float *)v54 + 17) + *((float *)v47 + 2)) / v77;
                      }
                      v53[24] = v61;
                      v62 = 0.0;
                      if ( v54[88] )
                      {
                        if ( !v47[12] )
                          v62 = FLOAT_3_4028235e38;
                      }
                      else if ( !v47[12] )
                      {
                        v78 = (float)((float)(*((float *)v54 + 20) - *((float *)v47 + 1))
                                    * (float)(*((float *)v54 + 20) - *((float *)v47 + 1)))
                            + (float)((float)(*((float *)v54 + 19) - *(float *)v47)
                                    * (float)(*((float *)v54 + 19) - *(float *)v47));
                        if ( v78 != 0.0 )
                          v62 = (float)(*((float *)v54 + 21) + *((float *)v47 + 2)) / v78;
                      }
                      v53[32] = v62;
                      v54 += 96;
                      v53 += 48;
                      --v56;
                    }
                    while ( v56 );
                  }
                  if ( (unsigned int)v52 < 8 )
                  {
                    v63 = &v6[16 * (unsigned int)v52 + 868];
                    v64 = (unsigned int)(8 - v52);
                    v65 = (float *)&v6[32 * v52 + 576 + 4 * k];
                    do
                    {
                      v66 = 0.0;
                      if ( v63[8] )
                      {
                        if ( !v47[12] )
                          v66 = FLOAT_3_4028235e38;
                      }
                      else if ( !v47[12] )
                      {
                        v79 = (float)((float)(*(float *)v63 - *((float *)v47 + 1))
                                    * (float)(*(float *)v63 - *((float *)v47 + 1)))
                            + (float)((float)(*((float *)v63 - 1) - *(float *)v47)
                                    * (float)(*((float *)v63 - 1) - *(float *)v47));
                        if ( v79 != 0.0 )
                          v66 = (float)(*((float *)v47 + 2) + *((float *)v63 + 1)) / v79;
                      }
                      *v65 = v66;
                      v63 += 16;
                      v65 += 8;
                      --v64;
                    }
                    while ( v64 );
                  }
                }
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v6[v25 + 152], &v6[v41 + 152]);
                v67[1] = 0LL;
                *v67 = 0LL;
                v68 = &v6[16 * v37 + 448];
                if ( *(char **)v68 != v68 )
                {
                  **(_QWORD **)&v6[v25 + 456] = *(_QWORD *)v68;
                  *(_QWORD *)(*(_QWORD *)v68 + 8LL) = *(_QWORD *)&v6[v25 + 456];
                  j = &v6[16 * k + 448];
                  **(_QWORD **)&v6[v41 + 456] = j;
                  *(_QWORD *)&v6[v25 + 456] = *(_QWORD *)&v6[v41 + 456];
                  *((_QWORD *)v68 + 1) = v68;
                  *(_QWORD *)v68 = v68;
                }
                v23 = v95;
                goto LABEL_32;
              }
              if ( v23 )
              {
                if ( *v39 >= 0.86000001 || CalcOvehead((const struct MilRectF *)(v26 + 24), v40) < 50000.0 )
                  goto LABEL_67;
                v39 = (float *)v92.m128_u64[0];
                v23 = v95;
              }
            }
            v39 += 8;
            v37 = (unsigned int)(v37 + 1);
            v38 += 4;
            v92.m128_u64[0] = (unsigned __int64)v39;
          }
          while ( (unsigned int)v37 < 8 );
        }
      }
    }
    v11 = v6 + 36;
    v27 = 2;
    v28 = 0;
    do
    {
      if ( *((float *)v11 - 1) > *((float *)v11 - 3) && *(float *)v11 > *((float *)v11 - 2) )
      {
        v69 = 2LL * v28;
        j = (char *)v28++;
        *(_OWORD *)&v6[8 * v69 + 280] = *(_OWORD *)(v11 - 12);
        *(_DWORD *)&v6[4 * (_QWORD)j + 408] = v27 - 2;
      }
      if ( *((float *)v11 + 3) > *((float *)v11 + 1) && *((float *)v11 + 4) > *((float *)v11 + 2) )
      {
        v70 = 2LL * v28;
        j = (char *)v28++;
        *(_OWORD *)&v6[8 * v70 + 280] = *(_OWORD *)(v11 + 4);
        *(_DWORD *)&v6[4 * (_QWORD)j + 408] = v27 - 1;
      }
      if ( *((float *)v11 + 7) > *((float *)v11 + 5) && *((float *)v11 + 8) > *((float *)v11 + 6) )
      {
        v71 = 2LL * v28;
        j = (char *)v28++;
        *(_OWORD *)&v6[8 * v71 + 280] = *(_OWORD *)(v11 + 20);
        *(_DWORD *)&v6[4 * (_QWORD)j + 408] = v27;
      }
      if ( *((float *)v11 + 11) > *((float *)v11 + 9) && *((float *)v11 + 12) > *((float *)v11 + 10) )
      {
        v72 = 2LL * v28;
        j = (char *)v28++;
        *(_OWORD *)&v6[8 * v72 + 280] = *(_OWORD *)(v11 + 36);
        *(_DWORD *)&v6[4 * (_QWORD)j + 408] = v27 + 1;
      }
      v27 += 4;
      v11 += 64;
    }
    while ( (unsigned int)(v27 - 2) < 8 );
    v3 = v94;
    *((_DWORD *)v6 + 110) = v28;
  }
  v6[1014] = 1;
  if ( v6[1012] || *((_DWORD *)v6 + 110) )
  {
    v29 = *(CVisual **)(*((_QWORD *)v3 + 3) + 80LL);
    if ( v29 )
    {
      OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects((CDirtyRegion *)v6);
      v87 = *((_DWORD *)v6 + 110);
      if ( v87 )
      {
        v88 = v87;
        do
        {
          CVisual::AddAdditionalDirtyRects(v29, OptimizedDirtyRects);
          OptimizedDirtyRects = (const struct MilRectF *)((char *)OptimizedDirtyRects + 16);
          --v88;
        }
        while ( v88 );
      }
    }
  }
LABEL_45:
  v30 = v91;
  if ( v91 >= 0 )
  {
    if ( !v6[1012] )
    {
      if ( v6[1014] )
      {
        if ( !*((_DWORD *)v6 + 110) )
        {
LABEL_53:
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_x(j, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, v3);
          goto LABEL_55;
        }
      }
      else
      {
        while ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v6[16 * v7 + 24]) )
        {
          if ( (unsigned int)++v7 >= 8 )
            goto LABEL_53;
        }
      }
    }
    for ( m = *((_DWORD *)v3 + 182); m > 0; --m )
    {
      v32 = (unsigned int)(m - 1);
      v33 = *(CHwndRenderTarget **)(*((_QWORD *)v3 + 88) + 8 * v32);
      v34 = *(void (__fastcall **)(CHwndRenderTarget *__hidden, const struct CVisualTree *, const struct CDirtyRegion *))(*(_QWORD *)v33 + 24LL);
      if ( v34 == CHwndRenderTarget::NotifyTreeDirtyRegion )
        CHwndRenderTarget::NotifyTreeDirtyRegion(v33, v3, (const struct CDirtyRegion *)v6);
      else
        v34(*(CHwndRenderTarget **)(*((_QWORD *)v3 + 88) + 8 * v32), v3, (const struct CDirtyRegion *)v6);
    }
    goto LABEL_53;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0xB0u);
LABEL_55:
  v35 = *(__int64 (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v6 + 8LL);
  if ( v35 == CDirtyRegion::Release )
    CDirtyRegion::Release((CDirtyRegion *)v6);
  else
    ((void (__fastcall *)(char *, char *))v35)(v6, v11);
  return v30;
}
