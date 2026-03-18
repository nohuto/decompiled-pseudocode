/*
 * XREFs of ApiSetApplyTransforms @ 0x1C00CD3E8
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     IsApplyTransformsSupported_0 @ 0x1C0002CE0 (IsApplyTransformsSupported_0.c)
 *     ApplyTransforms_0 @ 0x1C0002CE8 (ApplyTransforms_0.c)
 */

__int64 ApiSetApplyTransforms()
{
  __int64 result; // rax

  result = IsApplyTransformsSupported_0();
  if ( (int)result >= 0 )
    return ApplyTransforms_0();
  return result;
}
