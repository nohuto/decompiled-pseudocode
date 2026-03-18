/*
 * XREFs of ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x18002D854
 * Callers:
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x180013700 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x18002D900 (--_GCHwTextureRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?SetAsEvictable@CD3DResource@@QEAAXXZ @ 0x18009EF28 (-SetAsEvictable@CD3DResource@@QEAAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CHwTextureRenderTarget::~CHwTextureRenderTarget(CHwTextureRenderTarget *this)
{
  CD3DResource *v2; // rcx
  CMILPoolResource *v3; // rcx
  CMILCOMBase *v4; // rcx

  *(_QWORD *)this = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 16) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 23) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 24) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 25) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  v2 = (CD3DResource *)*((_QWORD *)this + 26);
  if ( v2 && *((_BYTE *)v2 + 77) )
    CD3DResource::SetAsEvictable(v2);
  v3 = (CMILPoolResource *)*((_QWORD *)this + 26);
  if ( v3 )
    CMILPoolResource::Release(v3);
  v4 = (CMILCOMBase *)*((_QWORD *)this + 31);
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
