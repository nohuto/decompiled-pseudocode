/*
 * XREFs of ?GetDisplayId@CSecondarySysmemBitmap@@UEBA?AVDisplayId@@XZ @ 0x1800C27C0
 * Callers:
 *     ?GetDisplayId@CSecondaryD2DBitmap@@W7EBA?AVDisplayId@@XZ @ 0x1800C00D0 (-GetDisplayId@CSecondaryD2DBitmap@@W7EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSecondarySysmemBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = DisplayId::None;
  return a2;
}
