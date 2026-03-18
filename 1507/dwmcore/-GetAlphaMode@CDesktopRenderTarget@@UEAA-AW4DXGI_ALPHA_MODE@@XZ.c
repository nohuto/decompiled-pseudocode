/*
 * XREFs of ?GetAlphaMode@CDesktopRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800EB5A0
 * Callers:
 *     ?GetAlphaMode@CDesktopRenderTarget@@WCI@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180099D20 (-GetAlphaMode@CDesktopRenderTarget@@WCI@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?GetAlphaMode@CHwndRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800E9E30 (-GetAlphaMode@CHwndRenderTarget@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetAlphaMode(CDesktopRenderTarget *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 18) )
    return CHwndRenderTarget::GetAlphaMode((CHwndRenderTarget *)(**((_QWORD **)this + 6) + 40LL));
  return result;
}
