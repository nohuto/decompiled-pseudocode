/*
 * XREFs of ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x1800C1C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 80));
}
