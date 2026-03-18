/*
 * XREFs of ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x180083074
 * Callers:
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x180003010 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x180083140 (--_GCHwTextureRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SetAsEvictable@CD3DResource@@QEAAXXZ @ 0x180015D1C (-SetAsEvictable@CD3DResource@@QEAAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

void __fastcall CHwTextureRenderTarget::~CHwTextureRenderTarget(CHwTextureRenderTarget *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  CMILPoolResource *v4; // rcx
  CMILCOMBase *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 15) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 23) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 24);
  if ( v2 && *(_BYTE *)(v2 + 76) )
  {
    v3 = *((_QWORD *)this + 20);
    v6 = v3;
    ++*(_DWORD *)(v3 + 512);
    *(_DWORD *)(v3 + 516) = GetCurrentThreadId();
    CD3DResource::SetAsEvictable(*((CD3DResource **)this + 24));
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v6);
  }
  v4 = (CMILPoolResource *)*((_QWORD *)this + 24);
  if ( v4 )
    CMILPoolResource::Release(v4);
  v5 = (CMILCOMBase *)*((_QWORD *)this + 29);
  if ( v5 )
    CMILCOMBase::InternalRelease(v5);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
