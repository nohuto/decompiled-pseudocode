/*
 * XREFs of ??1CHwSurfaceRenderTarget@@MEAA@XZ @ 0x18002E740
 * Callers:
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x18002D854 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x18008E8B4 (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(CHwSurfaceRenderTarget *this)
{
  CMILPoolResource *v2; // rcx

  v2 = (CMILPoolResource *)*((_QWORD *)this + 21);
  if ( v2 )
    CMILPoolResource::Release(v2);
  *((_QWORD *)this + 16) = &CMILCOMBase::`vftable';
  *(_QWORD *)this = &CBaseRenderTarget::`vftable';
}
