/*
 * XREFs of ?GetPixelFormat@CGdiSpriteBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18009A750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::GetPixelFormat(enum DXGI_FORMAT *this, enum DXGI_FORMAT *a2)
{
  *a2 = this[24];
  return 0LL;
}
