/*
 * XREFs of ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1800EBC98
 * Callers:
 *     ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1800EBC08 (--0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1800F88D0 (--0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::COffScreenRenderTarget(
        COffScreenRenderTarget *this,
        struct CComposition *a2,
        const struct CResourceTag *a3)
{
  COffScreenRenderTarget *result; // rax
  __int128 v4; // xmm0

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = (char *)this + 232;
  *((_QWORD *)this + 26) = (char *)this + 232;
  *((_DWORD *)this + 54) = 6;
  *(_QWORD *)((char *)this + 220) = 6LL;
  result = this;
  v4 = *(_OWORD *)a3;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_OWORD *)this + 21) = v4;
  return result;
}
