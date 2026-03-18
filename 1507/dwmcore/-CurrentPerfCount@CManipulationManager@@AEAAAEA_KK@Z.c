/*
 * XREFs of ?CurrentPerfCount@CManipulationManager@@AEAAAEA_KK@Z @ 0x180129F10
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012B110 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012BC24 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
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
