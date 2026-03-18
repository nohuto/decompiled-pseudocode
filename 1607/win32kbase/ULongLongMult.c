/*
 * XREFs of ULongLongMult @ 0x1C00C01E8
 * Callers:
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00BFD30 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  ULONGLONG v4; // rcx
  HRESULT result; // eax

  v4 = 2 * ullMultiplicand;
  result = 0;
  if ( is_mul_ok(ullMultiplicand, 2uLL) )
  {
    *pullResult = v4;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  return result;
}
