/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18006E110
 * Callers:
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180012D40 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180074BBC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801194A4 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x180122980 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180122CAC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012EAB0 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18012F648 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801530A8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180022168 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  LPVOID (__fastcall *v5)(WPF::ProcessHeapImpl *, SIZE_T); // r9
  __int64 v8; // rax
  int v9; // ebp
  void *v10; // rsi
  unsigned int v11; // eax
  void (__fastcall *v12)(WPF::ProcessHeapImpl *, void *); // rax
  int v13; // esi
  void *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  void (__fastcall *v19)(WPF::ProcessHeapImpl *, void *); // rax
  int v21; // ecx
  unsigned int v22; // r15d
  SIZE_T v23; // rdx
  LPVOID (__fastcall *v24)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v25; // rax
  unsigned __int64 v26; // rcx
  void *v27; // rdx
  void (__fastcall *v28)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned int v29; // r15d
  SIZE_T v30; // rdx
  LPVOID (__fastcall *v31)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v32; // rax
  unsigned __int64 v33; // rax
  void *v34; // rdx
  void (__fastcall *v35)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned int v36; // [rsp+20h] [rbp-58h]
  unsigned int v37; // [rsp+20h] [rbp-58h]
  __int128 v38; // [rsp+30h] [rbp-48h]
  __int128 v39; // [rsp+30h] [rbp-48h]
  __int64 v40; // [rsp+40h] [rbp-38h]
  int v41; // [rsp+48h] [rbp-30h]

  v5 = WPF::ProcessHeapImpl::Alloc;
  if ( !a4 )
    goto LABEL_11;
  v8 = *((unsigned int *)this + 127);
  v9 = 0;
  v10 = 0LL;
  LODWORD(v38) = 8;
  *((_QWORD *)&v38 + 1) = a2;
  if ( *((_DWORD *)this + 126) != (_DWORD)v8 )
    goto LABEL_3;
  v29 = 2 * v8;
  if ( (unsigned __int64)(2 * v8) > 0xFFFFFFFF )
  {
    v36 = 76;
LABEL_74:
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v36);
    goto LABEL_6;
  }
  if ( v29 <= 0x40 )
    v29 = 64;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v29 <= 0x10 )
  {
    v9 = -2147024809;
  }
  else
  {
    v30 = 16LL * v29;
    v31 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v31 == WPF::ProcessHeapImpl::Alloc )
      v32 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v30);
    else
      v32 = v31(WPF::g_pProcessHeap, v30);
    v10 = v32;
    if ( !v32 )
      v9 = -2147024882;
  }
  if ( v9 >= 0 )
  {
    v33 = 16LL * *((unsigned int *)this + 126);
    if ( v33 <= 0xFFFFFFFF )
    {
      v9 = 0;
      memcpy_0(v10, *((const void **)this + 65), (unsigned int)v33);
      v34 = (void *)*((_QWORD *)this + 65);
      v35 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v35 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v34);
      else
        v35(WPF::g_pProcessHeap, v34);
      *((_QWORD *)this + 65) = v10;
      v10 = 0LL;
      *((_DWORD *)this + 127) = v29;
LABEL_3:
      *(_OWORD *)(*((_QWORD *)this + 65) + 16LL * (unsigned int)(*((_DWORD *)this + 126))++) = v38;
      v11 = *((_DWORD *)this + 132);
      if ( v11 <= *((_DWORD *)this + 126) )
        v11 = *((_DWORD *)this + 126);
      *((_DWORD *)this + 132) = v11;
      goto LABEL_6;
    }
    v36 = 86;
    goto LABEL_74;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x54u);
LABEL_6:
  v12 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v12 == WPF::ProcessHeapImpl::Free )
  {
    if ( v10 )
      HeapFree(g_hProcessHeap, 0, v10);
  }
  else
  {
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *, const struct MilRenderOptions *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v12)(
      WPF::g_pProcessHeap,
      v10,
      a3,
      v5);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1950u);
    return (unsigned int)v9;
  }
  v5 = WPF::ProcessHeapImpl::Alloc;
