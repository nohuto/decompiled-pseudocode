/*
 * XREFs of ??_ECBoundsBitmap@@MEAAPEAXI@Z @ 0x1800A18F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBoundsBitmap *__fastcall CBoundsBitmap::`vector deleting destructor'(CBoundsBitmap *this, char a2)
{
  *((_QWORD *)this + 2) = &CBoundsBitmap::`vftable'{for `IBitmapSource'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBoundsBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
