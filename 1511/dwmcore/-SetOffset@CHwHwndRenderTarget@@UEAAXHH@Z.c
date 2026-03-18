/*
 * XREFs of ?SetOffset@CHwHwndRenderTarget@@UEAAXHH@Z @ 0x1800BE360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwHwndRenderTarget::SetOffset(CHwHwndRenderTarget *this, int a2, int a3)
{
  *((_DWORD *)this + 38) = a2;
  *((_DWORD *)this + 39) = a3;
}
