/*
 * XREFs of ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@MMMM@Z @ 0x180086110
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x1800AB728 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Create@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x1800B0628 (-Create@-$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@.c)
 *     ?Create@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180192AA0 (-Create@-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Create@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180192BE0 (-Create@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetCubicBezier(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // r8d
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 0LL;
  v4 = a2;
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(v10, 0LL);
        v7 = -2147024809;
        goto LABEL_5;
      }
      v6 = Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>::Create(
             a1,
             a2,
             1,
             a4,
             (__int64)v10);
    }
    else
    {
      v6 = Components::Animations::CubicBezierInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
             a1,
             a2,
             0,
             a4,
             (__int64)v10);
    }
  }
  else
  {
    v6 = Components::Animations::CubicBezierInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
           a1,
           a2,
           0,
           a4,
           (__int64)v10);
  }
  v7 = v6;
  if ( v6 >= 0 )
  {
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
      **(_QWORD **)(a1 + 16) + 24 * v4 + 16,
      v10[0]);
    v7 = 0;
  }
LABEL_5:
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(v10);
  return v7;
}
