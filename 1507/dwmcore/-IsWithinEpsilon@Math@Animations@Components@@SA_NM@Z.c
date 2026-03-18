/*
 * XREFs of ?IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z @ 0x180097468
 * Callers:
 *     ?Normalize@Quaternion@Animations@Components@@QEAAXXZ @ 0x1800973B0 (-Normalize@Quaternion@Animations@Components@@QEAAXXZ.c)
 *     ?SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157BE8 (-SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@2.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Components::Animations::Math::IsWithinEpsilon(float a1)
{
  return a1 >= -0.0000099999997 && a1 <= 0.0000099999997;
}
