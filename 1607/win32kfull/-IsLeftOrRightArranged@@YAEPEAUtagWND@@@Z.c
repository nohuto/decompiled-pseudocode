/*
 * XREFs of ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01FCEE4
 * Callers:
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C02025E0 (IsWindowSubjectToShellSizingPolicy.c)
 *     UpdateSizeTrackingInfo @ 0x1C0202BD4 (UpdateSizeTrackingInfo.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLeftOrRightArranged(struct tagWND *a1)
{
  return (*((_BYTE *)a1 + 289) & 3) != 0 && (*((_BYTE *)a1 + 289) & 3) != 3;
}
