/*
 * XREFs of IsGetStyleWindowSupported_0 @ 0x1C0002430
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0044440 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C0054910 (CreateCacheDC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsGetStyleWindowSupported_0()
{
  return IsGetStyleWindowSupported();
}
