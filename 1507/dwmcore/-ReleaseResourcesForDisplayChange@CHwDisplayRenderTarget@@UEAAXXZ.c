/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18008AFC0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x18008AD80 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18008B4C0 (-ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
