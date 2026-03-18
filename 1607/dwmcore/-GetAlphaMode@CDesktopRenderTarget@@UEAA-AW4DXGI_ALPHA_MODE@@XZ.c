/*
 * XREFs of ?GetAlphaMode@CDesktopRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18011DA10
 * Callers:
 *     ?GetAlphaMode@CDesktopRenderTarget@@WCI@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800BF860 (-GetAlphaMode@CDesktopRenderTarget@@WCI@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?GetAlphaMode@CHwndRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18011C1D0 (-GetAlphaMode@CHwndRenderTarget@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetAlphaMode(CDesktopRenderTarget *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 18) )
    return CHwndRenderTarget::GetAlphaMode((CHwndRenderTarget *)(**((_QWORD **)this + 6) + 112LL));
  return result;
}
