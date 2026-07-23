/*
 * XREFs of BgpGxMarkClean @ 0x1400B3DC8
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x140725C24 (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x14072AF84 (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
