/*
 * XREFs of ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800BA634
 * Callers:
 *     _dynamic_atexit_destructor_for__Components::Animations::Sequence::s_rpDefaultInterpolation__ @ 0x1800BFBA0 (_dynamic_atexit_destructor_for__Components--Animations--Sequence--s_rpDefaultInterpolation__.c)
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@MMMM@Z @ 0x18016152C (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace.c)
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@Z @ 0x1801617C8 (-ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@.c)
 *     ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x1801640D0 (--1Keyframe@Sequence@Animations@Components@@QEAA@XZ.c)
 *     ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x1801644FC (-Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016454C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 * Callees:
 *     ?Release@Interpolation@Animations@Components@@QEAAXXZ @ 0x18016322C (-Release@Interpolation@Animations@Components@@QEAAXXZ.c)
 */

void __fastcall Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(
        Components::Animations::Interpolation **a1)
{
  Components::Animations::Interpolation *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    Components::Animations::Interpolation::Release(v1);
}
