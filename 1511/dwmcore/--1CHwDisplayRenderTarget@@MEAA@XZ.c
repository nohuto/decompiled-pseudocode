/*
 * XREFs of ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x18007FF38
 * Callers:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x180074424 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CAnalogDisplayRenderTarget@@MEAA@XZ @ 0x18013D918 (--1CAnalogDisplayRenderTarget@@MEAA@XZ.c)
 *     ??_ECHwHwndRenderTarget@@UEAAPEAXI@Z @ 0x18014FC60 (--_ECHwHwndRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHwDisplayRenderTarget::~CHwDisplayRenderTarget(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rsi
  void *v3; // rcx

  v1 = *((_QWORD *)this + 26);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 40);
  if ( v3 )
    DeleteObject(v3);
  if ( g_pMediaControl )
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)g_pMediaControl + 2) + 84LL));
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
