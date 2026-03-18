/*
 * XREFs of ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1801077C4
 * Callers:
 *     ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180107734 (--0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180112B34 (--0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
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
  *((_QWORD *)this + 22) = (char *)this + 208;
  *((_QWORD *)this + 23) = (char *)this + 208;
  *((_DWORD *)this + 48) = 6;
  *(_QWORD *)((char *)this + 196) = 6LL;
  result = this;
  v4 = *(_OWORD *)a3;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *(_OWORD *)((char *)this + 312) = v4;
  *((_WORD *)this + 84) = 1;
  return result;
}
