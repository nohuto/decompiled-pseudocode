/*
 * XREFs of ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180044110
 * Callers:
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@WLA@EBA_NXZ @ 0x18009B1C0 (-IsHardwareProtected@CHwDisplayRenderTarget@@WLA@EBA_NXZ.c)
 * Callees:
 *     ?IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ @ 0x180042690 (-IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
    v3 = *(bool (__fastcall **)(CDWMSwapChain *))(*(_QWORD *)v1 + 200LL);
    if ( v3 == CDWMSwapChain::IsHardwareProtected )
      return CDWMSwapChain::IsHardwareProtected(*((CDWMSwapChain **)this + 26));
    else
      return v3(*((CDWMSwapChain **)this + 26));
  }
  return result;
}
