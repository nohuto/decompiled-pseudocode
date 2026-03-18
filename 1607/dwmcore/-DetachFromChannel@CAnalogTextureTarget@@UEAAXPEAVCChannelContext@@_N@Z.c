/*
 * XREFs of ?DetachFromChannel@CAnalogTextureTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180166140
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CAnalogTextureTarget@@UEAAXXZ @ 0x1801665F0 (-ReleaseResourcesForDisplayChange@CAnalogTextureTarget@@UEAAXXZ.c)
 */

void __fastcall CAnalogTextureTarget::DetachFromChannel(CAnalogTextureTarget *this, struct CChannelContext *a2)
{
  CAnalogTextureTarget::ReleaseResourcesForDisplayChange((CAnalogTextureTarget *)((char *)this + 112));
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), this);
}
