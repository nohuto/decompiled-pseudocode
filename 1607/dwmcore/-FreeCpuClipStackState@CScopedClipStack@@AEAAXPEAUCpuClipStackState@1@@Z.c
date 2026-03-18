/*
 * XREFs of ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x180111F44
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18009845C (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18010740C (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScopedClipStack::FreeCpuClipStackState(CScopedClipStack *this, CRegionShape **a2)
{
  CRegionShape *v3; // rcx

  CShapePtr::Release(a2);
  v3 = a2[11];
  if ( v3 )
    (**(void (__fastcall ***)(CRegionShape *, __int64))v3)(v3, 1LL);
}
