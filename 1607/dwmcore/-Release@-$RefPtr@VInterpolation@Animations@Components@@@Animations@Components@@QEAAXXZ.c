/*
 * XREFs of ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C
 * Callers:
 *     ?ApiSetXamlPower@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x18001901C (-ApiSetXamlPower@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@2.c)
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180085C2C (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180085D8C (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@MMMM@Z @ 0x180086110 (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace.c)
 *     ?ApiSetStep@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@HHH_N1@Z @ 0x1800861A0 (-ApiSetStep@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@HHH.c)
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@Z @ 0x18008623C (-ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB51C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AF610 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     _dynamic_atexit_destructor_for__Components::Animations::Sequence::s_rpDefaultInterpolation__ @ 0x1800C2FE0 (_dynamic_atexit_destructor_for__Components--Animations--Sequence--s_rpDefaultInterpolation__.c)
 *     ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x180113610 (--1Keyframe@Sequence@Animations@Components@@QEAA@XZ.c)
 *     ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x180113638 (-Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?ApiSetXamlBack@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x180191E6C (-ApiSetXamlBack@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23.c)
 *     ?ApiSetXamlBounce@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@HM@Z @ 0x180191F30 (-ApiSetXamlBounce@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@.c)
 *     ?ApiSetXamlCircle@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@@Z @ 0x180192004 (-ApiSetXamlCircle@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@.c)
 *     ?ApiSetXamlElastic@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@HM@Z @ 0x180192150 (-ApiSetXamlElastic@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace.c)
 *     ?ApiSetXamlExponential@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x180192224 (-ApiSetXamlExponential@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateS.c)
 *     ?ApiSetXamlSine@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@@Z @ 0x1801922E8 (-ApiSetXamlSine@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23.c)
 * Callees:
 *     <none>
 */

void __fastcall Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(_DWORD **a1)
{
  _DWORD *v1; // rdx
  void (*v3)(void); // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( v1[2]-- == 1 )
    {
      v3 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( (char *)v3 == (char *)WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
      else
        v3();
    }
  }
}
