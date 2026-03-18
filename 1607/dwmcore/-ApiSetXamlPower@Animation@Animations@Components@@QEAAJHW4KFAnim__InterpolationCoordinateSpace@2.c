/*
 * XREFs of ?ApiSetXamlPower@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x18001901C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Create@?$XamlPowerInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x180019E00 (-Create@-$XamlPowerInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Co.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x1800AB728 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Create@?$XamlPowerInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x1801939AC (-Create@-$XamlPowerInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Componen.c)
 *     ?Create@?$XamlPowerInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x180193A70 (-Create@-$XamlPowerInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Co.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetXamlPower(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // r8d
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[0] = 0LL;
  v5 = (int)a2;
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
      v6 = Components::Animations::XamlPowerInterpolation<Components::Animations::HslCoordinateSpace>::Create(
             a4,
             a2,
             v10);
    }
    else
    {
      v6 = Components::Animations::XamlPowerInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
             a4,
             a2,
             v10);
    }
  }
  else
  {
    v6 = Components::Animations::XamlPowerInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
           a4,
           a2,
           v10);
  }
  v7 = v6;
  if ( v6 >= 0 )
  {
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
      **(_QWORD **)(a1 + 16) + 24 * v5 + 16,
      v10[0]);
    v7 = 0;
  }
LABEL_5:
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(v10);
  return v7;
}
