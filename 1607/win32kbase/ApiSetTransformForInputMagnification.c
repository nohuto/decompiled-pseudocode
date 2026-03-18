/*
 * XREFs of ApiSetTransformForInputMagnification @ 0x1C00DE8E0
 * Callers:
 *     RIMApplyTransforms @ 0x1C00D33A8 (RIMApplyTransforms.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00D3F64 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     IsTransformForInputMagnificationSupported_0 @ 0x1C0002EC8 (IsTransformForInputMagnificationSupported_0.c)
 *     TransformForInputMagnification_0 @ 0x1C0002ED0 (TransformForInputMagnification_0.c)
 */

__int64 ApiSetTransformForInputMagnification()
{
  if ( (int)IsTransformForInputMagnificationSupported_0() < 0 )
    return 0LL;
  else
    return TransformForInputMagnification_0();
}
