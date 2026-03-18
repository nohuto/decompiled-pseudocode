/*
 * XREFs of ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800250B0
 * Callers:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003CA58 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x1800218B0 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 */

__int64 __fastcall CD2DLayer::RestoreState(CD2DLayer *this, struct CDrawingContext *a2)
{
  struct ID2D1PrivateCompositorRenderer **v3; // rbx
  const struct ID2DContextOwner *v4; // rsi
  void (__fastcall *v5)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *); // rdi
  __int64 v6; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Start);
  v3 = (struct ID2D1PrivateCompositorRenderer **)*((_QWORD *)a2 + 47);
  v4 = (struct CDrawingContext *)((char *)a2 + 56);
  v5 = (void (__fastcall *)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *))*((_QWORD *)*v3 + 8);
  if ( v5 == CD2DContext::PopLayer )
    CD2DContext::PopLayer(v3, v4);
  else
    v5(v3, v4);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v6, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Stop);
  return 0LL;
}
