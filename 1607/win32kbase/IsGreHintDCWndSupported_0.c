/*
 * XREFs of IsGreHintDCWndSupported_0 @ 0x1C0001040
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsGreHintDCWndSupported_0()
{
  return IsGreHintDCWndSupported();
}
