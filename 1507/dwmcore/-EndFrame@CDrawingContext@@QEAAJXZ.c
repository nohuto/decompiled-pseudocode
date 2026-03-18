/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800299D8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004BAA8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004F2B0 (-GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x180053DA4 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800E9CF8 (-Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0774 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x1801032E4 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileBrush@@PEBUBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18012172C (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileBrush@@PEBUBrushContext@@PEBVCMILMatrix@@2.c)
 *     ?RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x1801272F4 (-RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180019500 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180027F54 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180043D10 (-PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800468D0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800727F0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1800DF580 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CDrawingContext *this)
{
  int v2; // eax
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // eax
  int v6; // eax
  int v7; // eax
  WPF *v8; // rcx
  int v9; // eax
  unsigned int i; // edi
  WPF *v11; // rcx
  int v12; // eax
  CSwRenderTargetGetBounds *v13; // rdi
  __int64 (__fastcall *v14)(CSwRenderTargetGetBounds *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **); // rsi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ebp
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(CD3DDeviceLevel1 *); // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 result; // rax
  unsigned int (__fastcall *v25)(CBitmapRealization *__hidden); // rsi
  __int64 v26; // rsi
  unsigned int v27; // eax
  __int64 v28; // rbp
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rbp
  unsigned int v32; // eax
  __int64 v33; // rbp
  unsigned int v34; // eax
  __int64 v35; // rbp
  unsigned int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // edi
  void **v45; // [rsp+20h] [rbp-38h]
  struct IRenderTarget *v46; // [rsp+60h] [rbp+8h] BYREF

  *((_DWORD *)this + 106) = 0;
  v2 = *((_DWORD *)this + 108);
  v3 = 64LL;
  if ( v2 == 10 )
  {
    v30 = *((_DWORD *)this + 112);
    v31 = 64LL;
    if ( v30 > 0x40 )
      v31 = v30;
    if ( (unsigned __int64)(3 * v31) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v31) <= *((_DWORD *)this + 107) )
    {
      v46 = 0LL;
      v37 = WPF::HrMalloc(this, 16LL, (unsigned int)v31, (unsigned __int64)&v46, v45);
      if ( v37 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 55));
        *((_QWORD *)this + 55) = v46;
        *((_DWORD *)this + 107) = v31;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xF3u);
      }
    }
    *((_DWORD *)this + 112) = 0;
    *((_DWORD *)this + 108) = 0;
  }
  else
  {
    *((_DWORD *)this + 108) = v2 + 1;
  }
  *((_DWORD *)this + 114) = 0;
  v4 = 8LL;
  v5 = *((_DWORD *)this + 116);
  if ( v5 == 8 )
  {
    v27 = *((_DWORD *)this + 120);
    v28 = 8LL;
    if ( v27 > 8 )
      v28 = v27;
    if ( (unsigned __int64)(3 * v28) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v28) <= *((_DWORD *)this + 115) )
    {
      v46 = 0LL;
      v38 = WPF::HrMalloc(this, 64LL, (unsigned int)v28, (unsigned __int64)&v46, v45);
      if ( v38 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 59));
        *((_QWORD *)this + 59) = v46;
        *((_DWORD *)this + 115) = v28;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xF3u);
      }
    }
    *((_DWORD *)this + 120) = 0;
    *((_DWORD *)this + 116) = 0;
  }
  else
  {
    *((_DWORD *)this + 116) = v5 + 1;
  }
  *((_DWORD *)this + 122) = 0;
  v6 = *((_DWORD *)this + 124);
  if ( v6 == 10 )
  {
    v32 = *((_DWORD *)this + 128);
    v33 = 64LL;
    if ( v32 > 0x40 )
      v33 = v32;
    if ( (unsigned __int64)(3 * v33) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v33) <= *((_DWORD *)this + 123) )
    {
      v46 = 0LL;
      v39 = WPF::HrMalloc(this, 1LL, (unsigned int)v33, (unsigned __int64)&v46, v45);
      if ( v39 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 63));
        *((_QWORD *)this + 63) = v46;
        *((_DWORD *)this + 123) = v33;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0xF3u);
      }
    }
    *((_DWORD *)this + 128) = 0;
    *((_DWORD *)this + 124) = 0;
  }
  else
  {
    *((_DWORD *)this + 124) = v6 + 1;
  }
  while ( *((_DWORD *)this + 136) )
    CDrawingContext::PopLayerInternal((__int64)this);
  *((_DWORD *)this + 162) = 0;
  v7 = *((_DWORD *)this + 164);
  if ( v7 == 10 )
  {
    v34 = *((_DWORD *)this + 168);
    v35 = 64LL;
    if ( v34 > 0x40 )
      v35 = v34;
    if ( (unsigned __int64)(3 * v35) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v35) <= *((_DWORD *)this + 163) )
    {
      v46 = 0LL;
      v40 = WPF::HrMalloc(this, 32LL, (unsigned int)v35, (unsigned __int64)&v46, v45);
      if ( v40 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 83));
        *((_QWORD *)this + 83) = v46;
        *((_DWORD *)this + 163) = v35;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0xF3u);
      }
    }
    *((_DWORD *)this + 168) = 0;
    *((_DWORD *)this + 164) = 0;
  }
  else
  {
    *((_DWORD *)this + 164) = v7 + 1;
  }
  *((_DWORD *)this + 176) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 680, 76LL);
  *((_DWORD *)this + 638) = 0;
  v9 = *((_DWORD *)this + 640);
  if ( v9 == 8 )
  {
    v29 = *((_DWORD *)this + 644);
    if ( v29 > 8 )
      v4 = v29;
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v4) <= *((_DWORD *)this + 639) )
    {
      v46 = 0LL;
      v41 = WPF::HrMalloc(v8, 16LL, (unsigned int)v4, (unsigned __int64)&v46, v45);
      if ( v41 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 321));
        *((_QWORD *)this + 321) = v46;
        *((_DWORD *)this + 639) = v4;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0xF3u);
      }
    }
    *((_DWORD *)this + 644) = 0;
    *((_DWORD *)this + 640) = 0;
  }
  else
  {
    *((_DWORD *)this + 640) = v9 + 1;
  }
  for ( i = 0; i < *((_DWORD *)this + 374); ++i )
    CScopedClipStack::FreeCpuClipStackState(
      v8,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 184) + 104LL * i));
  *((_DWORD *)this + 374) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1472, 104LL);
  *((_DWORD *)this + 646) = 0;
  v12 = *((_DWORD *)this + 648);
  if ( v12 == 10 )
  {
    v36 = *((_DWORD *)this + 652);
    if ( v36 > 0x40 )
      v3 = v36;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 647) )
    {
      v46 = 0LL;
      v42 = WPF::HrMalloc(v11, 4LL, (unsigned int)v3, (unsigned __int64)&v46, v45);
      if ( v42 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 325));
        *((_QWORD *)this + 325) = v46;
        *((_DWORD *)this + 647) = v3;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xF3u);
      }
    }
    *((_DWORD *)this + 652) = 0;
    *((_DWORD *)this + 648) = 0;
  }
  else
  {
    *((_DWORD *)this + 648) = v12 + 1;
  }
  v13 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 47);
  v46 = 0LL;
  v14 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v13 + 32LL);
  if ( v14 == CSwRenderTargetGetBounds::PopTarget )
  {
    v15 = CSwRenderTargetGetBounds::PopTarget(v13, (CDrawingContext *)((char *)this + 56), &v46);
  }
  else if ( v14 == CD2DContext::PopTarget )
  {
    v15 = CD2DContext::PopTarget(v13, (CDrawingContext *)((char *)this + 56), &v46);
  }
  else
  {
    v15 = v14(v13, (CDrawingContext *)((char *)this + 56), &v46);
  }
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x24F0u);
  }
  else if ( g_LockAndReadD2DTarget )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 44) + 168LL))(
      *((_QWORD *)this + 44),
      0LL,
      0LL);
  }
  v18 = *((_QWORD *)this + 44);
  if ( v18 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 16LL))(*((_QWORD *)this + 44));
    *((_QWORD *)this + 44) = 0LL;
  }
  v19 = *((_QWORD *)this + 45);
  if ( v19 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 16LL))(*((_QWORD *)this + 45));
    *((_QWORD *)this + 45) = 0LL;
  }
  if ( v46 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v46 + 16LL))(v46);
  *(_WORD *)((char *)this + 5929) = 257;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1DFu);
  v20 = *((_QWORD *)this + 47);
  if ( v20 )
  {
    v21 = *(__int64 (__fastcall **)(CD3DDeviceLevel1 *))(*(_QWORD *)v20 + 16LL);
    if ( v21 == CD3DDeviceLevel1::Release )
      CD3DDeviceLevel1::Release(*((CD3DDeviceLevel1 **)this + 47));
    else
      v21(*((CD3DDeviceLevel1 **)this + 47));
    *((_QWORD *)this + 47) = 0LL;
  }
  v22 = *((_QWORD *)this + 415);
  if ( v22 )
  {
    v25 = *(unsigned int (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v22 + 16LL);
    if ( v25 == CBitmapRealization::Release )
      CBitmapRealization::Release(*((CBitmapRealization **)this + 415));
    else
      v25(*((CBitmapRealization **)this + 415));
    *((_QWORD *)this + 415) = 0LL;
  }
  v23 = *((_QWORD *)this + 347);
  if ( v23 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 16LL))(*((_QWORD *)this + 347));
    *((_QWORD *)this + 347) = 0LL;
  }
  *((_BYTE *)this + 5936) = 0;
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1439) )
  {
    v26 = *((_QWORD *)this + 724);
    if ( v26 )
    {
      v43 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + 24) + 88LL))(*(_QWORD *)(v26 + 24));
      v44 = v43;
      if ( v43 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x1FBu);
      if ( !v17 || v17 >= 0 && v44 < 0 )
        v17 = v44;
      *((_QWORD *)this + 724) = 0LL;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      TemplateEventDescriptor(v16, &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop);
  }
  result = (unsigned int)v17;
  *((_QWORD *)this + 338) = 0LL;
  return result;
}
