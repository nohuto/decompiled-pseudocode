/*
 * XREFs of ApiSetApplyTransforms @ 0x1C00CE724
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     IsApplyTransformsSupported_0 @ 0x1C0002D10 (IsApplyTransformsSupported_0.c)
 *     ApplyTransforms_0 @ 0x1C0002D18 (ApplyTransforms_0.c)
 */

__int64 ApiSetApplyTransforms()
{
  __int64 result; // rax

  result = IsApplyTransformsSupported_0();
  if ( (int)result >= 0 )
    return ApplyTransforms_0();
  return result;
}
