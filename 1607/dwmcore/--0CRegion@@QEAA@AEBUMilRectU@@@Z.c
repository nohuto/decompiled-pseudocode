/*
 * XREFs of ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18001200C
 * Callers:
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180011FAC (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018EFE4 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009AAB4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 */

CRegion *__fastcall CRegion::CRegion(CRegion *this, struct tagRECT *a2)
{
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a2;
  FastRegion::CRegion::CRegion(this, &v4);
  return this;
}
