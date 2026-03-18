/*
 * XREFs of GreSelectRedirectionBitmap_0 @ 0x1C0001018
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 *     DestroyMonitorDCs @ 0x1C0054CC0 (DestroyMonitorDCs.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 GreSelectRedirectionBitmap_0()
{
  return GreSelectRedirectionBitmap();
}
