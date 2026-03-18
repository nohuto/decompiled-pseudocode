/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0
 * Callers:
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010960 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x18005BC9C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18007D438 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801032E0 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18010CEB8 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18010D0B8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180114F60 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180115934 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAVCOverlayContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180130C14 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B1C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  CDrawingContext *v6; // rbx
  __int64 v7; // rax
  void *v8; // rsi
  int v9; // r12d
  unsigned int v10; // eax
  void (*v11)(WPF::ProcessHeapImpl *__hidden, void *); // r14
  void *v12; // r12
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm1
  unsigned int v18; // eax
  unsigned int v19; // ecx
  void (*v20)(WPF::ProcessHeapImpl *__hidden, void *); // r14
  int v21; // ecx
  int v23; // ecx
  unsigned int v24; // r14d
  int v25; // eax
  unsigned __int64 v26; // rax
  void *v27; // r12
  void (*v28)(WPF::ProcessHeapImpl *__hidden, void *); // rcx
  unsigned int v29; // r14d
  int v30; // eax
  unsigned __int64 v31; // rax
  void *v32; // r15
  void *v33; // rcx
  __int64 v34; // r8
  void **v35; // [rsp+20h] [rbp-40h]
  void *v36; // [rsp+30h] [rbp-30h] BYREF
  void (*v37)(WPF::ProcessHeapImpl *__hidden, void *); // [rsp+38h] [rbp-28h]
  __int128 v38; // [rsp+40h] [rbp-20h]
  __int128 v39; // [rsp+50h] [rbp-10h]

  v6 = this;
  if ( !a4 )
    goto LABEL_10;
  v7 = *((unsigned int *)this + 107);
  v8 = 0LL;
  v9 = 0;
  LODWORD(v38) = 8;
  *((_QWORD *)&v38 + 1) = a2;
  v36 = 0LL;
  if ( *((_DWORD *)this + 106) == (_DWORD)v7 )
  {
    v29 = 2 * v7;
    if ( (unsigned __int64)(2 * v7) > 0xFFFFFFFF )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_6;
    }
    if ( v29 <= 0x40 )
      v29 = 64;
    v30 = WPF::HrMalloc(this, 16LL, v29, (unsigned __int64)&v36, v35);
    v9 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x54u);
      v8 = v36;
      goto LABEL_6;
    }
    v31 = 16LL * *((unsigned int *)v6 + 106);
    if ( v31 > 0xFFFFFFFF )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
      v8 = v36;
      goto LABEL_6;
    }
    v32 = v36;
    v9 = 0;
    memcpy_0(v36, *((const void **)v6 + 55), (unsigned int)v31);
    v33 = (void *)*((_QWORD *)v6 + 55);
    v36 = v33;
    v37 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v37 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v33);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v37)(WPF::g_pProcessHeap, v36);
    *((_QWORD *)v6 + 55) = v32;
    v8 = 0LL;
    *((_DWORD *)v6 + 107) = v29;
  }
  *(_OWORD *)(*((_QWORD *)v6 + 55) + 16LL * (unsigned int)(*((_DWORD *)v6 + 106))++) = v38;
  this = (CDrawingContext *)*((unsigned int *)v6 + 106);
  v10 = *((_DWORD *)v6 + 112);
  if ( v10 <= (unsigned int)this )
    v10 = *((_DWORD *)v6 + 106);
  *((_DWORD *)v6 + 112) = v10;
LABEL_6:
  v11 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v11 == WPF::ProcessHeapImpl::Free )
  {
    if ( v8 )
      HeapFree(g_hProcessHeap, 0, v8);
  }
  else
  {
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v11)(WPF::g_pProcessHeap, v8);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x18F8u);
    return (unsigned int)v9;
  }
