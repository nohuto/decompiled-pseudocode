/*
 * XREFs of ?DeviceResourceReleased@CGdiSpriteBitmap@@UEAA_NXZ @ 0x180087550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::DeviceResourceReleased(CGdiSpriteBitmap *this)
{
  return (*((_BYTE *)this + 372) & 0x20) != 0;
}
