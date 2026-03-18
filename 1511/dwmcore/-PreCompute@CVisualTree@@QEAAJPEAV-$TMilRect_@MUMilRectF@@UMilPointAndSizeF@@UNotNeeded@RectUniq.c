/*
 * XREFs of ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180001520 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003E644 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x18005BC9C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800750F0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D178 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18010A4B4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x180114640 (-PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x18013C844 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z @ 0x180075CB8 (-NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z.c)
 *     ?CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z @ 0x180075DF0 (-CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180075E90 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?Create@CDirtyRegion@@KAJPEAPEAV1@@Z @ 0x180076BC0 (-Create@CDirtyRegion@@KAJPEAPEAV1@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180079630 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180079700 (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

__int64 __fastcall CVisualTree::PreCompute(CVisualTree *this, _OWORD *a2)
{
  int v4; // eax
  struct CDirtyRegion *v5; // rbx
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int (__fastcall *v9)(CDirtyRegion *__hidden); // rdi
  struct CDirtyRegion *v11[2]; // [rsp+30h] [rbp-28h] BYREF

  v11[0] = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    Template_x(this, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, this);
  v4 = CDirtyRegion::Create(v11);
  v5 = v11[0];
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x95u);
  }
  else
  {
    if ( a2 )
      *(_OWORD *)v11 = *a2;
    else
      *(_OWORD *)v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    CDirtyRegion::Initialize(v5, *(_QWORD *)(*((_QWORD *)this + 2) + 352LL), v11, 0LL);
    if ( *((_BYTE *)this + 32) )
      CVisualTree::CollectInvalidClientRects(this, v5);
    v7 = CVisualTree::PreComputeWorker(this, v5);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB2u);
    }
    else
    {
      CVisualTree::NotifyClientsOfDirty(this, v5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v8, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, this);
    }
  }
  if ( v5 )
  {
    v9 = *(unsigned int (__fastcall **)(CDirtyRegion *__hidden))(*(_QWORD *)v5 + 8LL);
    if ( v9 == CDirtyRegion::Release )
      CDirtyRegion::Release(v5);
    else
      v9(v5);
  }
  return v6;
}
