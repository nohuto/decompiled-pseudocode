/*
 * XREFs of TxtpDestroyCacheEntry @ 0x1406DB784
 * Callers:
 *     ResFwFreeContext @ 0x1406D9204 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x1406D984C (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x1406DB564 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x1406DB6E0 (TxtpAddCacheEntry.c)
 *     BgpTxtDestroyRegion @ 0x1406DC840 (BgpTxtDestroyRegion.c)
 * Callees:
 *     BgpGxRectangleDestroy @ 0x1406DB7A4 (BgpGxRectangleDestroy.c)
 */

void __fastcall TxtpDestroyCacheEntry(__int64 a1)
{
  BgpGxRectangleDestroy(*(_QWORD *)(a1 + 48));
  BgpFwFreeMemory(a1);
}
