/*
 * XREFs of ??0CAnalogCompositorTarget@@AEAA@PEAVCComposition@@@Z @ 0x180166E04
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureAnalogCompositorTarget@CAnalogCompositorClient@@QEAAJPEAVCComposition@@@Z @ 0x180167488 (-EnsureAnalogCompositorTarget@CAnalogCompositorClient@@QEAAJPEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800B8344 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CAnalogCompositorTarget *__fastcall CAnalogCompositorTarget::CAnalogCompositorTarget(
        CAnalogCompositorTarget *this,
        struct CComposition *a2)
{
  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)this = &CAnalogCompositorTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAnalogCompositorTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CAnalogCompositorTarget::`vftable'{for `IVisualTreeClient'};
  *((_BYTE *)this + 152) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  return this;
}
