/*
 * XREFs of ?CanDrawToIntermediate@CGdiSpriteBitmap@@WII@EAA_NXZ @ 0x1800C03C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char CGdiSpriteBitmap::CanDrawToIntermediate()
{
  return Components::Animations::XamlSineInterpolation<Components::Animations::HslCoordinateSpace>::IsMonotonic();
}
