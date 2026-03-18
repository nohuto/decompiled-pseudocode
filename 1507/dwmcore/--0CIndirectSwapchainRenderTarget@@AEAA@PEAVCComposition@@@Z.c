/*
 * XREFs of ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1800F88D0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1800EBC98 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CIndirectSwapchainRenderTarget *__fastcall CIndirectSwapchainRenderTarget::CIndirectSwapchainRenderTarget(
        CIndirectSwapchainRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 37;
  v4 = "DWM Rendertarget (indirect swapchain)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v4);
  *(_QWORD *)(v2 + 40) = &CIndirectSwapchainRenderTarget::`vftable'{for `IRenderTargetResource'};
  *(_QWORD *)v2 = &CIndirectSwapchainRenderTarget::`vftable'{for `CResource'};
  *(_QWORD *)(v2 + 48) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 80) = &COffScreenRenderTarget::`vftable';
  *(_QWORD *)(v2 + 352) = 0LL;
  *(_QWORD *)(v2 + 360) = 0LL;
  *(_QWORD *)(v2 + 368) = 0LL;
  *(_DWORD *)(v2 + 376) = 0;
  *(_QWORD *)(v2 + 384) = 0LL;
  *(_QWORD *)(v2 + 392) = 0LL;
  *(_QWORD *)(v2 + 400) = 0LL;
  *(_DWORD *)(v2 + 408) = 0;
  return (CIndirectSwapchainRenderTarget *)v2;
}
