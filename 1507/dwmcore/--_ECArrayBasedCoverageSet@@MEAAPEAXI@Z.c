/*
 * XREFs of ??_ECArrayBasedCoverageSet@@MEAAPEAXI@Z @ 0x18004D6A4
 * Callers:
 *     ??_ECArrayBasedCoverageSet@@O7EAAPEAXI@Z @ 0x18009A430 (--_ECArrayBasedCoverageSet@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CArrayBasedCoverageSet *__fastcall CArrayBasedCoverageSet::`vector deleting destructor'(
        CArrayBasedCoverageSet *this,
        char a2)
{
  *(_QWORD *)this = &CArrayBasedCoverageSet::`vftable'{for `ICoverageSet'};
  *((_QWORD *)this + 1) = &CArrayBasedCoverageSet::`vftable'{for `CMILCOMBase'};
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 3);
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CArrayBasedCoverageSet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
