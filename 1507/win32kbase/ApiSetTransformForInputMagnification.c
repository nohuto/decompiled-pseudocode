/*
 * XREFs of ApiSetTransformForInputMagnification @ 0x1C00CD5D4
 * Callers:
 *     RIMApplyTransforms @ 0x1C00CD848 (RIMApplyTransforms.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00CE690 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     IsTransformForInputMagnificationSupported_0 @ 0x1C0002EB8 (IsTransformForInputMagnificationSupported_0.c)
 *     TransformForInputMagnification_0 @ 0x1C0002EC0 (TransformForInputMagnification_0.c)
 */

__int64 ApiSetTransformForInputMagnification()
{
  if ( (int)IsTransformForInputMagnificationSupported_0() < 0 )
    return 0LL;
  else
    return TransformForInputMagnification_0();
}
