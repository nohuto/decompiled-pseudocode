/*
 * XREFs of ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180071210
 * Callers:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180027F54 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 * Callees:
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x1800723E0 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CD2DLayer::RestoreState(CD2DLayer *this, struct CDrawingContext *a2)
{
  CD2DContext *v3; // rbx
  const struct ID2DContextOwner *v4; // rsi
  void (__fastcall *v5)(CD2DContext *__hidden, const struct ID2DContextOwner *); // rdi
  __int64 v6; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Start);
  v3 = (CD2DContext *)*((_QWORD *)a2 + 47);
  v4 = (struct CDrawingContext *)((char *)a2 + 56);
  v5 = *(void (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *))(*(_QWORD *)v3 + 64LL);
  if ( v5 == CD2DContext::PopLayer )
    CD2DContext::PopLayer(v3, v4);
  else
    v5(v3, v4);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v6, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Stop);
  return 0LL;
}
