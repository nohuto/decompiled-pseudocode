/*
 * XREFs of ApiSetDoPrediction @ 0x1C00CE774
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     IsDoPredictionSupported_0 @ 0x1C0002D30 (IsDoPredictionSupported_0.c)
 *     DoPrediction_0 @ 0x1C0002D38 (DoPrediction_0.c)
 */

__int64 ApiSetDoPrediction()
{
  __int64 result; // rax

  result = IsDoPredictionSupported_0();
  if ( (int)result >= 0 )
    return DoPrediction_0();
  return result;
}
