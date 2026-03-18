/*
 * XREFs of ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800436D8
 * Callers:
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180076D60 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800772E8 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x18011D1A8 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180072DB8 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 */

__int64 __fastcall CComposition::AddHwndRenderTarget(CRenderTargetManager **this, struct CHwndRenderTarget *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CRenderTargetManager::AddRenderTarget(this[4], a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x181u);
  return v3;
}
