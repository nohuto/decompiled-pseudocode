/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180004184 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004E930 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18011FA60 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x180137B64 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18015CC48 (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x180166898 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800039BC (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ @ 0x180025850 (-Optimize@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18007DC00 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x18007E7A0 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?Release@CMILBrushBitmap@@UEAAKXZ @ 0x1800845A0 (-Release@CMILBrushBitmap@@UEAAKXZ.c)
 *     ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18008FC90 (-PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x180111F44 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CDrawingContext *this)
{
  int v2; // eax
  int v3; // r15d
  __int64 v4; // r14
  int v5; // eax
  unsigned int i; // edi
  __int64 v7; // rcx
  int v8; // eax
  CScopedClipStack *v9; // rcx
  int v10; // eax
  unsigned int j; // esi
  int v12; // eax
  int v13; // eax
  CSwRenderTargetGetBounds *v14; // rcx
  const struct ID2DContextOwner *v15; // rdx
  __int64 (__fastcall *v16)(CSwRenderTargetGetBounds *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **); // rax
  int v17; // eax
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rcx
  CD3DDeviceLevel1 *v21; // rcx
  void (*v22)(void); // rax
  CMILBrushBitmap *v23; // rcx
  __int64 v24; // rcx
  __int64 result; // rax
  void (*v26)(void); // rax
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rdi
  unsigned int v34; // eax
  __int64 v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rdi
  unsigned int v38; // eax
  SIZE_T v39; // rdx
  LPVOID (__fastcall *v40)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v41; // rax
  LPVOID v42; // rsi
  int v43; // r9d
  LPVOID (__fastcall *v44)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v45; // rax
  LPVOID v46; // rsi
  int v47; // r9d
  __int64 v48; // rcx
  SIZE_T v49; // rdx
  LPVOID (__fastcall *v50)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v51; // rax
  LPVOID v52; // rsi
  int v53; // r9d
  SIZE_T v54; // rdx
  LPVOID (__fastcall *v55)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v56; // rax
  LPVOID v57; // rbp
  int v58; // r9d
  SIZE_T v59; // rdx
  LPVOID (__fastcall *v60)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v61; // rax
  LPVOID v62; // rsi
  int v63; // r9d
  SIZE_T v64; // rdx
  LPVOID (__fastcall *v65)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v66; // rax
  LPVOID v67; // rdi
  int v68; // eax
  int v69; // esi
  struct IRenderTarget *v70; // [rsp+60h] [rbp+8h] BYREF

  *((_DWORD *)this + 126) = 0;
  v2 = *((_DWORD *)this + 128);
  v3 = -2147024882;
  v4 = 64LL;
  if ( v2 != 10 )
  {
    *((_DWORD *)this + 128) = v2 + 1;
    goto LABEL_3;
  }
  v30 = *((_DWORD *)this + 132);
  v31 = 64LL;
  if ( v30 > 0x40 )
    v31 = v30;
  if ( (unsigned __int64)(3 * v31) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v31) <= *((_DWORD *)this + 127) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v31 <= 0x10 )
    {
      v43 = -2147024809;
    }
    else
    {
      v39 = 16LL * (unsigned int)v31;
      v40 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v40 == WPF::ProcessHeapImpl::Alloc )
        v41 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v39);
      else
        v41 = v40(WPF::g_pProcessHeap, v39);
      v42 = v41;
      if ( v41 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 65));
        *((_QWORD *)this + 65) = v42;
        *((_DWORD *)this + 127) = v31;
        goto LABEL_59;
      }
      v43 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xF3u);
  }
LABEL_59:
  *((_DWORD *)this + 132) = 0;
  *((_DWORD *)this + 128) = 0;
LABEL_3:
  *((_DWORD *)this + 134) = 0;
  CWatermarkStack<CMILMatrix,8,2,8>::Optimize((__int64)this + 536);
  *((_DWORD *)this + 142) = 0;
  v5 = *((_DWORD *)this + 144);
  if ( v5 != 10 )
  {
    *((_DWORD *)this + 144) = v5 + 1;
    goto LABEL_5;
  }
  v32 = *((_DWORD *)this + 148);
  v33 = 64LL;
  if ( v32 > 0x40 )
    v33 = v32;
  if ( (unsigned __int64)(3 * v33) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v33) <= *((_DWORD *)this + 143) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v33 <= 1 )
    {
      v47 = -2147024809;
    }
    else
    {
      v44 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v44 == WPF::ProcessHeapImpl::Alloc )
        v45 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (unsigned int)v33);
      else
        v45 = v44(WPF::g_pProcessHeap, (unsigned int)v33);
      v46 = v45;
      if ( v45 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 73));
        *((_QWORD *)this + 73) = v46;
        *((_DWORD *)this + 143) = v33;
        goto LABEL_64;
      }
      v47 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0xF3u);
  }
