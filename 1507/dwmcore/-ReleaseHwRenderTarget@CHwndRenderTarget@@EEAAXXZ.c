/*
 * XREFs of ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x18004AA90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800579F8 (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ReleaseHwRenderTarget(CHwndRenderTarget *this)
{
  CDisplay *v1; // rcx

  v1 = (CDisplay *)*((_QWORD *)this + 10);
  if ( v1 )
    CDisplay::ReleaseHwRenderTarget(v1);
}
