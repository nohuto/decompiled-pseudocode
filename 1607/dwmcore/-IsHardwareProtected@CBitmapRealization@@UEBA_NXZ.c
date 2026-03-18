/*
 * XREFs of ?IsHardwareProtected@CBitmapRealization@@UEBA_NXZ @ 0x18018EC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::IsHardwareProtected(CBitmapRealization *this)
{
  return (*((_DWORD *)this + 33) >> 8) & 1;
}