LABEL_10:
  v12 = 0LL;
  BYTE12(v39) = *((_BYTE *)v6 + 264);
  v13 = 0;
  *(_QWORD *)&v38 = *(_QWORD *)((char *)v6 + 244);
  DWORD2(v38) = *((_DWORD *)v6 + 68);
  HIDWORD(v38) = *((_DWORD *)v6 + 63);
  *(_QWORD *)&v39 = *((_QWORD *)v6 + 32);
  DWORD2(v39) = *((_DWORD *)v6 + 1490);
  v14 = *((unsigned int *)v6 + 163);
  v36 = 0LL;
  if ( *((_DWORD *)v6 + 162) != (_DWORD)v14 )
  {
LABEL_11:
    v15 = *((_QWORD *)v6 + 83);
    v16 = 32LL * *((unsigned int *)v6 + 162);
    v17 = v39;
    *(_OWORD *)(v16 + v15) = v38;
    *(_OWORD *)(v16 + v15 + 16) = v17;
    v18 = *((_DWORD *)v6 + 168);
    v19 = ++*((_DWORD *)v6 + 162);
    if ( v18 > v19 )
      v19 = v18;
    *((_DWORD *)v6 + 168) = v19;
    goto LABEL_14;
  }
  v24 = 2 * v14;
  if ( (unsigned __int64)(2 * v14) > 0xFFFFFFFF )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
  }
  else
  {
    if ( v24 <= 0x40 )
      v24 = 64;
    v25 = WPF::HrMalloc(this, 32LL, v24, (unsigned __int64)&v36, v35);
    v13 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x54u);
      v12 = v36;
    }
    else
    {
      v26 = 32LL * *((unsigned int *)v6 + 162);
      if ( v26 <= 0xFFFFFFFF )
      {
        v27 = v36;
        v13 = 0;
        memcpy_0(v36, *((const void **)v6 + 83), (unsigned int)v26);
        v28 = (void (*)(WPF::ProcessHeapImpl *__hidden, void *))*((_QWORD *)v6 + 83);
        v37 = v28;
        v36 = *(void **)(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v36 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v28);
        else
          ((void (__fastcall *)(WPF::ProcessHeapImpl *, void (*)(WPF::ProcessHeapImpl *__hidden, void *)))v36)(
            WPF::g_pProcessHeap,
            v37);
        *((_QWORD *)v6 + 83) = v27;
        v12 = 0LL;
        *((_DWORD *)v6 + 163) = v24;
        goto LABEL_11;
      }
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
      v12 = v36;
    }
  }
LABEL_14:
  v20 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v20 == WPF::ProcessHeapImpl::Free )
  {
    if ( v12 )
      HeapFree(g_hProcessHeap, 0, v12);
  }
  else
  {
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v20)(WPF::g_pProcessHeap, v12);
  }
  if ( v13 < 0 && (MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1909u), a4) )
  {
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)v6 + 424, 0LL, v34);
  }
  else
  {
    if ( (*(_BYTE *)a3 & 1) != 0 )
      *((_BYTE *)v6 + 264) = *((_DWORD *)a3 + 4) != 1;
    if ( (*(_BYTE *)a3 & 2) != 0 )
    {
      v23 = *((_DWORD *)a3 + 1);
      if ( (v23 & 0xFF000000) == 0xFF000000 )
      {
        *((_DWORD *)v6 + 61) = v23 & 0xFFFFFF;
      }
      else if ( !*((_BYTE *)v6 + 5633) )
      {
        *((_DWORD *)v6 + 61) = v23;
      }
    }
    if ( (*(_BYTE *)a3 & 8) != 0 )
      *((_DWORD *)v6 + 62) = *((_DWORD *)a3 + 2);
    if ( (*(_BYTE *)a3 & 0x10) != 0 )
      *((_DWORD *)v6 + 63) = *((_DWORD *)a3 + 5);
    if ( (*(_BYTE *)a3 & 0x20) != 0 )
      *((_DWORD *)v6 + 64) = *((_DWORD *)a3 + 6);
    if ( (*(_BYTE *)a3 & 0x40) != 0 )
      *((_DWORD *)v6 + 65) = *((_DWORD *)a3 + 7);
    if ( (*(_BYTE *)a3 & 4) != 0 )
      *((_DWORD *)v6 + 68) = *((_DWORD *)a3 + 3);
    if ( (*(_DWORD *)a3 & 0x100) != 0 )
    {
      v21 = *((_DWORD *)a3 + 9);
      if ( CCommonRegistryData::m_drawListRenderPathMode == 2 )
      {
        v21 = 1;
      }
      else if ( CCommonRegistryData::m_drawListRenderPathMode == 1
             || *((_BYTE *)v6 + 5973) && !CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP )
      {
        v21 = 0;
      }
      *((_DWORD *)v6 + 1490) = v21;
    }
  }
  return (unsigned int)v13;
}
