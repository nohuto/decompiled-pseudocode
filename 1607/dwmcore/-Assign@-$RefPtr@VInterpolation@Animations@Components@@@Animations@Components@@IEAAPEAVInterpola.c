/*
 * XREFs of ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x1800AB728
 * Callers:
 *     ?ApiSetXamlPower@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x18001901C (-ApiSetXamlPower@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@2.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180085D8C (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@MMMM@Z @ 0x180086110 (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace.c)
 *     ?ApiSetStep@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@HHH_N1@Z @ 0x1800861A0 (-ApiSetStep@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@HHH.c)
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@Z @ 0x18008623C (-ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@.c)
 *     ?ApiSetXamlBack@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x180191E6C (-ApiSetXamlBack@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23.c)
 *     ?ApiSetXamlBounce@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@HM@Z @ 0x180191F30 (-ApiSetXamlBounce@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@.c)
 *     ?ApiSetXamlCircle@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@@Z @ 0x180192004 (-ApiSetXamlCircle@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@.c)
 *     ?ApiSetXamlElastic@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@HM@Z @ 0x180192150 (-ApiSetXamlElastic@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace.c)
 *     ?ApiSetXamlExponential@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x180192224 (-ApiSetXamlExponential@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateS.c)
 *     ?ApiSetXamlSine@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@@Z @ 0x1801922E8 (-ApiSetXamlSine@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdx

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v4 = *a1;
  if ( *a1 )
  {
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  }
  *a1 = a2;
  return a2;
}
