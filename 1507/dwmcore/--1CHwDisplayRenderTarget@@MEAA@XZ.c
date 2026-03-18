/*
 * XREFs of ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x18008AF50
 * Callers:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x18008ADD8 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ??_ECAnalogDisplayRenderTarget@@UEAAPEAXI@Z @ 0x180127A50 (--_ECAnalogDisplayRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
