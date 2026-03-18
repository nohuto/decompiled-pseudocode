/*
 * XREFs of ?GetAlphaMode@CHwndRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18011C1D0
 * Callers:
 *     ?GetAlphaMode@CDesktopRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18011DA10 (-GetAlphaMode@CDesktopRenderTarget@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetAlphaMode(CHwndRenderTarget *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 14) + 256LL))((char *)this - 112) >= 0 )
    return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
  return v2;
}
