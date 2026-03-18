/*
 * XREFs of TxtpDestroyCacheEntry @ 0x1407276A0
 * Callers:
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x14072586C (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x140727494 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x1407275FC (TxtpAddCacheEntry.c)
 *     BgpTxtDestroyRegion @ 0x140728928 (BgpTxtDestroyRegion.c)
 * Callees:
 *     BgpGxRectangleDestroy @ 0x1407276C0 (BgpGxRectangleDestroy.c)
 */

void __fastcall TxtpDestroyCacheEntry(__int64 a1)
{
  BgpGxRectangleDestroy(*(_QWORD *)(a1 + 48));
  BgpFwFreeMemory(a1);
}