LABEL_64:
  *((_DWORD *)this + 148) = 0;
  *((_DWORD *)this + 144) = 0;
LABEL_5:
  while ( *((_DWORD *)this + 156) )
    CDrawingContext::PopLayerInternal((__int64)this);
  for ( i = 0; i < *((_DWORD *)this + 188); ++i )
  {
    v48 = *(_QWORD *)(*((_QWORD *)this + 91) + 8LL * i);
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
  v7 = *((_QWORD *)this + 100);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    *((_QWORD *)this + 100) = 0LL;
  }
  *((_DWORD *)this + 220) = 0;
  v8 = *((_DWORD *)this + 222);
  if ( v8 != 10 )
  {
    *((_DWORD *)this + 222) = v8 + 1;
    goto LABEL_11;
  }
  v34 = *((_DWORD *)this + 226);
  v35 = 64LL;
  if ( v34 > 0x40 )
    v35 = v34;
  if ( (unsigned __int64)(3 * v35) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v35) <= *((_DWORD *)this + 221) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v35 <= 0x1C )
    {
      v53 = -2147024809;
    }
    else
    {
      v49 = 28LL * (unsigned int)v35;
      v50 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v50 == WPF::ProcessHeapImpl::Alloc )
        v51 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v49);
      else
        v51 = v50(WPF::g_pProcessHeap, v49);
      v52 = v51;
      if ( v51 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 112));
        *((_QWORD *)this + 112) = v52;
        *((_DWORD *)this + 221) = v35;
        goto LABEL_69;
      }
      v53 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0xF3u);
  }
LABEL_69:
  *((_DWORD *)this + 226) = 0;
  *((_DWORD *)this + 222) = 0;
LABEL_11:
  *((_DWORD *)this + 234) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 912, 80LL);
  *((_DWORD *)this + 746) = 0;
  v10 = *((_DWORD *)this + 748);
  if ( v10 != 8 )
  {
    *((_DWORD *)this + 748) = v10 + 1;
    goto LABEL_13;
  }
  v28 = *((_DWORD *)this + 752);
  v29 = 8LL;
  if ( v28 > 8 )
    v29 = v28;
  v9 = (CScopedClipStack *)(unsigned int)v29;
  if ( (unsigned __int64)(3 * v29) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v29) <= *((_DWORD *)this + 747) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v29 <= 0x10 )
    {
      v58 = -2147024809;
    }
    else
    {
      v54 = 16LL * (unsigned int)v29;
      v55 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v55 == WPF::ProcessHeapImpl::Alloc )
        v56 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v54);
      else
        v56 = v55(WPF::g_pProcessHeap, v54);
      v57 = v56;
      if ( v56 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 375));
        *((_QWORD *)this + 375) = v57;
        *((_DWORD *)this + 747) = v29;
        goto LABEL_54;
      }
      v58 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0xF3u);
  }
LABEL_54:
  *((_DWORD *)this + 752) = 0;
  *((_DWORD *)this + 748) = 0;
LABEL_13:
  for ( j = 0; j < *((_DWORD *)this + 442); ++j )
    CScopedClipStack::FreeCpuClipStackState(
      v9,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 218) + 120LL * j));
  *((_DWORD *)this + 442) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1744, 120LL);
  *((_DWORD *)this + 754) = 0;
  v12 = *((_DWORD *)this + 756);
  if ( v12 != 10 )
  {
    *((_DWORD *)this + 756) = v12 + 1;
    goto LABEL_16;
  }
  v36 = *((_DWORD *)this + 760);
  v37 = 64LL;
  if ( v36 > 0x40 )
    v37 = v36;
  if ( (unsigned __int64)(3 * v37) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v37) <= *((_DWORD *)this + 755) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v37 <= 4 )
    {
      v63 = -2147024809;
    }
    else
    {
      v59 = 4 * v37;
      v60 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v60 == WPF::ProcessHeapImpl::Alloc )
        v61 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v59);
      else
        v61 = v60(WPF::g_pProcessHeap, v59);
      v62 = v61;
      if ( v61 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 379));
        *((_QWORD *)this + 379) = v62;
        *((_DWORD *)this + 755) = v37;
        goto LABEL_74;
      }
      v63 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0xF3u);
  }
