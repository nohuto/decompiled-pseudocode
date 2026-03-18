/*
 * XREFs of BgpGxMarkClean @ 0x140131CC0
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x14075CA78 (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x1407621C8 (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
