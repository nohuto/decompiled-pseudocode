/*
 * XREFs of ?GetAlphaMode@CHwndRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800E9E30
 * Callers:
 *     ?GetAlphaMode@CDesktopRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800EB5A0 (-GetAlphaMode@CDesktopRenderTarget@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetAlphaMode(CHwndRenderTarget *this)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 5) + 232LL))((char *)this - 40) >= 0 )
    return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
  return v2;
}
