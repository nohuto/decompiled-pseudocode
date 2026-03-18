/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CMagnifierRenderTarget@@UEAAJXZ @ 0x180108540
 * Callers:
 *     <none>
 * Callees:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801087B0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::PresentOutOfFrameDirectFlip(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 580) )
    CMagnifierRenderTarget::Slice((CMagnifierRenderTarget *)((char *)this - 40));
  return 0LL;
}
