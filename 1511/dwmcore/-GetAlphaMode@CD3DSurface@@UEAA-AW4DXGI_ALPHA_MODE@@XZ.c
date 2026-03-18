/*
 * XREFs of ?GetAlphaMode@CD3DSurface@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180029C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::GetAlphaMode(CD3DSurface *this)
{
  return *((unsigned int *)this + 16);
}
