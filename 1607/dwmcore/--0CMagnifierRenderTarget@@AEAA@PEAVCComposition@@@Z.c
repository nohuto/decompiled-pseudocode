/*
 * XREFs of ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18011E2FC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x18011E394 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::CMagnifierRenderTarget(
        CMagnifierRenderTarget *this,
        struct CComposition *a2)
{
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 28;
  v4 = "DWM Rendertarget (magnifier)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v4);
  *((_DWORD *)this + 152) = 0;
  *((_DWORD *)this + 153) = 0;
  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CMagnifierRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &CMagnifierRenderTarget::`vftable';
  *((_QWORD *)this + 77) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 78) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 79) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 80) = 0x3FF0000000000000LL;
  return this;
}
