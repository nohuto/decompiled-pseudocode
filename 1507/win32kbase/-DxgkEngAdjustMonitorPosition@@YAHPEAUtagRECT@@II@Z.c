/*
 * XREFs of ?DxgkEngAdjustMonitorPosition@@YAHPEAUtagRECT@@II@Z @ 0x1C0063E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DxgkEngAdjustMonitorPosition(struct tagRECT *a1, __int64 a2, __int64 a3)
{
  return AlignRects(a1, a2, a3);
}
