/*
 * XREFs of ??0?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800AA0EC
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x1800011E0 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     <none>
 */

__int64 *CQueue<CManipulationManager::InteractionUpdate *>::CQueue<CManipulationManager::InteractionUpdate *>()
{
  dword_1801EFFE0 = 0;
  qword_1801EFFD8 = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  CManipulationManager::s_InteractionUpdateQueue = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  byte_1801EFFE4 = 0;
  InitializeCriticalSection(&stru_1801EFFE8);
  return &CManipulationManager::s_InteractionUpdateQueue;
}
