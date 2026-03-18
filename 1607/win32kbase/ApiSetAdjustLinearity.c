/*
 * XREFs of ApiSetAdjustLinearity @ 0x1C00DE714
 * Callers:
 *     RIMTransformCoordinates @ 0x1C00D3B54 (RIMTransformCoordinates.c)
 * Callees:
 *     IsAdjustLinearitySupported_0 @ 0x1C0002ED8 (IsAdjustLinearitySupported_0.c)
 *     AdjustLinearity_0 @ 0x1C0002EE0 (AdjustLinearity_0.c)
 */

__int64 ApiSetAdjustLinearity()
{
  __int64 result; // rax

  result = IsAdjustLinearitySupported_0();
  if ( (int)result >= 0 )
    return AdjustLinearity_0();
  return result;
}
