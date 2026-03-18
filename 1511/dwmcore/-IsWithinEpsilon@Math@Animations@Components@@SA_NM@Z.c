/*
 * XREFs of ?IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z @ 0x1800B4DBC
 * Callers:
 *     ?Normalize@Quaternion@Animations@Components@@QEAAXXZ @ 0x1800B497C (-Normalize@Quaternion@Animations@Components@@QEAAXXZ.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180165A30 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Components::Animations::Math::IsWithinEpsilon(float a1)
{
  return a1 >= -0.0000099999997 && a1 <= 0.0000099999997;
}
