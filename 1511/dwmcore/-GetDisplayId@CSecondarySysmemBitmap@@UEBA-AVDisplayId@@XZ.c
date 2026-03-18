/*
 * XREFs of ?GetDisplayId@CSecondarySysmemBitmap@@UEBA?AVDisplayId@@XZ @ 0x1800BF4F0
 * Callers:
 *     ?GetDisplayId@CSecondaryD2DBitmap@@W7EBA?AVDisplayId@@XZ @ 0x1800BF4A0 (-GetDisplayId@CSecondaryD2DBitmap@@W7EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSecondarySysmemBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = DisplayId::None;
  return a2;
}
