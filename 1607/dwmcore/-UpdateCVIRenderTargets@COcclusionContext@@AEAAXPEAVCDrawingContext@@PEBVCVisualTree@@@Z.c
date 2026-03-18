/*
 * XREFs of ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18005BCA8
 * Callers:
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18006D12C (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisualImage@@_NAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180003688 (-UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisual.c)
 */

void __fastcall COcclusionContext::UpdateCVIRenderTargets(
        COcclusionContext *this,
        struct CDrawingContext *a2,
        const struct CVisualTree *a3)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 248); i = (unsigned int)(i + 1) )
    CDrawingContext::UpdateNodeCVIRenderTarget(
      (__int64)a2,
      (__int64)a3,
      *(void **)(*((_QWORD *)this + 121) + 40 * i),
      *(_QWORD *)(*((_QWORD *)this + 121) + 40 * i + 8),
      *(_BYTE *)(*((_QWORD *)this + 121) + 40 * i + 16),
      *((_QWORD *)this + 121) + 20LL + 40 * i);
  *((_DWORD *)this + 248) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 968, 40LL);
}
