/*
 * XREFs of ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x18008E8B4
 * Callers:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x18007B364 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CAnalogDisplayRenderTarget@@MEAA@XZ @ 0x180167904 (--1CAnalogDisplayRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::~CHwDisplayRenderTarget(CHwDisplayRenderTarget *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 27);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (void *)*((_QWORD *)this + 41);
  if ( v3 )
    DeleteObject(v3);
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
    CMILPoolResource::Release((CMILPoolResource *)(v4 + 408));
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
