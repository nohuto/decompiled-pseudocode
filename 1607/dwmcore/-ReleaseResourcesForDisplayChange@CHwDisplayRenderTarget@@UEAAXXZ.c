/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18008E94C
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x18007B400 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CAnalogDisplayRenderTarget@@UEAAXXZ @ 0x180167DA0 (-ReleaseResourcesForDisplayChange@CAnalogDisplayRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18007E9C4 (-ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::ReleaseResourcesForDisplayChange(CHwDisplayRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  CMILPoolResource *v4; // rcx
  CD3DDeviceLevel1 *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = *((_QWORD *)this - 22);
  v5 = 0LL;
  (*(void (__fastcall **)(char *, CD3DDeviceLevel1 **))(v3 + 216))((char *)this - 176, &v5);
  v4 = (CMILPoolResource *)*((_QWORD *)this - 1);
  if ( v4 )
  {
    CMILPoolResource::Release(v4);
    *((_QWORD *)this - 1) = 0LL;
  }
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 104);
    CD3DDeviceLevel1::ResetStateAndDeleteFreedResources(v5);
    CD3DDeviceLevel1::ResetStateAndDeleteFreedResources(v5);
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v5 + 408));
  }
}
