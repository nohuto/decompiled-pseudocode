/*
 * XREFs of ??1?$SmartPtr@V?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x180160C48
 * Callers:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x18016099C (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?Create@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180162560 (-Create@-$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@.c)
 *     ?Create@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180162638 (-Create@-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Create@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180162710 (-Create@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016454C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall Components::Animations::SmartPtr<Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>>::~SmartPtr<Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
             WPF::g_pProcessHeap,
             *a1);
  return result;
}
