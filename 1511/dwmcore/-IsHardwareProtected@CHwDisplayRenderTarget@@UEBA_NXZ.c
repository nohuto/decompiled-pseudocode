/*
 * XREFs of ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18007FD80
 * Callers:
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@WLA@EBA_NXZ @ 0x1800BDE70 (-IsHardwareProtected@CHwDisplayRenderTarget@@WLA@EBA_NXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ @ 0x1800731E0 (-IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ.c)
 */

bool __fastcall CHwDisplayRenderTarget::IsHardwareProtected(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rbx
  bool result; // al
  bool (__fastcall *v3)(CDWMSwapChain *); // rdi

  v1 = *((_QWORD *)this + 26);
  result = 0;
  if ( v1 )
  {
    v3 = *(bool (__fastcall **)(CDWMSwapChain *))(*(_QWORD *)v1 + 208LL);
    if ( v3 == CDWMSwapChain::IsHardwareProtected )
      return CDWMSwapChain::IsHardwareProtected(*((CDWMSwapChain **)this + 26));
    else
      return v3(*((CDWMSwapChain **)this + 26));
  }
  return result;
}
