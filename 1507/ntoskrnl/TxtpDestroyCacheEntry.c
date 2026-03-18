/*
 * XREFs of TxtpDestroyCacheEntry @ 0x14075E7CC
 * Callers:
 *     ResFwFreeContext @ 0x14075C040 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x14075C894 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x14075E5AC (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x14075E728 (TxtpAddCacheEntry.c)
 *     BgpTxtDestroyRegion @ 0x14075F888 (BgpTxtDestroyRegion.c)
 * Callees:
 *     BgpGxRectangleDestroy @ 0x14075E7EC (BgpGxRectangleDestroy.c)
 */

void __fastcall TxtpDestroyCacheEntry(__int64 a1)
{
  BgpGxRectangleDestroy(*(_QWORD *)(a1 + 48));
  BgpFwFreeMemory(a1);
}
