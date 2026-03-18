/*
 * XREFs of ?ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18008B4C0
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z @ 0x180055E64 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18008AFC0 (-ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x180015AFC (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ResetStateAndDeleteFreedResources(CD3DDeviceLevel1 *this)
{
  if ( *((_QWORD *)this + 68) )
    CD3DResourceManager::DestroyAndDeleteDelayedResources((CD3DDeviceLevel1 *)((char *)this + 896));
}
