/*
 * XREFs of ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180004184 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180009E90 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C9F8 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PreRender@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180075548 (-PreRender@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x18012DB30 (-PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x180166898 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z @ 0x18000C6F0 (-NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z.c)
 *     ?CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z @ 0x18000C72C (-CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18000C768 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ??0CDirtyRegion@@QEAA@XZ @ 0x18000CC48 (--0CDirtyRegion@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180070E00 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180070EE8 (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 */

__int64 __fastcall CVisualTree::PreCompute(CVisualTree *this)
{
  void *(__fastcall *v2)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CDirtyRegion *v3; // rax
  CDirtyRegion *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  unsigned int (__fastcall *v8)(CDirtyRegion *__hidden); // rax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    Template_x(this, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, this);
  v2 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v2 == WPF::ProcessHeapImpl::Alloc )
    v3 = (CDirtyRegion *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0xAA8uLL);
  else
    v3 = (CDirtyRegion *)v2(WPF::g_pProcessHeap, 2728uLL);
  if ( v3 )
    v4 = CDirtyRegion::CDirtyRegion(v3);
  else
    v4 = 0LL;
  if ( v4 )
  {
    (**(void (__fastcall ***)(CDirtyRegion *))v4)(v4);
    CDirtyRegion::Initialize(v4);
    CVisualTree::CollectInvalidClientRects(this, v4);
    v5 = CVisualTree::PreComputeWorker(this, v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xADu);
    }
    else
    {
      CVisualTree::NotifyClientsOfDirty(this, v4);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v7, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, this);
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBDu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x93u);
  }
  if ( v4 )
  {
    v8 = *(unsigned int (__fastcall **)(CDirtyRegion *__hidden))(*(_QWORD *)v4 + 8LL);
    if ( v8 == CDirtyRegion::Release )
      CDirtyRegion::Release(v4);
    else
      v8(v4);
  }
  return v6;
}