LABEL_74:
  *((_DWORD *)this + 760) = 0;
  *((_DWORD *)this + 756) = 0;
LABEL_16:
  *((_DWORD *)this + 786) = 0;
  v13 = *((_DWORD *)this + 788);
  if ( v13 != 10 )
  {
    *((_DWORD *)this + 788) = v13 + 1;
    goto LABEL_18;
  }
  v38 = *((_DWORD *)this + 792);
  if ( v38 > 0x40 )
    v4 = v38;
  if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v4) <= *((_DWORD *)this + 787) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 <= 0x10 )
    {
      v3 = -2147024809;
    }
    else
    {
      v64 = 16LL * (unsigned int)v4;
      v65 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v65 == WPF::ProcessHeapImpl::Alloc )
        v66 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v64);
      else
        v66 = v65(WPF::g_pProcessHeap, v64);
      v67 = v66;
      if ( v66 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 395));
        *((_QWORD *)this + 395) = v67;
        *((_DWORD *)this + 787) = v4;
        goto LABEL_79;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xF3u);
  }
LABEL_79:
  *((_DWORD *)this + 792) = 0;
  *((_DWORD *)this + 788) = 0;
LABEL_18:
  v14 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 57);
  v70 = 0LL;
  v15 = (CDrawingContext *)((char *)this + 128);
  v16 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v14 + 32LL);
  if ( v16 == CSwRenderTargetGetBounds::PopTarget )
  {
    v17 = CSwRenderTargetGetBounds::PopTarget(v14, v15, &v70);
  }
  else if ( v16 == CD2DContext::PopTarget )
  {
    v17 = CD2DContext::PopTarget(v14, v15, &v70);
  }
  else
  {
    v17 = v16(v14, v15, &v70);
  }
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x24BAu);
  }
  else if ( g_LockAndReadD2DTarget )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 54) + 176LL))(
      *((_QWORD *)this + 54),
      0LL,
      0LL);
  }
  v19 = *((_QWORD *)this + 54);
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    *((_QWORD *)this + 54) = 0LL;
  }
  v20 = *((_QWORD *)this + 55);
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    *((_QWORD *)this + 55) = 0LL;
  }
  if ( v70 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v70 + 16LL))(v70);
  *((_BYTE *)this + 6529) = 1;
  if ( v18 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1EBu);
  v21 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 57);
  if ( v21 )
  {
    v22 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
    if ( (char *)v22 == (char *)CD3DDeviceLevel1::Release )
      CD3DDeviceLevel1::Release(v21);
    else
      v22();
    *((_QWORD *)this + 57) = 0LL;
  }
  v23 = (CMILBrushBitmap *)*((_QWORD *)this + 477);
  if ( v23 )
  {
    v26 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
    if ( (char *)v26 == (char *)CMILBrushBitmap::Release )
      CMILBrushBitmap::Release(v23);
    else
      v26();
    *((_QWORD *)this + 477) = 0LL;
  }
  v24 = *((_QWORD *)this + 407);
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    *((_QWORD *)this + 407) = 0LL;
  }
  *((_BYTE *)this + 6532) = 0;
  if ( !*((_BYTE *)this + 3048) && !*((_DWORD *)this + 1621) )
  {
    v27 = *((_QWORD *)this + 815);
    if ( v27 )
    {
      v68 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v27 + 24) + 88LL))(*(_QWORD *)(v27 + 24));
      v69 = v68;
      if ( v68 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v68, 0x207u);
      if ( !v18 || v18 >= 0 && v69 < 0 )
        v18 = v69;
      *((_QWORD *)this + 815) = 0LL;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      TemplateEventDescriptor(v27, &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop);
  }
  result = (unsigned int)v18;
  *((_QWORD *)this + 397) = 0LL;
  return result;
}
