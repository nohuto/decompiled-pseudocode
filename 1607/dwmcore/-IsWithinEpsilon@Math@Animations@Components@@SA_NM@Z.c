/*
 * XREFs of ?IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z @ 0x1800221EC
 * Callers:
 *     ?Normalize@Quaternion@Animations@Components@@QEAAXXZ @ 0x1800B7BB4 (-Normalize@Quaternion@Animations@Components@@QEAAXXZ.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180194CD0 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Components::Animations::Math::IsWithinEpsilon(float a1)
{
  return a1 >= -0.0000099999997 && a1 <= 0.0000099999997;
}
