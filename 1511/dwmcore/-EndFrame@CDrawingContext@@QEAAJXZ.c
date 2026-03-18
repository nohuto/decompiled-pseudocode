/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003E644 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x18005BC9C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D178 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009EB00 (-GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180109210 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18010A4B4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x18011FD18 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180136FD8 (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x18013C844 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180021AE0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180024B30 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003CA58 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAXXZ @ 0x18005DD08 (-Optimize@-$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180081BE0 (-PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?Release@CMILBrushBitmap@@UEAAKXZ @ 0x180089650 (-Release@CMILBrushBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1800FCF9C (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CDrawingContext *this)
{
  int v2; // eax
  __int64 v3; // r15
  WPF *v4; // rcx
  int v5; // eax
  int v6; // eax
  WPF *v7; // rcx
  int v8; // eax
  unsigned int i; // edi
  WPF *v10; // rcx
  int v11; // eax
  int v12; // eax
  CSwRenderTargetGetBounds *v13; // rdi
  __int64 (__fastcall *v14)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, struct IRenderTarget **); // rsi
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
  unsigned int (__fastcall *v25)(CMILBrushBitmap *__hidden); // rsi
  __int64 v26; // rsi
  unsigned int v27; // eax
  __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rbp
  unsigned int v31; // eax
  __int64 v32; // rbp
  unsigned int v33; // eax
  __int64 v34; // rbp
  unsigned int v35; // eax
  __int64 v36; // rbp
  unsigned int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // edi
  void **v46; // [rsp+20h] [rbp-38h]
  struct IRenderTarget *v47; // [rsp+60h] [rbp+8h] BYREF

  *((_DWORD *)this + 106) = 0;
  v2 = *((_DWORD *)this + 108);
  v3 = 64LL;
  if ( v2 == 10 )
  {
    v29 = *((_DWORD *)this + 112);
    v30 = 64LL;
    if ( v29 > 0x40 )
      v30 = v29;
    if ( (unsigned __int64)(3 * v30) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v30) <= *((_DWORD *)this + 107) )
    {
      v47 = 0LL;
      v38 = WPF::HrMalloc(this, 16LL, (unsigned int)v30, (unsigned __int64)&v47, v46);
      if ( v38 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 55));
        *((_QWORD *)this + 55) = v47;
        *((_DWORD *)this + 107) = v30;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xF3u);
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
  CWatermarkStack<CBaseMatrix,8,2,8>::Optimize();
  *((_DWORD *)this + 122) = 0;
  v5 = *((_DWORD *)this + 124);
  if ( v5 == 10 )
  {
    v31 = *((_DWORD *)this + 128);
    v32 = 64LL;
    if ( v31 > 0x40 )
      v32 = v31;
    if ( (unsigned __int64)(3 * v32) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v32) <= *((_DWORD *)this + 123) )
    {
      v47 = 0LL;
      v39 = WPF::HrMalloc(v4, 1LL, (unsigned int)v32, (unsigned __int64)&v47, v46);
      if ( v39 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 63));
        *((_QWORD *)this + 63) = v47;
        *((_DWORD *)this + 123) = v32;
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
    *((_DWORD *)this + 124) = v5 + 1;
  }
  while ( *((_DWORD *)this + 136) )
    CDrawingContext::PopLayerInternal((__int64)this);
  *((_DWORD *)this + 162) = 0;
  v6 = *((_DWORD *)this + 164);
  if ( v6 == 10 )
  {
    v33 = *((_DWORD *)this + 168);
    v34 = 64LL;
    if ( v33 > 0x40 )
      v34 = v33;
    if ( (unsigned __int64)(3 * v34) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v34) <= *((_DWORD *)this + 163) )
    {
      v47 = 0LL;
      v40 = WPF::HrMalloc(v4, 32LL, (unsigned int)v34, (unsigned __int64)&v47, v46);
      if ( v40 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 83));
        *((_QWORD *)this + 83) = v47;
        *((_DWORD *)this + 163) = v34;
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
    *((_DWORD *)this + 164) = v6 + 1;
  }
  *((_DWORD *)this + 176) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 680, 76LL);
  *((_DWORD *)this + 638) = 0;
  v8 = *((_DWORD *)this + 640);
  if ( v8 == 8 )
  {
    v27 = *((_DWORD *)this + 644);
    v28 = 8LL;
    if ( v27 > 8 )
      v28 = v27;
    if ( (unsigned __int64)(3 * v28) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v28) <= *((_DWORD *)this + 639) )
    {
      v47 = 0LL;
      v41 = WPF::HrMalloc(v7, 16LL, (unsigned int)v28, (unsigned __int64)&v47, v46);
      if ( v41 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 321));
        *((_QWORD *)this + 321) = v47;
        *((_DWORD *)this + 639) = v28;
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
    *((_DWORD *)this + 640) = v8 + 1;
  }
  for ( i = 0; i < *((_DWORD *)this + 374); ++i )
    CScopedClipStack::FreeCpuClipStackState(
      v7,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 184) + 104LL * i));
  *((_DWORD *)this + 374) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1472, 104LL);
  *((_DWORD *)this + 646) = 0;
  v11 = *((_DWORD *)this + 648);
  if ( v11 == 10 )
  {
    v35 = *((_DWORD *)this + 652);
    v36 = 64LL;
    if ( v35 > 0x40 )
      v36 = v35;
    if ( (unsigned __int64)(3 * v36) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v36) <= *((_DWORD *)this + 647) )
    {
      v47 = 0LL;
      v42 = WPF::HrMalloc(v10, 4LL, (unsigned int)v36, (unsigned __int64)&v47, v46);
      if ( v42 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 325));
        *((_QWORD *)this + 325) = v47;
        *((_DWORD *)this + 647) = v36;
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
    *((_DWORD *)this + 648) = v11 + 1;
  }
  *((_DWORD *)this + 676) = 0;
  v12 = *((_DWORD *)this + 678);
  if ( v12 == 10 )
  {
    v37 = *((_DWORD *)this + 682);
    if ( v37 > 0x40 )
      v3 = v37;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 677) )
    {
      v47 = 0LL;
      v43 = WPF::HrMalloc(v10, 16LL, (unsigned int)v3, (unsigned __int64)&v47, v46);
      if ( v43 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 340));
        *((_QWORD *)this + 340) = v47;
        *((_DWORD *)this + 677) = v3;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xF3u);
      }
    }
    *((_DWORD *)this + 682) = 0;
    *((_DWORD *)this + 678) = 0;
  }
  else
  {
    *((_DWORD *)this + 678) = v12 + 1;
  }
  v13 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 47);
  v47 = 0LL;
  v14 = *(__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v13 + 32LL);
  if ( (char *)v14 == (char *)CSwRenderTargetGetBounds::PopTarget )
  {
    v15 = CSwRenderTargetGetBounds::PopTarget(v13, (CDrawingContext *)((char *)this + 56), &v47);
  }
  else if ( v14 == CD2DContext::PopTarget )
  {
    v15 = CD2DContext::PopTarget(
            (struct ID2D1PrivateCompositorRenderer **)v13,
            (CDrawingContext *)((char *)this + 56),
            &v47);
  }
  else
  {
    v15 = v14((struct ID2D1PrivateCompositorRenderer **)v13, (CDrawingContext *)((char *)this + 56), &v47);
  }
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2423u);
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
  if ( v47 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v47 + 16LL))(v47);
  *(_WORD *)((char *)this + 5965) = 257;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1E2u);
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
  v22 = *((_QWORD *)this + 419);
  if ( v22 )
  {
    v25 = *(unsigned int (__fastcall **)(CMILBrushBitmap *__hidden))(*(_QWORD *)v22 + 16LL);
    if ( v25 == CMILBrushBitmap::Release )
      CMILBrushBitmap::Release(*((CMILBrushBitmap **)this + 419));
    else
      v25(*((CMILBrushBitmap **)this + 419));
    *((_QWORD *)this + 419) = 0LL;
  }
  v23 = *((_QWORD *)this + 351);
  if ( v23 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 16LL))(*((_QWORD *)this + 351));
    *((_QWORD *)this + 351) = 0LL;
  }
  *((_BYTE *)this + 5968) = 0;
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1447) )
  {
    v26 = *((_QWORD *)this + 728);
    if ( v26 )
    {
      v44 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + 24) + 88LL))(*(_QWORD *)(v26 + 24));
      v45 = v44;
      if ( v44 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x1FEu);
      if ( !v17 || v17 >= 0 && v45 < 0 )
        v17 = v45;
      *((_QWORD *)this + 728) = 0LL;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      TemplateEventDescriptor(v16, &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop);
  }
  result = (unsigned int)v17;
  *((_QWORD *)this + 342) = 0LL;
  return result;
}
