/*
 * XREFs of IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030
 * Callers:
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsGreSelectRedirectionBitmapSupported_0()
{
  return IsGreSelectRedirectionBitmapSupported();
}
