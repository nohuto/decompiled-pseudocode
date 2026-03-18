/*
 * XREFs of ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x180076D08
 * Callers:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180076C20 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x18011DB40 (-HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011E054 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180072E9C (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B67A8 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::RemoveRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  struct CHwndRenderTarget *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 160, &v4);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), a2);
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
}
