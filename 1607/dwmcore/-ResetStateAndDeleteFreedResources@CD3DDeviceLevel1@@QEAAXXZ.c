/*
 * XREFs of ?ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18007E9C4
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18008E94C (-ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18009F470 (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ResetStateAndDeleteFreedResources(CD3DDeviceLevel1 *this)
{
  if ( *((_QWORD *)this + 71) )
    CD3DResourceManager::DestroyAndDeleteDelayedResources((CD3DDeviceLevel1 *)((char *)this + 880));
}
