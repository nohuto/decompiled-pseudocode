/*
 * XREFs of ?AllocateOcclusionInfo@CVisual@@MEAAPEAVCOcclusionInfo@@XZ @ 0x180048770
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180056500 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 */

struct COcclusionInfo *__fastcall CVisual::AllocateOcclusionInfo(CVisual *this)
{
  void *(__fastcall *v1)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  struct COcclusionInfo *result; // rax

  v1 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v1 == WPF::ProcessHeapImpl::Alloc )
    result = (struct COcclusionInfo *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x18uLL);
  else
    result = (struct COcclusionInfo *)v1(WPF::g_pProcessHeap, 24uLL);
  if ( result )
    *(_QWORD *)result = &CVisualOcclusionInfo::`vftable';
  return result;
}
