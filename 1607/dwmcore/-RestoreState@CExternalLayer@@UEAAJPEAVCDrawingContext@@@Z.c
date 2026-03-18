/*
 * XREFs of ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180013A80
 * Callers:
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180012BE0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800131C0 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CEffectBrushLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012E5B0 (-RestoreState@CEffectBrushLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012EAB0 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012F070 (-RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012FA20 (-RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012FFF0 (-RestoreState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawMask@CDropShadow@@AEAAJPEAVCDrawingContext@@PEAVCBlurLayer@@AEBUD2D_SIZE_F@@M@Z @ 0x18014F460 (-DrawMask@CDropShadow@@AEAAJPEAVCDrawingContext@@PEAVCBlurLayer@@AEBUD2D_SIZE_F@@M@Z.c)
 * Callees:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18000377C (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180005658 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800057C0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 */

__int64 __fastcall CExternalLayer::RestoreState(CExternalLayer *this, struct CDrawingContext *a2)
{
  unsigned int v2; // edi
  int v5; // eax

  v2 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Start);
  if ( *((_BYTE *)this + 35) )
  {
    *((_BYTE *)a2 + 6531) = *((_BYTE *)this + 36);
    *((_BYTE *)this + 35) = 0;
  }
  if ( *((_BYTE *)this + 34) )
  {
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    *((_BYTE *)this + 34) = 0;
  }
  if ( *((_BYTE *)this + 33) )
  {
    v5 = CDrawingContext::PopRenderTargetInternal(a2, 0);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x110u);
  }
  if ( *((_BYTE *)this + 32) )
  {
    CDrawingContext::PopDeviceTransform(a2, (CExternalLayer *)((char *)this + 40));
    *((_BYTE *)this + 32) = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
  return v2;
}
