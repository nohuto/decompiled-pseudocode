/*
 * XREFs of ?ApiSetXamlBack@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x180191E6C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x1800AB728 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Create@?$XamlBackInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x180192FC8 (-Create@-$XamlBackInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Com.c)
 *     ?Create@?$XamlBackInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x180193090 (-Create@-$XamlBackInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Component.c)
 *     ?Create@?$XamlBackInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x180193158 (-Create@-$XamlBackInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Com.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetXamlBack(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v5; // rdi
  int v6; // r8d
  unsigned int v7; // ebx
  int v8; // eax
  _DWORD *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[0] = 0LL;
  v5 = (int)a2;
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign((__int64 *)v10, 0LL);
        v7 = -2147024809;
        goto LABEL_10;
      }
      v8 = Components::Animations::XamlBackInterpolation<Components::Animations::HslCoordinateSpace>::Create(
             a4,
             a2,
             v10);
    }
    else
    {
      v8 = Components::Animations::XamlBackInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
             a4,
             a2,
             v10);
    }
  }
  else
  {
    v8 = Components::Animations::XamlBackInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
           a4,
           a2,
           v10);
  }
  v7 = v8;
  if ( v8 >= 0 )
  {
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
      (__int64 *)(**(_QWORD **)(a1 + 16) + 24 * v5 + 16),
      (__int64)v10[0]);
    v7 = 0;
  }
LABEL_10:
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(v10);
  return v7;
}
