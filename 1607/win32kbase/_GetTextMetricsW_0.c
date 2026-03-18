/*
 * XREFs of _GetTextMetricsW_0 @ 0x1C0002960
 * Callers:
 *     GetCharDimensions @ 0x1C0057B00 (GetCharDimensions.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall GetTextMetricsW_0(HDC a1, LPTEXTMETRICW a2)
{
  return _GetTextMetricsW(a1, a2);
}
