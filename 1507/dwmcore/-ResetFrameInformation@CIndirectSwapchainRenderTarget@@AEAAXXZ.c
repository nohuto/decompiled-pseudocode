/*
 * XREFs of ?ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800EEBAC
 * Callers:
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EE9B4 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800EECB0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndirectSwapchainRenderTarget::ResetFrameInformation(CIndirectSwapchainRenderTarget *this)
{
  char v1; // r8
  char *v2; // rcx

  v1 = *((_BYTE *)this + 416);
  if ( (v1 & 2) != 0 )
    *((_BYTE *)this + 416) = v1 ^ (v1 ^ (8 * ((v1 & 8) == 0))) & 8;
  *((_BYTE *)this + 416) &= 0xF8u;
  v2 = (char *)this + 384;
  *((_DWORD *)v2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v2, 1u);
}
