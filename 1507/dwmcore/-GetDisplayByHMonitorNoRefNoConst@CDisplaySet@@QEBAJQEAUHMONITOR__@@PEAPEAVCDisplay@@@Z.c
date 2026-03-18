/*
 * XREFs of ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x180054D30
 * Callers:
 *     ?DetachInUseDisplays@CDesktopRenderTarget@@AEAAXXZ @ 0x1800497D0 (-DetachInUseDisplays@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049850 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z @ 0x180054C84 (-FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x403u);
  }
  return v3;
}
