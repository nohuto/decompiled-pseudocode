/*
 * XREFs of ?IsHardwareProtected@CBitmapRealization@@UEBA_NXZ @ 0x18015C890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBitmapRealization::IsHardwareProtected(CBitmapRealization *this)
{
  return *((_DWORD *)this + 36) != 0;
}
