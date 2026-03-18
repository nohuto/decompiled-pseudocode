/*
 * XREFs of ?AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z @ 0x180011F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryBitmap::AddInvalidRegion(CSecondaryBitmap *this, const struct CRegion *a2)
{
  return FastRegion::CRegion::Union((CSecondaryBitmap *)((char *)this + 8), a2);
}
