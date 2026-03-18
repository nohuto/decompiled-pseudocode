/*
 * XREFs of ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C0205BE8
 * Callers:
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C020B4D0 (IsWindowSubjectToShellSizingPolicy.c)
 *     UpdateSizeTrackingInfo @ 0x1C020BA90 (UpdateSizeTrackingInfo.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLeftOrRightArranged(struct tagWND *a1)
{
  return (*((_BYTE *)a1 + 289) & 3) != 0 && (*((_BYTE *)a1 + 289) & 3) != 3;
}
