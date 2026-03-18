/*
 * XREFs of ??_EAnimation@Animations@Components@@UEAAPEAXI@Z @ 0x180153920
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1Animation@Animations@Components@@UEAA@XZ @ 0x180153C1C (--1Animation@Animations@Components@@UEAA@XZ.c)
 */

Components::Animations::Animation *__fastcall Components::Animations::Animation::`vector deleting destructor'(
        Components::Animations::Animation *this,
        char a2)
{
  Components::Animations::Animation::~Animation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::Animation *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
