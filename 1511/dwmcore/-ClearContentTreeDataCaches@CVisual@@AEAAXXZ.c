/*
 * XREFs of ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x180048CB0
 * Callers:
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180048A8C (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004BA50 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18005971C (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 */

void __fastcall CVisual::ClearContentTreeDataCaches(CVisual *this)
{
  _QWORD **v2; // rdi
  _QWORD *i; // rbx

  CDrawListCacheSet::Invalidate((CVisual *)((char *)this + 552));
  v2 = (_QWORD **)((char *)this + 416);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
    CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(i - 18));
}
