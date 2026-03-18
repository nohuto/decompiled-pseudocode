/*
 * XREFs of ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x18000CB04 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004BBD0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800507B0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180070E00 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180070E50 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180071150 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180073980 (-NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800744E0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?PreRender@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180075548 (-PreRender@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180075D80 (-NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x1800AF2EC (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 */

__int64 __fastcall CDesktopRenderTarget::PreRender(CDesktopRenderTarget *this)
{
  __int64 v1; // rdi
  CDesktopRenderTarget *v2; // rbp
  int v3; // esi
  __int64 v4; // r15
  LPVOID (__fastcall *v5)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  char *v6; // rax
  char *v7; // r14
  __int64 **v8; // rsi
  _QWORD *v9; // r12
  _QWORD *v10; // r13
  __int128 v11; // xmm6
  __int64 v12; // rbx
  __int64 ***v13; // rcx
  __int64 ***v14; // rax
  __int64 v15; // rcx
  char *v16; // rax
  int i; // ebx
  CHwndRenderTarget *v18; // rcx
  void (__fastcall *v19)(CHwndRenderTarget *, const struct CVisualTree *, struct CDirtyRegion *); // rax
  __int64 v20; // rax
  int v21; // eax
  int v22; // esi
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned int k; // ebx
  float *v29; // rsi
  int v30; // r8d
  char *v31; // rdx
  unsigned int v32; // ebp
  __int64 v33; // rcx
  int j; // ebx
  CDesktopRenderTarget *v35; // rcx
  void (__fastcall *v36)(CHwndRenderTarget *, const struct CVisualTree *, const struct CDirtyRegion *); // rax
  __int64 (__fastcall *v37)(CDirtyRegion *); // rax
  unsigned int v38; // ebx
  int v39; // eax
  int v40; // eax
  __int64 v42; // r12
  float *v43; // rbp
  float *v44; // r13
  const struct MilRectF *v45; // rdx
  CVisual *v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // ebx
  int v56; // eax
  __int64 v57; // rax
  WPF::ProcessHeapImpl *v58; // rcx
  const struct MilRectF *OptimizedDirtyRects; // rax
  const struct MilRectF *v60; // rsi
  unsigned int v61; // eax
  __int64 v62; // r12
  int v63; // eax
  int v64; // [rsp+30h] [rbp-68h]
  __int64 v66; // [rsp+40h] [rbp-58h]

  v1 = 0LL;
  *((_BYTE *)this + 262) = 0;
  v2 = this;
  v3 = 0;
  if ( !*((_DWORD *)this + 8) )
    goto LABEL_118;
  if ( *(int *)(*((_QWORD *)this - 17) + 1104LL) >= 2 )
  {
    v55 = 0;
    if ( *((_DWORD *)this + 44) )
    {
      while ( 1 )
      {
        v56 = CVisualTree::PreCompute(*(CVisualTree **)(*((_QWORD *)v2 + 19) + 8LL * v55));
        v3 = v56;
        if ( v56 < 0 )
          break;
        if ( ++v55 >= *((_DWORD *)v2 + 44) )
          goto LABEL_3;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x7C2u);
      goto LABEL_118;
    }
  }
LABEL_3:
  v4 = *((_QWORD *)v2 - 3);
  if ( !v4 )
    goto LABEL_118;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    Template_x(this, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, *((_QWORD *)v2 - 3));
  v5 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v5 == WPF::ProcessHeapImpl::Alloc )
    v6 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0xAA8uLL);
  else
    v6 = (char *)v5(WPF::g_pProcessHeap, 2728LL);
  v7 = v6;
  if ( v6 )
  {
    v6[280] = 0;
    v8 = (__int64 **)(v6 + 712);
    *((_DWORD *)v6 + 103) = 0;
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    v9 = v6 + 584;
    *((_DWORD *)v6 + 2) = 0;
    *(_QWORD *)v6 = &CDirtyRegion::`vftable';
    v10 = v6 + 600;
    *((_QWORD *)v6 + 91) = v6 + 712;
    *((_QWORD *)v6 + 92) = v6 + 712;
    *((_QWORD *)v6 + 90) = v6 + 728;
    *((_QWORD *)v6 + 89) = v6 + 728;
    *((_DWORD *)v6 + 570) = 0;
    *((_QWORD *)v6 + 73) = v6 + 584;
    *((_QWORD *)v6 + 74) = v6 + 584;
    *((_QWORD *)v6 + 76) = v6 + 600;
    *((_QWORD *)v6 + 75) = v6 + 600;
    *((_QWORD *)v6 + 78) = v6 + 616;
    *((_QWORD *)v6 + 77) = v6 + 616;
    *((_QWORD *)v6 + 80) = v6 + 632;
    *((_QWORD *)v6 + 79) = v6 + 632;
    *((_QWORD *)v6 + 82) = v6 + 648;
    *((_QWORD *)v6 + 81) = v6 + 648;
    *((_QWORD *)v6 + 84) = v6 + 664;
    *((_QWORD *)v6 + 83) = v6 + 664;
    *((_QWORD *)v6 + 86) = v6 + 680;
    *((_QWORD *)v6 + 85) = v6 + 680;
    *((_QWORD *)v6 + 88) = v6 + 696;
    *((_QWORD *)v6 + 87) = v6 + 696;
    (**(void (__fastcall ***)(LPVOID))v6)(v6);
    if ( v2 == (CDesktopRenderTarget *)-216LL )
      v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    else
      v11 = *(_OWORD *)((char *)v2 + 216);
    v12 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 352LL);
    memset_0(v7 + 24, 0, 0x80uLL);
    memset_0(v7 + 2288, 0, 0x120uLL);
    *((_QWORD *)v7 + 2) = v12;
    *((_DWORD *)v7 + 676) = 0;
    *((_DWORD *)v7 + 144) = 0;
    *(_WORD *)(v7 + 2725) = 0;
    v7[2724] = 0;
    *(_OWORD *)(v7 + 2708) = v11;
    *v9 = v9;
    *((_QWORD *)v7 + 74) = v7 + 584;
    *((_QWORD *)v7 + 76) = v7 + 600;
    *v10 = v10;
    *((_QWORD *)v7 + 78) = v7 + 616;
    *((_QWORD *)v7 + 77) = v7 + 616;
    *((_QWORD *)v7 + 80) = v7 + 632;
    *((_QWORD *)v7 + 79) = v7 + 632;
    *((_QWORD *)v7 + 82) = v7 + 648;
    *((_QWORD *)v7 + 81) = v7 + 648;
    *((_QWORD *)v7 + 84) = v7 + 664;
    *((_QWORD *)v7 + 83) = v7 + 664;
    *((_QWORD *)v7 + 86) = v7 + 680;
    *((_QWORD *)v7 + 85) = v7 + 680;
    *((_QWORD *)v7 + 88) = v7 + 696;
    *((_QWORD *)v7 + 87) = v7 + 696;
    v13 = (__int64 ***)*((_QWORD *)v7 + 90);
    v14 = (__int64 ***)v13[1];
    if ( *v13 != v8 || *v14 != (__int64 **)v13 )
      __fastfail(3u);
    *((_QWORD *)v7 + 90) = v14;
    *v14 = v8;
    while ( *v8 != (__int64 *)v8 )
    {
      v57 = **v8;
      if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v57 + 8) != *v8 )
        __fastfail(3u);
      v58 = WPF::g_pProcessHeap;
      *v8 = (__int64 *)v57;
      *(_QWORD *)(v57 + 8) = v8;
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)v58 + 32LL))(v58);
    }
    *((_QWORD *)v7 + 90) = v7 + 712;
    *v8 = (__int64 *)v8;
    v15 = 8LL;
    *((_QWORD *)v7 + 91) = v7 + 712;
    *((_QWORD *)v7 + 92) = v7 + 712;
    *((_QWORD *)v7 + 90) = v7 + 728;
    *((_QWORD *)v7 + 89) = v7 + 728;
    v16 = v7 + 160;
    *((_DWORD *)v7 + 570) = 0;
    do
    {
      *(_QWORD *)v16 = 0LL;
      *((_QWORD *)v16 - 1) = 0LL;
      v16[2428] = 1;
      *(_QWORD *)(v16 + 2420) = 0LL;
      *((_DWORD *)v16 + 604) = 0;
      *((_QWORD *)v16 - 16) = 0LL;
      *((_QWORD *)v16 - 17) = 0LL;
      v16 += 16;
      --v15;
    }
    while ( v15 );
    for ( i = *(_DWORD *)(v4 + 872); i > 0; --i )
    {
      v18 = *(CHwndRenderTarget **)(*(_QWORD *)(v4 + 848) + 8LL * (unsigned int)(i - 1));
      v19 = *(void (__fastcall **)(CHwndRenderTarget *, const struct CVisualTree *, struct CDirtyRegion *))(*(_QWORD *)v18 + 32LL);
      if ( v19 == CHwndRenderTarget::AddInvalidRects )
        CHwndRenderTarget::AddInvalidRects(v18, (const struct CVisualTree *)v4, (struct CDirtyRegion *)v7);
      else
        v19(v18, (const struct CVisualTree *)v4, (struct CDirtyRegion *)v7);
    }
    v64 = 0;
    if ( *(_BYTE *)(v4 + 33) )
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x113u);
      goto LABEL_49;
    }
    v20 = *(_QWORD *)(v4 + 24);
    *(_BYTE *)(v4 + 33) = 1;
    if ( (*(_BYTE *)(v20 + 152) & 0xF) != 0 )
    {
      v21 = CPreComputeContext::PreCompute(
              (CPreComputeContext *)(v4 + 64),
              (const struct CVisualTree *)v4,
              (struct CDirtyRegion *)v7);
      v64 = v21;
      v3 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xCDu);
LABEL_48:
        *(_BYTE *)(v4 + 33) = 0;
LABEL_49:
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xADu);
        }
        else
        {
          for ( j = *(_DWORD *)(v4 + 872); j > 0; --j )
          {
            v35 = *(CDesktopRenderTarget **)(*(_QWORD *)(v4 + 848) + 8LL * (unsigned int)(j - 1));
            v36 = *(void (__fastcall **)(CHwndRenderTarget *, const struct CVisualTree *, const struct CDirtyRegion *))(*(_QWORD *)v35 + 24LL);
            if ( v36 == CDesktopRenderTarget::NotifyTreeDirtyRegion )
            {
              CDesktopRenderTarget::NotifyTreeDirtyRegion(
                v35,
                (const struct CVisualTree *)v4,
                (const struct CDirtyRegion *)v7);
            }
            else if ( v36 == CHwndRenderTarget::NotifyTreeDirtyRegion )
            {
              CHwndRenderTarget::NotifyTreeDirtyRegion(
                v35,
                (const struct CVisualTree *)v4,
                (const struct CDirtyRegion *)v7);
            }
            else
            {
              v36(v35, (const struct CVisualTree *)v4, (const struct CDirtyRegion *)v7);
            }
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_x(v33, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, v4);
        }
        v37 = *(__int64 (__fastcall **)(CDirtyRegion *))(*(_QWORD *)v7 + 8LL);
        if ( v37 == CDirtyRegion::Release )
          CDirtyRegion::Release((CDirtyRegion *)v7);
        else
          v37((CDirtyRegion *)v7);
        goto LABEL_60;
      }
    }
    v22 = 1;
    if ( qword_1801EFD28 && (v23 = *((_DWORD *)qword_1801EFD28 + 18), v24 = 0, v23) )
    {
      while ( 1 )
      {
        v25 = *(_QWORD *)(*((_QWORD *)qword_1801EFD28 + 6) + 8LL * v24);
        if ( *(_BYTE *)(v25 + 220) || *(_DWORD *)(v25 + 216) )
          break;
        if ( ++v24 >= v23 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL) + 60LL) )
      {
LABEL_30:
        v26 = *(_QWORD *)(v4 + 16);
        if ( *(_DWORD *)(v26 + 1224) )
          v22 = 0;
        if ( *(_QWORD *)(v26 + 520) )
          v22 = 2;
        if ( v7[2724] )
        {
          *((_DWORD *)v7 + 144) = 1;
        }
        else
        {
          memset_0(v7 + 416, 0, 0x80uLL);
          v27 = v22;
          v66 = v22;
LABEL_36:
          for ( k = 0; k < 8; ++k )
          {
            v29 = (float *)&v7[16 * k];
            if ( v29[8] > v29[6] && v29[9] > v29[7] )
            {
              v42 = k + 1;
              if ( (unsigned int)v42 < 8 )
              {
                v43 = (float *)&v7[16 * (unsigned int)v42 + 36];
                v44 = (float *)&v7[32 * v42 + 2288 + 4 * k];
                do
                {
                  if ( *(v43 - 1) > *(v43 - 3) && *v43 > *(v43 - 2) )
                  {
                    if ( v27 == 2
                      || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                           v29 + 6,
                           (float *)&v7[16 * (unsigned int)v42 + 24]) )
                    {
LABEL_78:
                      CDirtyRegion::Merge((CDirtyRegion *)v7, k, v42);
                      v27 = v66;
                      goto LABEL_36;
                    }
                    if ( v27 )
                    {
                      if ( *v44 >= 0.86000001 || CalcOvehead((const struct MilRectF *)(v29 + 6), v45) < 50000.0 )
                        goto LABEL_78;
                      v27 = v66;
                    }
                  }
                  LODWORD(v42) = v42 + 1;
                  v43 += 4;
                  v44 += 8;
                }
                while ( (unsigned int)v42 < 8 );
              }
            }
          }
          v30 = 2;
          v31 = v7 + 36;
          v32 = 0;
          do
          {
            if ( *((float *)v31 - 1) > *((float *)v31 - 3) && *(float *)v31 > *((float *)v31 - 2) )
            {
              v47 = v32;
              v48 = v32++ + 26LL;
              *(_OWORD *)&v7[16 * v48] = *(_OWORD *)(v31 - 12);
              *(_DWORD *)&v7[4 * v47 + 544] = v30 - 2;
            }
            if ( *((float *)v31 + 3) > *((float *)v31 + 1) && *((float *)v31 + 4) > *((float *)v31 + 2) )
            {
              v49 = v32;
              v50 = v32++ + 26LL;
              *(_OWORD *)&v7[16 * v50] = *(_OWORD *)(v31 + 4);
              *(_DWORD *)&v7[4 * v49 + 544] = v30 - 1;
            }
            if ( *((float *)v31 + 7) > *((float *)v31 + 5) && *((float *)v31 + 8) > *((float *)v31 + 6) )
            {
              v51 = v32;
              v52 = v32++ + 26LL;
              *(_OWORD *)&v7[16 * v52] = *(_OWORD *)(v31 + 20);
              *(_DWORD *)&v7[4 * v51 + 544] = v30;
            }
            if ( *((float *)v31 + 11) > *((float *)v31 + 9) && *((float *)v31 + 12) > *((float *)v31 + 10) )
            {
              v53 = v32;
              v54 = v32++ + 26LL;
              *(_OWORD *)&v7[16 * v54] = *(_OWORD *)(v31 + 36);
              *(_DWORD *)&v7[4 * v53 + 544] = v30 + 1;
            }
            v30 += 4;
            v31 += 64;
          }
          while ( (unsigned int)(v30 - 2) < 8 );
          *((_DWORD *)v7 + 144) = v32;
          v2 = this;
        }
        v7[2726] = 1;
        if ( !CDirtyRegion::IsEmpty((CDirtyRegion *)v7) )
        {
          v46 = *(CVisual **)(*(_QWORD *)(v4 + 24) + 144LL);
          if ( v46 )
          {
            OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects((CDirtyRegion *)v7);
            v60 = OptimizedDirtyRects;
            v61 = *((_DWORD *)v7 + 144);
            if ( v61 )
            {
              v62 = v61;
              do
              {
                CVisual::AddAdditionalDirtyRects(v46, v60);
                v60 = (const struct MilRectF *)((char *)v60 + 16);
                --v62;
              }
              while ( v62 );
            }
          }
        }
        v3 = v64;
        goto LABEL_48;
      }
    }
    v22 = 0;
    goto LABEL_30;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBDu);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x93u);
LABEL_60:
  if ( v3 >= 0 )
    goto LABEL_61;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x7D1u);
LABEL_118:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v3, 0x644u);
    return (unsigned int)v3;
  }
LABEL_61:
  v38 = 0;
  if ( *((_DWORD *)v2 + 8) )
  {
    while ( 1 )
    {
      v39 = CHwndRenderTarget::PreRender(
              *(CVisualTree ***)(*((_QWORD *)v2 + 1) + 8LL * v38),
              *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v2 - 17) + 32LL) + 110LL));
      v3 = v39;
      if ( v39 < 0 )
        break;
      if ( ++v38 >= *((_DWORD *)v2 + 8) )
        goto LABEL_64;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v39, 0x64Cu);
  }
  else
  {
LABEL_64:
    if ( *((_DWORD *)v2 + 20) )
    {
      while ( 1 )
      {
        v63 = CHwndRenderTarget::PreRender(
                *(CVisualTree ***)(*((_QWORD *)v2 + 7) + 8 * v1),
                *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v2 - 17) + 32LL) + 110LL));
        v3 = v63;
        if ( v63 < 0 )
          break;
        v1 = (unsigned int)(v1 + 1);
        if ( (unsigned int)v1 >= *((_DWORD *)v2 + 20) )
          goto LABEL_65;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v63, 0x651u);
    }
    else
    {
LABEL_65:
      v40 = CDesktopRenderTarget::CalculateOcclusion(v2, 1);
      v3 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v40, 0x658u);
    }
  }
  return (unsigned int)v3;
}
