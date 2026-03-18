/*
 * XREFs of ApiSetAdjustLinearity @ 0x1C00CE6D4
 * Callers:
 *     RIMTransformCoordinates @ 0x1C00CF730 (RIMTransformCoordinates.c)
 * Callees:
 *     IsAdjustLinearitySupported_0 @ 0x1C0002EF8 (IsAdjustLinearitySupported_0.c)
 *     AdjustLinearity_0 @ 0x1C0002F00 (AdjustLinearity_0.c)
 */

__int64 ApiSetAdjustLinearity()
{
  __int64 result; // rax

  result = IsAdjustLinearitySupported_0();
  if ( (int)result >= 0 )
    return AdjustLinearity_0();
  return result;
}
