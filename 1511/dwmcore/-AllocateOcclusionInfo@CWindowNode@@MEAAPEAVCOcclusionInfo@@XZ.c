/*
 * XREFs of ?AllocateOcclusionInfo@CWindowNode@@MEAAPEAVCOcclusionInfo@@XZ @ 0x18005EC00
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180056500 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 */

struct COcclusionInfo *__fastcall CWindowNode::AllocateOcclusionInfo(CWindowNode *this)
{
  LPVOID (__fastcall *v1)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  struct COcclusionInfo *result; // rax

  v1 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v1 == WPF::ProcessHeapImpl::Alloc )
    result = (struct COcclusionInfo *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
  else
    result = (struct COcclusionInfo *)v1(WPF::g_pProcessHeap, 40LL);
  if ( result )
    *(_QWORD *)result = &CWindowOcclusionInfo::`vftable';
  return result;
}
