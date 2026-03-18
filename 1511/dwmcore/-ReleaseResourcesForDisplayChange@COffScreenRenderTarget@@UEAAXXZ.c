/*
 * XREFs of ?ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ @ 0x1801087A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COffScreenRenderTarget::ReleaseResourcesForDisplayChange(COffScreenRenderTarget *this)
{
  COffScreenRenderTarget::ReleaseRenderTargets((COffScreenRenderTarget *)((char *)this - 40));
}
