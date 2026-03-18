/*
 * XREFs of ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18008FB40
 * Callers:
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@WLA@EBA_NXZ @ 0x1800C15F0 (-IsHardwareProtected@CHwDisplayRenderTarget@@WLA@EBA_NXZ.c)
 * Callees:
 *     ?IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ @ 0x18007A510 (-IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ.c)
 */

bool __fastcall CHwDisplayRenderTarget::IsHardwareProtected(CHwDisplayRenderTarget *this)
{
  CDWMSwapChain *v1; // rcx
  bool result; // al
  __int64 (*v3)(void); // rax

  v1 = (CDWMSwapChain *)*((_QWORD *)this + 27);
  result = 0;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 208LL);
    if ( (char *)v3 == (char *)CDWMSwapChain::IsHardwareProtected )
      return CDWMSwapChain::IsHardwareProtected(v1);
    else
      return v3();
  }
  return result;
}
