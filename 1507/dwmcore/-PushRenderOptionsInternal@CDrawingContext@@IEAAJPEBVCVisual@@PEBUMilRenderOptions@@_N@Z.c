/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180030040
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18004BCA8 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x180053DA4 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1800E7248 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVIImageSource@@PEAVCShape@@_N2@Z @ 0x1800F23A8 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVIImageSource@@PEAVCShape@@_N2@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F2618 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FB190 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FBB60 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FC020 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119FE8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18005B05C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  void *v4; // r12
  CDrawingContext *v6; // r15
  __int64 v7; // rax
  int v8; // r13d
  void *v9; // rdi
  unsigned int v10; // eax
  void (*v11)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1
  unsigned int v16; // eax
  unsigned int v17; // ecx
  void (*v18)(WPF::ProcessHeapImpl *__hidden, void *); // rdi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rax
  int v26; // eax
  unsigned __int64 v27; // rax
  void *v28; // r14
  unsigned __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v31; // rax
  void *v32; // r14
  int v33; // eax
  void **v34; // [rsp+20h] [rbp-40h]
  void *v35; // [rsp+30h] [rbp-30h] BYREF
  __int64 v36; // [rsp+38h] [rbp-28h]
  __int128 v37; // [rsp+40h] [rbp-20h]
  __int128 v38; // [rsp+50h] [rbp-10h]

  v4 = 0LL;
  v6 = this;
  if ( !a4 )
    goto LABEL_10;
  v7 = *((unsigned int *)this + 107);
  v8 = 0;
  v9 = 0LL;
  LODWORD(v37) = 8;
  *((_QWORD *)&v37 + 1) = a2;
  v35 = 0LL;
  if ( *((_DWORD *)this + 106) == (_DWORD)v7 )
  {
    v29 = 2 * v7;
    v36 = v29;
    if ( v29 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_6;
    }
    if ( (unsigned int)v29 <= 0x40 )
    {
      LODWORD(v29) = 64;
      v36 = 64LL;
    }
    v30 = WPF::HrMalloc(this, 16LL, (unsigned int)v29, (unsigned __int64)&v35, v34);
    v8 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x54u);
      v9 = v35;
      goto LABEL_6;
    }
    v31 = 16LL * *((unsigned int *)v6 + 106);
    if ( v31 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
      v9 = v35;
      goto LABEL_6;
    }
    v32 = v35;
    v8 = 0;
    memcpy_0(v35, *((const void **)v6 + 55), (unsigned int)v31);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)v6 + 55));
    v9 = 0LL;
    *((_DWORD *)v6 + 107) = v36;
    *((_QWORD *)v6 + 55) = v32;
  }
  *(_OWORD *)(*((_QWORD *)v6 + 55) + 16LL * (unsigned int)(*((_DWORD *)v6 + 106))++) = v37;
  this = (CDrawingContext *)*((unsigned int *)v6 + 106);
  v10 = *((_DWORD *)v6 + 112);
  if ( v10 <= (unsigned int)this )
    v10 = *((_DWORD *)v6 + 106);
  *((_DWORD *)v6 + 112) = v10;
LABEL_6:
  v11 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v11 == WPF::ProcessHeapImpl::Free )
  {
    if ( v9 )
      HeapFree(g_hProcessHeap, 0, v9);
  }
  else
  {
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v11)(WPF::g_pProcessHeap, v9);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1919u);
    return (unsigned int)v8;
  }
