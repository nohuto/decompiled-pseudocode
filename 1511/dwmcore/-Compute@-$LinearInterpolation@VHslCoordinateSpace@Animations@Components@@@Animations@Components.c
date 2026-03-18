/*
 * XREFs of ?Compute@?$LinearInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180162500
 * Callers:
 *     <none>
 * Callees:
 *     ?Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801657C4 (-Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@.c)
 */

__int64 __fastcall Components::Animations::LinearInterpolation<Components::Animations::HslCoordinateSpace>::Compute(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return Components::Animations::HslCoordinateSpace::Interpolate(a1, a2, a4, a5, a6);
}