LABEL_11:
  v13 = 0;
  LOBYTE(v41) = *((_BYTE *)this + 344);
  v14 = 0LL;
  *(_QWORD *)&v39 = *(_QWORD *)((char *)this + 324);
  DWORD2(v39) = *((_DWORD *)this + 88);
  HIDWORD(v39) = *((_DWORD *)this + 83);
  v40 = *((_QWORD *)this + 42);
  v15 = *((unsigned int *)this + 221);
  if ( *((_DWORD *)this + 220) != (_DWORD)v15 )
  {
LABEL_12:
    v16 = *((_QWORD *)this + 112) + 28LL * *((unsigned int *)this + 220);
    *(_OWORD *)v16 = v39;
    *(_QWORD *)(v16 + 16) = v40;
    *(_DWORD *)(v16 + 24) = v41;
    v17 = *((_DWORD *)this + 226);
    v18 = ++*((_DWORD *)this + 220);
    if ( v17 > v18 )
      v18 = v17;
    *((_DWORD *)this + 226) = v18;
    goto LABEL_15;
  }
  v22 = 2 * v15;
  if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
  {
    v37 = 76;
LABEL_80:
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v37);
    goto LABEL_15;
  }
  if ( v22 <= 0x40 )
    v22 = 64;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v22 <= 0x1C )
  {
    v13 = -2147024809;
  }
  else
  {
    v23 = 28LL * v22;
    v24 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v24 == WPF::ProcessHeapImpl::Alloc )
      v25 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v23);
    else
      v25 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, _QWORD, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v24)(
                      WPF::g_pProcessHeap,
                      v23,
                      v22,
                      WPF::ProcessHeapImpl::Alloc);
    v14 = v25;
    if ( !v25 )
      v13 = -2147024882;
  }
  if ( v13 >= 0 )
  {
    v26 = 28LL * *((unsigned int *)this + 220);
    if ( v26 <= 0xFFFFFFFF )
    {
      v13 = 0;
      memcpy_0(v14, *((const void **)this + 112), (unsigned int)v26);
      v27 = (void *)*((_QWORD *)this + 112);
      v28 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v28 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v27);
      else
        v28(WPF::g_pProcessHeap, v27);
      *((_QWORD *)this + 112) = v14;
      v14 = 0LL;
      *((_DWORD *)this + 221) = v22;
      goto LABEL_12;
    }
    v37 = 86;
    goto LABEL_80;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x54u);
LABEL_15:
  v19 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v19 == WPF::ProcessHeapImpl::Free )
  {
    if ( v14 )
      HeapFree(g_hProcessHeap, 0, v14);
  }
  else
  {
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *, const struct MilRenderOptions *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v19)(
      WPF::g_pProcessHeap,
      v14,
      a3,
      v5);
  }
  if ( v13 < 0 && (MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1960u), a4) )
  {
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 126, 0LL);
  }
  else
  {
    if ( (*(_BYTE *)a3 & 1) != 0 )
      *((_BYTE *)this + 344) = *((_DWORD *)a3 + 4) != 1;
    if ( (*(_BYTE *)a3 & 2) != 0 )
    {
      v21 = *((_DWORD *)a3 + 1);
      if ( (v21 & 0xFF000000) == 0xFF000000 )
      {
        *((_DWORD *)this + 81) = v21 & 0xFFFFFF;
      }
      else if ( !*((_BYTE *)this + 6325) )
      {
        *((_DWORD *)this + 81) = v21;
      }
    }
    if ( (*(_BYTE *)a3 & 8) != 0 )
      *((_DWORD *)this + 82) = *((_DWORD *)a3 + 2);
    if ( (*(_BYTE *)a3 & 0x10) != 0 )
      *((_DWORD *)this + 83) = *((_DWORD *)a3 + 5);
    if ( (*(_BYTE *)a3 & 0x20) != 0 )
      *((_DWORD *)this + 84) = *((_DWORD *)a3 + 6);
    if ( (*(_BYTE *)a3 & 0x40) != 0 )
      *((_DWORD *)this + 85) = *((_DWORD *)a3 + 7);
    if ( (*(_BYTE *)a3 & 4) != 0 )
      *((_DWORD *)this + 88) = *((_DWORD *)a3 + 3);
  }
  return (unsigned int)v13;
}
