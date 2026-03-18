/*
 * XREFs of ??_ECSwRenderTargetGetBounds@@MEAAPEAXI@Z @ 0x18008FC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CSwRenderTargetGetBounds *__fastcall CSwRenderTargetGetBounds::`vector deleting destructor'(
        CSwRenderTargetGetBounds *this,
        char a2)
{
  *((_QWORD *)this + 2) = &CSwRenderTargetGetBounds::`vftable'{for `IRenderTargetBounds'};
  *((_QWORD *)this + 3) = &CSwRenderTargetGetBounds::`vftable'{for `ID2DContext'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSwRenderTargetGetBounds *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
