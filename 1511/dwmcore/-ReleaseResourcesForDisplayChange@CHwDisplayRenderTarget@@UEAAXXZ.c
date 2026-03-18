/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18007FFE0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x1800744C0 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CAnalogDisplayRenderTarget@@UEAAXXZ @ 0x18013DF30 (-ReleaseResourcesForDisplayChange@CAnalogDisplayRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x180022A48 (-ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CHwDisplayRenderTarget::ReleaseResourcesForDisplayChange(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rsi
  CMILPoolResource *v3; // rcx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (CMILPoolResource *)*((_QWORD *)this - 1);
  if ( v3 )
  {
    CMILPoolResource::Release(v3);
    *((_QWORD *)this - 1) = 0LL;
  }
  CD3DDeviceLevel1::ResetStateAndDeleteFreedResources(*((CD3DDeviceLevel1 **)this - 2));
  CD3DDeviceLevel1::ResetStateAndDeleteFreedResources(*((CD3DDeviceLevel1 **)this - 2));
}
