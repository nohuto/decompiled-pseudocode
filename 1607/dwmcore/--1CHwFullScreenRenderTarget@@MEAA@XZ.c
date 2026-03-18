/*
 * XREFs of ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x18007B364
 * Callers:
 *     ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x18007B860 (--_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x18017A3C0 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(CHwFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 16) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CHwFullScreenRenderTarget::`vftable';
  v2 = *((_QWORD *)this + 45);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 46);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 47);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (void *)*((_QWORD *)this + 43);
  if ( v5 )
    DeleteObject(v5);
  v6 = (void *)*((_QWORD *)this + 44);
  if ( v6 )
    DeleteObject(v6);
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
}
