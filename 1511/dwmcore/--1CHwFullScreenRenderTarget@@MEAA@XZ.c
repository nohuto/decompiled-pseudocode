/*
 * XREFs of ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x180074424
 * Callers:
 *     ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x180074530 (--_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x180149D00 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx

  v1 = *((_QWORD *)this + 44);
  *(_QWORD *)this = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 15) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CHwFullScreenRenderTarget::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 44) = 0LL;
  }
  v3 = *((_QWORD *)this + 45);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 45));
    *((_QWORD *)this + 45) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 42);
  if ( v4 )
    DeleteObject(v4);
  v5 = (void *)*((_QWORD *)this + 43);
  if ( v5 )
    DeleteObject(v5);
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
}
