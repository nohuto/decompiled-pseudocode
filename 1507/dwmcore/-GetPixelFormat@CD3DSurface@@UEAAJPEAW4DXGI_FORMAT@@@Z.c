/*
 * XREFs of ?GetPixelFormat@CD3DSurface@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18009B450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::GetPixelFormat(enum DXGI_FORMAT *this, enum DXGI_FORMAT *a2)
{
  *a2 = this[9];
  return 0LL;
}
