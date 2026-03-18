/*
 * XREFs of IsGreHintDCWndSupported_0 @ 0x1C0001040
 * Callers:
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsGreHintDCWndSupported_0()
{
  return IsGreHintDCWndSupported();
}
