/*
 * XREFs of ApiSetDoPrediction @ 0x1C00CD438
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     IsDoPredictionSupported_0 @ 0x1C0002D00 (IsDoPredictionSupported_0.c)
 *     DoPrediction_0 @ 0x1C0002D08 (DoPrediction_0.c)
 */

__int64 ApiSetDoPrediction()
{
  __int64 result; // rax

  result = IsDoPredictionSupported_0();
  if ( (int)result >= 0 )
    return DoPrediction_0();
  return result;
}
