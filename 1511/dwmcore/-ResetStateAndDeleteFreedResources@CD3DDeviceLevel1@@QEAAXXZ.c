/*
 * XREFs of ?ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x180022A48
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18007FFE0 (-ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18002829C (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ResetStateAndDeleteFreedResources(CD3DDeviceLevel1 *this)
{
  if ( *((_QWORD *)this + 69) )
    CD3DResourceManager::DestroyAndDeleteDelayedResources((CD3DDeviceLevel1 *)((char *)this + 848));
}
