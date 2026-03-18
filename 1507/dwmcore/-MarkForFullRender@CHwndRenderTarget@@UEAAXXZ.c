/*
 * XREFs of ?MarkForFullRender@CHwndRenderTarget@@UEAAXXZ @ 0x18004A530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwndRenderTarget::MarkForFullRender(CHwndRenderTarget *this)
{
  *((_BYTE *)this + 561) = 1;
}
