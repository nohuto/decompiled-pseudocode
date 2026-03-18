/*
 * XREFs of ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006C4F4
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800494B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800496E0 (-AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x1800EB2B0 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180049DC4 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::AddHwndRenderTarget(CComposition ***this, struct CHwndRenderTarget *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CRenderTargetManager::AddRenderTarget(this[4], a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x17Bu);
  return v3;
}
