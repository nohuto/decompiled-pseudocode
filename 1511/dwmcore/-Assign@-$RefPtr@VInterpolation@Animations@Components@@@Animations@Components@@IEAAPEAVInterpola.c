/*
 * XREFs of ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x180161C18
 * Callers:
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@MMMM@Z @ 0x18016152C (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace.c)
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@Z @ 0x1801617C8 (-ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180164A14 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Release@Interpolation@Animations@Components@@QEAAXXZ @ 0x18016322C (-Release@Interpolation@Animations@Components@@QEAAXXZ.c)
 */

Components::Animations::Interpolation *__fastcall Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
        Components::Animations::Interpolation **a1,
        Components::Animations::Interpolation *a2)
{
  Components::Animations::Interpolation *v4; // rcx

  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  v4 = *a1;
  if ( v4 )
    Components::Animations::Interpolation::Release(v4);
  *a1 = a2;
  return a2;
}
