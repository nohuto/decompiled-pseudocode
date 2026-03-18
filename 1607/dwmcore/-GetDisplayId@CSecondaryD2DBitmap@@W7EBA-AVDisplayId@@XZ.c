/*
 * XREFs of ?GetDisplayId@CSecondaryD2DBitmap@@W7EBA?AVDisplayId@@XZ @ 0x1800C00D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryD2DBitmap::GetDisplayId(__int64 a1)
{
  return CSecondarySysmemBitmap::GetDisplayId(a1 - 8);
}
