/*
 * XREFs of ?ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ @ 0x18011F220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COffScreenRenderTarget::ReleaseResourcesForDisplayChange(COffScreenRenderTarget *this)
{
  COffScreenRenderTarget::ReleaseRenderTargets((COffScreenRenderTarget *)((char *)this - 112));
}
