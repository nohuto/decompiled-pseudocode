/*
 * XREFs of ??0?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800938BC
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x1800011C0 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     <none>
 */

__int64 *CQueue<CManipulationManager::InteractionUpdate *>::CQueue<CManipulationManager::InteractionUpdate *>()
{
  dword_180195D50 = 0;
  qword_180195D48 = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  CManipulationManager::s_InteractionUpdateQueue = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  byte_180195D54 = 0;
  InitializeCriticalSection(&stru_180195D58);
  return &CManipulationManager::s_InteractionUpdateQueue;
}
