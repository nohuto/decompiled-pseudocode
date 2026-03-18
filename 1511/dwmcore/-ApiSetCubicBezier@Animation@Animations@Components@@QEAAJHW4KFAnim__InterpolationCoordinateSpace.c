/*
 * XREFs of ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@MMMM@Z @ 0x18016152C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800BA634 (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x180161C18 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Create@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180162560 (-Create@-$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@.c)
 *     ?Create@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180162638 (-Create@-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Create@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180162710 (-Create@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetCubicBezier(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v6; // r8d
  unsigned int v7; // ebx
  int v8; // eax
  Components::Animations::Interpolation *v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 0LL;
  v4 = a2;
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(v10, 0LL);
        v7 = -2147024809;
        goto LABEL_10;
      }
      v8 = Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>::Create(
             a1,
             a2,
             1,
             a4,
             (__int64)v10);
    }
    else
    {
      v8 = Components::Animations::CubicBezierInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
             a1,
             a2,
             0,
             a4,
             (__int64)v10);
    }
  }
  else
  {
    v8 = Components::Animations::CubicBezierInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
           a1,
           a2,
           0,
           a4,
           (__int64)v10);
  }
  v7 = v8;
  if ( v8 >= 0 )
  {
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 24 * v4 + 16,
      v10[0]);
    v7 = 0;
  }
LABEL_10:
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(v10);
  return v7;
}
