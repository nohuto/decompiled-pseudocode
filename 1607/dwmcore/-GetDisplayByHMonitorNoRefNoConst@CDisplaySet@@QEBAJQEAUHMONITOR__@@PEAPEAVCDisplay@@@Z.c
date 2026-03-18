/*
 * XREFs of ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800B8818
 * Callers:
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800770E0 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D3C8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z @ 0x1800B87F0 (-FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayByHMonitorNoRefNoConst(CDisplaySet *this, HMONITOR a2, struct CDisplay **a3)
{
  unsigned int v3; // ebx
  HMONITOR *DisplayByHMonitor; // rax
  HMONITOR **v5; // r10

  v3 = 0;
  DisplayByHMonitor = CDisplaySet::FindDisplayByHMonitor(this, a2, (unsigned int *)a3);
  if ( DisplayByHMonitor )
  {
    *v5 = DisplayByHMonitor;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x3EBu);
  }
  return v3;
}
