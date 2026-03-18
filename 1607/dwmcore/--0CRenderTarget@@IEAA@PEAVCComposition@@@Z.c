/*
 * XREFs of ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800B8344
 * Callers:
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180075B68 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDesktopRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180077334 (--0CDesktopRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x18011E394 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 *     ??0CAnalogTextureTarget@@AEAA@PEAVCComposition@@@Z @ 0x180165E90 (--0CAnalogTextureTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CAnalogCompositorTarget@@AEAA@PEAVCComposition@@@Z @ 0x180166E04 (--0CAnalogCompositorTarget@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CRenderTarget *__fastcall CRenderTarget::CRenderTarget(CRenderTarget *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CRenderTarget::`vftable'{for `IVisualTreeClient'};
  return this;
}
