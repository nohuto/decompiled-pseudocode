/*
 * XREFs of ?Combine@Interpolation@Animations@Components@@IEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801576DC
 * Callers:
 *     ?Compute@CubicBezierInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157720 (-Compute@CubicBezierInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue.c)
 *     ?Compute@LinearInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157830 (-Compute@LinearInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@1.c)
 * Callees:
 *     ?LinearCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157B14 (-LinearCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@1.c)
 *     ?SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157BE8 (-SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@2.c)
 */

__int64 __fastcall Components::Animations::Interpolation::Combine(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
    return Components::Animations::Interpolation::SphericalCombine(a1, a2);
  else
    return Components::Animations::Interpolation::LinearCombine(a1, a2);
}
