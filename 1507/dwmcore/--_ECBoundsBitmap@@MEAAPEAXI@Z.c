/*
 * XREFs of ??_ECBoundsBitmap@@MEAAPEAXI@Z @ 0x180083FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
