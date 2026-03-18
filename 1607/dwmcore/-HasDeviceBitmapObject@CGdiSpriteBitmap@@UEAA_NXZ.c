/*
 * XREFs of ?HasDeviceBitmapObject@CGdiSpriteBitmap@@UEAA_NXZ @ 0x18002AE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::HasDeviceBitmapObject(CGdiSpriteBitmap *this)
{
  return *((_QWORD *)this + 12) != 0LL;
}
