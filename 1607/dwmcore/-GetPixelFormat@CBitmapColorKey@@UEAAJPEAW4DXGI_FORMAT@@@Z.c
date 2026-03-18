/*
 * XREFs of ?GetPixelFormat@CBitmapColorKey@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800C1B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapColorKey::GetPixelFormat(enum DXGI_FORMAT *this, enum DXGI_FORMAT *a2)
{
  *a2 = this[6];
  return 0LL;
}
