/*
 * XREFs of ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x1800362A0
 * Callers:
 *     ?SetContent@CVisual@@IEAAJPEAVCContent@@@Z @ 0x180034514 (-SetContent@CVisual@@IEAAJPEAVCContent@@@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180036070 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x180059C80 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 */

void __fastcall CVisual::ClearContentTreeDataCaches(CVisual *this)
{
  _QWORD **v2; // rdi
  _QWORD *i; // rbx

  CDrawListCacheSet::Invalidate((CVisual *)((char *)this + 568));
  v2 = (_QWORD **)((char *)this + 432);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
    CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(i - 18));
}
