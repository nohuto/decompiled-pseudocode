/*
 * XREFs of ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x180073FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18003434C (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ReleaseHwRenderTarget(CHwndRenderTarget *this)
{
  CDisplay *v1; // rcx

  v1 = (CDisplay *)*((_QWORD *)this + 19);
  if ( v1 )
    CDisplay::ReleaseHwRenderTarget(v1);
}
