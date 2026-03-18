/*
 * XREFs of IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030
 * Callers:
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsGreSelectRedirectionBitmapSupported_0()
{
  return IsGreSelectRedirectionBitmapSupported();
}
