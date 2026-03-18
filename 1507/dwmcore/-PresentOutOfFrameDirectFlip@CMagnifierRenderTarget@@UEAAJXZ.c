/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CMagnifierRenderTarget@@UEAAJXZ @ 0x1800ECB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1800ED9C0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::PresentOutOfFrameDirectFlip(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 604) )
    CMagnifierRenderTarget::Slice((CMagnifierRenderTarget *)((char *)this - 40));
  return 0LL;
}
