/*
 * XREFs of ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1800EBC08
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1800EBC98 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::CMagnifierRenderTarget(
        CMagnifierRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CMagnifierRenderTarget *result; // rax
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 28;
  v4 = "DWM Rendertarget (magnifier)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v4);
  *(_DWORD *)(v2 + 560) = 0;
  *(_DWORD *)(v2 + 564) = 0;
  *(_QWORD *)(v2 + 40) = &CMagnifierRenderTarget::`vftable'{for `IRenderTargetResource'};
  *(_QWORD *)(v2 + 48) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 80) = &CMagnifierRenderTarget::`vftable';
  *(_QWORD *)(v2 + 568) = 0x3FF0000000000000LL;
  *(_QWORD *)(v2 + 576) = 0x3FF0000000000000LL;
  *(_QWORD *)(v2 + 584) = 0x3FF0000000000000LL;
  *(_QWORD *)(v2 + 592) = 0x3FF0000000000000LL;
  result = (CMagnifierRenderTarget *)v2;
  *(_QWORD *)v2 = &CMagnifierRenderTarget::`vftable'{for `CResource'};
  return result;
}
