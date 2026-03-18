/*
 * XREFs of ?IsHardwareProtected@CBitmapRealization@@UEBA_NXZ @ 0x18014D4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBitmapRealization::IsHardwareProtected(CBitmapRealization *this)
{
  return *((_DWORD *)this + 37) != 0;
}
