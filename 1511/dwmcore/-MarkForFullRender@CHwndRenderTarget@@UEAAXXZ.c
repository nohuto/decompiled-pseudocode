/*
 * XREFs of ?MarkForFullRender@CHwndRenderTarget@@UEAAXXZ @ 0x18007BA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwndRenderTarget::MarkForFullRender(CHwndRenderTarget *this)
{
  *((_BYTE *)this + 554) = 1;
}
