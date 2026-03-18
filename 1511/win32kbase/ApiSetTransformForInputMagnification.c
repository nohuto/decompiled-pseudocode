/*
 * XREFs of ApiSetTransformForInputMagnification @ 0x1C00CE910
 * Callers:
 *     RIMApplyTransforms @ 0x1C00CEB84 (RIMApplyTransforms.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00CFA04 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     IsTransformForInputMagnificationSupported_0 @ 0x1C0002EE8 (IsTransformForInputMagnificationSupported_0.c)
 *     TransformForInputMagnification_0 @ 0x1C0002EF0 (TransformForInputMagnification_0.c)
 */

__int64 ApiSetTransformForInputMagnification()
{
  if ( (int)IsTransformForInputMagnificationSupported_0() < 0 )
    return 0LL;
  else
    return TransformForInputMagnification_0();
}
