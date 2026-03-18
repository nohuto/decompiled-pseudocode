/*
 * XREFs of ?ApiSetXamlElastic@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@HM@Z @ 0x180192150
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x1800AB728 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Create@?$XamlElasticInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@HMPEAPEAVInterpolation@23@@Z @ 0x1801934D8 (-Create@-$XamlElasticInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@.c)
 *     ?Create@?$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@HMPEAPEAVInterpolation@23@@Z @ 0x1801935B0 (-Create@-$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Create@?$XamlElasticInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@HMPEAPEAVInterpolation@23@@Z @ 0x180193688 (-Create@-$XamlElasticInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetXamlElastic(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rdi
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // eax
  _DWORD *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v5 = a2;
  if ( (_DWORD)a3 )
  {
    v7 = (unsigned int)(a3 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign((__int64 *)v11, 0LL);
        v8 = -2147024809;
        goto LABEL_10;
      }
      v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _DWORD **))Components::Animations::XamlElasticInterpolation<Components::Animations::HslCoordinateSpace>::Create)(
             a4,
             a5,
             v7,
             v11);
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _DWORD **))Components::Animations::XamlElasticInterpolation<Components::Animations::SphericalCoordinateSpace>::Create)(
             a4,
             a5,
             v7,
             v11);
    }
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _DWORD **))Components::Animations::XamlElasticInterpolation<Components::Animations::CartesianCoordinateSpace>::Create)(
           a4,
           a5,
           a3,
           v11);
  }
  v8 = v9;
  if ( v9 >= 0 )
  {
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
      (__int64 *)(**(_QWORD **)(a1 + 16) + 24 * v5 + 16),
      (__int64)v11[0]);
    v8 = 0;
  }
LABEL_10:
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(v11);
  return v8;
}
