/*
 * XREFs of DxgkValidateDeviceName @ 0x1C00B9000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DxgkValidateDeviceName(const UNICODE_STRING *a1)
{
  return DpiValidateDeviceName(a1);
}
