/*
 * XREFs of ApiSetAdjustLinearity @ 0x1C00CD398
 * Callers:
 *     RIMTransformCoordinates @ 0x1C00CE3BC (RIMTransformCoordinates.c)
 * Callees:
 *     IsAdjustLinearitySupported_0 @ 0x1C0002EC8 (IsAdjustLinearitySupported_0.c)
 *     AdjustLinearity_0 @ 0x1C0002ED0 (AdjustLinearity_0.c)
 */

__int64 ApiSetAdjustLinearity()
{
  __int64 result; // rax

  result = IsAdjustLinearitySupported_0();
  if ( (int)result >= 0 )
    return AdjustLinearity_0();
  return result;
}
