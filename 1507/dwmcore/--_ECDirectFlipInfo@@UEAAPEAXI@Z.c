/*
 * XREFs of ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x1800EEE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180013600 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`vector deleting destructor'(CDirectFlipInfo *this, char a2)
{
  *(_QWORD *)this = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDirectFlipInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
