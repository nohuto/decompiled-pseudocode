/*
 * XREFs of ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180005880
 * Callers:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800039BC (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 * Callees:
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x180002E80 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DLayer::RestoreState(CD2DLayer *this, struct CDrawingContext *a2)
{
  CD2DContext *v3; // rcx
  const struct ID2DContextOwner *v4; // rdx
  void (__fastcall *v5)(CD2DContext *, const struct ID2DContextOwner *); // rax
  __int64 v6; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Start);
  v3 = (CD2DContext *)*((_QWORD *)a2 + 57);
  v4 = (struct CDrawingContext *)((char *)a2 + 128);
  v5 = *(void (__fastcall **)(CD2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)v3 + 64LL);
  if ( v5 == CD2DContext::PopLayer )
    CD2DContext::PopLayer(v3, v4);
  else
    v5(v3, v4);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v6, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Stop);
  return 0LL;
}
