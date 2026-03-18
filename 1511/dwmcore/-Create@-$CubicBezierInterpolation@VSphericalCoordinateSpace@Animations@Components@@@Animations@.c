/*
 * XREFs of ?Create@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180162710
 * Callers:
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@MMMM@Z @ 0x18016152C (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$SmartPtr@V?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x180160C48 (--1-$SmartPtr@V-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations.c)
 */

__int64 __fastcall Components::Animations::CubicBezierInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
        float a1,
        float a2,
        float a3,
        float a4,
        __int64 *a5)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8[6]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v6 = 0;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 8) = 1;
    *(_QWORD *)v5 = &Components::Animations::CubicBezierInterpolation<Components::Animations::SphericalCoordinateSpace>::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v8[0] = v5;
  if ( v5 )
  {
    *(float *)(v5 + 16) = a1;
    *(float *)(v5 + 20) = a2;
    *(float *)(v5 + 24) = a3;
    *(float *)(v5 + 28) = a4;
    *a5 = v5;
    v8[0] = 0LL;
  }
  else
  {
    v6 = -2147024882;
  }
  Components::Animations::SmartPtr<Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>>::~SmartPtr<Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>>(v8);
  return v6;
}
