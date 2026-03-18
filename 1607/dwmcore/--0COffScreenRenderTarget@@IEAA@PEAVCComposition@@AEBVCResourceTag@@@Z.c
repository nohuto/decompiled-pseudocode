/*
 * XREFs of ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x18011E394
 * Callers:
 *     ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18011E2FC (--0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18012AE98 (--0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800B8344 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::COffScreenRenderTarget(
        COffScreenRenderTarget *this,
        struct CComposition *a2,
        const struct CResourceTag *a3)
{
  __int128 v5; // xmm0
  COffScreenRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &COffScreenRenderTarget::`vftable';
  *((_QWORD *)this + 31) = (char *)this + 280;
  *((_QWORD *)this + 32) = (char *)this + 280;
  *((_DWORD *)this + 66) = 6;
  *(_QWORD *)((char *)this + 268) = 6LL;
  v5 = *(_OWORD *)a3;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  result = this;
  *((_OWORD *)this + 24) = v5;
  *((_WORD *)this + 120) = 1;
  return result;
}
