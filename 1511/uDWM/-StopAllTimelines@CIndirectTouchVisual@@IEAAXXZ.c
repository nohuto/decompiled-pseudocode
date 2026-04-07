/*
 * XREFs of ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x180092D60
 * Callers:
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F6C0 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F83C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006FA30 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x180092E40 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x180092D80 (-StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x180092DF8 (-StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::StopAllTimelines(CIndirectTouchVisual *this)
{
  CIndirectTouchVisual *v1; // rcx
  CIndirectTouchVisual *v2; // rcx

  CIndirectTouchVisual::StopFrameTimeline(this);
  CIndirectTouchVisual::StopTimeoutTimeline(v1);
  CIndirectTouchVisual::StopOpacityTimeline(v2);
}
