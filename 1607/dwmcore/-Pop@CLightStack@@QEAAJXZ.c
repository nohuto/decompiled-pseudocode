/*
 * XREFs of ?Pop@CLightStack@@QEAAJXZ @ 0x18012DFCC
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005FC60 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x180124060 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?InvalidateCache@CLightStack@@AEAAXXZ @ 0x18009BC24 (-InvalidateCache@CLightStack@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindLight@CLightStack@@AEBA_NPEBVCCompositionLight@@@Z @ 0x18012DF18 (-FindLight@CLightStack@@AEBA_NPEBVCCompositionLight@@@Z.c)
 */

__int64 __fastcall CLightStack::Pop(CLightStack *this)
{
  unsigned int v1; // r8d
  const struct CCompositionLight *v2; // rbx
  CLightStack *v3; // rcx

  v1 = *((_DWORD *)this + 6) - 1;
  v2 = *(const struct CCompositionLight **)(*(_QWORD *)this + 8LL * v1);
  *((_DWORD *)this + 6) = v1;
  if ( !CLightStack::FindLight(this, v2) )
    CLightStack::InvalidateCache(v3);
  if ( v2 )
    (*(void (__fastcall **)(const struct CCompositionLight *))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
