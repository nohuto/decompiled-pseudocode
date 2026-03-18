/*
 * XREFs of ??1CHwSurfaceRenderTarget@@MEAA@XZ @ 0x18008D418
 * Callers:
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x18002CBD4 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x18007FF38 (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

void __fastcall CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(CHwSurfaceRenderTarget *this)
{
  __int64 v1; // rdi
  CMILPoolResource *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 20);
  if ( v1 )
  {
    ++*(_DWORD *)(v1 + 504);
    v5 = v1;
    *(_DWORD *)(v1 + 508) = GetCurrentThreadId();
    v3 = (CMILPoolResource *)*((_QWORD *)this + 21);
    if ( v3 )
      CMILPoolResource::Release(v3);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v5);
  }
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
    CMILPoolResource::Release((CMILPoolResource *)(v4 + 384));
  *((_QWORD *)this + 15) = &CMILCOMBase::`vftable';
  *(_QWORD *)this = &CBaseRenderTarget::`vftable';
}
