/*
 * XREFs of BgpGxMarkClean @ 0x1400F46E0
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x1406D9A30 (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x1406DF14C (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
