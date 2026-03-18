/*
 * XREFs of ?GetComposeTopContentNoRef@CDesktopRenderTarget@@UEAAPEAVCComposeTop@@XZ @ 0x180074FC0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CComposeTop *__fastcall CDesktopRenderTarget::GetComposeTopContentNoRef(CDesktopRenderTarget *this)
{
  return (struct CComposeTop *)*((_QWORD *)this + 27);
}