LABEL_10:
  v8 = 0;
  LOBYTE(v37) = *((_BYTE *)v6 + 264);
  *((_QWORD *)&v37 + 1) = *(_QWORD *)((char *)v6 + 244);
  LODWORD(v38) = *((_DWORD *)v6 + 68);
  *(_QWORD *)((char *)&v38 + 4) = *(_QWORD *)((char *)v6 + 252);
  HIDWORD(v38) = *((_DWORD *)v6 + 65);
  *(_DWORD *)((char *)&v37 + 1) = *((_DWORD *)v6 + 1483);
  v12 = *((unsigned int *)v6 + 163);
  v35 = 0LL;
  if ( *((_DWORD *)v6 + 162) == (_DWORD)v12 )
  {
    v25 = 2 * v12;
    v36 = v25;
    if ( v25 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_14;
    }
    if ( (unsigned int)v25 <= 0x40 )
    {
      LODWORD(v25) = 64;
      v36 = 64LL;
    }
    v26 = WPF::HrMalloc(this, 32LL, (unsigned int)v25, (unsigned __int64)&v35, v34);
    v8 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x54u);
      v4 = v35;
      goto LABEL_14;
    }
    v27 = 32LL * *((unsigned int *)v6 + 162);
    if ( v27 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
      v4 = v35;
      goto LABEL_14;
    }
    v28 = v35;
    v8 = 0;
    memcpy_0(v35, *((const void **)v6 + 83), (unsigned int)v27);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)v6 + 83));
    *((_DWORD *)v6 + 163) = v36;
    *((_QWORD *)v6 + 83) = v28;
  }
  v13 = *((_QWORD *)v6 + 83);
  v14 = 32LL * *((unsigned int *)v6 + 162);
  v15 = v38;
  *(_OWORD *)(v14 + v13) = v37;
  *(_OWORD *)(v14 + v13 + 16) = v15;
  v16 = *((_DWORD *)v6 + 168);
  v17 = ++*((_DWORD *)v6 + 162);
  if ( v16 > v17 )
    v17 = v16;
  *((_DWORD *)v6 + 168) = v17;
LABEL_14:
  v18 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v18 == WPF::ProcessHeapImpl::Free )
  {
    if ( v4 )
      HeapFree(g_hProcessHeap, 0, v4);
  }
  else
  {
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v18)(WPF::g_pProcessHeap, v4);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x192Du);
    if ( a4 )
    {
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)v6 + 424, 0LL);
      return (unsigned int)v8;
    }
  }
  if ( (*(_BYTE *)a3 & 1) != 0 )
  {
    v21 = *((_DWORD *)a3 + 4);
    if ( v21 )
      *((_BYTE *)v6 + 264) = v21 != 1;
  }
  if ( (*(_BYTE *)a3 & 0x10) == 0 )
    goto LABEL_20;
  v20 = *((_DWORD *)a3 + 1);
  if ( v20 == -1 )
    goto LABEL_20;
  if ( (v20 & 0xFF000000) == 0xFF000000 )
  {
    v20 &= 0xFFFFFFu;
  }
  else if ( *((_BYTE *)v6 + 5601) )
  {
    goto LABEL_20;
  }
  *((_DWORD *)v6 + 61) = v20;
LABEL_20:
  if ( (*(_BYTE *)a3 & 0x40) != 0 )
  {
    v22 = *((_DWORD *)a3 + 2);
    if ( v22 != -1 )
      *((_DWORD *)v6 + 62) = v22;
  }
  if ( *(char *)a3 < 0 )
  {
    v24 = *((_DWORD *)a3 + 5);
    if ( v24 != 5 )
      *((_DWORD *)v6 + 63) = v24;
  }
  if ( (*(_DWORD *)a3 & 0x200) != 0 )
  {
    v23 = *((_DWORD *)a3 + 6);
    if ( v23 != -1 )
      *((_DWORD *)v6 + 64) = v23;
  }
  if ( (*(_DWORD *)a3 & 0x400) != 0 )
  {
    v33 = *((_DWORD *)a3 + 7);
    if ( v33 != -1 )
      *((_DWORD *)v6 + 65) = v33;
  }
  if ( (*(_BYTE *)a3 & 0x20) != 0 )
    *((_DWORD *)v6 + 68) = *((_DWORD *)a3 + 3);
  if ( (*(_BYTE *)a3 & 2) != 0 )
    *((_BYTE *)v6 + 5932) = 1;
  if ( (*(_DWORD *)a3 & 0x100) != 0 )
    *((_BYTE *)v6 + 5933) = 1;
  if ( (*(_BYTE *)a3 & 4) != 0 )
    *((_BYTE *)v6 + 5934) = 1;
  if ( (*(_BYTE *)a3 & 8) != 0 )
    *((_BYTE *)v6 + 5935) = 0;
  return (unsigned int)v8;
}
