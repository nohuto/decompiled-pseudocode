/*
 * XREFs of ?CurrentPerfCount@CManipulationManager@@AEAAAEA_KK@Z @ 0x180006900
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180007390 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800A70E0 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall CManipulationManager::CurrentPerfCount(CManipulationManager *this, int a2)
{
  unsigned __int64 *result; // rax

  result = (unsigned __int64 *)((char *)this + 288);
  if ( a2 != 5 )
    return (unsigned __int64 *)((char *)this + 280);
  return result;
}
