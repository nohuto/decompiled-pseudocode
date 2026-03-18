/*
 * XREFs of ?ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ @ 0x1801148E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x180070D90 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTargetDDA::ReleaseHwRenderTarget(CHwndRenderTargetDDA *this)
{
  CDisplay *v1; // rcx

  v1 = (CDisplay *)*((_QWORD *)this + 10);
  if ( v1 )
    CDisplay::ReleaseDDAHwRenderTarget(v1);
}
