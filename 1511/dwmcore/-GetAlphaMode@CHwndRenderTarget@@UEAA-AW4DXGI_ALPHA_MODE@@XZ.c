/*
 * XREFs of ?GetAlphaMode@CHwndRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180105D10
 * Callers:
 *     ?GetAlphaMode@CDesktopRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180106FD0 (-GetAlphaMode@CDesktopRenderTarget@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetAlphaMode(CHwndRenderTarget *this)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 5) + 240LL))((char *)this - 40) >= 0 )
    return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
  return v2;
}
