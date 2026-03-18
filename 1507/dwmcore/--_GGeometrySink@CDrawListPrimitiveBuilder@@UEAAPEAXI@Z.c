/*
 * XREFs of ??_GGeometrySink@CDrawListPrimitiveBuilder@@UEAAPEAXI@Z @ 0x1800FE950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void **__fastcall CDrawListPrimitiveBuilder::GeometrySink::`scalar deleting destructor'(void **this, char a2)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 17);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  *this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
