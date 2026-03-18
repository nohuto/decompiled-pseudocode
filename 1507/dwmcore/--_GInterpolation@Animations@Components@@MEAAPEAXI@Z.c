/*
 * XREFs of ??_GInterpolation@Animations@Components@@MEAAPEAXI@Z @ 0x180157680
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

Components::Animations::Interpolation *__fastcall Components::Animations::Interpolation::`scalar deleting destructor'(
        Components::Animations::Interpolation *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::Interpolation::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::Interpolation *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
