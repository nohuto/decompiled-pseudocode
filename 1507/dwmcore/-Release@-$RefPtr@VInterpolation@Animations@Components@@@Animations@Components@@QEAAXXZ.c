/*
 * XREFs of ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180097930
 * Callers:
 *     _dynamic_atexit_destructor_for__Components::Animations::Sequence::s_rpDefaultInterpolation__ @ 0x18009C7A0 (_dynamic_atexit_destructor_for__Components--Animations--Sequence--s_rpDefaultInterpolation__.c)
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJH_NMMMM@Z @ 0x180154388 (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJH_NMMMM@Z.c)
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJH_N@Z @ 0x1801545B4 (-ApiSetLinear@Animation@Animations@Components@@QEAAJH_N@Z.c)
 *     ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x1801562EC (--1Keyframe@Sequence@Animations@Components@@QEAA@XZ.c)
 *     ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x18015671C (-Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18015676C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 * Callees:
 *     ?Release@Interpolation@Animations@Components@@QEAAXXZ @ 0x18015556C (-Release@Interpolation@Animations@Components@@QEAAXXZ.c)
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
