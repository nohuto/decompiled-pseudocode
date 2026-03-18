/*
 * XREFs of ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x180154880
 * Callers:
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJH_NMMMM@Z @ 0x180154388 (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJH_NMMMM@Z.c)
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJH_N@Z @ 0x1801545B4 (-ApiSetLinear@Animation@Animations@Components@@QEAAJH_N@Z.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180156DD4 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Release@Interpolation@Animations@Components@@QEAAXXZ @ 0x18015556C (-Release@Interpolation@Animations@Components@@QEAAXXZ.c)
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
