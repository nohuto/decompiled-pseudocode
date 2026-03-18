/*
 * XREFs of ?ApiSetStep@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@HHH_N1@Z @ 0x1800861A0
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x1800AB728 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Create@?$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJHHH_N0PEAPEAVInterpolation@23@@Z @ 0x1800B2160 (-Create@-$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compone.c)
 *     ?Create@?$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJHHH_N0PEAPEAVInterpolation@23@@Z @ 0x180192D20 (-Create@-$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@S.c)
 *     ?Create@?$StepInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJHHH_N0PEAPEAVInterpolation@23@@Z @ 0x180192E74 (-Create@-$StepInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Compone.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetStep(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        char a8)
{
  int v8; // r10d
  __int64 v9; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // r8d
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v8 = a4;
  v9 = a2;
  if ( a3 )
  {
    v14 = a3 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(v15, 0LL);
        v12 = -2147024809;
        goto LABEL_5;
      }
      LOBYTE(a4) = a7;
      v11 = Components::Animations::StepInterpolation<Components::Animations::HslCoordinateSpace>::Create(
              v8,
              a5,
              a6,
              a4,
              a8,
              (__int64)v15);
    }
    else
    {
      LOBYTE(a4) = a7;
      v11 = Components::Animations::StepInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
              v8,
              a5,
              a6,
              a4,
              a8,
              (__int64)v15);
    }
  }
  else
  {
    LOBYTE(a4) = a7;
    v11 = Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
            v8,
            a5,
            a6,
            a4,
            a8,
            (__int64)v15);
  }
  v12 = v11;
  if ( v11 >= 0 )
  {
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
      **(_QWORD **)(a1 + 16) + 24 * v9 + 16,
      v15[0]);
    v12 = 0;
  }
LABEL_5:
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(v15);
  return v12;
}
