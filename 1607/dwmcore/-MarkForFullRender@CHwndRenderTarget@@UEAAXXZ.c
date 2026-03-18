/*
 * XREFs of ?MarkForFullRender@CHwndRenderTarget@@UEAAXXZ @ 0x180073B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwndRenderTarget::MarkForFullRender(CHwndRenderTarget *this)
{
  *((_BYTE *)this + 747) = 1;
}
