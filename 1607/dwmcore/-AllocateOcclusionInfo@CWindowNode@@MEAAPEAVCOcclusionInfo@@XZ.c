/*
 * XREFs of ?AllocateOcclusionInfo@CWindowNode@@MEAAPEAVCOcclusionInfo@@XZ @ 0x1800264D0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct COcclusionInfo *__fastcall CWindowNode::AllocateOcclusionInfo(CWindowNode *this)
{
  void *(__fastcall *v1)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v1 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v1 == WPF::ProcessHeapImpl::Alloc )
    v2 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
  else
    v2 = (_QWORD *)v1(WPF::g_pProcessHeap, 40uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x28uLL);
    *v3 = &CWindowOcclusionInfo::`vftable';
  }
  return (struct COcclusionInfo *)v3;
}
